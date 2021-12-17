%{
#include <iostream>

using namespace std;
void yyerror(const string& str);
#define LITERAL 299
%}
%option	noyywrap
%option yylineno
encoding-prefix			([u][8]|[uUL])
schar-seq				[^"\\\n]*
%%
{encoding-prefix}?[\"]{schar-seq}[*\"]		{ return LITERAL;}	

[_a-zA-Z][_a-zA-Z0-9]+		{ECHO;}
.	{yyerror("unexpected token");}
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
				cout<<"line_number:"<<yylineno<<";\t"<<"yyleng:"<<yyleng<<"\tyytext:"<<str<<endl;
			}
		}
	}
}