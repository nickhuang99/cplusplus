%{
#include "parser.hh"	
%}
%option noyywrap
typename		[A-Z]
id				[a-z]
blank			[ \t\n]+
%%
{typename}	{return TYPENAME;}
{id}		{return ID;}
[;+\(\)=]	{return yytext[0];}
{blank}		{;}

.			{ printf("invalid token %s\n", yytext);}
<<EOF>>  	{return YYEOF;}

