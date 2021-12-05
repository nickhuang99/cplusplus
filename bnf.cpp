/*
 * bnf.cpp
 *
 *  Created on: 2021年11月22日
 *      Author: nick
 */

#include <bits/stdc++.h>

using namespace std;

// copy from cpplib.h
#define TTYPE_TABLE							\
  OP(EQ,		"=")						\
  OP(NOT,		"!")						\
  OP(GREATER,		">")	/* compare */				\
  OP(LESS,		"<")						\
  OP(PLUS,		"+")	/* math */				\
  OP(MINUS,		"-")						\
  OP(MULT,		"*")						\
  OP(DIV,		"/")						\
  OP(MOD,		"%")						\
  OP(AND,		"&")	/* bit ops */				\
  OP(OR,		"|")						\
  OP(XOR,		"^")						\
  OP(RSHIFT,		">>")						\
  OP(LSHIFT,		"<<")						\
									\
  OP(COMPL,		"~")						\
  OP(AND_AND,		"&&")	/* logical */				\
  OP(OR_OR,		"||")						\
  OP(QUERY,		"?")						\
  OP(COLON,		":")						\
  OP(COMMA,		",")	/* grouping */				\
  OP(OPEN_PAREN,	"(")						\
  OP(CLOSE_PAREN,	")")						\
  OP(EQ_EQ,		"==")	/* compare */				\
  OP(NOT_EQ,		"!=")						\
  OP(GREATER_EQ,	">=")						\
  OP(LESS_EQ,		"<=")						\
  OP(SPACESHIP,		"<=>")						\
									\
  /* These two are unary + / - in preprocessor expressions.  */		\
  OP(PLUS_EQ,		"+=")	/* math */				\
  OP(MINUS_EQ,		"-=")						\
									\
  OP(MULT_EQ,		"*=")						\
  OP(DIV_EQ,		"/=")						\
  OP(MOD_EQ,		"%=")						\
  OP(AND_EQ,		"&=")	/* bit ops */				\
  OP(OR_EQ,		"|=")						\
  OP(XOR_EQ,		"^=")						\
  OP(RSHIFT_EQ,		">>=")						\
  OP(LSHIFT_EQ,		"<<=")						\
  /* Digraphs together, beginning with CPP_FIRST_DIGRAPH.  */		\
  OP(HASH,		"#")	/* digraphs */				\
  OP(PASTE,		"##")						\
  OP(OPEN_SQUARE,	"[")						\
  OP(CLOSE_SQUARE,	"]")						\
  OP(OPEN_BRACE,	"{")						\
  OP(CLOSE_BRACE,	"}")						\
  /* The remainder of the punctuation.	Order is not significant.  */	\
  OP(SEMICOLON,		";")	/* structure */				\
  OP(ELLIPSIS,		"...")						\
  OP(PLUS_PLUS,		"++")	/* increment */				\
  OP(MINUS_MINUS,	"--")						\
  OP(DEREF,		"->")	/* accessors */				\
  OP(DOT,		".")						\
  OP(SCOPE,		"::")						\
  OP(DEREF_STAR,	"->*")						\
  OP(DOT_STAR,		".*")				\
  OP(SINGLE_QUOTE,      "'")	\
  OP(DOUBLE_QUOTE,      "\"")


#define ALIAS_OPERATOR \
  	  	OP("and",	AND_AND) \
		OP("and_eq",	AND_EQ)\
		OP("bitand",	AND)\
		OP("bitor",	OR)\
		OP("compl",	COMPL)\
		OP("not",	NOT)\
		OP("not_eq",	NOT_EQ)\
		OP("or",	OR_OR)\
		OP("or_eq",	OR_EQ)\
		OP("xor",	XOR)\
		OP("xor_eq",	XOR_EQ)

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
	map<string, string> terminalTokens;
	auto quoteString=[](const string& str){
		stringstream ss;
		//ss<<quoted(str, str.size()==1?'\'':'"');
		ss<<quoted(str);
		return ss.str();
	};
 	auto getProduction=[&non_terminals,trim, bnfFile,quoteString, &terminalTokens](){
		string str;
		string ruleName;
		vector<vector<string>> productions;
		map<string, vector<vector<string> > > result;
		ifstream in(bnfFile);
		auto alphaToken=[](const string& str)->string{
			string token;
#define OP(name, literals) if (str==literals) token=  #name  ;
			// convert operator to token name
			TTYPE_TABLE
#undef OP
			if (token.empty()){
				cout<<"unknown operator:["<<str<<"]"<<endl;
				assert(!token.empty());
			}else{ // debug
				//cout<<"token="<<token<<endl;
			}

			return token;
		};
		auto isTerminal=[&non_terminals](const string& str)->bool{
//			if (str.size()<3 || std::isupper(str[0], std::locale("C"))
//				|| !std::isalpha(str[0], std::locale("C"))){
//				return true;
//			}
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
//		auto addNonTerminalOpt=[&result](const string& str, vector<string>&production){
//			string strOptRule=str+"-opt";
//			production.push_back(strOptRule);
//		};
//		auto addTerminalOpt=[&result, alphaToken,getTerminalStr](const string& str, vector<string>& production){
//			string strOptRule=str;
//			// case of "opt ,opt or constexpropt or IDENTIFIEROPT
//			if (!std::isalpha(str[0], std::locale("C"))){
//				strOptRule=alphaToken(str);
//			} else if (str.size()>=4 && std::isupper(str[0], std::locale("C"))){
//				std::transform(str.begin(), str.end(), strOptRule.begin(), [](auto c){
//					return std::tolower(c, std::locale("C"));
//				});
//			}
//			strOptRule += "-opt";
//			if (!result.contains(strOptRule)){
//				vector<vector<string>> optRules{{"%empty"}, {getTerminalStr(str)}};
//				result.insert(make_pair(strOptRule, optRules));
//			}
//			production.push_back(strOptRule);
//		};


		auto getTerminalToken=[quoteString,alphaToken,getTerminalStr,&terminalTokens]
							   (const string& str)->string{
			string token;
			if (str.size() == 1 && std::isalnum(str[0], std::locale("C"))){
				token="'"+str+"'";
				// "R": 'R'
				terminalTokens.insert(make_pair(token, quoteString(str)));
				//return token; //'R'
			}else if (str=="ll"){
				token="LONG_LONG_L";
				terminalTokens.insert(make_pair(token, quoteString(str)));
			}
			else if (str=="LL"){
				token="LONG_LONG_H";
				terminalTokens.insert(make_pair(token, quoteString(str)));
			}
			else if (str=="u8"){
				token="UNICODE_8";
				terminalTokens.insert(make_pair(token, quoteString(str)));
			}
			else if (str[0]=='\\'){
				token="ESCAPE";
				if (str=="\\"){
					//
				}else if (str=="\\x"){
					token+="_LX";
				}else if (str=="\\u"){
					token+="_LU";
				}else if (str=="\\U"){
					token+="_HU";
				}
				terminalTokens.insert(make_pair(token, quoteString(str)));
			}else if(str[0]=='0'){
				token="ZERO";
				if (str=="0b"){
					token+="_LB";
				}else if (str=="0B"){
					token+="_HB";
				}else if (str=="0x"){
					token+="_LX";
				}else if (str=="0X"){
					token+="_HX";
				}
				terminalTokens.insert(make_pair(token, quoteString(str)));
			}
			else if(std::isupper(str[0], std::locale("C"))){
				terminalTokens.insert(make_pair(str, str));
				token=str;
			}else if (!std::isalnum(str[0], std::locale("C"))){
				token=alphaToken(str);
				terminalTokens.insert(make_pair(token, quoteString(str)));
			}else if (str=="import-keyword"){
				token="IMPORT";
				terminalTokens.insert(make_pair(token, quoteString("import")));
			}else if (str=="export-keyword"){
				token="EXPORT";
				terminalTokens.insert(make_pair(token, quoteString("export")));
			}else if (str=="module-keyword"){
				token="MODULE";
				terminalTokens.insert(make_pair(token, quoteString("module")));
			}else{
				std::transform(str.begin(), str.end(), back_inserter(token), [](auto c){
					return std::toupper(c, std::locale("C"));
				});
				terminalTokens.insert(make_pair(token, quoteString(str)));
			}
			return token;
		};
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
			vector<vector<string>> optProductions;
			while (ss>>token){
				trim(token);
				bool bOpt=false;
				if (token.size()>=4 && token.substr(token.size()-3)=="opt"){
					token=token.substr(0, token.size()-3);
					bOpt=true;
				}
				if (isTerminal(token)){
					string dup=token;
					token=getTerminalToken(token);
					if (token.empty()){
						cout<<dup<<" is empty!"<<endl;
					}
				}
				if (bOpt){
					vector<vector<string>> dup;
					if (optProductions.empty()){
						optProductions.push_back(vector<string>{token});
						optProductions.push_back(vector<string>{});
					}else{
						for (auto v:optProductions){
							v.push_back(token);
							dup.push_back(v);
						}
						for (auto v:dup){
							optProductions.push_back(v);
						}
					}
				}else{
					if (optProductions.empty()){
						optProductions.push_back(vector<string>{token});
					}else{
						for (auto& v: optProductions){
							v.push_back(token);
						}
					}
				}
			}
			for (auto v:optProductions){
				if (!v.empty()){
					productions.push_back(v);
				}
			}
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
		string strPrologue=R"delim(
%{
#include <stdio.h>
extern int lineno;
static void yyerror(const char *s);
extern int yylex (void);
%}
)delim";

		string strEpilogue=R"delim(
%%
static void yyerror(const char *s)
{
	fprintf(stderr, "%d: %s\n", lineno, s);
}
int main(int argc, char**argv){
	lineno = 1;
	extern FILE *yyin;
	if (argc!=2){
		fprintf(stderr, "usage: %s <source>\n", argv[0]);
		return -1;
	}
	yyin=fopen(argv[1], "r");
	if (yyin){	
		if (yyparse()==0){
				printf("success!\n");
			}else{
				printf("failure\n");
			}
			fclose(yyin);
		}else{
			perror(argv[1]);
		return -2;
	}
	return 0;
}

)delim";
		out<<strPrologue<<endl;
		outputBisonDeclaration(rules);

		out<<"%glr-parser"<<endl;
		//out<<"%expect-rr 6307"<<endl;
		out<<"%start  translation-unit;"<<endl<<"%%"<<endl;

		outputRules(rules);
		out<<strEpilogue<<endl;
	};
	outputBisonInput(rules);


//	cout<<"=================print all terminals======================"<<endl;
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
//	auto printTerminals=[](auto s){
//		for (auto item: s){
//			cout<<item<<endl;
//		}
//	};
//	printTerminals(terminals);


	auto outputFlexInput=[](map<string, string> terminalTokens){
		ofstream out("scanner.l");
		string strPrologue=R"delim(
%{
#include "cplusplus.h"
int lineno;
static int yywrap(void);
extern int yylex (void);
%}

%%
"\n"					{ ++lineno; }
)delim";

		string strEpilogue=R"delim(
%%
static int yywrap(void)
{
	return 1;
}
)delim";
		out<<strPrologue<<endl;
		auto quoteEscapeStr=[](const string& str){
			stringstream ss;
			ss<<quoted(str, str.size()==1?'\'':'"');
			return ss.str();
		};
		for (auto m: terminalTokens){
			if (m.first=="BALANCED_TOKEN"){
				continue;
//				out<<"[^(){}<>]";
			}else if (m.first=="BASIC_C_CHAR"){
				continue;
//				out<<"[^\\\\ ' \\n]";
			}else if (m.first=="H_CHAR"){
				continue;
//				out<<"[^\\n>]";
			}else if(m.first=="Q_CHAR"){
				continue;
//				out<<"[^\\n\"]";
			}else if(m.first=="R_CHAR"){
				continue;
//				out<<".";
			}else if(m.first=="D_CHAR"){
				continue;
//				out<<"[^\\s ( ) \\\\ \\t \\| \\f \\n]";
			}else if (m.first=="CONDITIONAL_ESCAPE_SEQUENCE_CHAR"){
				continue;
//				out<<"[^0-7 '  \"  ?  \\\\ a  b  f  n  r  t  v]";
			}else if (m.first=="BASIC_S_CHAR"){
//				out<<"[^\"\\\\\\n]";
				continue;
			}else{
//				if (m.second.size()==3&&m.second[0]==m.second[2]&& m.second[0]=='"'){
//					switch (m.second[1]){
//					case '*':
//					case '[':
//					case ']':
//					case '(':
//					case ')':
//					case '"':
//					case '\\':
//					case '{':
//					case '}':
//						out<<"'\\"<<m.second[1]<<'\'';
//						break;
//					default:
//						out<<m.second;
//					}
//				}else{
//					out<<m.second;
//				}
				out<<m.second;
			}
			out<<"\t\t{ return ";
			out<<m.first;
			out<<";}\n";
		}
		out<<strEpilogue<<endl;
	};
	outputFlexInput(terminalTokens);
}
int main(){
	bnf();
}
