

%code top
{
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <variant>

using namespace std;

}

%require "3.2"
%language "c++"
%define parse.trace
%code{
	std::ostream& operator<< (std::ostream& o, const std::vector<std::variant<std::string,int>>& ss){
		o << '{';
		const char *sep = "";		
		for (const auto& s: ss){
			o<<sep;
			std::visit([&o](auto&&item){o<<item;}, s);
			sep = ", ";
		}		
		return o << '}';
	}
}	
%define api.value.type variant
%define api.token.constructor
%code
{
  namespace yy
  {
  	ifstream yyin;
    // Return the next token.
    auto yylex () -> parser::symbol_type
    { 
    	string str;
    	while (yyin>>str){
    		
    		stringstream ss(str);
    		int n;
    		if (ss>>n){    			
    			return parser::make_NUMBER(n);
    		}else{    			
    			return parser::make_WORD(str);
    		}
    	}
    	return parser::make_YYEOF ();	
    }
  }
}
%%


result:
	sequence  {std::cout<<$1<<std::endl;}
	;

%nterm <std::vector<std::variant<std::string, int>>> sequence;
sequence:
	%empty					{}
	| sequence maybeword    { $$=$1; $$.push_back($2);}
	;
	
%nterm <std::variant<std::string, int>> maybeword;
%token <std::string> WORD;
%token <int> NUMBER;	
maybeword:	
	WORD		{$$=$1;}	
	| NUMBER    {$$=$1;}
	;
	
%%
namespace yy
{
	void parser::error(const string& msg){
		std::cerr<<msg<<std::endl;
	}	
}


int main(int argc, char**argv){		
	if (argc==2 ){	
		yy::yyin.open(argv[1]);
		if (yy::yyin){
			yy::parser parser;
			//parser.set_debug_level(1);
			return parser.parse ();  	
		}
	}  
  	cout<<"usage: "<<argv[0]<<" [filename]"<<endl;
  	return -1;
}


