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
s-char					{basic-s-char}|{escape-sequence}|{universal-character-name}

dchar-seq				[^()\\[:space:]]{0,64}  
schar-seq				{s-char}+
	/********************************end string literals*******************************/

identifier			[_a-zA-Z][_a-zA-Z0-9]*
ud-suffix			{identifier}


%%
		size_t delim_len, delim_offset; 
	/********************************start integer literal*******************************/
{binary-literal}{integer-suffix}?			{return LITERAL;}
{octal-literal}{integer-suffix}?			{return LITERAL;}
{decimal-literal}{integer-suffix}?			{return LITERAL;}
{hexadecimal-literal}{integer-suffix}?		{return LITERAL;}
	/********************************end integer literal*******************************/
	/********************************start character literal*******************************/
{character-literal}							{return LITERAL;}
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
                         return 0;
                      }
}
<END_RAW_STRING>{
		[^_a-zA-Z]				{yyleng--;BEGIN(INITIAL); return STRING_LITERAL;}
		<<EOF>>					{BEGIN(INITIAL); return STRING_LITERAL;}		
		/* user defined string literal */
		[_a-zA-Z][_a-zA-Z0-9]*	{BEGIN(INITIAL); yymore(); return STRING_LITERAL;}
}
		/********************************end raw-string literal*******************************/
		/********************************other string literal*******************************/

{encoding-prefix}?[\"]{schar-seq}*[\"]		{ return STRING_LITERAL;}	

	/********************************end string literal*******************************/

	/********************************start floating point literals*******************************/
{decimal-floating-point-literal}		{return LITERAL;}
{hexadecimal-floating-point-literal}	{return LITERAL;}
	/********************************end floating point literals*******************************/
	/********************************start boolean & pointer literals*******************************/

"false"						|	
"true"						{return LITERAL;}
"nullptr"					{return LITERAL;}

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
{character-literal}{ud-suffix}						{return LITERAL;}

{encoding-prefix}?["]{schar-seq}*["]{ud-suffix}		{return LITERAL;}	


	/******************keyword and terminal used by parser********************/
"alignas"		{ return ALIGNAS;}
"alignof"		{ return ALIGNOF;}
"bitand"		|
"&"				{ return AND;}
"and"			|
"&&"			{ return AND_AND;}
"and_eq"		|
"&="			{ return AND_EQ;}
"asm"			{ return ASM;}
"auto"			{ return AUTO;}
"bool"			{ return BOOL;}
"break"			{ return BREAK;}
"case"			{ return CASE;}
"catch"			{ return CATCH;}
"char"			{ return CHAR;}
"char16_t"		{ return CHAR16_T;}
"char32_t"		{ return CHAR32_T;}
"char8_t"		{ return CHAR8_T;}
"class"			{ return CLASS;}
"%>"			|
"}"				{ return CLOSE_BRACE;}
")"				{ return CLOSE_PAREN;}
":>"			|
"]"				{ return CLOSE_SQUARE;}
":"				{ return COLON;}
","				{ return COMMA;}
compl			|
"~"				{ return COMPL;}
"concept"		{ return CONCEPT;}
"const"			{ return CONST;}
"consteval"		{ return CONSTEVAL;}
"constexpr"		{ return CONSTEXPR;}
"constinit"		{ return CONSTINIT;}
"const_cast"	{ return CONST_CAST;}
"continue"		{ return CONTINUE;}
"co_await"		{ return CO_AWAIT;}
"co_return"		{ return CO_RETURN;}
"co_yield"		{ return CO_YIELD;}
"decltype"		{ return DECLTYPE;}
"default"		{ return DEFAULT;}
"delete"		{ return DELETE;}
"->"			{ return DEREF;}
"->*"			{ return DEREF_STAR;}
"/"				{ return DIV;}
"/="			{ return DIV_EQ;}
"do"			{ return DO;}
"."				{ return DOT;}
".*"			{ return DOT_STAR;}
"double"		{ return DOUBLE;}
"dynamic_cast"	{ return DYNAMIC_CAST;}
"..."			{ return ELLIPSIS;}
"else"			{ return ELSE;}
"enum"			{ return ENUM;}
"="				{ return EQ;}
"=="			{ return EQ_EQ;}
"explicit"		{ return EXPLICIT;}
"export"		{ return EXPORT;}
"extern"		{ return EXTERN;}
"final"			{ return FINAL;}
"float"			{ return FLOAT;}
"for"			{ return FOR;}
"friend"		{ return FRIEND;}
"goto"			{ return GOTO;}
">"				{ return GREATER;}
">="			{ return GREATER_EQ;}
HEADER_NAME		{ return HEADER_NAME;}
"if"			{ return IF;}
"import"		{ return IMPORT;}
"inline"		{ return INLINE;}
"int"			{ return INT;}
"<"				{ return LESS;}
"<="			{ return LESS_EQ;}
"literal"		{ return LITERAL;}
"long"			{ return LONG;}
"<<"			{ return LSHIFT;}
"<<="			{ return LSHIFT_EQ;}
"-"				{ return MINUS;}
"-="			{ return MINUS_EQ;}
"--"			{ return MINUS_MINUS;}
"%"				{ return MOD;}
"module"		{ return MODULE;}
"%="			{ return MOD_EQ;}
"*"				{ return MULT;}
"*="			{ return MULT_EQ;}
"mutable"		{ return MUTABLE;}
"namespace"		{ return NAMESPACE;}
"new"			{ return NEW;}
"noexcept"		{ return NOEXCEPT;}
"not"			|
"!"				{ return NOT;}
"not_eq"		|
"!="			{ return NOT_EQ;}
"<%"			|
"{"				{ return OPEN_BRACE;}
"("				{ return OPEN_PAREN;}
"<:"			|
"["				{ return OPEN_SQUARE;}
"operator"		{ return OPERATOR;}
bitor			|
"|"				{ return OR;}
"or_eq"			|
"|="			{ return OR_EQ;}
"or"			|
"||"			{ return OR_OR;}
"override"		{ return OVERRIDE;}
"+"				{ return PLUS;}
"+="			{ return PLUS_EQ;}
"++"			{ return PLUS_PLUS;}
"private"		{ return PRIVATE;}
"protected"		{ return PROTECTED;}
"public"		{ return PUBLIC;}
"?"				{ return QUERY;}
"reinterpret_cast"		{ return REINTERPRET_CAST;}
"requires"		{ return REQUIRES;}
"return"		{ return RETURN;}
">>"			{ return RSHIFT;}
">>="			{ return RSHIFT_EQ;}
"::"			{ return SCOPE;}
";"				{ return SEMICOLON;}
"short"			{ return SHORT;}
"signed"		{ return SIGNED;}
"sizeof"		{ return SIZEOF;}
"<=>"			{ return SPACESHIP;}
"static"		{ return STATIC;}
"static_assert"	{ return STATIC_ASSERT;}
"static_cast"	{ return STATIC_CAST;}
"struct"		{ return STRUCT;}
"switch"		{ return SWITCH;}
"template"		{ return TEMPLATE;}
"this"			{ return THIS;}
"thread_local"	{ return THREAD_LOCAL;}
"throw"			{ return THROW;}
"try"			{ return TRY;}
"typedef"		{ return TYPEDEF;}
"typeid"		{ return TYPEID;}
"typename"		{ return TYPENAME;}
"union"			{ return UNION;}
"unsigned"		{ return UNSIGNED;}
"using"			{ return USING;}
"virtual"		{ return VIRTUAL;}
"void"			{ return VOID;}
"volatile"		{ return VOLATILE;}
"wchar_t"		{ return WCHAR_T;}
"while"			{ return WHILE;}
"xor"			|
"^"				{ return XOR;}
"xor_eq"		|
"^="			{ return XOR_EQ;}
{identifier}	{return IDENTIFIER;}

[#][[:space:]]*"pragma"[^\n]*[\n]		; /*GCC has #pragma GCC visibility noise */		

[[:space:][:blank:]]+          { ; /* Ignore whitespace */}
.				{ fprintf(stderr, "%d: ERROR! unexpected character `%c'\n", yylineno, yytext[0]); }

%%
void yyerror(const string& str){
	cerr<<"error:"<<str<<endl;
}

#ifdef LEXER_TEST
int main(int argc, char**argv){
	extern FILE *yyin;
	if (argc==2){
		yyin=fopen(argv[1], "r");
		if (yyin){
			int token=0;
			while (token=yylex()){				
				string str(yytext, yyleng);
				if (token==IDENTIFIER){
					cout<<"token:\t"<<"IDENTIFIER";
				}else if (token==LITERAL){
					cout<<"token:\t"<<"LITERAL";
				}else if (token==STRING_LITERAL){
					cout<<"token:\t"<<"STRING_LITERAL";
				}else{
					cout<<"token:\t"<<token;
				}
				cout<<"\tline_number:"<<yylineno<<";\t"
					<<"yyleng:"<<yyleng<<"\t:["<<str<<"]"<<endl;							
			}
		}
	}
}
#endif

