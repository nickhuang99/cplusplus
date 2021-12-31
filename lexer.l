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
{binary-literal}{integer-suffix}?			{ return yy::parser::make_LITERAL();}
{octal-literal}{integer-suffix}?			{ return yy::parser::make_LITERAL();}
{decimal-literal}{integer-suffix}?			{ return yy::parser::make_LITERAL();}
{hexadecimal-literal}{integer-suffix}?		{ return yy::parser::make_LITERAL();}
	/********************************end integer literal*******************************/
	/********************************start character literal*******************************/
{character-literal}							{ return yy::parser::make_LITERAL();}
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
   <<EOF>>            {  yyerror("Unterminated raw string");
                         BEGIN(INITIAL);
                         return yy::parser::make_YYUNDEF();
                      }
}
<END_RAW_STRING>{
		[^_a-zA-Z]				{yyleng--;BEGIN(INITIAL); return yy::parser::make_STRING_LITERAL();}
		<<EOF>>					{BEGIN(INITIAL); return yy::parser::make_STRING_LITERAL();}		
		/* user defined string literal */
		[_a-zA-Z][_a-zA-Z0-9]*	{BEGIN(INITIAL); yymore(); return yy::parser::make_STRING_LITERAL();}
}
		/********************************end raw-string literal*******************************/
		/********************************other string literal*******************************/

{encoding-prefix}?[\"]{schar-seq}*[\"]		{ return yy::parser::make_STRING_LITERAL();}	

	/********************************end string literal*******************************/

	/********************************start floating point literals*******************************/
{decimal-floating-point-literal}		{ return yy::parser::make_LITERAL();}
{hexadecimal-floating-point-literal}	{ return yy::parser::make_LITERAL();}
	/********************************end floating point literals*******************************/
	/********************************start boolean & pointer literals*******************************/

"false"						|	
"true"						{ return yy::parser::make_LITERAL();}
"nullptr"					{ return yy::parser::make_LITERAL();}

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
{character-literal}{ud-suffix}						{ return yy::parser::make_LITERAL();}

{encoding-prefix}?["]{schar-seq}*["]{ud-suffix}		{ return yy::parser::make_LITERAL();}	


	/******************keyword and terminal used by parser********************/
"<=>"			{ return yy::parser::make_SPACESHIP();}
"alignas"		{ return yy::parser::make_ALIGNAS();}
"alignof"		{ return yy::parser::make_ALIGNOF();}
"bitand"		|
"&"				{ return yy::parser::make_AND();}
"and"			|
"&&"			{ return yy::parser::make_AND_AND();}
"and_eq"		|
"&="			{ return yy::parser::make_AND_EQ();}
"asm"			{ return yy::parser::make_ASM();}
"auto"			{ return yy::parser::make_AUTO();}
"bool"			{ return yy::parser::make_BOOL();}
"break"			{ return yy::parser::make_BREAK();}
"case"			{ return yy::parser::make_CASE();}
"catch"			{ return yy::parser::make_CATCH();}
"char"			{ return yy::parser::make_CHAR();}
"char16_t"		{ return yy::parser::make_CHAR16_T();}
"char32_t"		{ return yy::parser::make_CHAR32_T();}
"char8_t"		{ return yy::parser::make_CHAR8_T();}
"class"			{ return yy::parser::make_CLASS();}
"%>"			|
"}"				{ return yy::parser::make_CLOSE_BRACE();}
")"				{ return yy::parser::make_CLOSE_PAREN();}
":>"			|
"]"				{ return yy::parser::make_CLOSE_SQUARE();}
":"				{ return yy::parser::make_COLON();}
","				{ return yy::parser::make_COMMA();}
"compl"			|
"~"				{ return yy::parser::make_COMPL();}
"concept"		{ return yy::parser::make_CONCEPT();}
"const"			{ return yy::parser::make_CONST();}
"consteval"		{ return yy::parser::make_CONSTEVAL();}
"constexpr"		{ return yy::parser::make_CONSTEXPR();}
"constinit"		{ return yy::parser::make_CONSTINIT();}
"const_cast"	{ return yy::parser::make_CONST_CAST();}
"continue"		{ return yy::parser::make_CONTINUE();}
"co_await"		{ return yy::parser::make_CO_AWAIT();}
"co_return"		{ return yy::parser::make_CO_RETURN();}
"co_yield"		{ return yy::parser::make_CO_YIELD();}
"decltype"		{ return yy::parser::make_DECLTYPE();}
"default"		{ return yy::parser::make_DEFAULT();}
"delete"		{ return yy::parser::make_DELETE();}
"->"			{ return yy::parser::make_DEREF();}
"->*"			{ return yy::parser::make_DEREF_STAR();}
"/"				{ return yy::parser::make_DIV();}
"/="			{ return yy::parser::make_DIV_EQ();}
"do"			{ return yy::parser::make_DO();}
"."				{ return yy::parser::make_DOT();}
".*"			{ return yy::parser::make_DOT_STAR();}
"double"		{ return yy::parser::make_DOUBLE();}
"dynamic_cast"	{ return yy::parser::make_DYNAMIC_CAST();}
"..."			{ return yy::parser::make_ELLIPSIS();}
"else"			{ return yy::parser::make_ELSE();}
"enum"			{ return yy::parser::make_ENUM();}
"="				{ return yy::parser::make_EQ();}
"=="			{ return yy::parser::make_EQ_EQ();}
"explicit"		{ return yy::parser::make_EXPLICIT();}
"export"		{ return yy::parser::make_EXPORT();}
"extern"		{ return yy::parser::make_EXTERN();}
"final"			{ return yy::parser::make_FINAL();}
"float"			{ return yy::parser::make_FLOAT();}
"for"			{ return yy::parser::make_FOR();}
"friend"		{ return yy::parser::make_FRIEND();}
"goto"			{ return yy::parser::make_GOTO();}
">"				{ return yy::parser::make_GREATER();}
">="			{ return yy::parser::make_GREATER_EQ();}
{header-name}	{ return yy::parser::make_HEADER_NAME();}
"if"			{ return yy::parser::make_IF();}
"import"		{ return yy::parser::make_IMPORT();}
"inline"		{ return yy::parser::make_INLINE();}
"int"			{ return yy::parser::make_INT();}
"<"				{ return yy::parser::make_LESS();}
"<="			{ return yy::parser::make_LESS_EQ();}
"long"			{ return yy::parser::make_LONG();}
"<<"			{ return yy::parser::make_LSHIFT();}
"<<="			{ return yy::parser::make_LSHIFT_EQ();}
"-"				{ return yy::parser::make_MINUS();}
"-="			{ return yy::parser::make_MINUS_EQ();}
"--"			{ return yy::parser::make_MINUS_MINUS();}
"%"				{ return yy::parser::make_MOD();}
"module"		{ return yy::parser::make_MODULE();}
"%="			{ return yy::parser::make_MOD_EQ();}
"*"				{ return yy::parser::make_MULT();}
"*="			{ return yy::parser::make_MULT_EQ();}
"mutable"		{ return yy::parser::make_MUTABLE();}
"namespace"		{ return yy::parser::make_NAMESPACE();}
"new"			{ return yy::parser::make_NEW();}
"noexcept"		{ return yy::parser::make_NOEXCEPT();}
"not"			|
"!"				{ return yy::parser::make_NOT();}
"not_eq"		|
"!="			{ return yy::parser::make_NOT_EQ();}
"<%"			|
"{"				{ return yy::parser::make_OPEN_BRACE();}
"("				{ return yy::parser::make_OPEN_PAREN();}
"<:"			|
"["				{ return yy::parser::make_OPEN_SQUARE();}
"operator"		{ return yy::parser::make_OPERATOR();}
"bitor"			|
"|"				{ return yy::parser::make_OR();}
"or_eq"			|
"|="			{ return yy::parser::make_OR_EQ();}
"or"			|
"||"			{ return yy::parser::make_OR_OR();}
"override"		{ return yy::parser::make_OVERRIDE();}
"+"				{ return yy::parser::make_PLUS();}
"+="			{ return yy::parser::make_PLUS_EQ();}
"++"			{ return yy::parser::make_PLUS_PLUS();}
"private"		{ return yy::parser::make_PRIVATE();}
"protected"		{ return yy::parser::make_PROTECTED();}
"public"		{ return yy::parser::make_PUBLIC();}
"?"				{ return yy::parser::make_QUERY();}
"reinterpret_cast"		{ return yy::parser::make_REINTERPRET_CAST();}
"requires"		{ return yy::parser::make_REQUIRES();}
"return"		{ return yy::parser::make_RETURN();}
">>"			{ return yy::parser::make_RSHIFT();}

">>="			{ return yy::parser::make_RSHIFT_EQ();}
"::"			{ return yy::parser::make_SCOPE();}
";"				{ return yy::parser::make_SEMICOLON();}
"short"			{ return yy::parser::make_SHORT();}
"signed"		{ return yy::parser::make_SIGNED();}
"sizeof"		{ return yy::parser::make_SIZEOF();}
"struct"		{ return yy::parser::make_STRUCT();}
"static_cast"	{ return yy::parser::make_STATIC_CAST();}
"static_assert"	{ return yy::parser::make_STATIC_ASSERT();}
"static"		{ return yy::parser::make_STATIC();}
"switch"		{ return yy::parser::make_SWITCH();}
"template"		{ return yy::parser::make_TEMPLATE();}
"this"			{ return yy::parser::make_THIS();}
"thread_local"	{ return yy::parser::make_THREAD_LOCAL();}
"throw"			{ return yy::parser::make_THROW();}
"try"			{ return yy::parser::make_TRY();}
"typedef"		{ return yy::parser::make_TYPEDEF();}
"typeid"		{ return yy::parser::make_TYPEID();}
"typename"		{ return yy::parser::make_TYPENAME();}
"union"			{ return yy::parser::make_UNION();}
"unsigned"		{ return yy::parser::make_UNSIGNED();}
"using"			{ return yy::parser::make_USING();}
"virtual"		{ return yy::parser::make_VIRTUAL();}
"void"			{ return yy::parser::make_VOID();}
"volatile"		{ return yy::parser::make_VOLATILE();}
"wchar_t"		{ return yy::parser::make_WCHAR_T();}
"while"			{ return yy::parser::make_WHILE();}
"xor"			|
"^"				{ return yy::parser::make_XOR();}
"xor_eq"		|
"^="			{ return yy::parser::make_XOR_EQ();}

{identifier}	{ return yy::parser::make_IDENTIFIER();}

[#][[:space:]]*"pragma"[^\n]*[\n]		; /*GCC has #pragma GCC visibility noise */		

[[:space:][:blank:]]+          { ; /* Ignore whitespace */}

.				{ fprintf(stderr, "%d: ERROR! unexpected character `%c'\n", yylineno, yytext[0]); }

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
				if (tk.kind()== parser::symbol_kind::S_YYEOF) break;
									
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

