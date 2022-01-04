%{
#include "parser.hh"
#include "driver.hh"
%}
%option noyywrap
typename		[A-Z]
id				[a-z]
blank			[ \t\n]+
%%
{typename}	{return yy::parser::make_TYPENAME(Node(yytext));}
{id}		{return yy::parser::make_ID(Node(yytext));}

"+"         { return yy::parser::make_PLUS (Node(yytext));}
"="         { return yy::parser::make_EQUAL (Node(yytext));}
"("         { return yy::parser::make_LPAREN (Node(yytext));}
")"         { return yy::parser::make_RPAREN (Node(yytext));}
";"         { return yy::parser::make_SEMICOLON (Node(yytext));}
{blank}		{;}
.			{ return yy::parser::make_YYerror(Node("error"));}
<<EOF>>  	{ return yy::parser::make_YYEOF(Node("EOF"));}

