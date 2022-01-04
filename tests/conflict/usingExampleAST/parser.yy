%code requires{
#include <iostream>
#include <string> 
#include "ast.hh"	

// Merge two semantic values.
Node stmt_merge (const Node& x0, const Node& x1);
		
}

%no-lines
%skeleton "glr2.cc"
%define api.value.type variant
			/*%right "=" */
		/*%left "+" */
%glr-parser
%define parse.trace
%define api.token.constructor


%code {
#include "driver.hh"  
		
#include "lexer.cc"
	
/*
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif
*/
}

%type <Node> YYerror YYEOF TYPENAME ID SEMICOLON EQUAL PLUS LPAREN RPAREN expr declarator decl prog stmt stmts result
%printer { yyo << $$; } <Node>
%token
  TYPENAME  "typename"
  ID        "identifier"
  SEMICOLON ";"
  EQUAL     "="
  PLUS      "+"
  LPAREN    "("
  RPAREN    ")"
%start result  
%%

result: prog %merge <stmt_merge> { std::cout << $1 << '\n'; }

prog:
	%empty     %merge <stmt_merge> {;}
	| prog stmts   %merge <stmt_merge> { $$=Nterm("prog", $2); }
	;
stmts:
	%empty      %merge <stmt_merge> {;}
	| stmts stmt  %merge <stmt_merge> { $$=Nterm("stmts", $2); }
stmt:		
	expr SEMICOLON	 %merge <stmt_merge>  {$$=Nterm("stmt", $1);}/* %dprec 1 */
	| decl           %merge <stmt_merge>  {$$=Nterm("stmt", $1);}  /* %dprec 2*/
	;

expr:	
	ID		%merge <stmt_merge> {$$=Nterm("expr", $1);}
	| TYPENAME LPAREN expr RPAREN %merge <stmt_merge>	{ $$=Nterm("type-cast", $1, $3); }
	| expr PLUS expr		    	%merge <stmt_merge> { $$=Nterm("plus-expr", $1, $3); }
	| expr EQUAL expr		 		%merge <stmt_merge> { $$=Nterm("minus-expr", $1, $3); }	
	;

decl:	  
	TYPENAME declarator SEMICOLON  %merge <stmt_merge>
			{ $$=Nterm("type-declaration", $1, $2);}
	| TYPENAME declarator EQUAL expr SEMICOLON  %merge <stmt_merge>
			{ $$=Nterm("type-declaration-init", $1, $2, $4); }
	;
declarator:
	ID		%merge <stmt_merge>   {$$=Nterm("declarator", $1);}
	| LPAREN declarator RPAREN %merge <stmt_merge> { $$=Nterm("declarator", $2);}
	;
%%

void yy::parser::error (const std::string& m)
{
  std::cerr << m << '\n';
}
Node stmt_merge (const Node& x0, const Node& x1)
{
  return Nterm ("<OR>", x0, x1);
}



int main(int argc, char**argv){
	extern FILE* yyin;
	extern int yydebug;
	yydebug=1;
	if (argc==2){
		yyin=fopen(argv[1], "r");
		if (yyin){
			yy::parser parser;
			if (parser.parse()==0){
				printf("success\n");
			}else{
				printf("failure\n");				
			}
		}
	}
}
	