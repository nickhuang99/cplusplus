%code requires{
#include <iostream>
#include <string> 
#include "ast.hh"	

// Merge two semantic values.
Node stmt_merge (const Node& x0, const Node& x1);
		
}

%skeleton "glr2.cc"
%define api.value.type variant
%right "="
%left "+"
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

%type <Node> TYPENAME ID expr declarator decl prog stmt
%printer { yyo << $$; } <Node>
%token
  TYPENAME  "typename"
  ID        "identifier"
  SEMICOLON ";"
  EQUAL     "="
  PLUS      "+"
  LPAREN    "("
  RPAREN    ")"
%%

prog:
	%empty        {;}
	| prog stmt   { std::cout << $2 << '\n'; }
	;
stmt:
	expr SEMICOLON	/* %merge <stmt_merge> */ /* %dprec 1 */
	| decl      /* %merge <stmt_merge> */ /* %dprec 2*/
	;

expr:
	ID		
	| TYPENAME LPAREN expr RPAREN 	{ $$=Nterm("type-cast", $1, $3); }
	| expr PLUS expr		    	{ $$=Nterm("plus-expr", $1, $3); }
	| expr EQUAL expr		 		{ $$=Nterm("minus-expr", $1, $3); }	
	;

decl:
	TYPENAME declarator SEMICOLON
			{ $$=Nterm("type-declaration", $1, $2);}
	| TYPENAME declarator EQUAL expr SEMICOLON
			{ $$=Nterm("type-declaration-init", $1, $2, $4); }
	;
declarator:
	ID		
	| LPAREN declarator RPAREN { $$=$2;}
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
	//yydebug=1;
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
	