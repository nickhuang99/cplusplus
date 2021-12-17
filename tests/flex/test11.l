%{
#include <iostream>

using namespace std;
void yyerror(const string& str);
%}
%option	noyywrap
%option yylineno
%x c_comment
%x cpp_comment
%%
"/*"				{BEGIN(c_comment);}
"//"				{BEGIN(cpp_comment);}
<c_comment>{
	[^*]+			;
	[*]+[^/]		;
	[*][/]			{BEGIN(INITIAL);}
	<<EOF>>         { 	yyerror("Unterminated raw string");
                     	BEGIN(INITIAL);
                     	return 0;
                  	}
}
<cpp_comment>{
	[^\n]+			;	
	[\n]			{BEGIN(INITIAL);}
	<<EOF>>         ;
}
[_a-zA-Z][_a-zA-Z0-9]+		{ECHO;}
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