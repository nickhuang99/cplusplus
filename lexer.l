/*
 * Copyright (c) 2021 Qingzhe Huang <nickhuang99@gmail.com>.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * C++ lexical analyzer.
 * 
 */

%{
#include <iostream>
#include <string>
#include "driver.h"
#include "cplusplus.h"
using namespace std;

void yyerror(const string& str);

%}
%option	noyywrap
%option yylineno

	/********************************start integer literals*******************************/
integer-suffix		([uU][lL]?)|([uU]((ll)|(LL))?)|([uU][zZ]?)|([lL][uU]?)|(((ll)|(LL))[uU]?)|([zZ][uU]?)
binary-literal		([0][bB][01][01']*)
octal-literal		([0]([0-7']*[0-7])*)
decimal-literal		([1-9]([0-9']*[0-9])*)
hexadecimal-literal	([0][xX][0-9a-fA-F']*[0-9a-fA-F])
	/********************************end integer literals*******************************/
	/********************************start character literals*******************************/
encoding-prefix				([u][8]|[uUL])
basic-c-char				([^\\'\n])
simple-escape-sequence		([\\]['"\?\\abfnrtv])
octal-escape-sequence		([\\][0-7]{1,3})
hexadecimal-escape-sequence	([\\][x][0-9a-fA-F]+)
conditional-escape-sequence	([\\][^'"\?\\abfnrtv0-7uUx])
numeric-escape-sequence		({octal-escape-sequence}|{hexadecimal-escape-sequence})
escape-sequence				({simple-escape-sequence}|{numeric-escape-sequence}|{conditional-escape-sequence})
universal-character-name	([\\][u][0-9a-fA-F]{4,4}|[\\][U][0-9a-fA-F]{8,8})
character-literal			{encoding-prefix}?[']({basic-c-char}|{escape-sequence}|{universal-character-name})+[']   
	/********************************end character literals*******************************/
	/********************************start floating point literals*******************************/
digit-sequence						[0-9]([0-9']*[0-9])*
floating-point-suffix				[fFlL]
fractional-constant					({digit-sequence}[.])|({digit-sequence}*[.]{digit-sequence})
exponent-part						[eE][+-]?[0-9]['0-9]*

decimal-floating-point-literal		({fractional-constant}{fractional-constant}?{floating-point-suffix}?)|({digit-sequence}{exponent-part}{floating-point-suffix}?)

hexadecimal-digit-sequence			[0-9a-fA-F]+([0-9a-fA-F']*[0-9a-fA-F])*
binary-exponent-part				[P][+-]?{digit-sequence}
hexadecimal-fractional-constant		({hexadecimal-digit-sequence}[.])|({hexadecimal-digit-sequence}*[.]{hexadecimal-digit-sequence})

hexadecimal-floating-point-literal	[0][xX]({hexadecimal-fractional-constant}|{hexadecimal-digit-sequence}){binary-exponent-part}{floating-point-suffix}?
	/********************************end floating point literals*******************************/
	/********************************start string literals*******************************/
%x 				START_RAW_STRING
%x				END_RAW_STRING
basic-s-char			[^"\\\n]
h-char					[^\n>]
q-char					[^\n"]						 
s-char					{basic-s-char}|{escape-sequence}|{universal-character-name}
header-name				(["]{q-char}+["])|([<]{h-char}+[>])
dchar-seq				[^()\\[:space:]]{0,64}  
schar-seq				{s-char}+
	/********************************end string literals*******************************/

identifier			[_a-zA-Z][_a-zA-Z0-9]*
ud-suffix			{identifier}


%%
		size_t delim_len, delim_offset; 
	/********************************start integer literal*******************************/
{binary-literal}{integer-suffix}?			{ return yy::parser::token::TOK_LITERAL;}
{octal-literal}{integer-suffix}?			{ return yy::parser::token::TOK_LITERAL;}
{decimal-literal}{integer-suffix}?			{ return yy::parser::token::TOK_LITERAL;}
{hexadecimal-literal}{integer-suffix}?		{ return yy::parser::token::TOK_LITERAL;}
	/********************************end integer literal*******************************/
	/********************************start character literal*******************************/
{character-literal}							{ return yy::parser::token::TOK_LITERAL;}
	/********************************end character literal*******************************/
LR\"{dchar-seq}*\(		{ delim_offset=3; delim_len = yyleng - delim_offset-1; yymore(); BEGIN(START_RAW_STRING); }
u8R\"{dchar-seq}*\(    	{ delim_offset=4; delim_len = yyleng - delim_offset-1; yymore(); BEGIN(START_RAW_STRING); }
uR\"{dchar-seq}*\(    	{ delim_offset=3; delim_len = yyleng - delim_offset-1; yymore(); BEGIN(START_RAW_STRING); }    
UR\"{dchar-seq}*\(   	{ delim_offset=3; delim_len = yyleng - delim_offset-1; yymore(); BEGIN(START_RAW_STRING); }  
R\"{dchar-seq}*\(    	{ delim_offset=2; delim_len = yyleng - delim_offset-1; yymore(); BEGIN(START_RAW_STRING); }
<START_RAW_STRING>{
	[^"]+              yymore();
   	["]                { 	if (yytext[yyleng - (delim_len + 2)] == ')' &&
	                            memcmp(yytext + yyleng - (delim_len + 1),
	                                   yytext + delim_offset, delim_len) == 0) 
	                        {	
	                          	BEGIN(END_RAW_STRING); 	                                                	                     	                   
	                       	}	                                          	
                     		yymore();                      		                  		
                      }
   <<EOF>>            {  yyerror("UnNodeinated raw string");
                         BEGIN(INITIAL);
                         return yy::parser::token::TOK_YYEOF;
                      }
}
<END_RAW_STRING>{
		[^_a-zA-Z]				{yyleng--;BEGIN(INITIAL); return yy::parser::token::TOK_STRING_LITERAL;}
		<<EOF>>					{BEGIN(INITIAL); return yy::parser::token::TOK_STRING_LITERAL;}		
		/* user defined string literal */
		[_a-zA-Z][_a-zA-Z0-9]*	{BEGIN(INITIAL); yymore(); return yy::parser::token::TOK_STRING_LITERAL;}
}
		/********************************end raw-string literal*******************************/
		/********************************other string literal*******************************/

{encoding-prefix}?[\"]{schar-seq}*[\"]		{ return yy::parser::token::TOK_STRING_LITERAL;}	

	/********************************end string literal*******************************/

	/********************************start floating point literals*******************************/
{decimal-floating-point-literal}		{ return yy::parser::token::TOK_LITERAL;}
{hexadecimal-floating-point-literal}	{ return yy::parser::token::TOK_LITERAL;}
	/********************************end floating point literals*******************************/
	/********************************start boolean & pointer literals*******************************/

"false"						|	
"true"						{ return yy::parser::token::TOK_LITERAL;}
"nullptr"					{ return yy::parser::token::TOK_LITERAL;}

	/********************************end boolean & pointer literals*******************************/
	/********************************start user-defined literals*******************************/
{decimal-literal}{ud-suffix}													|	
{octal-literal}{ud-suffix}														|
{hexadecimal-literal}{ud-suffix}												|
{binary-literal}{ud-suffix}														|
{fractional-constant}{exponent-part}?{ud-suffix}								|
{digit-sequence}{exponent-part}{ud-suffix}										|
[0][xX]{hexadecimal-fractional-constant}{binary-exponent-part}{ud-suffix}		|
[0][xX]{hexadecimal-digit-sequence}{binary-exponent-part}{ud-suffix}			|	
{character-literal}{ud-suffix}						{ return yy::parser::token::TOK_LITERAL;}

{encoding-prefix}?["]{schar-seq}*["]{ud-suffix}		{ return yy::parser::token::TOK_LITERAL;}	


	/******************keyword and terminal used by parser********************/
"<=>"			{ return yy::parser::token::TOK_SPACESHIP;}
"alignas"		{ return yy::parser::token::TOK_ALIGNAS;}
"alignof"		{ return yy::parser::token::TOK_ALIGNOF;}
"bitand"		|
"&"				{ return yy::parser::token::TOK_AND;}
"and"			|
"&&"			{ return yy::parser::token::TOK_AND_AND;}
"and_eq"		|
"&="			{ return yy::parser::token::TOK_AND_EQ;}
"asm"			{ return yy::parser::token::TOK_ASM;}
"auto"			{ return yy::parser::token::TOK_AUTO;}
"bool"			{ return yy::parser::token::TOK_BOOL;}
"break"			{ return yy::parser::token::TOK_BREAK;}
"case"			{ return yy::parser::token::TOK_CASE;}
"catch"			{ return yy::parser::token::TOK_CATCH;}
"char"			{ return yy::parser::token::TOK_CHAR;}
"char16_t"		{ return yy::parser::token::TOK_CHAR16_T;}
"char32_t"		{ return yy::parser::token::TOK_CHAR32_T;}
"char8_t"		{ return yy::parser::token::TOK_CHAR8_T;}
"class"			{ return yy::parser::token::TOK_CLASS;}
"%>"			|
"}"				{ return yy::parser::token::TOK_CLOSE_BRACE;}
")"				{ return yy::parser::token::TOK_CLOSE_PAREN;}
":>"			|
"]"				{ return yy::parser::token::TOK_CLOSE_SQUARE;}
":"				{ return yy::parser::token::TOK_COLON;}
","				{ return yy::parser::token::TOK_COMMA;}
"compl"			|
"~"				{ return yy::parser::token::TOK_COMPL;}
"concept"		{ return yy::parser::token::TOK_CONCEPT;}
"const"			{ return yy::parser::token::TOK_CONST;}
"consteval"		{ return yy::parser::token::TOK_CONSTEVAL;}
"constexpr"		{ return yy::parser::token::TOK_CONSTEXPR;}
"constinit"		{ return yy::parser::token::TOK_CONSTINIT;}
"const_cast"	{ return yy::parser::token::TOK_CONST_CAST;}
"continue"		{ return yy::parser::token::TOK_CONTINUE;}
"co_await"		{ return yy::parser::token::TOK_CO_AWAIT;}
"co_return"		{ return yy::parser::token::TOK_CO_RETURN;}
"co_yield"		{ return yy::parser::token::TOK_CO_YIELD;}
"decltype"		{ return yy::parser::token::TOK_DECLTYPE;}
"default"		{ return yy::parser::token::TOK_DEFAULT;}
"delete"		{ return yy::parser::token::TOK_DELETE;}
"->"			{ return yy::parser::token::TOK_DEREF;}
"->*"			{ return yy::parser::token::TOK_DEREF_STAR;}
"/"				{ return yy::parser::token::TOK_DIV;}
"/="			{ return yy::parser::token::TOK_DIV_EQ;}
"do"			{ return yy::parser::token::TOK_DO;}
"."				{ return yy::parser::token::TOK_DOT;}
".*"			{ return yy::parser::token::TOK_DOT_STAR;}
"double"		{ return yy::parser::token::TOK_DOUBLE;}
"dynamic_cast"	{ return yy::parser::token::TOK_DYNAMIC_CAST;}
"..."			{ return yy::parser::token::TOK_ELLIPSIS;}
"else"			{ return yy::parser::token::TOK_ELSE;}
"enum"			{ return yy::parser::token::TOK_ENUM;}
"="				{ return yy::parser::token::TOK_EQ;}
"=="			{ return yy::parser::token::TOK_EQ_EQ;}
"explicit"		{ return yy::parser::token::TOK_EXPLICIT;}
"export"		{ return yy::parser::token::TOK_EXPORT;}
"extern"		{ return yy::parser::token::TOK_EXTERN;}
"final"			{ return yy::parser::token::TOK_FINAL;}
"float"			{ return yy::parser::token::TOK_FLOAT;}
"for"			{ return yy::parser::token::TOK_FOR;}
"friend"		{ return yy::parser::token::TOK_FRIEND;}
"goto"			{ return yy::parser::token::TOK_GOTO;}
">"				{ return yy::parser::token::TOK_GREATER;}
">="			{ return yy::parser::token::TOK_GREATER_EQ;}
{header-name}	{ return yy::parser::token::TOK_HEADER_NAME;}
"if"			{ return yy::parser::token::TOK_IF;}
"import"		{ return yy::parser::token::TOK_IMPORT;}
"inline"		{ return yy::parser::token::TOK_INLINE;}
"int"			{ return yy::parser::token::TOK_INT;}
"<"				{ return yy::parser::token::TOK_LESS;}
"<="			{ return yy::parser::token::TOK_LESS_EQ;}
"long"			{ return yy::parser::token::TOK_LONG;}
"<<"			{ return yy::parser::token::TOK_LSHIFT;}
"<<="			{ return yy::parser::token::TOK_LSHIFT_EQ;}
"-"				{ return yy::parser::token::TOK_MINUS;}
"-="			{ return yy::parser::token::TOK_MINUS_EQ;}
"--"			{ return yy::parser::token::TOK_MINUS_MINUS;}
"%"				{ return yy::parser::token::TOK_MOD;}
"module"		{ return yy::parser::token::TOK_MODULE;}
"%="			{ return yy::parser::token::TOK_MOD_EQ;}
"*"				{ return yy::parser::token::TOK_MULT;}
"*="			{ return yy::parser::token::TOK_MULT_EQ;}
"mutable"		{ return yy::parser::token::TOK_MUTABLE;}
"namespace"		{ return yy::parser::token::TOK_NAMESPACE;}
"new"			{ return yy::parser::token::TOK_NEW;}
"noexcept"		{ return yy::parser::token::TOK_NOEXCEPT;}
"not"			|
"!"				{ return yy::parser::token::TOK_NOT;}
"not_eq"		|
"!="			{ return yy::parser::token::TOK_NOT_EQ;}
"<%"			|
"{"				{ return yy::parser::token::TOK_OPEN_BRACE;}
"("				{ return yy::parser::token::TOK_OPEN_PAREN;}
"<:"			|
"["				{ return yy::parser::token::TOK_OPEN_SQUARE;}
"operator"		{ return yy::parser::token::TOK_OPERATOR;}
"bitor"			|
"|"				{ return yy::parser::token::TOK_OR;}
"or_eq"			|
"|="			{ return yy::parser::token::TOK_OR_EQ;}
"or"			|
"||"			{ return yy::parser::token::TOK_OR_OR;}
"override"		{ return yy::parser::token::TOK_OVERRIDE;}
"+"				{ return yy::parser::token::TOK_PLUS;}
"+="			{ return yy::parser::token::TOK_PLUS_EQ;}
"++"			{ return yy::parser::token::TOK_PLUS_PLUS;}
"private"		{ return yy::parser::token::TOK_PRIVATE;}
"protected"		{ return yy::parser::token::TOK_PROTECTED;}
"public"		{ return yy::parser::token::TOK_PUBLIC;}
"?"				{ return yy::parser::token::TOK_QUERY;}
"reinterpret_cast"		{ return yy::parser::token::TOK_REINTERPRET_CAST;}
"requires"		{ return yy::parser::token::TOK_REQUIRES;}
"return"		{ return yy::parser::token::TOK_RETURN;}
">>"			{ return yy::parser::token::TOK_RSHIFT;}

">>="			{ return yy::parser::token::TOK_RSHIFT_EQ;}
"::"			{ return yy::parser::token::TOK_SCOPE;}
";"				{ return yy::parser::token::TOK_SEMICOLON;}
"short"			{ return yy::parser::token::TOK_SHORT;}
"signed"		{ return yy::parser::token::TOK_SIGNED;}
"sizeof"		{ return yy::parser::token::TOK_SIZEOF;}
"struct"		{ return yy::parser::token::TOK_STRUCT;}
"static_cast"	{ return yy::parser::token::TOK_STATIC_CAST;}
"static_assert"	{ return yy::parser::token::TOK_STATIC_ASSERT;}
"static"		{ return yy::parser::token::TOK_STATIC;}
"switch"		{ return yy::parser::token::TOK_SWITCH;}
"template"		{ return yy::parser::token::TOK_TEMPLATE;}
"this"			{ return yy::parser::token::TOK_THIS;}
"thread_local"	{ return yy::parser::token::TOK_THREAD_LOCAL;}
"throw"			{ return yy::parser::token::TOK_THROW;}
"try"			{ return yy::parser::token::TOK_TRY;}
"typedef"		{ return yy::parser::token::TOK_TYPEDEF;}
"typeid"		{ return yy::parser::token::TOK_TYPEID;}
"typename"		{ return yy::parser::token::TOK_TYPENAME;}
"union"			{ return yy::parser::token::TOK_UNION;}
"unsigned"		{ return yy::parser::token::TOK_UNSIGNED;}
"using"			{ return yy::parser::token::TOK_USING;}
"virtual"		{ return yy::parser::token::TOK_VIRTUAL;}
"void"			{ return yy::parser::token::TOK_VOID;}
"volatile"		{ return yy::parser::token::TOK_VOLATILE;}
"wchar_t"		{ return yy::parser::token::TOK_WCHAR_T;}
"while"			{ return yy::parser::token::TOK_WHILE;}
"xor"			|
"^"				{ return yy::parser::token::TOK_XOR;}
"xor_eq"		|
"^="			{ return yy::parser::token::TOK_XOR_EQ;}

{identifier}	{ return yy::parser::token::TOK_IDENTIFIER;}

[#][[:space:]]*"pragma"[^\n]*[\n]		; /*GCC has #pragma GCC visibility noise */		

[[:space:][:blank:]]+          { ; /* Ignore whitespace */}

.				{ fprintf(stderr, "%d: ERROR! unexpected character `%c'\n", yylineno, yytext[0]); }
<<EOF>>			{ return yy::parser::token::TOK_YYEOF;}
%%
void yyerror(const string& str){
	cerr<<"error:"<<str<<endl;
}

#ifdef LEXER_TEST

#include "cplusplus.h"
int main(int argc, char**argv){
	using namespace yy;
	
	extern FILE *yyin;
	if (argc==2){
		yyin=fopen(argv[1], "r");
		if (yyin){
			parser::symbol_type tk;
			while (true){				
				tk=yylex();			
				if (tk.kind()==parser::symbol_kind::S_IDENTIFIER){
					cout<<"token:\t"<<"IDENTIFIER";
				}else if (tk.kind()==parser::symbol_kind::S_LITERAL){
					cout<<"token:\t"<<"LITERAL";
				}else if (tk.kind()==parser::symbol_kind::S_STRING_LITERAL){
					cout<<"token:\t"<<"STRING_LITERAL";
				}else{
					cout<<"token: UNKNOWN\t";
				}
				cout<<"\tline_number:"<<yylineno<<endl;							
			}
		}
	}
}
#endif

