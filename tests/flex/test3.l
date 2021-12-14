%{
#include <iostream>

using namespace std;
%}
%option	noyywrap

%%
mega-			ECHO; yymore();
kludge			ECHO;
%%

int main(int argc, char**argv){
	extern FILE *yyin;
	if (argc==2){
		yyin=fopen(argv[1], "r");
		if (yyin){
			int token=0;
			while (token=yylex()){
				cout<<"line_number:"<<yylineno<<";\t"<<"yyleng:"<<yyleng<<"\tyytext:"<<yytext<<endl;
			}
		}
	}
}