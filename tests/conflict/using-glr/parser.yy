
%require "3.2"
%code requires{
#include <iostream>
#include <string> 
#include "ast.hh"	
	
// Merge two semantic values.

		
}

%no-lines
%skeleton "glr.cc"
%union 
{
	Node* node;
	int  n;
};

			/*%right "=" */
		/*%left "+" */
%glr-parser
%define parse.trace


%code {
#include "driver.hh"  
		
#include "lexer.cc"
	Node* stmt_merge (yy::parser::value_type x0, yy::parser::value_type x1);
	Node* expr_merge (yy::parser::value_type x0, yy::parser::value_type x1);	
}

%type <node> TYPENAME ID expr declarator decl prog stmt stmts result
%printer { yyo << $$; } <node>
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
	prog   { std::cout << $1 << '\n'; }	
	;
prog:	
	prog stmts    { $$=new Node("prog", $2); }
	| %empty      {;}
	;
stmts:	
	stmt   { $$=new Node("stmts", $1); }
	;
stmt:		
	expr SEMICOLON	    {$$=new Node("stmt", $1);}/* %dprec 1 */
	| decl              {$$=new Node("stmt", $1);}  /* %dprec 2*/
	;

expr:	
	ID								 { $$=new Node("expr", $1);}
	| TYPENAME LPAREN expr RPAREN 	 { $$=new Node("type-cast", $1, $3); }
	| expr PLUS expr		    	 { $$=new Node("plus-expr", $1, $3); }
	| expr EQUAL expr		 		 { $$=new Node("minus-expr", $1, $3); }	
	;

decl:	  
	TYPENAME declarator SEMICOLON  	
			 { $$=new Node("type-declaration", $1, $2);}
	| TYPENAME declarator EQUAL expr SEMICOLON  
			 { $$=new Node("type-declaration-init", $1, $2, $4); }
	;
declarator:
	ID		{ $$=new Node("declarator", $1);}
	| LPAREN declarator RPAREN
			{ $$=new Node("declarator", $2);}
	;
%%

void yy::parser::error (const std::string& m)
{
	std::cerr << m << '\n';
}
Node* stmt_merge (yy::parser::value_type x0, yy::parser::value_type x1)
{
	return new Node ("*****<OR>******", x0.node, x1.node);
}

Node* expr_merge (yy::parser::value_type x0, yy::parser::value_type x1)
{
	return new Node ("*****<OR>******", x0.node, x1.node);
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
	