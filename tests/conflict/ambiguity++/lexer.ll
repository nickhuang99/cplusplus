%{
#include "parser.hh"
#include "driver.hh"
%}
%option noyywrap
typename		[A-Z]
id				[a-z]
blank			[ \t\n]+
%%
{typename}	{return yy::parser::make_TYPENAME(Term(yytext));}
{id}		{return yy::parser::make_ID(Term(yytext));}

"+"         { return yy::parser::make_PLUS ();}
"="         { return yy::parser::make_EQUAL ();}
"("         { return yy::parser::make_LPAREN ();}
")"         { return yy::parser::make_RPAREN ();}
";"         { return yy::parser::make_SEMICOLON ();}
{blank}		{;}
.			{ return yy::parser::make_YYerror();}
<<EOF>>  	{ return yy::parser::make_YYEOF();}

