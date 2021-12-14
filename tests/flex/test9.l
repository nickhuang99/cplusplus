%{
#include <iostream>
#include <string>
using namespace std;
void yyerror(const string& str);

#define BINARY_LITERAL							880
#define OCTAL_LITERAL							881
#define DECIMAL_LITERAL							882
#define HEXADECIMAL_LITERAL						883
#define CHARACTER_LITERAL						884
#define STRING_LITERAL 							885
#define DECIMAL_FLOATING_POINT_LITERAL			886
#define HEXADECIMAL_FLOATING_POINT_LITERAL		887
#define BOOLEAN_LITERAL							888
#define POINTER_LITERAL							889
#define USER_DEFINED_LITERAL					890
#define USER_DEFINED_STRING_LITERAL				891

%}
%option	noyywrap
%option yylineno

	/********************************start integer literals*******************************/
integer-suffix		([uU][lL]?)|([uU]((ll)|(LL))?)|([uU][zZ]?)|([lL][uU]?)|(((ll)|(LL))[uU]?)|([zZ][uU]?)
binary-literal		([0][bB][01][01']*)
octal-literal		([0]([0-7']*[0-7])*)
decimal-literal		([1-9]([0-9']*[0-9])*)
hexadecimal-literal	([0][xX][0-9a-fA-F']*[0-9a-fA-F])
	/********************************end integer literals*******************************/
	/********************************start character literals*******************************/
encoding-prefix				([u][8]|[uUL])
basic-c-char				([^\\'\n])
simple-escape-sequence		([\\]['"\?\\abfnrtv])
octal-escape-sequence		([\\][0-7]{1,3})
hexadecimal-escape-sequence	([\\][x][0-9a-fA-F]+)
conditional-escape-sequence	([\\][^'"\?\\abfnrtv0-7uUx])
numeric-escape-sequence		({octal-escape-sequence}|{octal-escape-sequence})
escape-sequence				({simple-escape-sequence}|{numeric-escape-sequence}|{conditional-escape-sequence})
universal-character-name	([\\][u][0-9a-fA-F]{4,4}|[\\][U][0-9a-fA-F]{8,8})
character-literal			{encoding-prefix}?[']({basic-c-char}|{escape-sequence}|{universal-character-name})+[']   
	/********************************end character literals*******************************/
	/********************************start floating point literals*******************************/
digit-sequence						[0-9]([0-9']*[0-9])*
floating-point-suffix				[fFlL]
fractional-constant					({digit-sequence}[.])|({digit-sequence}*[.]{digit-sequence})
exponent-part						[eE][+-]?[0-9]['0-9]*

decimal-floating-point-literal		({fractional-constant}{fractional-constant}?{floating-point-suffix}?)|({digit-sequence}{exponent-part}{floating-point-suffix}?)

hexadecimal-digit-sequence			[0-9a-fA-F]+([0-9a-fA-F']*[0-9a-fA-F])*
binary-exponent-part				[P][+-]?{digit-sequence}
hexadecimal-fractional-constant		({hexadecimal-digit-sequence}[.])|({hexadecimal-digit-sequence}*[.]{hexadecimal-digit-sequence})

hexadecimal-floating-point-literal	[0][xX]({hexadecimal-fractional-constant}|{hexadecimal-digit-sequence}){binary-exponent-part}{floating-point-suffix}?
	/********************************end floating point literals*******************************/
	/********************************start string literals*******************************/
%x 				START_RAW_STRING
dchar-seq				[^()\\[:space:]]{0,64}
schar-seq				[^"\\\n]*
	/********************************end string literals*******************************/

ud-suffix			[_a-zA-Z][_a-zA-Z0-9]*




%%	
		size_t delim_len;
		size_t delim_offset;
	
	/********************************start integer literal*******************************/
{binary-literal}{integer-suffix}?			{return BINARY_LITERAL;}
{octal-literal}{integer-suffix}?			{return OCTAL_LITERAL;}
{decimal-literal}{integer-suffix}?			{return DECIMAL_LITERAL;}
{hexadecimal-literal}{integer-suffix}?		{return HEXADECIMAL_LITERAL;}

	/********************************end integer literal*******************************/
	/********************************start character literal*******************************/

{character-literal}							{return CHARACTER_LITERAL;}

	/********************************end character literal*******************************/
	
	/********************************start string literal*******************************/
		/********************************start raw-string literal*******************************/

R["]{dchar-seq}[(]    { delim_offset=3; delim_len = yyleng - delim_offset;
                        yymore();
                        BEGIN(START_RAW_STRING);
                      }
LR["]{dchar-seq}[(]    { delim_offset=4; delim_len = yyleng - delim_offset;
                        yymore();
                        BEGIN(START_RAW_STRING);
                      }
u8R["]{dchar-seq}[(]    { delim_offset=5;delim_len = yyleng - delim_offset;
                        yymore();
                        BEGIN(START_RAW_STRING);
                      }
uR["]{dchar-seq}[(]    { delim_offset=4; delim_len = yyleng - delim_offset;
                        yymore();
                        BEGIN(START_RAW_STRING);
                      }    
UR["]{dchar-seq}[(]   { delim_offset=4; delim_len = yyleng - delim_offset;
                        yymore();
                        BEGIN(START_RAW_STRING);
                      }   

<START_RAW_STRING>{
   [^"]+              yymore();
   ["]                { 	if (yytext[yyleng - (delim_len + 2)] == ')' &&
	                            memcmp(yytext + yyleng - (delim_len + 1),
	                                   yytext + 2, delim_len) == 0) {
	                           BEGIN(INITIAL);
	                           yytext=yytext+delim_len + delim_offset;
	                           yyleng=yyleng-delim_len-delim_offset-delim_len-2;
	                           return STRING_LITERAL;
	                       	}
                     		else yymore();
                      }
   <<EOF>>            { yyerror("Unterminated raw string");
                         BEGIN(INITIAL);
                         return 0;
                      }
}
		/********************************end raw-string literal*******************************/
		/********************************other string literal*******************************/

[L]["]{schar-seq}*["]		{yytext=yytext+2; yyleng=yyleng-3; return STRING_LITERAL;}	
[u][8]["]{schar-seq}*["]	{yytext=yytext+3; yyleng=yyleng-4; return STRING_LITERAL;}	
[u]["]{schar-seq}*["]		{yytext=yytext+2; yyleng=yyleng-3; return STRING_LITERAL;}	
[U]["]{schar-seq}*["]		{yytext=yytext+2; yyleng=yyleng-3; return STRING_LITERAL;}
["]{schar-seq}*["]			{yytext=yytext+1; yyleng=yyleng-2; return STRING_LITERAL;}

	/********************************end string literal*******************************/

	/********************************start floating point literals*******************************/
{decimal-floating-point-literal}		{return DECIMAL_FLOATING_POINT_LITERAL;}
{hexadecimal-floating-point-literal}	{return HEXADECIMAL_FLOATING_POINT_LITERAL;}
	/********************************end floating point literals*******************************/
	/********************************start boolean & pointer literals*******************************/

"false"						|	
"true"						{return BOOLEAN_LITERAL;}
"nullptr"					{return POINTER_LITERAL;}

	/********************************end boolean & pointer literals*******************************/
	/********************************start user-defined literals*******************************/
{decimal-literal}{ud-suffix}													|	
{octal-literal}{ud-suffix}														|
{hexadecimal-literal}{ud-suffix}												|
{binary-literal}{ud-suffix}														|
{fractional-constant}{exponent-part}?{ud-suffix}								|
{digit-sequence}{exponent-part}{ud-suffix}										|
[0][xX]{hexadecimal-fractional-constant}{binary-exponent-part}{ud-suffix}		|
[0][xX]{hexadecimal-digit-sequence}{binary-exponent-part}{ud-suffix}			|	
{character-literal}{ud-suffix}											{return USER_DEFINED_LITERAL;}

[L]["]{schar-seq}*["]{ud-suffix}		{return USER_DEFINED_STRING_LITERAL;}	
[u][8]["]{schar-seq}*["]{ud-suffix}		{return USER_DEFINED_STRING_LITERAL;}	
[u]["]{schar-seq}*["]{ud-suffix}		{return USER_DEFINED_STRING_LITERAL;}	
[U]["]{schar-seq}*["]{ud-suffix}		{return USER_DEFINED_STRING_LITERAL;}
["]{schar-seq}*["]{ud-suffix}			{return USER_DEFINED_STRING_LITERAL;}

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
				case CHARACTER_LITERAL:
					cout<<"\nCHARACTER_LITERAL:\t";
					break;
				case STRING_LITERAL:
					cout<<"\nSTRING_LITERAL:\t";
					break;				
				case DECIMAL_FLOATING_POINT_LITERAL:
					cout<<"\nDECIMAL_FLOATING_POINT_LITERAL:\t";
					break;
				case HEXADECIMAL_FLOATING_POINT_LITERAL:
					cout<<"\nHEXADECIMAL_FLOATING_POINT_LITERAL:\t";
					break;
				case BOOLEAN_LITERAL:
					cout<<"\nBOOLEAN_LITERAL:\t";
					break;
				case POINTER_LITERAL:
					cout<<"\nPOINTER_LITERAL:\t";
					break;
				case USER_DEFINED_LITERAL:
					cout<<"\nUSER_DEFINED_LITERAL:\t";
					break;
				case USER_DEFINED_STRING_LITERAL:
					cout<<"\nUSER_DEFINED_STRING_LITERAL:\t";
					break;
				}
				cout<<"\tline_number:"<<yylineno<<";\t"
					<<"yyleng:"<<yyleng<<"\t:["<<str<<"]"<<endl;							
			}
		}
	}
}