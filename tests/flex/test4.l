%{
#include <iostream>
#include <string>
using namespace std;
void yyerror(const string& str);
#define STRING_LITERAL 		257
#define BOOLEAN_LITERAL  	258
%}
%option	noyywrap
%option yylineno
%x 				C_RAW_STRING
dchar_seq		[^()\\[:space:]]{0,64}
%%
		size_t delim_len;
"true"				|
"false"				{return BOOLEAN_LITERAL;}
		
R["]{dchar_seq}[(]    { delim_len = yyleng - 3;
                        yymore();
                        BEGIN(C_RAW_STRING);
                      }

   /* Rules for other tokens omitted */


<C_RAW_STRING>{
   [^"]+              yymore();
   ["]                { if (yytext[yyleng - (delim_len + 2)] == ')' &&
                            memcmp(yytext + yyleng - (delim_len + 1),
                                   yytext + 2, delim_len) == 0) {
                           BEGIN(INITIAL);
                           yytext=yytext+delim_len + 3;
                           yyleng=yyleng-delim_len-3-delim_len-2;
                           return STRING_LITERAL;
                         }
                         else yymore();
                       }
   <<EOF>>             { yyerror("Unterminated raw string");
                         BEGIN(INITIAL);
                         return 0;
                       }
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
			}
		}
	}
}