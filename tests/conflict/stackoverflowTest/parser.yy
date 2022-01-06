
%require "3.8"
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
	Node* stmtmerge (yy::parser::value_type x0, yy::parser::value_type x1);	
	Node* stmtmerge2 (yy::parser::value_type x0, yy::parser::value_type x1);	
}

%type <node> SIZE ID start prog assignment expression function_call array_indexing
%printer { yyo << $$; } <node>
%token
  SIZE  	"size"
  ID        "identifier"
  SEMICOLON ";"
  EQUAL     "=" 
  LPAREN    "("
  RPAREN    ")"
  LSQUARE	"["
  RSQUARE	"]"
%start start  
%%

start: 
	prog	
	;
prog: 
	assignment SEMICOLON
	| prog assignment SEMICOLON		
	;

assignment: 
	ID EQUAL expression
	| %empty   {;}
	;

expression: 
	function_call  		 %merge <stmtmerge2>
	| array_indexing            %merge <stmtmerge2>
	| SIZE
	| ID
	;

function_call: 
	ID LPAREN expression RPAREN	
	;

array_indexing:   
	ID LSQUARE expression RSQUARE                         
	;
%%

void yy::parser::error (const std::string& m)
{
  std::cerr << m << '\n';
}
Node* stmtmerge (yy::parser::value_type x0, yy::parser::value_type x1)
{
  return new Node ("*****<OR>******", x0.node, x1.node);
}

Node* stmtmerge2 (yy::parser::value_type x0, yy::parser::value_type x1)
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
	