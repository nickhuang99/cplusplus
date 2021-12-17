%{
#include <iostream>
#include <string>
using namespace std;
void yyerror(const string& str);
#define STRING_LITERAL 						257
#define USER_DEFINED_STRING_LITERAL 		258
#define BOOLEAN_LITERAL  					259
%}
%option	noyywrap
%option yylineno
%x 				C_RAW_STRING
%x				C_RAW_STRING_FINISH
dchar_seq		[^()\\[:space:]]{0,64}
%%
		size_t delim_len, raw_string_length;		
"true"				|
"false"				{return BOOLEAN_LITERAL;}
		
R["]{dchar_seq}[(]    { delim_len = yyleng - 3;
                        yymore();
                        BEGIN(C_RAW_STRING);
                      }

   /* Rules for other tokens omitted */

	/* [_a-zA-Z][_a-zA-Z0-9]*   */
<C_RAW_STRING>{
   [^"]+              yymore();
   ["]				   { if (yytext[yyleng - (delim_len + 2)] == ')' &&
                            memcmp(yytext + yyleng - (delim_len + 1),
                                   yytext + 2, delim_len) == 0) {
                           BEGIN(C_RAW_STRING_FINISH);  
                           raw_string_length=yyleng;                        
                           //yytext=yytext+delim_len + 3;
                           //yyleng=yyleng-delim_len-3-delim_len-2;
                           //return STRING_LITERAL;
                         }
                         else yymore();
                       }
   <<EOF>>             { yyerror("Unterminated raw string");
                         BEGIN(INITIAL);
                         return 0;
                       }
}
<C_RAW_STRING_FINISH>{
		[^_a-zA-Z]				{BEGIN(INITIAL); yytext=yytext-raw_string_length-1; yyleng+=raw_string_length-1; return STRING_LITERAL;}
		[_a-zA-Z][_a-zA-Z0-9]*	{BEGIN(INITIAL); yytext=yytext-raw_string_length; yyleng+=raw_string_length; return USER_DEFINED_STRING_LITERAL;}		
}
[[:space:]]+          ;                /* Ignore whitespace */
.                     return *yytext;  /* Fallback rule */

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
				if (token==STRING_LITERAL){						
					cout<<"\nstring literal:\t"<<"line_number:"<<yylineno<<";\t"
						<<"yyleng:"<<yyleng<<"\t:"<<str<<endl;
				}
				if (token==BOOLEAN_LITERAL){						
					cout<<"\nboolean literal:\t"<<"line_number:"<<yylineno<<";\t"
						<<"yyleng:"<<yyleng<<"\t:"<<str<<endl;
				}
				if (token==USER_DEFINED_STRING_LITERAL){						
					cout<<"\nuser defined string literal:\t"<<"line_number:"<<yylineno<<";\t"
						<<"yyleng:"<<yyleng<<"\t:"<<str<<endl;
				}				
			}
		}
	}
}