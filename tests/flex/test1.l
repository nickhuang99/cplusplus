%{
#include <iostream>
using namespace std;
%}
%option	noyywrap
%x comment
%%
									int line_num = 1;
"/*" 								BEGIN(comment);
<comment>[^*\n]*
<comment>[^*\n]*\n					++line_num;
<comment>"*"+[^*/\n]*
<comment>"*"+[^*/\n]*\n	 			++line_num;
<comment>"*"+"/" 					BEGIN(INITIAL);
[a-zA-Z\-]+							{cout <<"a token:"<<yytext<<endl;}
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