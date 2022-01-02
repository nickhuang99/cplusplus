%{
#include <stdio.h>
#include "parser.hh"
int yylex (void);
void yyerror (char const *);
static YYSTYPE stmt_merge (YYSTYPE x0, YYSTYPE x1);
%}
%define api.value.type {char const *}
%token TYPENAME ID
%right '='
%left '+'
%glr-parser
%define parse.trace

%%


prog:
	%empty
	| prog stmt   { printf ("\n"); }
	;
stmt:
	expr ';'	%merge <stmt_merge> /* %dprec 1 */
	| decl      %merge <stmt_merge> /* %dprec 2*/
	;

expr:
	ID		{ printf("%s ", $$); }
	| TYPENAME '(' expr ')'
			{ printf("%s <cast> ", $1); }
	| expr '+' expr		{ printf("+ "); }
	| expr '=' expr		{ printf("= "); }	
	;

decl:
	TYPENAME declarator ';'
			{ printf ("%s <declare> ", $1); }
	| TYPENAME declarator '=' expr ';'
			{ printf ("%s <init-declare> ", $1); }
	;
declarator:
	ID
		{ printf ("\"%s\" ", $1); }
	| '(' declarator ')'
	;
%%


void yyerror (char const * msg){
	printf("error %s\n", msg);
}
static YYSTYPE
stmt_merge (YYSTYPE x0, YYSTYPE x1)
{
  printf ("<OR> ");
  return "";
}
int main(int argc, char**argv){
	extern FILE* yyin;
	extern int yydebug;
	//yydebug=1;
	if (argc==2){
		yyin=fopen(argv[1], "r");
		if (yyin){
			if (yyparse()==0){
				printf("success\n");
			}else{
				printf("failure\n");				
			}
		}
	}
}
	