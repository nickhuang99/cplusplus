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

"+"         { return yy::parser::make_PLUS (Term(yytext));}
"="         { return yy::parser::make_EQUAL (Term(yytext));}
"("         { return yy::parser::make_LPAREN (Term(yytext));}
")"         { return yy::parser::make_RPAREN (Term(yytext));}
";"         { return yy::parser::make_SEMICOLON (Term(yytext));}
{blank}		{;}
.			{ return yy::parser::make_YYerror(Term("error"));}
<<EOF>>  	{ return yy::parser::make_YYEOF(Term("EOF"));}

