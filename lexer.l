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
{binary-literal}{integer-suffix}?			{ return yy::parser::make_LITERAL(Term(yytext));}
{octal-literal}{integer-suffix}?			{ return yy::parser::make_LITERAL(Term(yytext));}
{decimal-literal}{integer-suffix}?			{ return yy::parser::make_LITERAL(Term(yytext));}
{hexadecimal-literal}{integer-suffix}?		{ return yy::parser::make_LITERAL(Term(yytext));}
	/********************************end integer literal*******************************/
	/********************************start character literal*******************************/
{character-literal}							{ return yy::parser::make_LITERAL(Term(yytext));}
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
		[^_a-zA-Z]				{yyleng--;BEGIN(INITIAL); return yy::parser::make_STRING_LITERAL(Term(yytext));}
		<<EOF>>					{BEGIN(INITIAL); return yy::parser::make_STRING_LITERAL(Term(yytext));}		
		/* user defined string literal */
		[_a-zA-Z][_a-zA-Z0-9]*	{BEGIN(INITIAL); yymore(); return yy::parser::make_STRING_LITERAL(Term(yytext));}
}
		/********************************end raw-string literal*******************************/
		/********************************other string literal*******************************/

{encoding-prefix}?[\"]{schar-seq}*[\"]		{ return yy::parser::make_STRING_LITERAL(Term(yytext));}	

	/********************************end string literal*******************************/

	/********************************start floating point literals*******************************/
{decimal-floating-point-literal}		{ return yy::parser::make_LITERAL(Term(yytext));}
{hexadecimal-floating-point-literal}	{ return yy::parser::make_LITERAL(Term(yytext));}
	/********************************end floating point literals*******************************/
	/********************************start boolean & pointer literals*******************************/

"false"						|	
"true"						{ return yy::parser::make_LITERAL(Term(yytext));}
"nullptr"					{ return yy::parser::make_LITERAL(Term(yytext));}

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
{character-literal}{ud-suffix}						{ return yy::parser::make_LITERAL(Term(yytext));}

{encoding-prefix}?["]{schar-seq}*["]{ud-suffix}		{ return yy::parser::make_LITERAL(Term(yytext));}	


	/******************keyword and terminal used by parser********************/
"<=>"			{ return yy::parser::make_SPACESHIP(Term(yytext));}
"alignas"		{ return yy::parser::make_ALIGNAS(Term(yytext));}
"alignof"		{ return yy::parser::make_ALIGNOF(Term(yytext));}
"bitand"		|
"&"				{ return yy::parser::make_AND(Term(yytext));}
"and"			|
"&&"			{ return yy::parser::make_AND_AND(Term(yytext));}
"and_eq"		|
"&="			{ return yy::parser::make_AND_EQ(Term(yytext));}
"asm"			{ return yy::parser::make_ASM(Term(yytext));}
"auto"			{ return yy::parser::make_AUTO(Term(yytext));}
"bool"			{ return yy::parser::make_BOOL(Term(yytext));}
"break"			{ return yy::parser::make_BREAK(Term(yytext));}
"case"			{ return yy::parser::make_CASE(Term(yytext));}
"catch"			{ return yy::parser::make_CATCH(Term(yytext));}
"char"			{ return yy::parser::make_CHAR(Term(yytext));}
"char16_t"		{ return yy::parser::make_CHAR16_T(Term(yytext));}
"char32_t"		{ return yy::parser::make_CHAR32_T(Term(yytext));}
"char8_t"		{ return yy::parser::make_CHAR8_T(Term(yytext));}
"class"			{ return yy::parser::make_CLASS(Term(yytext));}
"%>"			|
"}"				{ return yy::parser::make_CLOSE_BRACE(Term(yytext));}
")"				{ return yy::parser::make_CLOSE_PAREN(Term(yytext));}
":>"			|
"]"				{ return yy::parser::make_CLOSE_SQUARE(Term(yytext));}
":"				{ return yy::parser::make_COLON(Term(yytext));}
","				{ return yy::parser::make_COMMA(Term(yytext));}
"compl"			|
"~"				{ return yy::parser::make_COMPL(Term(yytext));}
"concept"		{ return yy::parser::make_CONCEPT(Term(yytext));}
"const"			{ return yy::parser::make_CONST(Term(yytext));}
"consteval"		{ return yy::parser::make_CONSTEVAL(Term(yytext));}
"constexpr"		{ return yy::parser::make_CONSTEXPR(Term(yytext));}
"constinit"		{ return yy::parser::make_CONSTINIT(Term(yytext));}
"const_cast"	{ return yy::parser::make_CONST_CAST(Term(yytext));}
"continue"		{ return yy::parser::make_CONTINUE(Term(yytext));}
"co_await"		{ return yy::parser::make_CO_AWAIT(Term(yytext));}
"co_return"		{ return yy::parser::make_CO_RETURN(Term(yytext));}
"co_yield"		{ return yy::parser::make_CO_YIELD(Term(yytext));}
"decltype"		{ return yy::parser::make_DECLTYPE(Term(yytext));}
"default"		{ return yy::parser::make_DEFAULT(Term(yytext));}
"delete"		{ return yy::parser::make_DELETE(Term(yytext));}
"->"			{ return yy::parser::make_DEREF(Term(yytext));}
"->*"			{ return yy::parser::make_DEREF_STAR(Term(yytext));}
"/"				{ return yy::parser::make_DIV(Term(yytext));}
"/="			{ return yy::parser::make_DIV_EQ(Term(yytext));}
"do"			{ return yy::parser::make_DO(Term(yytext));}
"."				{ return yy::parser::make_DOT(Term(yytext));}
".*"			{ return yy::parser::make_DOT_STAR(Term(yytext));}
"double"		{ return yy::parser::make_DOUBLE(Term(yytext));}
"dynamic_cast"	{ return yy::parser::make_DYNAMIC_CAST(Term(yytext));}
"..."			{ return yy::parser::make_ELLIPSIS(Term(yytext));}
"else"			{ return yy::parser::make_ELSE(Term(yytext));}
"enum"			{ return yy::parser::make_ENUM(Term(yytext));}
"="				{ return yy::parser::make_EQ(Term(yytext));}
"=="			{ return yy::parser::make_EQ_EQ(Term(yytext));}
"explicit"		{ return yy::parser::make_EXPLICIT(Term(yytext));}
"export"		{ return yy::parser::make_EXPORT(Term(yytext));}
"extern"		{ return yy::parser::make_EXTERN(Term(yytext));}
"final"			{ return yy::parser::make_FINAL(Term(yytext));}
"float"			{ return yy::parser::make_FLOAT(Term(yytext));}
"for"			{ return yy::parser::make_FOR(Term(yytext));}
"friend"		{ return yy::parser::make_FRIEND(Term(yytext));}
"goto"			{ return yy::parser::make_GOTO(Term(yytext));}
">"				{ return yy::parser::make_GREATER(Term(yytext));}
">="			{ return yy::parser::make_GREATER_EQ(Term(yytext));}
{header-name}	{ return yy::parser::make_HEADER_NAME(Term(yytext));}
"if"			{ return yy::parser::make_IF(Term(yytext));}
"import"		{ return yy::parser::make_IMPORT(Term(yytext));}
"inline"		{ return yy::parser::make_INLINE(Term(yytext));}
"int"			{ return yy::parser::make_INT(Term(yytext));}
"<"				{ return yy::parser::make_LESS(Term(yytext));}
"<="			{ return yy::parser::make_LESS_EQ(Term(yytext));}
"long"			{ return yy::parser::make_LONG(Term(yytext));}
"<<"			{ return yy::parser::make_LSHIFT(Term(yytext));}
"<<="			{ return yy::parser::make_LSHIFT_EQ(Term(yytext));}
"-"				{ return yy::parser::make_MINUS(Term(yytext));}
"-="			{ return yy::parser::make_MINUS_EQ(Term(yytext));}
"--"			{ return yy::parser::make_MINUS_MINUS(Term(yytext));}
"%"				{ return yy::parser::make_MOD(Term(yytext));}
"module"		{ return yy::parser::make_MODULE(Term(yytext));}
"%="			{ return yy::parser::make_MOD_EQ(Term(yytext));}
"*"				{ return yy::parser::make_MULT(Term(yytext));}
"*="			{ return yy::parser::make_MULT_EQ(Term(yytext));}
"mutable"		{ return yy::parser::make_MUTABLE(Term(yytext));}
"namespace"		{ return yy::parser::make_NAMESPACE(Term(yytext));}
"new"			{ return yy::parser::make_NEW(Term(yytext));}
"noexcept"		{ return yy::parser::make_NOEXCEPT(Term(yytext));}
"not"			|
"!"				{ return yy::parser::make_NOT(Term(yytext));}
"not_eq"		|
"!="			{ return yy::parser::make_NOT_EQ(Term(yytext));}
"<%"			|
"{"				{ return yy::parser::make_OPEN_BRACE(Term(yytext));}
"("				{ return yy::parser::make_OPEN_PAREN(Term(yytext));}
"<:"			|
"["				{ return yy::parser::make_OPEN_SQUARE(Term(yytext));}
"operator"		{ return yy::parser::make_OPERATOR(Term(yytext));}
"bitor"			|
"|"				{ return yy::parser::make_OR(Term(yytext));}
"or_eq"			|
"|="			{ return yy::parser::make_OR_EQ(Term(yytext));}
"or"			|
"||"			{ return yy::parser::make_OR_OR(Term(yytext));}
"override"		{ return yy::parser::make_OVERRIDE(Term(yytext));}
"+"				{ return yy::parser::make_PLUS(Term(yytext));}
"+="			{ return yy::parser::make_PLUS_EQ(Term(yytext));}
"++"			{ return yy::parser::make_PLUS_PLUS(Term(yytext));}
"private"		{ return yy::parser::make_PRIVATE(Term(yytext));}
"protected"		{ return yy::parser::make_PROTECTED(Term(yytext));}
"public"		{ return yy::parser::make_PUBLIC(Term(yytext));}
"?"				{ return yy::parser::make_QUERY(Term(yytext));}
"reinterpret_cast"		{ return yy::parser::make_REINTERPRET_CAST(Term(yytext));}
"requires"		{ return yy::parser::make_REQUIRES(Term(yytext));}
"return"		{ return yy::parser::make_RETURN(Term(yytext));}
">>"			{ return yy::parser::make_RSHIFT(Term(yytext));}

">>="			{ return yy::parser::make_RSHIFT_EQ(Term(yytext));}
"::"			{ return yy::parser::make_SCOPE(Term(yytext));}
";"				{ return yy::parser::make_SEMICOLON(Term(yytext));}
"short"			{ return yy::parser::make_SHORT(Term(yytext));}
"signed"		{ return yy::parser::make_SIGNED(Term(yytext));}
"sizeof"		{ return yy::parser::make_SIZEOF(Term(yytext));}
"struct"		{ return yy::parser::make_STRUCT(Term(yytext));}
"static_cast"	{ return yy::parser::make_STATIC_CAST(Term(yytext));}
"static_assert"	{ return yy::parser::make_STATIC_ASSERT(Term(yytext));}
"static"		{ return yy::parser::make_STATIC(Term(yytext));}
"switch"		{ return yy::parser::make_SWITCH(Term(yytext));}
"template"		{ return yy::parser::make_TEMPLATE(Term(yytext));}
"this"			{ return yy::parser::make_THIS(Term(yytext));}
"thread_local"	{ return yy::parser::make_THREAD_LOCAL(Term(yytext));}
"throw"			{ return yy::parser::make_THROW(Term(yytext));}
"try"			{ return yy::parser::make_TRY(Term(yytext));}
"typedef"		{ return yy::parser::make_TYPEDEF(Term(yytext));}
"typeid"		{ return yy::parser::make_TYPEID(Term(yytext));}
"typename"		{ return yy::parser::make_TYPENAME(Term(yytext));}
"union"			{ return yy::parser::make_UNION(Term(yytext));}
"unsigned"		{ return yy::parser::make_UNSIGNED(Term(yytext));}
"using"			{ return yy::parser::make_USING(Term(yytext));}
"virtual"		{ return yy::parser::make_VIRTUAL(Term(yytext));}
"void"			{ return yy::parser::make_VOID(Term(yytext));}
"volatile"		{ return yy::parser::make_VOLATILE(Term(yytext));}
"wchar_t"		{ return yy::parser::make_WCHAR_T(Term(yytext));}
"while"			{ return yy::parser::make_WHILE(Term(yytext));}
"xor"			|
"^"				{ return yy::parser::make_XOR(Term(yytext));}
"xor_eq"		|
"^="			{ return yy::parser::make_XOR_EQ(Term(yytext));}

{identifier}	{ return yy::parser::make_IDENTIFIER(Term(yytext));}

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

