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
{binary-literal}{integer-suffix}?			{ return yy::parser::make_LITERAL(Node(yytext));}
{octal-literal}{integer-suffix}?			{ return yy::parser::make_LITERAL(Node(yytext));}
{decimal-literal}{integer-suffix}?			{ return yy::parser::make_LITERAL(Node(yytext));}
{hexadecimal-literal}{integer-suffix}?		{ return yy::parser::make_LITERAL(Node(yytext));}
	/********************************end integer literal*******************************/
	/********************************start character literal*******************************/
{character-literal}							{ return yy::parser::make_LITERAL(Node(yytext));}
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
                         return yy::parser::make_YYUNDEF();
                      }
}
<END_RAW_STRING>{
		[^_a-zA-Z]				{yyleng--;BEGIN(INITIAL); return yy::parser::make_STRING_LITERAL(Node(yytext));}
		<<EOF>>					{BEGIN(INITIAL); return yy::parser::make_STRING_LITERAL(Node(yytext));}		
		/* user defined string literal */
		[_a-zA-Z][_a-zA-Z0-9]*	{BEGIN(INITIAL); yymore(); return yy::parser::make_STRING_LITERAL(Node(yytext));}
}
		/********************************end raw-string literal*******************************/
		/********************************other string literal*******************************/

{encoding-prefix}?[\"]{schar-seq}*[\"]		{ return yy::parser::make_STRING_LITERAL(Node(yytext));}	

	/********************************end string literal*******************************/

	/********************************start floating point literals*******************************/
{decimal-floating-point-literal}		{ return yy::parser::make_LITERAL(Node(yytext));}
{hexadecimal-floating-point-literal}	{ return yy::parser::make_LITERAL(Node(yytext));}
	/********************************end floating point literals*******************************/
	/********************************start boolean & pointer literals*******************************/

"false"						|	
"true"						{ return yy::parser::make_LITERAL(Node(yytext));}
"nullptr"					{ return yy::parser::make_LITERAL(Node(yytext));}

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
{character-literal}{ud-suffix}						{ return yy::parser::make_LITERAL(Node(yytext));}

{encoding-prefix}?["]{schar-seq}*["]{ud-suffix}		{ return yy::parser::make_LITERAL(Node(yytext));}	


	/******************keyword and terminal used by parser********************/
"<=>"			{ return yy::parser::make_SPACESHIP(Node(yytext));}
"alignas"		{ return yy::parser::make_ALIGNAS(Node(yytext));}
"alignof"		{ return yy::parser::make_ALIGNOF(Node(yytext));}
"bitand"		|
"&"				{ return yy::parser::make_AND(Node(yytext));}
"and"			|
"&&"			{ return yy::parser::make_AND_AND(Node(yytext));}
"and_eq"		|
"&="			{ return yy::parser::make_AND_EQ(Node(yytext));}
"asm"			{ return yy::parser::make_ASM(Node(yytext));}
"auto"			{ return yy::parser::make_AUTO(Node(yytext));}
"bool"			{ return yy::parser::make_BOOL(Node(yytext));}
"break"			{ return yy::parser::make_BREAK(Node(yytext));}
"case"			{ return yy::parser::make_CASE(Node(yytext));}
"catch"			{ return yy::parser::make_CATCH(Node(yytext));}
"char"			{ return yy::parser::make_CHAR(Node(yytext));}
"char16_t"		{ return yy::parser::make_CHAR16_T(Node(yytext));}
"char32_t"		{ return yy::parser::make_CHAR32_T(Node(yytext));}
"char8_t"		{ return yy::parser::make_CHAR8_T(Node(yytext));}
"class"			{ return yy::parser::make_CLASS(Node(yytext));}
"%>"			|
"}"				{ return yy::parser::make_CLOSE_BRACE(Node(yytext));}
")"				{ return yy::parser::make_CLOSE_PAREN(Node(yytext));}
":>"			|
"]"				{ return yy::parser::make_CLOSE_SQUARE(Node(yytext));}
":"				{ return yy::parser::make_COLON(Node(yytext));}
","				{ return yy::parser::make_COMMA(Node(yytext));}
"compl"			|
"~"				{ return yy::parser::make_COMPL(Node(yytext));}
"concept"		{ return yy::parser::make_CONCEPT(Node(yytext));}
"const"			{ return yy::parser::make_CONST(Node(yytext));}
"consteval"		{ return yy::parser::make_CONSTEVAL(Node(yytext));}
"constexpr"		{ return yy::parser::make_CONSTEXPR(Node(yytext));}
"constinit"		{ return yy::parser::make_CONSTINIT(Node(yytext));}
"const_cast"	{ return yy::parser::make_CONST_CAST(Node(yytext));}
"continue"		{ return yy::parser::make_CONTINUE(Node(yytext));}
"co_await"		{ return yy::parser::make_CO_AWAIT(Node(yytext));}
"co_return"		{ return yy::parser::make_CO_RETURN(Node(yytext));}
"co_yield"		{ return yy::parser::make_CO_YIELD(Node(yytext));}
"decltype"		{ return yy::parser::make_DECLTYPE(Node(yytext));}
"default"		{ return yy::parser::make_DEFAULT(Node(yytext));}
"delete"		{ return yy::parser::make_DELETE(Node(yytext));}
"->"			{ return yy::parser::make_DEREF(Node(yytext));}
"->*"			{ return yy::parser::make_DEREF_STAR(Node(yytext));}
"/"				{ return yy::parser::make_DIV(Node(yytext));}
"/="			{ return yy::parser::make_DIV_EQ(Node(yytext));}
"do"			{ return yy::parser::make_DO(Node(yytext));}
"."				{ return yy::parser::make_DOT(Node(yytext));}
".*"			{ return yy::parser::make_DOT_STAR(Node(yytext));}
"double"		{ return yy::parser::make_DOUBLE(Node(yytext));}
"dynamic_cast"	{ return yy::parser::make_DYNAMIC_CAST(Node(yytext));}
"..."			{ return yy::parser::make_ELLIPSIS(Node(yytext));}
"else"			{ return yy::parser::make_ELSE(Node(yytext));}
"enum"			{ return yy::parser::make_ENUM(Node(yytext));}
"="				{ return yy::parser::make_EQ(Node(yytext));}
"=="			{ return yy::parser::make_EQ_EQ(Node(yytext));}
"explicit"		{ return yy::parser::make_EXPLICIT(Node(yytext));}
"export"		{ return yy::parser::make_EXPORT(Node(yytext));}
"extern"		{ return yy::parser::make_EXTERN(Node(yytext));}
"final"			{ return yy::parser::make_FINAL(Node(yytext));}
"float"			{ return yy::parser::make_FLOAT(Node(yytext));}
"for"			{ return yy::parser::make_FOR(Node(yytext));}
"friend"		{ return yy::parser::make_FRIEND(Node(yytext));}
"goto"			{ return yy::parser::make_GOTO(Node(yytext));}
">"				{ return yy::parser::make_GREATER(Node(yytext));}
">="			{ return yy::parser::make_GREATER_EQ(Node(yytext));}
{header-name}	{ return yy::parser::make_HEADER_NAME(Node(yytext));}
"if"			{ return yy::parser::make_IF(Node(yytext));}
"import"		{ return yy::parser::make_IMPORT(Node(yytext));}
"inline"		{ return yy::parser::make_INLINE(Node(yytext));}
"int"			{ return yy::parser::make_INT(Node(yytext));}
"<"				{ return yy::parser::make_LESS(Node(yytext));}
"<="			{ return yy::parser::make_LESS_EQ(Node(yytext));}
"long"			{ return yy::parser::make_LONG(Node(yytext));}
"<<"			{ return yy::parser::make_LSHIFT(Node(yytext));}
"<<="			{ return yy::parser::make_LSHIFT_EQ(Node(yytext));}
"-"				{ return yy::parser::make_MINUS(Node(yytext));}
"-="			{ return yy::parser::make_MINUS_EQ(Node(yytext));}
"--"			{ return yy::parser::make_MINUS_MINUS(Node(yytext));}
"%"				{ return yy::parser::make_MOD(Node(yytext));}
"module"		{ return yy::parser::make_MODULE(Node(yytext));}
"%="			{ return yy::parser::make_MOD_EQ(Node(yytext));}
"*"				{ return yy::parser::make_MULT(Node(yytext));}
"*="			{ return yy::parser::make_MULT_EQ(Node(yytext));}
"mutable"		{ return yy::parser::make_MUTABLE(Node(yytext));}
"namespace"		{ return yy::parser::make_NAMESPACE(Node(yytext));}
"new"			{ return yy::parser::make_NEW(Node(yytext));}
"noexcept"		{ return yy::parser::make_NOEXCEPT(Node(yytext));}
"not"			|
"!"				{ return yy::parser::make_NOT(Node(yytext));}
"not_eq"		|
"!="			{ return yy::parser::make_NOT_EQ(Node(yytext));}
"<%"			|
"{"				{ return yy::parser::make_OPEN_BRACE(Node(yytext));}
"("				{ return yy::parser::make_OPEN_PAREN(Node(yytext));}
"<:"			|
"["				{ return yy::parser::make_OPEN_SQUARE(Node(yytext));}
"operator"		{ return yy::parser::make_OPERATOR(Node(yytext));}
"bitor"			|
"|"				{ return yy::parser::make_OR(Node(yytext));}
"or_eq"			|
"|="			{ return yy::parser::make_OR_EQ(Node(yytext));}
"or"			|
"||"			{ return yy::parser::make_OR_OR(Node(yytext));}
"override"		{ return yy::parser::make_OVERRIDE(Node(yytext));}
"+"				{ return yy::parser::make_PLUS(Node(yytext));}
"+="			{ return yy::parser::make_PLUS_EQ(Node(yytext));}
"++"			{ return yy::parser::make_PLUS_PLUS(Node(yytext));}
"private"		{ return yy::parser::make_PRIVATE(Node(yytext));}
"protected"		{ return yy::parser::make_PROTECTED(Node(yytext));}
"public"		{ return yy::parser::make_PUBLIC(Node(yytext));}
"?"				{ return yy::parser::make_QUERY(Node(yytext));}
"reinterpret_cast"		{ return yy::parser::make_REINTERPRET_CAST(Node(yytext));}
"requires"		{ return yy::parser::make_REQUIRES(Node(yytext));}
"return"		{ return yy::parser::make_RETURN(Node(yytext));}
">>"			{ return yy::parser::make_RSHIFT(Node(yytext));}

">>="			{ return yy::parser::make_RSHIFT_EQ(Node(yytext));}
"::"			{ return yy::parser::make_SCOPE(Node(yytext));}
";"				{ return yy::parser::make_SEMICOLON(Node(yytext));}
"short"			{ return yy::parser::make_SHORT(Node(yytext));}
"signed"		{ return yy::parser::make_SIGNED(Node(yytext));}
"sizeof"		{ return yy::parser::make_SIZEOF(Node(yytext));}
"struct"		{ return yy::parser::make_STRUCT(Node(yytext));}
"static_cast"	{ return yy::parser::make_STATIC_CAST(Node(yytext));}
"static_assert"	{ return yy::parser::make_STATIC_ASSERT(Node(yytext));}
"static"		{ return yy::parser::make_STATIC(Node(yytext));}
"switch"		{ return yy::parser::make_SWITCH(Node(yytext));}
"template"		{ return yy::parser::make_TEMPLATE(Node(yytext));}
"this"			{ return yy::parser::make_THIS(Node(yytext));}
"thread_local"	{ return yy::parser::make_THREAD_LOCAL(Node(yytext));}
"throw"			{ return yy::parser::make_THROW(Node(yytext));}
"try"			{ return yy::parser::make_TRY(Node(yytext));}
"typedef"		{ return yy::parser::make_TYPEDEF(Node(yytext));}
"typeid"		{ return yy::parser::make_TYPEID(Node(yytext));}
"typename"		{ return yy::parser::make_TYPENAME(Node(yytext));}
"union"			{ return yy::parser::make_UNION(Node(yytext));}
"unsigned"		{ return yy::parser::make_UNSIGNED(Node(yytext));}
"using"			{ return yy::parser::make_USING(Node(yytext));}
"virtual"		{ return yy::parser::make_VIRTUAL(Node(yytext));}
"void"			{ return yy::parser::make_VOID(Node(yytext));}
"volatile"		{ return yy::parser::make_VOLATILE(Node(yytext));}
"wchar_t"		{ return yy::parser::make_WCHAR_T(Node(yytext));}
"while"			{ return yy::parser::make_WHILE(Node(yytext));}
"xor"			|
"^"				{ return yy::parser::make_XOR(Node(yytext));}
"xor_eq"		|
"^="			{ return yy::parser::make_XOR_EQ(Node(yytext));}

{identifier}	{ return yy::parser::make_IDENTIFIER(Node(yytext));}

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

