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

result: 
	prog %merge <stmt_merge> { std::cout << $1 << '\n'; }

prog:
	%empty     %merge <stmt_merge> {$$=Node("empty");}
	| prog stmts   %merge <stmt_merge> { $$=Node("prog", $2); }
	;
stmts:	
	%empty     %merge <stmt_merge> {$$=Node("empty");}
	| stmt  %merge <stmt_merge> { $$=Node("stmts", $1); }
stmt:		
	expr SEMICOLON	 %merge <stmt_merge>  {$$=Node("stmt", $1);}/* %dprec 1 */
	| decl           %merge <stmt_merge>  {$$=Node("stmt", $1);}  /* %dprec 2*/
	;

expr:	
	ID		%merge <stmt_merge> {$$=Node("expr", $1);}
	| TYPENAME LPAREN expr RPAREN %merge <stmt_merge>	{ $$=Node("type-cast", $1, $3); }
	| expr PLUS expr		    	%merge <stmt_merge> { $$=Node("plus-expr", $1, $3); }
	| expr EQUAL expr		 		%merge <stmt_merge> { $$=Node("minus-expr", $1, $3); }	
	;

decl:	  
	TYPENAME declarator SEMICOLON  %merge <stmt_merge>
			{ $$=Node("type-declaration", $1, $2);}
	| TYPENAME declarator EQUAL expr SEMICOLON  %merge <stmt_merge>
			{ $$=Node("type-declaration-init", $1, $2, $4); }
	;
declarator:
	ID		%merge <stmt_merge>   {$$=Node("declarator", $1);}
	| LPAREN declarator RPAREN %merge <stmt_merge> { $$=Node("declarator", $2);}
	;
%%

void yy::parser::error (const std::string& m)
{
  std::cerr << m << '\n';
}
Node stmt_merge (const Node& x0, const Node& x1)
{
  return Node ("*****<OR>******", x0, x1);
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
	