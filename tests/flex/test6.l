%{
#include <iostream>
#include <string>
using namespace std;
void yyerror(const string& str);

#define UNSIGNED_SUFFIX 		257
#define LONG_SUFFIX 			258
#define LONG_LONG_SUFFIX  		259
#define SIZE_SUFFIX				260
#define INTEGER_SUFFIX			261

#define BINARY_LITERAL			270
#define OCTAL_LITERAL			271
#define DECIMAL_LITERAL			272
#define HEXADECIMAL_LITERAL		273
%}
%option	noyywrap

integer-suffix		([uU][lL]?)|([uU]((ll)|(LL))?)|([uU][zZ]?)|([lL][uU]?)|(((ll)|(LL))[uU]?)|([zZ][uU]?)
binary-literal		([0][bB][01][01']*)
octal-literal		([0]([0-7']*[0-7])*)
decimal-literal		([1-9]([0-9']*[0-9])*)
hexadecimal-literal	([0][xX][0-9a-fA-F']*[0-9a-fA-F])

%%	
{binary-literal}{integer-suffix}?			{ECHO; return BINARY_LITERAL;}
{octal-literal}{integer-suffix}?			{ECHO; return OCTAL_LITERAL;}
{decimal-literal}{integer-suffix}?			{ECHO; return DECIMAL_LITERAL;}
{hexadecimal-literal}{integer-suffix}?		{ECHO; return HEXADECIMAL_LITERAL;}

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
				switch (token){
				case BINARY_LITERAL:
					cout<<"\nBINARY_LITERAL:\t";
					break;
				case OCTAL_LITERAL:
					cout<<"\nOCTAL_LITERAL:\t";
					break;
				case DECIMAL_LITERAL:
					cout<<"\nDECIMAL_LITERAL:\t";
					break;
				case HEXADECIMAL_LITERAL:
					cout<<"\nHEXADECIMAL_LITERAL:\t";
					break;
				default:
					yyerror("unknown token");					
					break;				
				}		
				string str(yytext, yyleng);
				cout<<"token:\t"<<token<<"\tline_number:"<<yylineno<<";\t"
					<<"yyleng:"<<yyleng<<"\t:["<<str<<"]"<<endl;							
			}
		}
	}
}