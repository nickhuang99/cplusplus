%{
#include <iostream>
#include <string>
using namespace std;
void yyerror(const string& str);
#define SYSTEM_HEADER  		259
#define USER_HEADER 	 	260
%}
%option	noyywrap
%option yylineno
%x  incl
%x  system
%x  user
%%
#include               		{BEGIN(incl);  }
<incl>[[:space:]]*[<]       	{BEGIN(system);}
<incl>[[:space:]]*["]       	{BEGIN(user);}    
<system>[^\n>]+> 	{ BEGIN(INITIAL); yyleng=yyleng-1;return SYSTEM_HEADER;}
<user>[^\n"]+\"  	{ BEGIN(INITIAL); yyleng--;return USER_HEADER;}
<system>[\n]		{ BEGIN(INITIAL); yyerror("invalid system include"); }
<user>[\n]			{ BEGIN(INITIAL); yyerror("invalid user include");  }
[[:space:]]+          ;                /* Ignore whitespace */
.                     ; /*return *yytext;*/  /* Fallback rule */
%%
void yyerror(const string& str){
	cout<<"error:"<<str<<endl;
}
int main(int argc, char**argv){
	extern FILE *yyin;
	if (argc==2){
		yyin=fopen(argv[1], "r");
		if (yyin){
			int token=0;
			while (token=yylex()){				
				string str(yytext, yyleng);				
				cout<<"\tline_number:"<<yylineno<<";\t"
					<<"yyleng:"<<yyleng<<"\t:["<<str<<"]"<<endl;							
			}
		}
	}
}