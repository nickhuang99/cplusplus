%{
#include <iostream>
#include "test2.h"
using namespace std;
%}
%option	noyywrap
%x IN_COMMENT
%%
<INITIAL>{
"/*"			BEGIN(IN_COMMENT);
}
<IN_COMMENT>{
"*/"			BEGIN(INITIAL);
[^*\n]+			// eat comment in chunks
"*" 		// eat the lone star
\n			yylineno++;
}
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