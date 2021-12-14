%{
#include <iostream>
#include <string>
using namespace std;
void yyerror(const string& str);

#define ORDINARY_STRING_LITERAL 257
#define WIDE_STRING_LITERAL 	258
#define U8_STRING_LITERAL  		259
#define U16_STRING_LITERAL		260
#define U32_STRING_LITERAL		261
%}
%option	noyywrap
schar_seq		[^"\\\n]*
%%	
[L]["]{schar_seq}*["]		{yytext=yytext+2; yyleng=yyleng-3; return WIDE_STRING_LITERAL;}	
[u][8]["]{schar_seq}*["]	{yytext=yytext+3; yyleng=yyleng-4; return U8_STRING_LITERAL;}	
[u]["]{schar_seq}*["]		{yytext=yytext+2; yyleng=yyleng-3; return U16_STRING_LITERAL;}	
[U]["]{schar_seq}*["]		{yytext=yytext+2; yyleng=yyleng-3; return U32_STRING_LITERAL;}
["]{schar_seq}*["]			{yytext=yytext+1; yyleng=yyleng-2; return ORDINARY_STRING_LITERAL;}
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
				switch (token)
				{
				case ORDINARY_STRING_LITERAL:
					cout<<"\nORDINARY_STRING_LITERAL\t"; 		
					break;
				case WIDE_STRING_LITERAL:
					cout<<"\nWIDE_STRING_LITERAL\t";
					break;
				case U8_STRING_LITERAL:
					cout<<"\nU8_STRING_LITERAL\t";
					break;
				case U16_STRING_LITERAL:
					cout<<"\nU16_STRING_LITERAL\t";
					break;
				case U32_STRING_LITERAL:
					cout<<"\nU32_STRING_LITERAL\t";
					break;
				default:
					cout<<"unexpected error\t";
					break;
				}	
				string str(yytext, yyleng);
				cout<<":\n"<<"line_number:"<<yylineno<<";\t"
					<<"yyleng:"<<yyleng<<"\t:["<<str<<"]"<<endl;							
			}
		}
	}
}