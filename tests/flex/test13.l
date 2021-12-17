%{
#include <iostream>

using namespace std;
void yyerror(const string& str);
#define LITERAL 299
%}
%option	noyywrap
%option yylineno


%x 				START_RAW_STRING
%x				END_RAW_STRING
encoding-prefix				([u][8]|[uUL])
dchar-seq					[^()\\[:space:]]{0,64}  
%%
		size_t delim_len;		
		size_t raw_string_length;
	/********************************end character literal*******************************/
{encoding-prefix}?[R]\"{dchar-seq}*\(   {delim_len = yyleng - 3; yymore(); BEGIN(START_RAW_STRING);}
<START_RAW_STRING>{
	[^"]+              yymore();
   	["]                { 	if (yytext[yyleng - (delim_len + 2)] == ')' &&
	                            memcmp(yytext + yyleng - (delim_len + 1),
	                                   yytext + 2, delim_len) == 0) {
	                           raw_string_length=yyleng;
	                           BEGIN(END_RAW_STRING);	                   
	                       	}
                     		else yymore();
                      }
   <<EOF>>            { yyerror("Unterminated raw string");
                         BEGIN(INITIAL);
                         return 0;
                      }
}
<END_RAW_STRING>{
		[^_a-zA-Z]				{BEGIN(INITIAL); yyleng=raw_string_length; yytext=yytext-raw_string_length-1; return LITERAL;}
		/* user defined string literal */
		[_a-zA-Z][_a-zA-Z0-9]*	{BEGIN(INITIAL); yyleng+=raw_string_length; yytext=yytext-raw_string_length; return LITERAL;}
}

[[:space:]]		;
[_a-zA-Z][_a-zA-Z0-9]+		{ECHO;}
.	{cout<<"error of unexpected!****line_number:"<<yylineno<<";\t"<<"yyleng:"<<yyleng<<"\tyytext:"<<yytext<<endl; return 0;}
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
				//cout<<"line_number:"<<yylineno<<";\t"<<"yyleng:"<<yyleng<<"\tyytext:"<<yytext<<endl;
				string str(yytext, yyleng);
				cout<<"line_number:"<<yylineno<<";\t"<<"yyleng:"<<yyleng<<"\tyytext:"<<str<<endl;
			}
		}
	}
}