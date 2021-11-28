/*
 * bnf.cpp
 *
 *  Created on: 2021年11月22日
 *      Author: nick
 */

#include <bits/stdc++.h>

using namespace std;

void bnf(){
	auto trim=[](string& str){
		while (!str.empty() && (std::isspace(str[str.size()-1], std::locale("C"))
			|| !std::isprint(str[str.size()-1], std::locale("C")))){
			str.resize(str.size()-1);
		}
	};
	const string bnfFile="bnf.txt";
	set<string> non_terminals=[trim, bnfFile](){
		ifstream in(bnfFile);
		string str;
		set<string> result;
		while (getline(in, str)){
			trim(str);
			if (str.size()>2 && str[0]!='\t' && str[str.size()-1]==':'){
				string s=str.substr(0, str.size()-1);
				if (!result.contains(s)){
					result.insert(s);
				}else{
					cerr<<"duplicate nonTerminal:"<<s<<endl;
				}
			}
		}
		return result;
	}();

//	cout<<"=================printout all non-terminals===================="<<endl;
//	[](auto r){
//		for (auto item: r){
//			cout<<item<<endl;
//		}
//	}(non_terminals);
	map<string, vector<vector<string> > > rules;
	auto getProduction=[&non_terminals,trim, bnfFile](){
		string str;
		string ruleName;
		vector<vector<string>> productions;
		map<string, vector<vector<string> > > result;
		ifstream in(bnfFile);
		auto alphaToken=[](const string& str)->string{
			if (str=="..."){
				return "eclipse";
			}else if(str =="::"){
				return "scope";
			}else if(str==","){
				return "comma";
			}else if (str==";"){
				return "semicolon";
			}else if (str=="!"){
				return "exclamation";
			}else if (str=="'"){
				return "apostrophe";
			}
			cout<<"unknown alpha:"<<str<<endl;
			assert(false);
		};
		auto isTerminal=[&non_terminals](const string& str)->bool{
			if (str.size()<4 || std::isupper(str[0], std::locale("C"))
				|| !std::isalpha(str[0], std::locale("C"))){
				return true;
			}
			return !non_terminals.contains(str);
		};
		auto getTerminalStr=[](const string& str)->string{
			if (str.size()>1 && std::isupper(str[0], std::locale("C"))){
				return str;
			}
			stringstream ss_token;
			ss_token<<quoted(str, str.size()==1?'\'':'"');
			return ss_token.str();
		};
		auto addNonTerminalOpt=[&result](const string& str, vector<string>&production){
			string strOptRule=str+"-opt";
			if (!result.contains(strOptRule)){
				vector<vector<string>> optRules{{"%empty"}, {str}};
				result.insert(make_pair(strOptRule, optRules));
			}
			production.push_back(strOptRule);
		};
		auto addTerminalOpt=[&result, alphaToken,getTerminalStr](const string& str, vector<string>& production){
			string strOptRule=str;
			// case of "opt ,opt or constexpropt or IDENTIFIEROPT
			if (!std::isalpha(str[0], std::locale("C"))){
				strOptRule=alphaToken(str);
			} else if (str.size()>=4 && std::isupper(str[0], std::locale("C"))){
				std::transform(str.begin(), str.end(), strOptRule.begin(), [](auto c){
					return std::tolower(c, std::locale("C"));
				});
			}
			strOptRule += "-opt";
			if (!result.contains(strOptRule)){
				vector<vector<string>> optRules{{"%empty"}, {getTerminalStr(str)}};
				result.insert(make_pair(strOptRule, optRules));
			}
			production.push_back(strOptRule);
		};
		bool bDebug=false;
		while (std::getline(in, str)){
			trim(str);
			if (str.empty()){
				continue;
			}
			if (str[0]!='\t' && str.size()>2 && str[str.size()-1] == ':'){
				if (!productions.empty()){
					result.insert(make_pair(ruleName, productions));
					productions.clear();
				}
				ruleName=str.substr(0, str.size()-1);
				continue;
			}
			stringstream ss(str);
			string token;
			vector<string> production;
			while (ss>>token){
				trim(token);
				if (token.size()>=4 && token.substr(token.size()-3)=="opt"){
					string strToken=token.substr(0, token.size()-3);
					if (!isTerminal(strToken)){
						addNonTerminalOpt(strToken, production);
					}else{
						addTerminalOpt(strToken, production);
					}
				}else{
					if (isTerminal(token)){
						production.push_back(getTerminalStr(token));
					}else{
						production.push_back(token);
					}
				}
			}
			productions.push_back(production);
		}
		result.insert(make_pair(ruleName, productions));
		return result;
	};
	rules=getProduction();
	//cout<<"===================print rules====================="<<endl;
	ofstream out("cplusplus.y");
	auto outputBisonDeclaration=[&out](auto rules){
		set<string> tokenSet=[&out](auto rules)->set<string>{
			set<string> result;
			for (auto r:rules){
				for (auto p: r.second){
					for (auto s: p){
						if (s.size()>1 && std::isupper(s[0], std::locale("C"))){
							if (!result.contains(s)){
								out<<"%token  "<<s<<endl;
								result.insert(s);
							}
						}
					}
				}
			}
			return result;
		}(rules);
		out<<"%glr-parser"<<endl;
		//out<<"%expect-rr 6307"<<endl;
		out<<"%%"<<endl<<"%start  translation-unit;"<<endl;
	};
	auto outputRules=[&out](auto& rules){
		for (auto r: rules){
			out<<r.first<<":"<<endl;
			bool bFirst=true;
			for (auto p: r.second){
				if (bFirst){
					bFirst=false;
				}else{
					out<<"\t|";
				}
				for (auto s: p){
					out<<"\t"<<s;
				}
				out<<endl;
			}
			out<<"\t;"<<endl;
		}
	};
	auto outputBisonInput=[&out, outputBisonDeclaration, outputRules](auto rules){
		outputBisonDeclaration(rules);
		outputRules(rules);
	};
	outputBisonInput(rules);
	cout<<"=================print all terminals======================"<<endl;
	set<string> terminals=[](auto rules){
		set<string> result;
		for (auto r:rules){
			for (auto p:r.second){
				for (auto s:p){
					if (!rules.contains(s)){
						result.insert(s);
					}
				}
			}
		}
		return result;
	}(rules);
	auto printTerminals=[](auto s){
		for (auto item: s){
			cout<<item<<endl;
		}
	};
	//printTerminals(terminals);
}
int main(){
	bnf();
}
