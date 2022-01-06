%{
#include "parser.hh"
#include "driver.hh"
%}
%option noyywrap
typename		[A-Z]
id				[a-z]
blank			[ \t\n]+
%%
{typename}	{return yy::parser::token::TYPENAME;}
{id}		{return yy::parser::token::ID;}

"+"         { return yy::parser::token::PLUS ;}
"="         { return yy::parser::token::EQUAL ;}
"("         { return yy::parser::token::LPAREN ;}
")"         { return yy::parser::token::RPAREN ;}
";"         { return yy::parser::token::SEMICOLON ;}
{blank}		{;}
.			{ return YYerror;}
<<EOF>>  	{ return YYEOF;}

