%{
#include <iostream>
#include <string>
using namespace std;
void yyerror(const string& str);

#define DECIMAL_FLOATING_POINT_LITERAL		290
#define HEXADECIMAL_FLOATING_POINT_LITERAL	291
%}
%option	noyywrap
digit-sequence						[0-9]([0-9']*[0-9])*
floating-point-suffix				[fFlL]
fractional-constant					({digit-sequence}[.])|({digit-sequence}*[.]{digit-sequence})
exponent-part						[eE][+-]?[0-9]['0-9]*

decimal-floating-point-literal		({fractional-constant}{fractional-constant}?{floating-point-suffix}?)|({digit-sequence}{exponent-part}{floating-point-suffix}?)

hexadecimal-digit-sequence			[0-9a-fA-F]+([0-9a-fA-F']*[0-9a-fA-F])*
binary-exponent-part				[P][+-]?{digit-sequence}
hexadecimal-fractional-constant		({hexadecimal-digit-sequence}[.])|({hexadecimal-digit-sequence}*[.]{hexadecimal-digit-sequence})

hexadecimal-floating-point-literal	[0][xX]({hexadecimal-fractional-constant}|{hexadecimal-digit-sequence}){binary-exponent-part}{floating-point-suffix}?
%%	
{decimal-floating-point-literal}		{return DECIMAL_FLOATING_POINT_LITERAL;}
{hexadecimal-floating-point-literal}	{return HEXADECIMAL_FLOATING_POINT_LITERAL;}


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
				switch (token){
				case DECIMAL_FLOATING_POINT_LITERAL:
					cout<<"\nDECIMAL_FLOATING_POINT_LITERAL:\t";
					break;
				case HEXADECIMAL_FLOATING_POINT_LITERAL:
					cout<<"\nHEXADECIMAL_FLOATING_POINT_LITERAL:\t";
					break;
				}
				cout<<"\tline_number:"<<yylineno<<";\t"
					<<"yyleng:"<<yyleng<<"\t:["<<str<<"]"<<endl;							
			}
		}
	}
}