%{
#include "parser.hh"
#include "driver.hh"
%}
%option noyywrap

blank			[ \t\n]+
%%

[a-zA-Z][a-zA-Z0-9]*         { return yy::parser::token::ID ;}
[0-9]+         				{ return yy::parser::token::SIZE ;}
"="			{ return yy::parser::token::EQUAL ;}
"("         { return yy::parser::token::LPAREN ;}
")"         { return yy::parser::token::RPAREN ;}
"["         { return yy::parser::token::LSQUARE ;}
"]"         { return yy::parser::token::RSQUARE ;}
";"         { return yy::parser::token::SEMICOLON ;}
{blank}		{;}
.			{ return YYerror;}
<<EOF>>  	{ return YYEOF;}

