
%require "3.2"
%glr-parser
		/*%no-lines */
%skeleton "glr.cc"
%header
%define parse.error detailed
%define api.token.prefix {TOK_}
%union {Node* node;};
%printer { if (yyvaluep) yyo << $$; } <node>

%code requires{
#include "ast.h"
}
%code{
#include <iostream>
#include <string>
#include "driver.h"
#include "cplusplus.h"
using namespace std;
Node* merge_function (yy::parser::value_type x0, yy::parser::value_type x1);
}
%type  <node> COMMA-opt	CONSTEXPR-opt	ELLIPSIS-opt	EXPORT-opt	EXTERN-opt	IDENTIFIER-opt	INLINE-opt	NOEXCEPT-opt	NOT-opt	SCOPE-opt	TEMPLATE-opt	THIS-opt	TYPENAME-opt	VIRTUAL-opt	abstract-declarator	abstract-declarator-opt	abstract-pack-declarator	access-specifier	access-specifier-opt	additive-expression	alias-declaration	alignment-specifier	and-expression	asm-declaration	assignment-expression	assignment-expression-opt	assignment-operator	attribute	attribute-argument-clause	attribute-argument-clause-opt	attribute-declaration	attribute-list	attribute-namespace	attribute-opt	attribute-scoped-token	attribute-specifier	attribute-specifier-seq	attribute-specifier-seq-opt	attribute-token	attribute-using-prefix	attribute-using-prefix-opt	await-expression	balanced-token	balanced-token-seq	balanced-token-seq-opt	base-clause	base-clause-opt	base-specifier	base-specifier-list	block-declaration	boolean-literal	brace-or-equal-initializer	brace-or-equal-initializer-opt	braced-init-list	capture	capture-default	capture-list	cast-expression	character-literal	class-head	class-head-name	class-key	class-name	class-or-decltype	class-specifier	class-virt-specifier	class-virt-specifier-opt	compare-expression	compound-requirement	compound-statement	concept-definition	concept-name	condition	condition-opt	conditional-expression	constant-expression	constant-expression-opt	constraint-expression	constraint-logical-and-expression	constraint-logical-or-expression	conversion-declarator	conversion-declarator-opt	conversion-function-id	conversion-type-id	coroutine-return-statement	ctor-initializer	ctor-initializer-opt	cv-qualifier	cv-qualifier-seq	cv-qualifier-seq-opt	decl-specifier	decl-specifier-seq	decl-specifier-seq-opt	declaration	declaration-seq	declaration-seq-opt	declaration-statement	declarator	declarator-id	decltype-specifier	deduction-guide	defining-type-id	defining-type-specifier	defining-type-specifier-seq	delete-expression	designated-initializer-clause	designated-initializer-list	designator	elaborated-enum-specifier	elaborated-type-specifier	empty-declaration	enclosing-namespace-specifier	enum-base	enum-base-opt	enum-head	enum-head-name	enum-head-name-opt	enum-key	enum-name	enum-specifier	enumerator	enumerator-definition	enumerator-list	enumerator-list-opt	equality-expression	exception-declaration	exclusive-or-expression	explicit-instantiation	explicit-specialization	explicit-specifier	explicit-specifier-opt	export-declaration	expr-or-braced-init-list	expr-or-braced-init-list-opt	expression	expression-list	expression-list-opt	expression-opt	expression-statement	floating-point-literal	fold-expression	fold-operator	for-range-declaration	for-range-initializer	function-body	function-definition	function-specifier	function-try-block	global-module-fragment	global-module-fragment-opt	handler	handler-seq	handler-seq-opt	header-name	id-expression	identifier-list	inclusive-or-expression	init-capture	init-declarator	init-declarator-list	init-declarator-list-opt	init-statement	init-statement-opt	initializer	initializer-clause	initializer-list	initializer-opt	integer-literal	iteration-statement	jump-statement	labeled-statement	lambda-capture	lambda-capture-opt	lambda-declarator	lambda-expression	lambda-introducer	lambda-specifiers	linkage-specification	literal	literal-operator-id	logical-and-expression	logical-or-expression	mem-initializer	mem-initializer-id	mem-initializer-list	member-declaration	member-declarator	member-declarator-list	member-declarator-list-opt	member-specification	member-specification-opt	module-declaration	module-import-declaration	module-name	module-name-qualifier	module-name-qualifier-opt	module-partition	module-partition-opt	multiplicative-expression	named-namespace-definition	namespace-alias	namespace-alias-definition	namespace-body	namespace-definition	namespace-name	nested-name-specifier	nested-name-specifier-opt	nested-namespace-definition	nested-requirement	new-declarator	new-declarator-opt	new-expression	new-initializer	new-initializer-opt	new-placement	new-placement-opt	new-type-id	nodeclspec-function-declaration	noexcept-expression	noexcept-specifier	noexcept-specifier-opt	noptr-abstract-declarator	noptr-abstract-declarator-opt	noptr-abstract-pack-declarator	noptr-declarator	noptr-new-declarator	opaque-enum-declaration	operator-function-id	overloadable-operator	parameter-declaration	parameter-declaration-clause	parameter-declaration-list	parameter-declaration-list-opt	parameters-and-qualifiers	placeholder-type-specifier	pm-expression	pointer-literal	postfix-expression	primary-expression	private-module-fragment	private-module-fragment-opt	ptr-abstract-declarator	ptr-abstract-declarator-opt	ptr-declarator	ptr-operator	pure-specifier	pure-specifier-opt	qualified-id	qualified-namespace-specifier	ref-qualifier	ref-qualifier-opt	relational-expression	requirement	requirement-body	requirement-parameter-list	requirement-parameter-list-opt	requirement-seq	requires-clause	requires-clause-opt	requires-expression	return-type-requirement	return-type-requirement-opt	selection-statement	shift-expression	simple-capture	simple-declaration	simple-requirement	simple-template-id	simple-type-specifier	statement	statement-seq	statement-seq-opt	static_assert-declaration	storage-class-specifier	string-literal	template-argument	template-argument-list	template-argument-list-opt	template-declaration	template-head	template-id	template-name	template-parameter	template-parameter-list	throw-expression	trailing-return-type	trailing-return-type-opt	translation-unit	try-block	type-constraint	type-constraint-opt	type-id	type-name	type-parameter	type-parameter-key	type-requirement	type-specifier	type-specifier-seq	typedef-name	typename-specifier	ud-suffix	unary-expression	unary-operator	unnamed-namespace-definition	unqualified-id	user-defined-character-literal	user-defined-floating-point-literal	user-defined-integer-literal	user-defined-literal	user-defined-string-literal	using-declaration	using-declarator	using-declarator-list	using-directive	using-enum-declaration	virt-specifier	virt-specifier-seq	virt-specifier-seq-opt	yield-expression	result
%token  COMMA	","
%token  CONSTEXPR	"constexpr"
%token  ELLIPSIS	"..."
%token  EXPORT	"export"
%token  EXTERN	"extern"
%token  IDENTIFIER
%token  INLINE	"inline"
%token  NOEXCEPT	"noexcept"
%token  NOT	"!"
%token  SCOPE	"::"
%token  TEMPLATE	"template"
%token  THIS	"this"
%token  TYPENAME	"typename"
%token  VIRTUAL	"virtual"
%token  PRIVATE	"private"
%token  PROTECTED	"protected"
%token  PUBLIC	"public"
%token  PLUS	"+"
%token  MINUS	"-"
%token  USING	"using"
%token  EQ	"="
%token  SEMICOLON	";"
%token  ALIGNAS	"alignas"
%token  OPEN_PAREN	"("
%token  CLOSE_PAREN	")"
%token  AND	"&"
%token  ASM	"asm"
%token  MULT_EQ	"*="
%token  DIV_EQ	"/="
%token  MOD_EQ	"%="
%token  PLUS_EQ	"+="
%token  MINUS_EQ	"-="
%token  RSHIFT_EQ	">>="
%token  LSHIFT_EQ	"<<="
%token  AND_EQ	"&="
%token  XOR_EQ	"^="
%token  OR_EQ	"|="
%token  OPEN_SQUARE	"["
%token  CLOSE_SQUARE	"]"
%token  COLON	":"
%token  CO_AWAIT	"co_await"
%token  OPEN_BRACE	"{"
%token  CLOSE_BRACE	"}"
%token  BALANCED_TOKEN
%token  BOOLEAN_LITERAL
%token  CHARACTER_LITERAL
%token  CLASS	"class"
%token  STRUCT	"struct"
%token  UNION	"union"
%token  FINAL	"final"
%token  SPACESHIP	"<=>"
%token  CONCEPT	"concept"
%token  QUERY	"?"
%token  AND_AND	"&&"
%token  OR_OR	"||"
%token  OPERATOR	"operator"
%token  CO_RETURN	"co_return"
%token  CONST	"const"
%token  VOLATILE	"volatile"
%token  FRIEND	"friend"
%token  TYPEDEF	"typedef"
%token  CONSTEVAL	"consteval"
%token  CONSTINIT	"constinit"
%token  DECLTYPE	"decltype"
%token  DEREF	"->"
%token  DELETE	"delete"
%token  DOT	"."
%token  ENUM	"enum"
%token  EQ_EQ	"=="
%token  NOT_EQ	"!="
%token  XOR	"^"
%token  LESS	"<"
%token  GREATER	">"
%token  EXPLICIT	"explicit"
%token  FLOATING_POINT_LITERAL
%token  MULT	"*"
%token  DIV	"/"
%token  MOD	"%"
%token  OR	"|"
%token  LSHIFT	"<<"
%token  RSHIFT	">>"
%token  LESS_EQ	"<="
%token  GREATER_EQ	">="
%token  DOT_STAR	".*"
%token  DEREF_STAR	"->*"
%token  DEFAULT	"default"
%token  TRY	"try"
%token  MODULE	"module"
%token  CATCH	"catch"
%token  HEADER_NAME
%token  INTEGER_LITERAL
%token  WHILE	"while"
%token  DO	"do"
%token  FOR	"for"
%token  BREAK	"break"
%token  CONTINUE	"continue"
%token  RETURN	"return"
%token  GOTO	"goto"
%token  CASE	"case"
%token  IMPORT	"import"
%token  NAMESPACE	"namespace"
%token  REQUIRES	"requires"
%token  NEW	"new"
%token  COMPL	"~"
%token  PLUS_PLUS	"++"
%token  MINUS_MINUS	"--"
%token  AUTO	"auto"
%token  POINTER_LITERAL
%token  DYNAMIC_CAST	"dynamic_cast"
%token  STATIC_CAST	"static_cast"
%token  REINTERPRET_CAST	"reinterpret_cast"
%token  CONST_CAST	"const_cast"
%token  TYPEID	"typeid"
%token  IF	"if"
%token  ELSE	"else"
%token  SWITCH	"switch"
%token  CHAR	"char"
%token  CHAR8_T	"char8_t"
%token  CHAR16_T	"char16_t"
%token  CHAR32_T	"char32_t"
%token  WCHAR_T	"wchar_t"
%token  BOOL	"bool"
%token  SHORT	"short"
%token  INT	"int"
%token  LONG	"long"
%token  SIGNED	"signed"
%token  UNSIGNED	"unsigned"
%token  FLOAT	"float"
%token  DOUBLE	"double"
%token  VOID	"void"
%token  STATIC_ASSERT	"static_assert"
%token  STATIC	"static"
%token  THREAD_LOCAL	"thread_local"
%token  MUTABLE	"mutable"
%token  STRING_LITERAL
%token  THROW	"throw"
%token  SIZEOF	"sizeof"
%token  ALIGNOF	"alignof"
%token  USER_DEFINED_CHARACTER_LITERAL
%token  USER_DEFINED_FLOATING_POINT_LITERAL
%token  USER_DEFINED_INTEGER_LITERAL
%token  OVERRIDE	"override"
%token  CO_YIELD	"co_yield"

%left COMMA
	/*%right AND_EQ XOR_EQ OR_EQ LSHIFT_EQ RSHIFT_EQ MULT_EQ DIV_EQ MOD_EQ PLUS_EQ MINUS_EQ EQ CO_YIELD THROW*/
%left OR_OR
%left AND_AND
%left OR
%left XOR
%left AND
%left EQ_EQ NOT_EQ
%left LESS LESS_EQ GREATER GREATER_EQ
%left SPACESHIP
%left LSHIFT RSHIFT
%left PLUS MINUS
%left MULT DIV MOD
%left DOT_STAR DEREF_STAR
	/*%right DELETE NEW CO_WAIT SIZEOF AND MULT*/ 

%left DOT DEREF PLUS_PLUS MINUS_MINUS
%left SCOPE

%start result
%%
COMMA-opt:
	%empty	%merge <merge_function>	{$$=new Node("COMMA-opt");}
	|	COMMA	%merge <merge_function>	{$$=new Node("COMMA-opt");}
	;
CONSTEXPR-opt:
	%empty	%merge <merge_function>	{$$=new Node("CONSTEXPR-opt");}
	|	CONSTEXPR	%merge <merge_function>	{$$=new Node("CONSTEXPR-opt");}
	;
ELLIPSIS-opt:
	%empty	%merge <merge_function>	{$$=new Node("ELLIPSIS-opt");}
	|	ELLIPSIS	%merge <merge_function>	{$$=new Node("ELLIPSIS-opt");}
	;
EXPORT-opt:
	%empty	%merge <merge_function>	{$$=new Node("EXPORT-opt");}
	|	EXPORT	%merge <merge_function>	{$$=new Node("EXPORT-opt");}
	;
EXTERN-opt:
	%empty	%merge <merge_function>	{$$=new Node("EXTERN-opt");}
	|	EXTERN	%merge <merge_function>	{$$=new Node("EXTERN-opt");}
	;
IDENTIFIER-opt:
	%empty	%merge <merge_function>	{$$=new Node("IDENTIFIER-opt");}
	|	IDENTIFIER	%merge <merge_function>	{$$=new Node("IDENTIFIER-opt");}
	;
INLINE-opt:
	%empty	%merge <merge_function>	{$$=new Node("INLINE-opt");}
	|	INLINE	%merge <merge_function>	{$$=new Node("INLINE-opt");}
	;
NOEXCEPT-opt:
	%empty	%merge <merge_function>	{$$=new Node("NOEXCEPT-opt");}
	|	NOEXCEPT	%merge <merge_function>	{$$=new Node("NOEXCEPT-opt");}
	;
NOT-opt:
	%empty	%merge <merge_function>	{$$=new Node("NOT-opt");}
	|	NOT	%merge <merge_function>	{$$=new Node("NOT-opt");}
	;
SCOPE-opt:
	%empty	%merge <merge_function>	{$$=new Node("SCOPE-opt");}
	|	SCOPE	%merge <merge_function>	{$$=new Node("SCOPE-opt");}
	;
TEMPLATE-opt:
	%empty	%merge <merge_function>	{$$=new Node("TEMPLATE-opt");}
	|	TEMPLATE	%merge <merge_function>	{$$=new Node("TEMPLATE-opt");}
	;
THIS-opt:
	%empty	%merge <merge_function>	{$$=new Node("THIS-opt");}
	|	THIS	%merge <merge_function>	{$$=new Node("THIS-opt");}
	;
TYPENAME-opt:
	%empty	%merge <merge_function>	{$$=new Node("TYPENAME-opt");}
	|	TYPENAME	%merge <merge_function>	{$$=new Node("TYPENAME-opt");}
	;
VIRTUAL-opt:
	%empty	%merge <merge_function>	{$$=new Node("VIRTUAL-opt");}
	|	VIRTUAL	%merge <merge_function>	{$$=new Node("VIRTUAL-opt");}
	;
abstract-declarator:
	ptr-abstract-declarator	%merge <merge_function>	{$$=new Node("abstract-declarator",$1);}
	|	noptr-abstract-declarator-opt	parameters-and-qualifiers	trailing-return-type	%merge <merge_function>	{$$=new Node("abstract-declarator",$1,$2,$3);}
	|	abstract-pack-declarator	%merge <merge_function>	{$$=new Node("abstract-declarator",$1);}
	;
abstract-declarator-opt:
	%empty	%merge <merge_function>	{$$=new Node("abstract-declarator-opt");}
	|	abstract-declarator	%merge <merge_function>	{$$=new Node("abstract-declarator-opt",$1);}
	;
abstract-pack-declarator:
	noptr-abstract-pack-declarator	%merge <merge_function>	{$$=new Node("abstract-pack-declarator",$1);}
	|	ptr-operator	abstract-pack-declarator	%merge <merge_function>	{$$=new Node("abstract-pack-declarator",$1,$2);}
	;
access-specifier:
	PRIVATE	%merge <merge_function>	{$$=new Node("access-specifier");}
	|	PROTECTED	%merge <merge_function>	{$$=new Node("access-specifier");}
	|	PUBLIC	%merge <merge_function>	{$$=new Node("access-specifier");}
	;
access-specifier-opt:
	%empty	%merge <merge_function>	{$$=new Node("access-specifier-opt");}
	|	access-specifier	%merge <merge_function>	{$$=new Node("access-specifier-opt",$1);}
	;
additive-expression:
	multiplicative-expression	%merge <merge_function>	{$$=new Node("additive-expression",$1);}
	|	additive-expression	PLUS	multiplicative-expression	%merge <merge_function>	{$$=new Node("additive-expression",$1,$3);}
	|	additive-expression	MINUS	multiplicative-expression	%merge <merge_function>	{$$=new Node("additive-expression",$1,$3);}
	;
alias-declaration:
	USING	IDENTIFIER	attribute-specifier-seq-opt	EQ	defining-type-id	SEMICOLON	%merge <merge_function>	{$$=new Node("alias-declaration",$3,$5);}
	;
alignment-specifier:
	ALIGNAS	OPEN_PAREN	type-id	ELLIPSIS-opt	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("alignment-specifier",$3,$4);}
	|	ALIGNAS	OPEN_PAREN	constant-expression	ELLIPSIS-opt	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("alignment-specifier",$3,$4);}
	;
and-expression:
	equality-expression	%merge <merge_function>	{$$=new Node("and-expression",$1);}
	|	and-expression	AND	equality-expression	%merge <merge_function>	{$$=new Node("and-expression",$1,$3);}
	;
asm-declaration:
	attribute-specifier-seq-opt	ASM	OPEN_PAREN	string-literal	CLOSE_PAREN	SEMICOLON	%merge <merge_function>	{$$=new Node("asm-declaration",$1,$4);}
	;
assignment-expression:
	conditional-expression	%merge <merge_function>	{$$=new Node("assignment-expression",$1);}
	|	yield-expression	%merge <merge_function>	{$$=new Node("assignment-expression",$1);}
	|	throw-expression	%merge <merge_function>	{$$=new Node("assignment-expression",$1);}
	|	logical-or-expression	assignment-operator	initializer-clause	%merge <merge_function>	{$$=new Node("assignment-expression",$1,$2,$3);}
	;
assignment-expression-opt:
	%empty	%merge <merge_function>	{$$=new Node("assignment-expression-opt");}
	|	assignment-expression	%merge <merge_function>	{$$=new Node("assignment-expression-opt",$1);}
	;
assignment-operator:
	EQ	%merge <merge_function>	{$$=new Node("assignment-operator");}
	|	MULT_EQ	%merge <merge_function>	{$$=new Node("assignment-operator");}
	|	DIV_EQ	%merge <merge_function>	{$$=new Node("assignment-operator");}
	|	MOD_EQ	%merge <merge_function>	{$$=new Node("assignment-operator");}
	|	PLUS_EQ	%merge <merge_function>	{$$=new Node("assignment-operator");}
	|	MINUS_EQ	%merge <merge_function>	{$$=new Node("assignment-operator");}
	|	RSHIFT_EQ	%merge <merge_function>	{$$=new Node("assignment-operator");}
	|	LSHIFT_EQ	%merge <merge_function>	{$$=new Node("assignment-operator");}
	|	AND_EQ	%merge <merge_function>	{$$=new Node("assignment-operator");}
	|	XOR_EQ	%merge <merge_function>	{$$=new Node("assignment-operator");}
	|	OR_EQ	%merge <merge_function>	{$$=new Node("assignment-operator");}
	;
attribute:
	attribute-token	attribute-argument-clause-opt	%merge <merge_function>	{$$=new Node("attribute",$1,$2);}
	;
attribute-argument-clause:
	OPEN_PAREN	balanced-token-seq-opt	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("attribute-argument-clause",$2);}
	;
attribute-argument-clause-opt:
	%empty	%merge <merge_function>	{$$=new Node("attribute-argument-clause-opt");}
	|	attribute-argument-clause	%merge <merge_function>	{$$=new Node("attribute-argument-clause-opt",$1);}
	;
attribute-declaration:
	attribute-specifier-seq	SEMICOLON	%merge <merge_function>	{$$=new Node("attribute-declaration",$1);}
	;
attribute-list:
	attribute-opt	%merge <merge_function>	{$$=new Node("attribute-list",$1);}
	|	attribute-list	COMMA	attribute-opt	%merge <merge_function>	{$$=new Node("attribute-list",$1,$3);}
	|	attribute	ELLIPSIS	%merge <merge_function>	{$$=new Node("attribute-list",$1);}
	|	attribute-list	COMMA	attribute	ELLIPSIS	%merge <merge_function>	{$$=new Node("attribute-list",$1,$3);}
	;
attribute-namespace:
	IDENTIFIER	%merge <merge_function>	{$$=new Node("attribute-namespace");}
	;
attribute-opt:
	%empty	%merge <merge_function>	{$$=new Node("attribute-opt");}
	|	attribute	%merge <merge_function>	{$$=new Node("attribute-opt",$1);}
	;
attribute-scoped-token:
	attribute-namespace	SCOPE	IDENTIFIER	%merge <merge_function>	{$$=new Node("attribute-scoped-token",$1);}
	;
attribute-specifier:
	OPEN_SQUARE	OPEN_SQUARE	attribute-using-prefix-opt	attribute-list	CLOSE_SQUARE	CLOSE_SQUARE	%merge <merge_function>	{$$=new Node("attribute-specifier",$3,$4);}
	|	alignment-specifier	%merge <merge_function>	{$$=new Node("attribute-specifier",$1);}
	;
attribute-specifier-seq:
	attribute-specifier-seq-opt	attribute-specifier	%merge <merge_function>	{$$=new Node("attribute-specifier-seq",$1,$2);}
	;
attribute-specifier-seq-opt:
	%empty	%merge <merge_function>	{$$=new Node("attribute-specifier-seq-opt");}
	|	attribute-specifier-seq	%merge <merge_function>	{$$=new Node("attribute-specifier-seq-opt",$1);}
	;
attribute-token:
	IDENTIFIER	%merge <merge_function>	{$$=new Node("attribute-token");}
	|	attribute-scoped-token	%merge <merge_function>	{$$=new Node("attribute-token",$1);}
	;
attribute-using-prefix:
	USING	attribute-namespace	COLON	%merge <merge_function>	{$$=new Node("attribute-using-prefix",$2);}
	;
attribute-using-prefix-opt:
	%empty	%merge <merge_function>	{$$=new Node("attribute-using-prefix-opt");}
	|	attribute-using-prefix	%merge <merge_function>	{$$=new Node("attribute-using-prefix-opt",$1);}
	;
await-expression:
	CO_AWAIT	cast-expression	%merge <merge_function>	{$$=new Node("await-expression",$2);}
	;
balanced-token:
	OPEN_PAREN	balanced-token-seq-opt	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("balanced-token",$2);}
	|	OPEN_SQUARE	balanced-token-seq-opt	CLOSE_SQUARE	%merge <merge_function>	{$$=new Node("balanced-token",$2);}
	|	OPEN_BRACE	balanced-token-seq-opt	CLOSE_BRACE	%merge <merge_function>	{$$=new Node("balanced-token",$2);}
	|	BALANCED_TOKEN	%merge <merge_function>	{$$=new Node("balanced-token");}
	;
balanced-token-seq:
	balanced-token	%merge <merge_function>	{$$=new Node("balanced-token-seq",$1);}
	|	balanced-token-seq	balanced-token	%merge <merge_function>	{$$=new Node("balanced-token-seq",$1,$2);}
	;
balanced-token-seq-opt:
	%empty	%merge <merge_function>	{$$=new Node("balanced-token-seq-opt");}
	|	balanced-token-seq	%merge <merge_function>	{$$=new Node("balanced-token-seq-opt",$1);}
	;
base-clause:
	COLON	base-specifier-list	%merge <merge_function>	{$$=new Node("base-clause",$2);}
	;
base-clause-opt:
	%empty	%merge <merge_function>	{$$=new Node("base-clause-opt");}
	|	base-clause	%merge <merge_function>	{$$=new Node("base-clause-opt",$1);}
	;
base-specifier:
	attribute-specifier-seq-opt	class-or-decltype	%merge <merge_function>	{$$=new Node("base-specifier",$1,$2);}
	|	attribute-specifier-seq-opt	VIRTUAL	access-specifier-opt	class-or-decltype	%merge <merge_function>	{$$=new Node("base-specifier",$1,$3,$4);}
	|	attribute-specifier-seq-opt	access-specifier	VIRTUAL-opt	class-or-decltype	%merge <merge_function>	{$$=new Node("base-specifier",$1,$2,$3,$4);}
	;
base-specifier-list:
	base-specifier	ELLIPSIS-opt	%merge <merge_function>	{$$=new Node("base-specifier-list",$1,$2);}
	|	base-specifier-list	COMMA	base-specifier	ELLIPSIS-opt	%merge <merge_function>	{$$=new Node("base-specifier-list",$1,$3,$4);}
	;
block-declaration:
	simple-declaration	%merge <merge_function>	{$$=new Node("block-declaration",$1);}
	|	asm-declaration	%merge <merge_function>	{$$=new Node("block-declaration",$1);}
	|	namespace-alias-definition	%merge <merge_function>	{$$=new Node("block-declaration",$1);}
	|	using-declaration	%merge <merge_function>	{$$=new Node("block-declaration",$1);}
	|	using-enum-declaration	%merge <merge_function>	{$$=new Node("block-declaration",$1);}
	|	using-directive	%merge <merge_function>	{$$=new Node("block-declaration",$1);}
	|	static_assert-declaration	%merge <merge_function>	{$$=new Node("block-declaration",$1);}
	|	alias-declaration	%merge <merge_function>	{$$=new Node("block-declaration",$1);}
	|	opaque-enum-declaration	%merge <merge_function>	{$$=new Node("block-declaration",$1);}
	;
boolean-literal:
	BOOLEAN_LITERAL	%merge <merge_function>	{$$=new Node("boolean-literal");}
	;
brace-or-equal-initializer:
	EQ	initializer-clause	%merge <merge_function>	{$$=new Node("brace-or-equal-initializer",$2);}
	|	braced-init-list	%merge <merge_function>	{$$=new Node("brace-or-equal-initializer",$1);}
	;
brace-or-equal-initializer-opt:
	%empty	%merge <merge_function>	{$$=new Node("brace-or-equal-initializer-opt");}
	|	brace-or-equal-initializer	%merge <merge_function>	{$$=new Node("brace-or-equal-initializer-opt",$1);}
	;
braced-init-list:
	OPEN_BRACE	initializer-list	COMMA-opt	CLOSE_BRACE	%merge <merge_function>	{$$=new Node("braced-init-list",$2,$3);}
	|	OPEN_BRACE	designated-initializer-list	COMMA-opt	CLOSE_BRACE	%merge <merge_function>	{$$=new Node("braced-init-list",$2,$3);}
	|	OPEN_BRACE	CLOSE_BRACE	%merge <merge_function>	{$$=new Node("braced-init-list");}
	;
capture:
	simple-capture	%merge <merge_function>	{$$=new Node("capture",$1);}
	|	init-capture	%merge <merge_function>	{$$=new Node("capture",$1);}
	;
capture-default:
	AND	%merge <merge_function>	{$$=new Node("capture-default");}
	|	EQ	%merge <merge_function>	{$$=new Node("capture-default");}
	;
capture-list:
	capture	%merge <merge_function>	{$$=new Node("capture-list",$1);}
	|	capture-list	COMMA	capture	%merge <merge_function>	{$$=new Node("capture-list",$1,$3);}
	;
cast-expression:
	unary-expression	%merge <merge_function>	{$$=new Node("cast-expression",$1);}
	|	OPEN_PAREN	type-id	CLOSE_PAREN	cast-expression	%merge <merge_function>	{$$=new Node("cast-expression",$2,$4);}
	;
character-literal:
	CHARACTER_LITERAL	%merge <merge_function>	{$$=new Node("character-literal");}
	;
class-head:
	class-key	attribute-specifier-seq-opt	class-head-name	class-virt-specifier-opt	base-clause-opt	%merge <merge_function>	{$$=new Node("class-head",$1,$2,$3,$4,$5);}
	|	class-key	attribute-specifier-seq-opt	base-clause-opt	%merge <merge_function>	{$$=new Node("class-head",$1,$2,$3);}
	;
class-head-name:
	nested-name-specifier-opt	class-name	%merge <merge_function>	{$$=new Node("class-head-name",$1,$2);}
	;
class-key:
	CLASS	%merge <merge_function>	{$$=new Node("class-key");}
	|	STRUCT	%merge <merge_function>	{$$=new Node("class-key");}
	|	UNION	%merge <merge_function>	{$$=new Node("class-key");}
	;
class-name:
	IDENTIFIER	%merge <merge_function>	{$$=new Node("class-name");}
	|	simple-template-id	%merge <merge_function>	{$$=new Node("class-name",$1);}
	;
class-or-decltype:
	nested-name-specifier-opt	type-name	%merge <merge_function>	{$$=new Node("class-or-decltype",$1,$2);}
	|	nested-name-specifier	TEMPLATE	simple-template-id	%merge <merge_function>	{$$=new Node("class-or-decltype",$1,$3);}
	|	decltype-specifier	%merge <merge_function>	{$$=new Node("class-or-decltype",$1);}
	;
class-specifier:
	class-head	OPEN_BRACE	member-specification-opt	CLOSE_BRACE	%merge <merge_function>	{$$=new Node("class-specifier",$1,$3);}
	;
class-virt-specifier:
	FINAL	%merge <merge_function>	{$$=new Node("class-virt-specifier");}
	;
class-virt-specifier-opt:
	%empty	%merge <merge_function>	{$$=new Node("class-virt-specifier-opt");}
	|	class-virt-specifier	%merge <merge_function>	{$$=new Node("class-virt-specifier-opt",$1);}
	;
compare-expression:
	shift-expression	%merge <merge_function>	{$$=new Node("compare-expression",$1);}
	|	compare-expression	SPACESHIP	shift-expression	%merge <merge_function>	{$$=new Node("compare-expression",$1,$3);}
	;
compound-requirement:
	OPEN_BRACE	expression	CLOSE_BRACE	NOEXCEPT-opt	return-type-requirement-opt	SEMICOLON	%merge <merge_function>	{$$=new Node("compound-requirement",$2,$4,$5);}
	;
compound-statement:
	OPEN_BRACE	statement-seq-opt	CLOSE_BRACE	%merge <merge_function>	{$$=new Node("compound-statement",$2);}
	;
concept-definition:
	CONCEPT	concept-name	EQ	constraint-expression	SEMICOLON	%merge <merge_function>	{$$=new Node("concept-definition",$2,$4);}
	;
concept-name:
	IDENTIFIER	%merge <merge_function>	{$$=new Node("concept-name");}
	;
condition:
	expression	%merge <merge_function>	{$$=new Node("condition",$1);}
	|	attribute-specifier-seq-opt	decl-specifier-seq	declarator	brace-or-equal-initializer	%merge <merge_function>	{$$=new Node("condition",$1,$2,$3,$4);}
	;
condition-opt:
	%empty	%merge <merge_function>	{$$=new Node("condition-opt");}
	|	condition	%merge <merge_function>	{$$=new Node("condition-opt",$1);}
	;
conditional-expression:
	logical-or-expression	%merge <merge_function>	{$$=new Node("conditional-expression",$1);}
	|	logical-or-expression	QUERY	expression	COLON	assignment-expression	%merge <merge_function>	{$$=new Node("conditional-expression",$1,$3,$5);}
	;
constant-expression:
	conditional-expression	%merge <merge_function>	{$$=new Node("constant-expression",$1);}
	;
constant-expression-opt:
	%empty	%merge <merge_function>	{$$=new Node("constant-expression-opt");}
	|	constant-expression	%merge <merge_function>	{$$=new Node("constant-expression-opt",$1);}
	;
constraint-expression:
	logical-or-expression	%merge <merge_function>	{$$=new Node("constraint-expression",$1);}
	;
constraint-logical-and-expression:
	primary-expression	%merge <merge_function>	{$$=new Node("constraint-logical-and-expression",$1);}
	|	constraint-logical-and-expression	AND_AND	primary-expression	%merge <merge_function>	{$$=new Node("constraint-logical-and-expression",$1,$3);}
	;
constraint-logical-or-expression:
	constraint-logical-and-expression	%merge <merge_function>	{$$=new Node("constraint-logical-or-expression",$1);}
	|	constraint-logical-or-expression	OR_OR	constraint-logical-and-expression	%merge <merge_function>	{$$=new Node("constraint-logical-or-expression",$1,$3);}
	;
conversion-declarator:
	ptr-operator	conversion-declarator-opt	%merge <merge_function>	{$$=new Node("conversion-declarator",$1,$2);}
	;
conversion-declarator-opt:
	%empty	%merge <merge_function>	{$$=new Node("conversion-declarator-opt");}
	|	conversion-declarator	%merge <merge_function>	{$$=new Node("conversion-declarator-opt",$1);}
	;
conversion-function-id:
	OPERATOR	conversion-type-id	%merge <merge_function>	{$$=new Node("conversion-function-id",$2);}
	;
conversion-type-id:
	type-specifier-seq	conversion-declarator-opt	%merge <merge_function>	{$$=new Node("conversion-type-id",$1,$2);}
	;
coroutine-return-statement:
	CO_RETURN	expr-or-braced-init-list-opt	SEMICOLON	%merge <merge_function>	{$$=new Node("coroutine-return-statement",$2);}
	;
ctor-initializer:
	COLON	mem-initializer-list	%merge <merge_function>	{$$=new Node("ctor-initializer",$2);}
	;
ctor-initializer-opt:
	%empty	%merge <merge_function>	{$$=new Node("ctor-initializer-opt");}
	|	ctor-initializer	%merge <merge_function>	{$$=new Node("ctor-initializer-opt",$1);}
	;
cv-qualifier:
	CONST	%merge <merge_function>	{$$=new Node("cv-qualifier");}
	|	VOLATILE	%merge <merge_function>	{$$=new Node("cv-qualifier");}
	;
cv-qualifier-seq:
	cv-qualifier	cv-qualifier-seq-opt	%merge <merge_function>	{$$=new Node("cv-qualifier-seq",$1,$2);}
	;
cv-qualifier-seq-opt:
	%empty	%merge <merge_function>	{$$=new Node("cv-qualifier-seq-opt");}
	|	cv-qualifier-seq	%merge <merge_function>	{$$=new Node("cv-qualifier-seq-opt",$1);}
	;
decl-specifier:
	storage-class-specifier	%merge <merge_function>	{$$=new Node("decl-specifier",$1);}
	|	defining-type-specifier	%merge <merge_function>	{$$=new Node("decl-specifier",$1);}
	|	function-specifier	%merge <merge_function>	{$$=new Node("decl-specifier",$1);}
	|	FRIEND	%merge <merge_function>	{$$=new Node("decl-specifier");}
	|	TYPEDEF	%merge <merge_function>	{$$=new Node("decl-specifier");}
	|	CONSTEXPR	%merge <merge_function>	{$$=new Node("decl-specifier");}
	|	CONSTEVAL	%merge <merge_function>	{$$=new Node("decl-specifier");}
	|	CONSTINIT	%merge <merge_function>	{$$=new Node("decl-specifier");}
	|	INLINE	%merge <merge_function>	{$$=new Node("decl-specifier");}
	;
decl-specifier-seq:
	decl-specifier	attribute-specifier-seq-opt	%merge <merge_function>	{$$=new Node("decl-specifier-seq",$1,$2);}
	|	decl-specifier	decl-specifier-seq	%merge <merge_function>	{$$=new Node("decl-specifier-seq",$1,$2);}
	;
decl-specifier-seq-opt:
	%empty	%merge <merge_function>	{$$=new Node("decl-specifier-seq-opt");}
	|	decl-specifier-seq	%merge <merge_function>	{$$=new Node("decl-specifier-seq-opt",$1);}
	;
declaration:
	block-declaration	%merge <merge_function>	{$$=new Node("declaration",$1);}
	|	nodeclspec-function-declaration	%merge <merge_function>	{$$=new Node("declaration",$1);}
	|	function-definition	%merge <merge_function>	{$$=new Node("declaration",$1);}
	|	template-declaration	%merge <merge_function>	{$$=new Node("declaration",$1);}
	|	deduction-guide	%merge <merge_function>	{$$=new Node("declaration",$1);}
	|	explicit-instantiation	%merge <merge_function>	{$$=new Node("declaration",$1);}
	|	explicit-specialization	%merge <merge_function>	{$$=new Node("declaration",$1);}
	|	export-declaration	%merge <merge_function>	{$$=new Node("declaration",$1);}
	|	linkage-specification	%merge <merge_function>	{$$=new Node("declaration",$1);}
	|	namespace-definition	%merge <merge_function>	{$$=new Node("declaration",$1);}
	|	empty-declaration	%merge <merge_function>	{$$=new Node("declaration",$1);}
	|	attribute-declaration	%merge <merge_function>	{$$=new Node("declaration",$1);}
	|	module-import-declaration	%merge <merge_function>	{$$=new Node("declaration",$1);}
	;
declaration-seq:
	declaration	%merge <merge_function>	{$$=new Node("declaration-seq",$1);}
	|	declaration-seq	declaration	%merge <merge_function>	{$$=new Node("declaration-seq",$1,$2);}
	;
declaration-seq-opt:
	%empty	%merge <merge_function>	{$$=new Node("declaration-seq-opt");}
	|	declaration-seq	%merge <merge_function>	{$$=new Node("declaration-seq-opt",$1);}
	;
declaration-statement:
	block-declaration	%merge <merge_function>	{$$=new Node("declaration-statement",$1);}
	;
declarator:
	ptr-declarator	%merge <merge_function>	{$$=new Node("declarator",$1);}
	|	noptr-declarator	parameters-and-qualifiers	trailing-return-type	%merge <merge_function>	{$$=new Node("declarator",$1,$2,$3);}
	;
declarator-id:
	ELLIPSIS-opt	id-expression	%merge <merge_function>	{$$=new Node("declarator-id",$1,$2);}
	;
decltype-specifier:
	DECLTYPE	OPEN_PAREN	expression	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("decltype-specifier",$3);}
	;
deduction-guide:
	explicit-specifier-opt	template-name	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	DEREF	simple-template-id	SEMICOLON	%merge <merge_function>	{$$=new Node("deduction-guide",$1,$2,$4,$7);}
	;
defining-type-id:
	defining-type-specifier-seq	abstract-declarator-opt	%merge <merge_function>	{$$=new Node("defining-type-id",$1,$2);}
	;
defining-type-specifier:
	type-specifier	%merge <merge_function>	{$$=new Node("defining-type-specifier",$1);}
	|	class-specifier	%merge <merge_function>	{$$=new Node("defining-type-specifier",$1);}
	|	enum-specifier	%merge <merge_function>	{$$=new Node("defining-type-specifier",$1);}
	;
defining-type-specifier-seq:
	defining-type-specifier	attribute-specifier-seq-opt	%merge <merge_function>	{$$=new Node("defining-type-specifier-seq",$1,$2);}
	|	defining-type-specifier	defining-type-specifier-seq	%merge <merge_function>	{$$=new Node("defining-type-specifier-seq",$1,$2);}
	;
delete-expression:
	SCOPE-opt	DELETE	cast-expression	%merge <merge_function>	{$$=new Node("delete-expression",$1,$3);}
	|	SCOPE-opt	DELETE	OPEN_SQUARE	CLOSE_SQUARE	cast-expression	%merge <merge_function>	{$$=new Node("delete-expression",$1,$5);}
	;
designated-initializer-clause:
	designator	brace-or-equal-initializer	%merge <merge_function>	{$$=new Node("designated-initializer-clause",$1,$2);}
	;
designated-initializer-list:
	designated-initializer-clause	%merge <merge_function>	{$$=new Node("designated-initializer-list",$1);}
	|	designated-initializer-list	COMMA	designated-initializer-clause	%merge <merge_function>	{$$=new Node("designated-initializer-list",$1,$3);}
	;
designator:
	DOT	IDENTIFIER	%merge <merge_function>	{$$=new Node("designator");}
	;
elaborated-enum-specifier:
	ENUM	nested-name-specifier-opt	IDENTIFIER	%merge <merge_function>	{$$=new Node("elaborated-enum-specifier",$2);}
	;
elaborated-type-specifier:
	class-key	attribute-specifier-seq-opt	nested-name-specifier-opt	IDENTIFIER	%merge <merge_function>	{$$=new Node("elaborated-type-specifier",$1,$2,$3);}
	|	class-key	simple-template-id	%merge <merge_function>	{$$=new Node("elaborated-type-specifier",$1,$2);}
	|	class-key	nested-name-specifier	TEMPLATE-opt	simple-template-id	%merge <merge_function>	{$$=new Node("elaborated-type-specifier",$1,$2,$3,$4);}
	|	elaborated-enum-specifier	%merge <merge_function>	{$$=new Node("elaborated-type-specifier",$1);}
	;
empty-declaration:
	SEMICOLON	%merge <merge_function>	{$$=new Node("empty-declaration");}
	;
enclosing-namespace-specifier:
	IDENTIFIER	%merge <merge_function>	{$$=new Node("enclosing-namespace-specifier");}
	|	enclosing-namespace-specifier	SCOPE	INLINE-opt	IDENTIFIER	%merge <merge_function>	{$$=new Node("enclosing-namespace-specifier",$1,$3);}
	;
enum-base:
	COLON	type-specifier-seq	%merge <merge_function>	{$$=new Node("enum-base",$2);}
	;
enum-base-opt:
	%empty	%merge <merge_function>	{$$=new Node("enum-base-opt");}
	|	enum-base	%merge <merge_function>	{$$=new Node("enum-base-opt",$1);}
	;
enum-head:
	enum-key	attribute-specifier-seq-opt	enum-head-name-opt	enum-base-opt	%merge <merge_function>	{$$=new Node("enum-head",$1,$2,$3,$4);}
	;
enum-head-name:
	nested-name-specifier-opt	IDENTIFIER	%merge <merge_function>	{$$=new Node("enum-head-name",$1);}
	;
enum-head-name-opt:
	%empty	%merge <merge_function>	{$$=new Node("enum-head-name-opt");}
	|	enum-head-name	%merge <merge_function>	{$$=new Node("enum-head-name-opt",$1);}
	;
enum-key:
	ENUM	%merge <merge_function>	{$$=new Node("enum-key");}
	|	ENUM	CLASS	%merge <merge_function>	{$$=new Node("enum-key");}
	|	ENUM	STRUCT	%merge <merge_function>	{$$=new Node("enum-key");}
	;
enum-name:
	IDENTIFIER	%merge <merge_function>	{$$=new Node("enum-name");}
	;
enum-specifier:
	enum-head	OPEN_BRACE	enumerator-list-opt	CLOSE_BRACE	%merge <merge_function>	{$$=new Node("enum-specifier",$1,$3);}
	|	enum-head	OPEN_BRACE	enumerator-list	COMMA	CLOSE_BRACE	%merge <merge_function>	{$$=new Node("enum-specifier",$1,$3);}
	;
enumerator:
	IDENTIFIER	attribute-specifier-seq-opt	%merge <merge_function>	{$$=new Node("enumerator",$2);}
	;
enumerator-definition:
	enumerator	%merge <merge_function>	{$$=new Node("enumerator-definition",$1);}
	|	enumerator	EQ	constant-expression	%merge <merge_function>	{$$=new Node("enumerator-definition",$1,$3);}
	;
enumerator-list:
	enumerator-definition	%merge <merge_function>	{$$=new Node("enumerator-list",$1);}
	|	enumerator-list	COMMA	enumerator-definition	%merge <merge_function>	{$$=new Node("enumerator-list",$1,$3);}
	;
enumerator-list-opt:
	%empty	%merge <merge_function>	{$$=new Node("enumerator-list-opt");}
	|	enumerator-list	%merge <merge_function>	{$$=new Node("enumerator-list-opt",$1);}
	;
equality-expression:
	relational-expression	%merge <merge_function>	{$$=new Node("equality-expression",$1);}
	|	equality-expression	EQ_EQ	relational-expression	%merge <merge_function>	{$$=new Node("equality-expression",$1,$3);}
	|	equality-expression	NOT_EQ	relational-expression	%merge <merge_function>	{$$=new Node("equality-expression",$1,$3);}
	;
exception-declaration:
	attribute-specifier-seq-opt	type-specifier-seq	declarator	%merge <merge_function>	{$$=new Node("exception-declaration",$1,$2,$3);}
	|	attribute-specifier-seq-opt	type-specifier-seq	abstract-declarator-opt	%merge <merge_function>	{$$=new Node("exception-declaration",$1,$2,$3);}
	|	ELLIPSIS	%merge <merge_function>	{$$=new Node("exception-declaration");}
	;
exclusive-or-expression:
	and-expression	%merge <merge_function>	{$$=new Node("exclusive-or-expression",$1);}
	|	exclusive-or-expression	XOR	and-expression	%merge <merge_function>	{$$=new Node("exclusive-or-expression",$1,$3);}
	;
explicit-instantiation:
	EXTERN-opt	TEMPLATE	declaration	%merge <merge_function>	{$$=new Node("explicit-instantiation",$1,$3);}
	;
explicit-specialization:
	TEMPLATE	LESS	GREATER	declaration	%merge <merge_function>	{$$=new Node("explicit-specialization",$4);}
	;
explicit-specifier:
	EXPLICIT	OPEN_PAREN	constant-expression	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("explicit-specifier",$3);}
	|	EXPLICIT	%merge <merge_function>	{$$=new Node("explicit-specifier");}
	;
explicit-specifier-opt:
	%empty	%merge <merge_function>	{$$=new Node("explicit-specifier-opt");}
	|	explicit-specifier	%merge <merge_function>	{$$=new Node("explicit-specifier-opt",$1);}
	;
export-declaration:
	EXPORT	declaration	%merge <merge_function>	{$$=new Node("export-declaration",$2);}
	|	EXPORT	OPEN_BRACE	declaration-seq-opt	CLOSE_BRACE	%merge <merge_function>	{$$=new Node("export-declaration",$3);}
	|	EXPORT	module-import-declaration	%merge <merge_function>	{$$=new Node("export-declaration",$2);}
	;
expr-or-braced-init-list:
	expression	%merge <merge_function>	{$$=new Node("expr-or-braced-init-list",$1);}
	|	braced-init-list	%merge <merge_function>	{$$=new Node("expr-or-braced-init-list",$1);}
	;
expr-or-braced-init-list-opt:
	%empty	%merge <merge_function>	{$$=new Node("expr-or-braced-init-list-opt");}
	|	expr-or-braced-init-list	%merge <merge_function>	{$$=new Node("expr-or-braced-init-list-opt",$1);}
	;
expression:
	assignment-expression	%merge <merge_function>	{$$=new Node("expression",$1);}
	|	expression	COMMA	assignment-expression	%merge <merge_function>	{$$=new Node("expression",$1,$3);}
	;
expression-list:
	initializer-list	%merge <merge_function>	{$$=new Node("expression-list",$1);}
	;
expression-list-opt:
	%empty	%merge <merge_function>	{$$=new Node("expression-list-opt");}
	|	expression-list	%merge <merge_function>	{$$=new Node("expression-list-opt",$1);}
	;
expression-opt:
	%empty	%merge <merge_function>	{$$=new Node("expression-opt");}
	|	expression	%merge <merge_function>	{$$=new Node("expression-opt",$1);}
	;
expression-statement:
	expression-opt	SEMICOLON	%merge <merge_function>	{$$=new Node("expression-statement",$1);}
	;
floating-point-literal:
	FLOATING_POINT_LITERAL	%merge <merge_function>	{$$=new Node("floating-point-literal");}
	;
fold-expression:
	OPEN_PAREN	cast-expression	fold-operator	ELLIPSIS	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("fold-expression",$2,$3);}
	|	OPEN_PAREN	ELLIPSIS	fold-operator	cast-expression	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("fold-expression",$3,$4);}
	|	OPEN_PAREN	cast-expression	fold-operator	ELLIPSIS	fold-operator	cast-expression	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("fold-expression",$2,$3,$5,$6);}
	;
fold-operator:
	PLUS	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	MINUS	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	MULT	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	DIV	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	MOD	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	XOR	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	AND	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	OR	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	LSHIFT	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	RSHIFT	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	PLUS_EQ	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	MINUS_EQ	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	MULT_EQ	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	DIV_EQ	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	MOD_EQ	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	XOR_EQ	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	AND_EQ	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	OR_EQ	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	LSHIFT_EQ	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	RSHIFT_EQ	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	EQ	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	EQ_EQ	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	NOT_EQ	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	LESS	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	GREATER	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	LESS_EQ	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	GREATER_EQ	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	AND_AND	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	OR_OR	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	COMMA	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	DOT_STAR	%merge <merge_function>	{$$=new Node("fold-operator");}
	|	DEREF_STAR	%merge <merge_function>	{$$=new Node("fold-operator");}
	;
for-range-declaration:
	attribute-specifier-seq-opt	decl-specifier-seq	declarator	%merge <merge_function>	{$$=new Node("for-range-declaration",$1,$2,$3);}
	|	attribute-specifier-seq-opt	decl-specifier-seq	ref-qualifier-opt	OPEN_SQUARE	identifier-list	CLOSE_SQUARE	%merge <merge_function>	{$$=new Node("for-range-declaration",$1,$2,$3,$5);}
	;
for-range-initializer:
	expr-or-braced-init-list	%merge <merge_function>	{$$=new Node("for-range-initializer",$1);}
	;
function-body:
	ctor-initializer-opt	compound-statement	%merge <merge_function>	{$$=new Node("function-body",$1,$2);}
	|	function-try-block	%merge <merge_function>	{$$=new Node("function-body",$1);}
	|	EQ	DEFAULT	SEMICOLON	%merge <merge_function>	{$$=new Node("function-body");}
	|	EQ	DELETE	SEMICOLON	%merge <merge_function>	{$$=new Node("function-body");}
	;
function-definition:
	attribute-specifier-seq-opt	decl-specifier-seq-opt	declarator	virt-specifier-seq-opt	function-body	%merge <merge_function>	{$$=new Node("function-definition",$1,$2,$3,$4,$5);}
	|	attribute-specifier-seq-opt	decl-specifier-seq-opt	declarator	requires-clause	function-body	%merge <merge_function>	{$$=new Node("function-definition",$1,$2,$3,$4,$5);}
	;
function-specifier:
	VIRTUAL	%merge <merge_function>	{$$=new Node("function-specifier");}
	|	explicit-specifier	%merge <merge_function>	{$$=new Node("function-specifier",$1);}
	;
function-try-block:
	TRY	ctor-initializer-opt	compound-statement	handler-seq	%merge <merge_function>	{$$=new Node("function-try-block",$2,$3,$4);}
	;
global-module-fragment:
	MODULE	SEMICOLON	declaration-seq-opt	%merge <merge_function>	{$$=new Node("global-module-fragment",$3);}
	;
global-module-fragment-opt:
	%empty	%merge <merge_function>	{$$=new Node("global-module-fragment-opt");}
	|	global-module-fragment	%merge <merge_function>	{$$=new Node("global-module-fragment-opt",$1);}
	;
handler:
	CATCH	OPEN_PAREN	exception-declaration	CLOSE_PAREN	compound-statement	%merge <merge_function>	{$$=new Node("handler",$3,$5);}
	;
handler-seq:
	handler	handler-seq-opt	%merge <merge_function>	{$$=new Node("handler-seq",$1,$2);}
	;
handler-seq-opt:
	%empty	%merge <merge_function>	{$$=new Node("handler-seq-opt");}
	|	handler-seq	%merge <merge_function>	{$$=new Node("handler-seq-opt",$1);}
	;
header-name:
	HEADER_NAME	%merge <merge_function>	{$$=new Node("header-name");}
	;
id-expression:
	unqualified-id	%merge <merge_function>	{$$=new Node("id-expression",$1);}
	|	qualified-id	%merge <merge_function>	{$$=new Node("id-expression",$1);}
	;
identifier-list:
	IDENTIFIER	%merge <merge_function>	{$$=new Node("identifier-list");}
	|	identifier-list	COMMA	IDENTIFIER	%merge <merge_function>	{$$=new Node("identifier-list",$1);}
	;
inclusive-or-expression:
	exclusive-or-expression	%merge <merge_function>	{$$=new Node("inclusive-or-expression",$1);}
	|	inclusive-or-expression	OR	exclusive-or-expression	%merge <merge_function>	{$$=new Node("inclusive-or-expression",$1,$3);}
	;
init-capture:
	ELLIPSIS-opt	IDENTIFIER	initializer	%merge <merge_function>	{$$=new Node("init-capture",$1,$3);}
	|	AND	ELLIPSIS-opt	IDENTIFIER	initializer	%merge <merge_function>	{$$=new Node("init-capture",$2,$4);}
	;
init-declarator:
	declarator	initializer-opt	%merge <merge_function>	{$$=new Node("init-declarator",$1,$2);}
	|	declarator	requires-clause	%merge <merge_function>	{$$=new Node("init-declarator",$1,$2);}
	;
init-declarator-list:
	init-declarator	%merge <merge_function>	{$$=new Node("init-declarator-list",$1);}
	|	init-declarator-list	COMMA	init-declarator	%merge <merge_function>	{$$=new Node("init-declarator-list",$1,$3);}
	;
init-declarator-list-opt:
	%empty	%merge <merge_function>	{$$=new Node("init-declarator-list-opt");}
	|	init-declarator-list	%merge <merge_function>	{$$=new Node("init-declarator-list-opt",$1);}
	;
init-statement:
	expression-statement	%merge <merge_function>	{$$=new Node("init-statement",$1);}
	|	simple-declaration	%merge <merge_function>	{$$=new Node("init-statement",$1);}
	|	alias-declaration	%merge <merge_function>	{$$=new Node("init-statement",$1);}
	;
init-statement-opt:
	%empty	%merge <merge_function>	{$$=new Node("init-statement-opt");}
	|	init-statement	%merge <merge_function>	{$$=new Node("init-statement-opt",$1);}
	;
initializer:
	brace-or-equal-initializer	%merge <merge_function>	{$$=new Node("initializer",$1);}
	|	OPEN_PAREN	expression-list	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("initializer",$2);}
	;
initializer-clause:
	assignment-expression	%merge <merge_function>	{$$=new Node("initializer-clause",$1);}
	|	braced-init-list	%merge <merge_function>	{$$=new Node("initializer-clause",$1);}
	;
initializer-list:
	initializer-clause	ELLIPSIS-opt	%merge <merge_function>	{$$=new Node("initializer-list",$1,$2);}
	|	initializer-list	COMMA	initializer-clause	ELLIPSIS-opt	%merge <merge_function>	{$$=new Node("initializer-list",$1,$3,$4);}
	;
initializer-opt:
	%empty	%merge <merge_function>	{$$=new Node("initializer-opt");}
	|	initializer	%merge <merge_function>	{$$=new Node("initializer-opt",$1);}
	;
integer-literal:
	INTEGER_LITERAL	%merge <merge_function>	{$$=new Node("integer-literal");}
	;
iteration-statement:
	WHILE	OPEN_PAREN	condition	CLOSE_PAREN	statement	%merge <merge_function>	{$$=new Node("iteration-statement",$3,$5);}
	|	DO	statement	WHILE	OPEN_PAREN	expression	CLOSE_PAREN	SEMICOLON	%merge <merge_function>	{$$=new Node("iteration-statement",$2,$5);}
	|	FOR	OPEN_PAREN	init-statement	condition-opt	SEMICOLON	expression-opt	CLOSE_PAREN	statement	%merge <merge_function>	{$$=new Node("iteration-statement",$3,$4,$6,$8);}
	|	FOR	OPEN_PAREN	init-statement-opt	for-range-declaration	COLON	for-range-initializer	CLOSE_PAREN	statement	%merge <merge_function>	{$$=new Node("iteration-statement",$3,$4,$6,$8);}
	;
jump-statement:
	BREAK	SEMICOLON	%merge <merge_function>	{$$=new Node("jump-statement");}
	|	CONTINUE	SEMICOLON	%merge <merge_function>	{$$=new Node("jump-statement");}
	|	RETURN	expr-or-braced-init-list-opt	SEMICOLON	%merge <merge_function>	{$$=new Node("jump-statement",$2);}
	|	coroutine-return-statement	%merge <merge_function>	{$$=new Node("jump-statement",$1);}
	|	GOTO	IDENTIFIER	SEMICOLON	%merge <merge_function>	{$$=new Node("jump-statement");}
	;
labeled-statement:
	attribute-specifier-seq-opt	IDENTIFIER	COLON	statement	%merge <merge_function>	{$$=new Node("labeled-statement",$1,$4);}
	|	attribute-specifier-seq-opt	CASE	constant-expression	COLON	statement	%merge <merge_function>	{$$=new Node("labeled-statement",$1,$3,$5);}
	|	attribute-specifier-seq-opt	DEFAULT	COLON	statement	%merge <merge_function>	{$$=new Node("labeled-statement",$1,$4);}
	;
lambda-capture:
	capture-default	%merge <merge_function>	{$$=new Node("lambda-capture",$1);}
	|	capture-list	%merge <merge_function>	{$$=new Node("lambda-capture",$1);}
	|	capture-default	COMMA	capture-list	%merge <merge_function>	{$$=new Node("lambda-capture",$1,$3);}
	;
lambda-capture-opt:
	%empty	%merge <merge_function>	{$$=new Node("lambda-capture-opt");}
	|	lambda-capture	%merge <merge_function>	{$$=new Node("lambda-capture-opt",$1);}
	;
lambda-declarator:
	lambda-specifiers	%merge <merge_function>	{$$=new Node("lambda-declarator",$1);}
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	lambda-specifiers	requires-clause-opt	%merge <merge_function>	{$$=new Node("lambda-declarator",$2,$4,$5);}
	;
lambda-expression:
	lambda-introducer	lambda-declarator	compound-statement	%merge <merge_function>	{$$=new Node("lambda-expression",$1,$2,$3);}
	|	lambda-introducer	LESS	template-parameter-list	GREATER	requires-clause-opt	lambda-declarator	compound-statement	%merge <merge_function>	{$$=new Node("lambda-expression",$1,$3,$5,$6,$7);}
	;
lambda-introducer:
	OPEN_SQUARE	lambda-capture-opt	CLOSE_SQUARE	%merge <merge_function>	{$$=new Node("lambda-introducer",$2);}
	;
lambda-specifiers:
	decl-specifier-seq-opt	noexcept-specifier-opt	attribute-specifier-seq-opt	trailing-return-type-opt	%merge <merge_function>	{$$=new Node("lambda-specifiers",$1,$2,$3,$4);}
	;
linkage-specification:
	EXTERN	string-literal	OPEN_BRACE	declaration-seq-opt	CLOSE_BRACE	%merge <merge_function>	{$$=new Node("linkage-specification",$2,$4);}
	|	EXTERN	string-literal	declaration	%merge <merge_function>	{$$=new Node("linkage-specification",$2,$3);}
	;
literal:
	integer-literal	%merge <merge_function>	{$$=new Node("literal",$1);}
	|	character-literal	%merge <merge_function>	{$$=new Node("literal",$1);}
	|	floating-point-literal	%merge <merge_function>	{$$=new Node("literal",$1);}
	|	string-literal	%merge <merge_function>	{$$=new Node("literal",$1);}
	|	boolean-literal	%merge <merge_function>	{$$=new Node("literal",$1);}
	|	pointer-literal	%merge <merge_function>	{$$=new Node("literal",$1);}
	|	user-defined-literal	%merge <merge_function>	{$$=new Node("literal",$1);}
	;
literal-operator-id:
	OPERATOR	string-literal	IDENTIFIER	%merge <merge_function>	{$$=new Node("literal-operator-id",$2);}
	|	OPERATOR	user-defined-string-literal	%merge <merge_function>	{$$=new Node("literal-operator-id",$2);}
	;
logical-and-expression:
	inclusive-or-expression	%merge <merge_function>	{$$=new Node("logical-and-expression",$1);}
	|	logical-and-expression	AND_AND	inclusive-or-expression	%merge <merge_function>	{$$=new Node("logical-and-expression",$1,$3);}
	;
logical-or-expression:
	logical-and-expression	%merge <merge_function>	{$$=new Node("logical-or-expression",$1);}
	|	logical-or-expression	OR_OR	logical-and-expression	%merge <merge_function>	{$$=new Node("logical-or-expression",$1,$3);}
	;
mem-initializer:
	mem-initializer-id	OPEN_PAREN	expression-list-opt	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("mem-initializer",$1,$3);}
	|	mem-initializer-id	braced-init-list	%merge <merge_function>	{$$=new Node("mem-initializer",$1,$2);}
	;
mem-initializer-id:
	class-or-decltype	%merge <merge_function>	{$$=new Node("mem-initializer-id",$1);}
	|	IDENTIFIER	%merge <merge_function>	{$$=new Node("mem-initializer-id");}
	;
mem-initializer-list:
	mem-initializer	ELLIPSIS-opt	%merge <merge_function>	{$$=new Node("mem-initializer-list",$1,$2);}
	|	mem-initializer-list	COMMA	mem-initializer	ELLIPSIS-opt	%merge <merge_function>	{$$=new Node("mem-initializer-list",$1,$3,$4);}
	;
member-declaration:
	attribute-specifier-seq-opt	decl-specifier-seq-opt	member-declarator-list-opt	SEMICOLON	%merge <merge_function>	{$$=new Node("member-declaration",$1,$2,$3);}
	|	function-definition	%merge <merge_function>	{$$=new Node("member-declaration",$1);}
	|	using-declaration	%merge <merge_function>	{$$=new Node("member-declaration",$1);}
	|	using-enum-declaration	%merge <merge_function>	{$$=new Node("member-declaration",$1);}
	|	static_assert-declaration	%merge <merge_function>	{$$=new Node("member-declaration",$1);}
	|	template-declaration	%merge <merge_function>	{$$=new Node("member-declaration",$1);}
	|	explicit-specialization	%merge <merge_function>	{$$=new Node("member-declaration",$1);}
	|	deduction-guide	%merge <merge_function>	{$$=new Node("member-declaration",$1);}
	|	alias-declaration	%merge <merge_function>	{$$=new Node("member-declaration",$1);}
	|	opaque-enum-declaration	%merge <merge_function>	{$$=new Node("member-declaration",$1);}
	|	empty-declaration	%merge <merge_function>	{$$=new Node("member-declaration",$1);}
	;
member-declarator:
	declarator	virt-specifier-seq-opt	pure-specifier-opt	%merge <merge_function>	{$$=new Node("member-declarator",$1,$2,$3);}
	|	declarator	requires-clause	%merge <merge_function>	{$$=new Node("member-declarator",$1,$2);}
	|	declarator	brace-or-equal-initializer-opt	%merge <merge_function>	{$$=new Node("member-declarator",$1,$2);}
	|	IDENTIFIER-opt	attribute-specifier-seq-opt	COLON	constant-expression	brace-or-equal-initializer-opt	%merge <merge_function>	{$$=new Node("member-declarator",$1,$2,$4,$5);}
	;
member-declarator-list:
	member-declarator	%merge <merge_function>	{$$=new Node("member-declarator-list",$1);}
	|	member-declarator-list	COMMA	member-declarator	%merge <merge_function>	{$$=new Node("member-declarator-list",$1,$3);}
	;
member-declarator-list-opt:
	%empty	%merge <merge_function>	{$$=new Node("member-declarator-list-opt");}
	|	member-declarator-list	%merge <merge_function>	{$$=new Node("member-declarator-list-opt",$1);}
	;
member-specification:
	member-declaration	member-specification-opt	%merge <merge_function>	{$$=new Node("member-specification",$1,$2);}
	|	access-specifier	COLON	member-specification-opt	%merge <merge_function>	{$$=new Node("member-specification",$1,$3);}
	;
member-specification-opt:
	%empty	%merge <merge_function>	{$$=new Node("member-specification-opt");}
	|	member-specification	%merge <merge_function>	{$$=new Node("member-specification-opt",$1);}
	;
module-declaration:
	EXPORT-opt	MODULE	module-name	module-partition-opt	attribute-specifier-seq-opt	SEMICOLON	%merge <merge_function>	{$$=new Node("module-declaration",$1,$3,$4,$5);}
	;
module-import-declaration:
	IMPORT	module-name	attribute-specifier-seq-opt	SEMICOLON	%merge <merge_function>	{$$=new Node("module-import-declaration",$2,$3);}
	|	IMPORT	module-partition	attribute-specifier-seq-opt	SEMICOLON	%merge <merge_function>	{$$=new Node("module-import-declaration",$2,$3);}
	|	IMPORT	header-name	attribute-specifier-seq-opt	SEMICOLON	%merge <merge_function>	{$$=new Node("module-import-declaration",$2,$3);}
	;
module-name:
	module-name-qualifier-opt	IDENTIFIER	%merge <merge_function>	{$$=new Node("module-name",$1);}
	;
module-name-qualifier:
	IDENTIFIER	DOT	%merge <merge_function>	{$$=new Node("module-name-qualifier");}
	|	module-name-qualifier	IDENTIFIER	DOT	%merge <merge_function>	{$$=new Node("module-name-qualifier",$1);}
	;
module-name-qualifier-opt:
	%empty	%merge <merge_function>	{$$=new Node("module-name-qualifier-opt");}
	|	module-name-qualifier	%merge <merge_function>	{$$=new Node("module-name-qualifier-opt",$1);}
	;
module-partition:
	COLON	module-name-qualifier-opt	IDENTIFIER	%merge <merge_function>	{$$=new Node("module-partition",$2);}
	;
module-partition-opt:
	%empty	%merge <merge_function>	{$$=new Node("module-partition-opt");}
	|	module-partition	%merge <merge_function>	{$$=new Node("module-partition-opt",$1);}
	;
multiplicative-expression:
	pm-expression	%merge <merge_function>	{$$=new Node("multiplicative-expression",$1);}
	|	multiplicative-expression	MULT	pm-expression	%merge <merge_function>	{$$=new Node("multiplicative-expression",$1,$3);}
	|	multiplicative-expression	DIV	pm-expression	%merge <merge_function>	{$$=new Node("multiplicative-expression",$1,$3);}
	|	multiplicative-expression	MOD	pm-expression	%merge <merge_function>	{$$=new Node("multiplicative-expression",$1,$3);}
	;
named-namespace-definition:
	INLINE-opt	NAMESPACE	attribute-specifier-seq-opt	IDENTIFIER	OPEN_BRACE	namespace-body	CLOSE_BRACE	%merge <merge_function>	{$$=new Node("named-namespace-definition",$1,$3,$6);}
	;
namespace-alias:
	IDENTIFIER	%merge <merge_function>	{$$=new Node("namespace-alias");}
	;
namespace-alias-definition:
	NAMESPACE	IDENTIFIER	EQ	qualified-namespace-specifier	SEMICOLON	%merge <merge_function>	{$$=new Node("namespace-alias-definition",$4);}
	;
namespace-body:
	declaration-seq-opt	%merge <merge_function>	{$$=new Node("namespace-body",$1);}
	;
namespace-definition:
	named-namespace-definition	%merge <merge_function>	{$$=new Node("namespace-definition",$1);}
	|	unnamed-namespace-definition	%merge <merge_function>	{$$=new Node("namespace-definition",$1);}
	|	nested-namespace-definition	%merge <merge_function>	{$$=new Node("namespace-definition",$1);}
	;
namespace-name:
	IDENTIFIER	%merge <merge_function>	{$$=new Node("namespace-name");}
	|	namespace-alias	%merge <merge_function>	{$$=new Node("namespace-name",$1);}
	;
nested-name-specifier:
	SCOPE	%merge <merge_function>	{$$=new Node("nested-name-specifier");}
	|	type-name	SCOPE	%merge <merge_function>	{$$=new Node("nested-name-specifier",$1);}
	|	namespace-name	SCOPE	%merge <merge_function>	{$$=new Node("nested-name-specifier",$1);}
	|	decltype-specifier	SCOPE	%merge <merge_function>	{$$=new Node("nested-name-specifier",$1);}
	|	nested-name-specifier	IDENTIFIER	SCOPE	%merge <merge_function>	{$$=new Node("nested-name-specifier",$1);}
	|	nested-name-specifier	TEMPLATE-opt	simple-template-id	SCOPE	%merge <merge_function>	{$$=new Node("nested-name-specifier",$1,$2,$3);}
	;
nested-name-specifier-opt:
	%empty	%merge <merge_function>	{$$=new Node("nested-name-specifier-opt");}
	|	nested-name-specifier	%merge <merge_function>	{$$=new Node("nested-name-specifier-opt",$1);}
	;
nested-namespace-definition:
	NAMESPACE	enclosing-namespace-specifier	SCOPE	INLINE-opt	IDENTIFIER	OPEN_BRACE	namespace-body	CLOSE_BRACE	%merge <merge_function>	{$$=new Node("nested-namespace-definition",$2,$4,$7);}
	;
nested-requirement:
	REQUIRES	constraint-expression	SEMICOLON	%merge <merge_function>	{$$=new Node("nested-requirement",$2);}
	;
new-declarator:
	ptr-operator	new-declarator-opt	%merge <merge_function>	{$$=new Node("new-declarator",$1,$2);}
	|	noptr-new-declarator	%merge <merge_function>	{$$=new Node("new-declarator",$1);}
	;
new-declarator-opt:
	%empty	%merge <merge_function>	{$$=new Node("new-declarator-opt");}
	|	new-declarator	%merge <merge_function>	{$$=new Node("new-declarator-opt",$1);}
	;
new-expression:
	SCOPE-opt	NEW	new-placement-opt	new-type-id	new-initializer-opt	%merge <merge_function>	{$$=new Node("new-expression",$1,$3,$4,$5);}
	|	SCOPE-opt	NEW	new-placement-opt	OPEN_PAREN	type-id	CLOSE_PAREN	new-initializer-opt	%merge <merge_function>	{$$=new Node("new-expression",$1,$3,$5,$7);}
	;
new-initializer:
	OPEN_PAREN	expression-list-opt	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("new-initializer",$2);}
	|	braced-init-list	%merge <merge_function>	{$$=new Node("new-initializer",$1);}
	;
new-initializer-opt:
	%empty	%merge <merge_function>	{$$=new Node("new-initializer-opt");}
	|	new-initializer	%merge <merge_function>	{$$=new Node("new-initializer-opt",$1);}
	;
new-placement:
	OPEN_PAREN	expression-list	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("new-placement",$2);}
	;
new-placement-opt:
	%empty	%merge <merge_function>	{$$=new Node("new-placement-opt");}
	|	new-placement	%merge <merge_function>	{$$=new Node("new-placement-opt",$1);}
	;
new-type-id:
	type-specifier-seq	new-declarator-opt	%merge <merge_function>	{$$=new Node("new-type-id",$1,$2);}
	;
nodeclspec-function-declaration:
	attribute-specifier-seq-opt	declarator	SEMICOLON	%merge <merge_function>	{$$=new Node("nodeclspec-function-declaration",$1,$2);}
	;
noexcept-expression:
	NOEXCEPT	OPEN_PAREN	expression	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("noexcept-expression",$3);}
	;
noexcept-specifier:
	NOEXCEPT	OPEN_PAREN	constant-expression	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("noexcept-specifier",$3);}
	|	NOEXCEPT	%merge <merge_function>	{$$=new Node("noexcept-specifier");}
	;
noexcept-specifier-opt:
	%empty	%merge <merge_function>	{$$=new Node("noexcept-specifier-opt");}
	|	noexcept-specifier	%merge <merge_function>	{$$=new Node("noexcept-specifier-opt",$1);}
	;
noptr-abstract-declarator:
	noptr-abstract-declarator-opt	parameters-and-qualifiers	%merge <merge_function>	{$$=new Node("noptr-abstract-declarator",$1,$2);}
	|	noptr-abstract-declarator-opt	OPEN_SQUARE	constant-expression-opt	CLOSE_SQUARE	attribute-specifier-seq-opt	%merge <merge_function>	{$$=new Node("noptr-abstract-declarator",$1,$3,$5);}
	|	OPEN_PAREN	ptr-abstract-declarator	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("noptr-abstract-declarator",$2);}
	;
noptr-abstract-declarator-opt:
	%empty	%merge <merge_function>	{$$=new Node("noptr-abstract-declarator-opt");}
	|	noptr-abstract-declarator	%merge <merge_function>	{$$=new Node("noptr-abstract-declarator-opt",$1);}
	;
noptr-abstract-pack-declarator:
	noptr-abstract-pack-declarator	parameters-and-qualifiers	%merge <merge_function>	{$$=new Node("noptr-abstract-pack-declarator",$1,$2);}
	|	noptr-abstract-pack-declarator	OPEN_SQUARE	constant-expression-opt	CLOSE_SQUARE	attribute-specifier-seq-opt	%merge <merge_function>	{$$=new Node("noptr-abstract-pack-declarator",$1,$3,$5);}
	|	ELLIPSIS	%merge <merge_function>	{$$=new Node("noptr-abstract-pack-declarator");}
	;
noptr-declarator:
	declarator-id	attribute-specifier-seq-opt	%merge <merge_function>	{$$=new Node("noptr-declarator",$1,$2);}
	|	noptr-declarator	parameters-and-qualifiers	%merge <merge_function>	{$$=new Node("noptr-declarator",$1,$2);}
	|	noptr-declarator	OPEN_SQUARE	constant-expression-opt	CLOSE_SQUARE	attribute-specifier-seq-opt	%merge <merge_function>	{$$=new Node("noptr-declarator",$1,$3,$5);}
	|	OPEN_PAREN	ptr-declarator	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("noptr-declarator",$2);}
	;
noptr-new-declarator:
	OPEN_SQUARE	expression-opt	CLOSE_SQUARE	attribute-specifier-seq-opt	%merge <merge_function>	{$$=new Node("noptr-new-declarator",$2,$4);}
	|	noptr-new-declarator	OPEN_SQUARE	constant-expression	CLOSE_SQUARE	attribute-specifier-seq-opt	%merge <merge_function>	{$$=new Node("noptr-new-declarator",$1,$3,$5);}
	;
opaque-enum-declaration:
	enum-key	attribute-specifier-seq-opt	enum-head-name	enum-base-opt	SEMICOLON	%merge <merge_function>	{$$=new Node("opaque-enum-declaration",$1,$2,$3,$4);}
	;
operator-function-id:
	OPERATOR	overloadable-operator	%merge <merge_function>	{$$=new Node("operator-function-id",$2);}
	|	OPERATOR	overloadable-operator	LESS	template-argument-list-opt	GREATER	%merge <merge_function>	{$$=new Node("operator-function-id",$2,$4);}
	;
overloadable-operator:
	NEW	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	DELETE	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	NEW	OPEN_SQUARE	CLOSE_SQUARE	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	DELETE	OPEN_SQUARE	CLOSE_SQUARE	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	CO_AWAIT	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	OPEN_PAREN	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	OPEN_SQUARE	CLOSE_SQUARE	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	DEREF	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	DEREF_STAR	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	COMPL	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	NOT	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	PLUS	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	MINUS	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	MULT	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	DIV	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	MOD	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	XOR	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	AND	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	OR	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	EQ	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	PLUS_EQ	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	MINUS_EQ	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	MULT_EQ	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	DIV_EQ	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	MOD_EQ	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	XOR_EQ	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	AND_EQ	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	OR_EQ	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	EQ_EQ	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	NOT_EQ	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	LESS	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	GREATER	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	LESS_EQ	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	GREATER_EQ	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	SPACESHIP	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	AND_AND	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	OR_OR	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	LSHIFT	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	RSHIFT	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	LSHIFT_EQ	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	RSHIFT_EQ	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	PLUS_PLUS	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	MINUS_MINUS	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	|	COMMA	%merge <merge_function>	{$$=new Node("overloadable-operator");}
	;
parameter-declaration:
	attribute-specifier-seq-opt	THIS-opt	decl-specifier-seq	declarator	%merge <merge_function>	{$$=new Node("parameter-declaration",$1,$2,$3,$4);}
	|	attribute-specifier-seq-opt	THIS-opt	decl-specifier-seq	declarator	EQ	initializer-clause	%merge <merge_function>	{$$=new Node("parameter-declaration",$1,$2,$3,$4,$6);}
	|	attribute-specifier-seq-opt	THIS-opt	decl-specifier-seq	abstract-declarator-opt	%merge <merge_function>	{$$=new Node("parameter-declaration",$1,$2,$3,$4);}
	|	attribute-specifier-seq-opt	THIS-opt	decl-specifier-seq	abstract-declarator-opt	EQ	initializer-clause	%merge <merge_function>	{$$=new Node("parameter-declaration",$1,$2,$3,$4,$6);}
	;
parameter-declaration-clause:
	parameter-declaration-list-opt	ELLIPSIS-opt	%merge <merge_function>	{$$=new Node("parameter-declaration-clause",$1,$2);}
	|	parameter-declaration-list	COMMA	ELLIPSIS	%merge <merge_function>	{$$=new Node("parameter-declaration-clause",$1);}
	;
parameter-declaration-list:
	parameter-declaration	%merge <merge_function>	{$$=new Node("parameter-declaration-list",$1);}
	|	parameter-declaration-list	COMMA	parameter-declaration	%merge <merge_function>	{$$=new Node("parameter-declaration-list",$1,$3);}
	;
parameter-declaration-list-opt:
	%empty	%merge <merge_function>	{$$=new Node("parameter-declaration-list-opt");}
	|	parameter-declaration-list	%merge <merge_function>	{$$=new Node("parameter-declaration-list-opt",$1);}
	;
parameters-and-qualifiers:
	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	cv-qualifier-seq-opt	ref-qualifier-opt	noexcept-specifier-opt	attribute-specifier-seq-opt	%merge <merge_function>	{$$=new Node("parameters-and-qualifiers",$2,$4,$5,$6,$7);}
	;
placeholder-type-specifier:
	type-constraint-opt	AUTO	%merge <merge_function>	{$$=new Node("placeholder-type-specifier",$1);}
	|	type-constraint-opt	DECLTYPE	OPEN_PAREN	AUTO	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("placeholder-type-specifier",$1);}
	;
pm-expression:
	cast-expression	%merge <merge_function>	{$$=new Node("pm-expression",$1);}
	|	pm-expression	DOT_STAR	cast-expression	%merge <merge_function>	{$$=new Node("pm-expression",$1,$3);}
	|	pm-expression	DEREF_STAR	cast-expression	%merge <merge_function>	{$$=new Node("pm-expression",$1,$3);}
	;
pointer-literal:
	POINTER_LITERAL	%merge <merge_function>	{$$=new Node("pointer-literal");}
	;
postfix-expression:
	primary-expression	%merge <merge_function>	{$$=new Node("postfix-expression",$1);}
	|	postfix-expression	OPEN_SQUARE	expression-list-opt	CLOSE_SQUARE	%merge <merge_function>	{$$=new Node("postfix-expression",$1,$3);}
	|	postfix-expression	OPEN_PAREN	expression-list-opt	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("postfix-expression",$1,$3);}
	|	simple-type-specifier	OPEN_PAREN	expression-list-opt	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("postfix-expression",$1,$3);}
	|	typename-specifier	OPEN_PAREN	expression-list-opt	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("postfix-expression",$1,$3);}
	|	simple-type-specifier	braced-init-list	%merge <merge_function>	{$$=new Node("postfix-expression",$1,$2);}
	|	typename-specifier	braced-init-list	%merge <merge_function>	{$$=new Node("postfix-expression",$1,$2);}
	|	postfix-expression	DOT	TEMPLATE-opt	id-expression	%merge <merge_function>	{$$=new Node("postfix-expression",$1,$3,$4);}
	|	postfix-expression	DEREF	TEMPLATE-opt	id-expression	%merge <merge_function>	{$$=new Node("postfix-expression",$1,$3,$4);}
	|	postfix-expression	PLUS_PLUS	%merge <merge_function>	{$$=new Node("postfix-expression",$1);}
	|	postfix-expression	MINUS_MINUS	%merge <merge_function>	{$$=new Node("postfix-expression",$1);}
	|	DYNAMIC_CAST	LESS	type-id	GREATER	OPEN_PAREN	expression	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("postfix-expression",$3,$6);}
	|	STATIC_CAST	LESS	type-id	GREATER	OPEN_PAREN	expression	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("postfix-expression",$3,$6);}
	|	REINTERPRET_CAST	LESS	type-id	GREATER	OPEN_PAREN	expression	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("postfix-expression",$3,$6);}
	|	CONST_CAST	LESS	type-id	GREATER	OPEN_PAREN	expression	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("postfix-expression",$3,$6);}
	|	TYPEID	OPEN_PAREN	expression	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("postfix-expression",$3);}
	|	TYPEID	OPEN_PAREN	type-id	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("postfix-expression",$3);}
	;
primary-expression:
	literal	%merge <merge_function>	{$$=new Node("primary-expression",$1);}
	|	string-literal	%merge <merge_function>	{$$=new Node("primary-expression",$1);}
	|	THIS	%merge <merge_function>	{$$=new Node("primary-expression");}
	|	OPEN_PAREN	expression	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("primary-expression",$2);}
	|	id-expression	%merge <merge_function>	{$$=new Node("primary-expression",$1);}
	|	lambda-expression	%merge <merge_function>	{$$=new Node("primary-expression",$1);}
	|	fold-expression	%merge <merge_function>	{$$=new Node("primary-expression",$1);}
	|	requires-expression	%merge <merge_function>	{$$=new Node("primary-expression",$1);}
	;
private-module-fragment:
	MODULE	COLON	PRIVATE	SEMICOLON	declaration-seq-opt	%merge <merge_function>	{$$=new Node("private-module-fragment",$5);}
	;
private-module-fragment-opt:
	%empty	%merge <merge_function>	{$$=new Node("private-module-fragment-opt");}
	|	private-module-fragment	%merge <merge_function>	{$$=new Node("private-module-fragment-opt",$1);}
	;
ptr-abstract-declarator:
	noptr-abstract-declarator	%merge <merge_function>	{$$=new Node("ptr-abstract-declarator",$1);}
	|	ptr-operator	ptr-abstract-declarator-opt	%merge <merge_function>	{$$=new Node("ptr-abstract-declarator",$1,$2);}
	;
ptr-abstract-declarator-opt:
	%empty	%merge <merge_function>	{$$=new Node("ptr-abstract-declarator-opt");}
	|	ptr-abstract-declarator	%merge <merge_function>	{$$=new Node("ptr-abstract-declarator-opt",$1);}
	;
ptr-declarator:
	noptr-declarator	%merge <merge_function>	{$$=new Node("ptr-declarator",$1);}
	|	ptr-operator	ptr-declarator	%merge <merge_function>	{$$=new Node("ptr-declarator",$1,$2);}
	;
ptr-operator:
	MULT	attribute-specifier-seq-opt	cv-qualifier-seq-opt	%merge <merge_function>	{$$=new Node("ptr-operator",$2,$3);}
	|	AND	attribute-specifier-seq-opt	%merge <merge_function>	{$$=new Node("ptr-operator",$2);}
	|	AND_AND	attribute-specifier-seq-opt	%merge <merge_function>	{$$=new Node("ptr-operator",$2);}
	|	nested-name-specifier	MULT	attribute-specifier-seq-opt	cv-qualifier-seq-opt	%merge <merge_function>	{$$=new Node("ptr-operator",$1,$3,$4);}
	;
pure-specifier:
	EQ	INTEGER_LITERAL	%merge <merge_function>	{$$=new Node("pure-specifier");}
	;
pure-specifier-opt:
	%empty	%merge <merge_function>	{$$=new Node("pure-specifier-opt");}
	|	pure-specifier	%merge <merge_function>	{$$=new Node("pure-specifier-opt",$1);}
	;
qualified-id:
	nested-name-specifier	TEMPLATE-opt	unqualified-id	%merge <merge_function>	{$$=new Node("qualified-id",$1,$2,$3);}
	;
qualified-namespace-specifier:
	nested-name-specifier-opt	namespace-name	%merge <merge_function>	{$$=new Node("qualified-namespace-specifier",$1,$2);}
	;
ref-qualifier:
	AND	%merge <merge_function>	{$$=new Node("ref-qualifier");}
	|	AND_AND	%merge <merge_function>	{$$=new Node("ref-qualifier");}
	;
ref-qualifier-opt:
	%empty	%merge <merge_function>	{$$=new Node("ref-qualifier-opt");}
	|	ref-qualifier	%merge <merge_function>	{$$=new Node("ref-qualifier-opt",$1);}
	;
relational-expression:
	compare-expression	%merge <merge_function>	{$$=new Node("relational-expression",$1);}
	|	relational-expression	LESS	compare-expression	%merge <merge_function>	{$$=new Node("relational-expression",$1,$3);}
	|	relational-expression	GREATER	compare-expression	%merge <merge_function>	{$$=new Node("relational-expression",$1,$3);}
	|	relational-expression	LESS_EQ	compare-expression	%merge <merge_function>	{$$=new Node("relational-expression",$1,$3);}
	|	relational-expression	GREATER_EQ	compare-expression	%merge <merge_function>	{$$=new Node("relational-expression",$1,$3);}
	;
requirement:
	simple-requirement	%merge <merge_function>	{$$=new Node("requirement",$1);}
	|	type-requirement	%merge <merge_function>	{$$=new Node("requirement",$1);}
	|	compound-requirement	%merge <merge_function>	{$$=new Node("requirement",$1);}
	|	nested-requirement	%merge <merge_function>	{$$=new Node("requirement",$1);}
	;
requirement-body:
	OPEN_BRACE	requirement-seq	CLOSE_BRACE	%merge <merge_function>	{$$=new Node("requirement-body",$2);}
	;
requirement-parameter-list:
	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("requirement-parameter-list",$2);}
	;
requirement-parameter-list-opt:
	%empty	%merge <merge_function>	{$$=new Node("requirement-parameter-list-opt");}
	|	requirement-parameter-list	%merge <merge_function>	{$$=new Node("requirement-parameter-list-opt",$1);}
	;
requirement-seq:
	requirement	%merge <merge_function>	{$$=new Node("requirement-seq",$1);}
	|	requirement-seq	requirement	%merge <merge_function>	{$$=new Node("requirement-seq",$1,$2);}
	;
requires-clause:
	REQUIRES	constraint-logical-or-expression	%merge <merge_function>	{$$=new Node("requires-clause",$2);}
	;
requires-clause-opt:
	%empty	%merge <merge_function>	{$$=new Node("requires-clause-opt");}
	|	requires-clause	%merge <merge_function>	{$$=new Node("requires-clause-opt",$1);}
	;
requires-expression:
	REQUIRES	requirement-parameter-list-opt	requirement-body	%merge <merge_function>	{$$=new Node("requires-expression",$2,$3);}
	;
return-type-requirement:
	DEREF	type-constraint	%merge <merge_function>	{$$=new Node("return-type-requirement",$2);}
	;
return-type-requirement-opt:
	%empty	%merge <merge_function>	{$$=new Node("return-type-requirement-opt");}
	|	return-type-requirement	%merge <merge_function>	{$$=new Node("return-type-requirement-opt",$1);}
	;
selection-statement:
	IF	CONSTEXPR-opt	OPEN_PAREN	init-statement-opt	condition	CLOSE_PAREN	statement	%merge <merge_function>	{$$=new Node("selection-statement",$2,$4,$5,$7);}
	|	IF	CONSTEXPR-opt	OPEN_PAREN	init-statement-opt	condition	CLOSE_PAREN	statement	ELSE	statement	%merge <merge_function>	{$$=new Node("selection-statement",$2,$4,$5,$7,$9);}
	|	IF	NOT-opt	CONSTEVAL	compound-statement	%merge <merge_function>	{$$=new Node("selection-statement",$2,$4);}
	|	IF	NOT-opt	CONSTEVAL	compound-statement	ELSE	statement	%merge <merge_function>	{$$=new Node("selection-statement",$2,$4,$6);}
	|	SWITCH	OPEN_PAREN	init-statement-opt	condition	CLOSE_PAREN	statement	%merge <merge_function>	{$$=new Node("selection-statement",$3,$4,$6);}
	;
shift-expression:
	additive-expression	%merge <merge_function>	{$$=new Node("shift-expression",$1);}
	|	shift-expression	LSHIFT	additive-expression	%merge <merge_function>	{$$=new Node("shift-expression",$1,$3);}
	|	shift-expression	RSHIFT	additive-expression	%merge <merge_function>	{$$=new Node("shift-expression",$1,$3);}
	;
simple-capture:
	IDENTIFIER	ELLIPSIS-opt	%merge <merge_function>	{$$=new Node("simple-capture",$2);}
	|	AND	IDENTIFIER	ELLIPSIS-opt	%merge <merge_function>	{$$=new Node("simple-capture",$3);}
	|	THIS	%merge <merge_function>	{$$=new Node("simple-capture");}
	|	MULT	THIS	%merge <merge_function>	{$$=new Node("simple-capture");}
	;
simple-declaration:
	decl-specifier-seq	init-declarator-list-opt	SEMICOLON	%merge <merge_function>	{$$=new Node("simple-declaration",$1,$2);}
	|	attribute-specifier-seq	decl-specifier-seq	init-declarator-list	SEMICOLON	%merge <merge_function>	{$$=new Node("simple-declaration",$1,$2,$3);}
	|	attribute-specifier-seq-opt	decl-specifier-seq	ref-qualifier-opt	OPEN_SQUARE	identifier-list	CLOSE_SQUARE	initializer	SEMICOLON	%merge <merge_function>	{$$=new Node("simple-declaration",$1,$2,$3,$5,$7);}
	;
simple-requirement:
	expression	SEMICOLON	%merge <merge_function>	{$$=new Node("simple-requirement",$1);}
	;
simple-template-id:
	template-name	LESS	template-argument-list-opt	GREATER	%merge <merge_function>	{$$=new Node("simple-template-id",$1,$3);}
	;
simple-type-specifier:
	nested-name-specifier-opt	type-name	%merge <merge_function>	{$$=new Node("simple-type-specifier",$1,$2);}
	|	nested-name-specifier	TEMPLATE	simple-template-id	%merge <merge_function>	{$$=new Node("simple-type-specifier",$1,$3);}
	|	decltype-specifier	%merge <merge_function>	{$$=new Node("simple-type-specifier",$1);}
	|	placeholder-type-specifier	%merge <merge_function>	{$$=new Node("simple-type-specifier",$1);}
	|	nested-name-specifier-opt	template-name	%merge <merge_function>	{$$=new Node("simple-type-specifier",$1,$2);}
	|	CHAR	%merge <merge_function>	{$$=new Node("simple-type-specifier");}
	|	CHAR8_T	%merge <merge_function>	{$$=new Node("simple-type-specifier");}
	|	CHAR16_T	%merge <merge_function>	{$$=new Node("simple-type-specifier");}
	|	CHAR32_T	%merge <merge_function>	{$$=new Node("simple-type-specifier");}
	|	WCHAR_T	%merge <merge_function>	{$$=new Node("simple-type-specifier");}
	|	BOOL	%merge <merge_function>	{$$=new Node("simple-type-specifier");}
	|	SHORT	%merge <merge_function>	{$$=new Node("simple-type-specifier");}
	|	INT	%merge <merge_function>	{$$=new Node("simple-type-specifier");}
	|	LONG	%merge <merge_function>	{$$=new Node("simple-type-specifier");}
	|	SIGNED	%merge <merge_function>	{$$=new Node("simple-type-specifier");}
	|	UNSIGNED	%merge <merge_function>	{$$=new Node("simple-type-specifier");}
	|	FLOAT	%merge <merge_function>	{$$=new Node("simple-type-specifier");}
	|	DOUBLE	%merge <merge_function>	{$$=new Node("simple-type-specifier");}
	|	VOID	%merge <merge_function>	{$$=new Node("simple-type-specifier");}
	;
statement:
	labeled-statement	%merge <merge_function>	{$$=new Node("statement",$1);}
	|	attribute-specifier-seq-opt	expression-statement	%merge <merge_function>	{$$=new Node("statement",$1,$2);}
	|	attribute-specifier-seq-opt	compound-statement	%merge <merge_function>	{$$=new Node("statement",$1,$2);}
	|	attribute-specifier-seq-opt	selection-statement	%merge <merge_function>	{$$=new Node("statement",$1,$2);}
	|	attribute-specifier-seq-opt	iteration-statement	%merge <merge_function>	{$$=new Node("statement",$1,$2);}
	|	attribute-specifier-seq-opt	jump-statement	%merge <merge_function>	{$$=new Node("statement",$1,$2);}
	|	declaration-statement	%merge <merge_function>	{$$=new Node("statement",$1);}
	|	attribute-specifier-seq-opt	try-block	%merge <merge_function>	{$$=new Node("statement",$1,$2);}
	;
statement-seq:
	statement	%merge <merge_function>	{$$=new Node("statement-seq",$1);}
	|	statement-seq	statement	%merge <merge_function>	{$$=new Node("statement-seq",$1,$2);}
	;
statement-seq-opt:
	%empty	%merge <merge_function>	{$$=new Node("statement-seq-opt");}
	|	statement-seq	%merge <merge_function>	{$$=new Node("statement-seq-opt",$1);}
	;
static_assert-declaration:
	STATIC_ASSERT	OPEN_PAREN	constant-expression	CLOSE_PAREN	SEMICOLON	%merge <merge_function>	{$$=new Node("static_assert-declaration",$3);}
	|	STATIC_ASSERT	OPEN_PAREN	constant-expression	COMMA	string-literal	CLOSE_PAREN	SEMICOLON	%merge <merge_function>	{$$=new Node("static_assert-declaration",$3,$5);}
	;
storage-class-specifier:
	STATIC	%merge <merge_function>	{$$=new Node("storage-class-specifier");}
	|	THREAD_LOCAL	%merge <merge_function>	{$$=new Node("storage-class-specifier");}
	|	EXTERN	%merge <merge_function>	{$$=new Node("storage-class-specifier");}
	|	MUTABLE	%merge <merge_function>	{$$=new Node("storage-class-specifier");}
	;
string-literal:
	STRING_LITERAL	%merge <merge_function>	{$$=new Node("string-literal");}
	;
template-argument:
	constant-expression	%merge <merge_function>	{$$=new Node("template-argument",$1);}
	|	type-id	%merge <merge_function>	{$$=new Node("template-argument",$1);}
	|	id-expression	%merge <merge_function>	{$$=new Node("template-argument",$1);}
	;
template-argument-list:
	template-argument	ELLIPSIS-opt	%merge <merge_function>	{$$=new Node("template-argument-list",$1,$2);}
	|	template-argument-list	COMMA	template-argument	ELLIPSIS-opt	%merge <merge_function>	{$$=new Node("template-argument-list",$1,$3,$4);}
	;
template-argument-list-opt:
	%empty	%merge <merge_function>	{$$=new Node("template-argument-list-opt");}
	|	template-argument-list	%merge <merge_function>	{$$=new Node("template-argument-list-opt",$1);}
	;
template-declaration:
	template-head	declaration	%merge <merge_function>	{$$=new Node("template-declaration",$1,$2);}
	|	template-head	concept-definition	%merge <merge_function>	{$$=new Node("template-declaration",$1,$2);}
	;
template-head:
	TEMPLATE	LESS	template-parameter-list	GREATER	requires-clause-opt	%merge <merge_function>	{$$=new Node("template-head",$3,$5);}
	;
template-id:
	simple-template-id	%merge <merge_function>	{$$=new Node("template-id",$1);}
	|	operator-function-id	LESS	template-argument-list-opt	GREATER	%merge <merge_function>	{$$=new Node("template-id",$1,$3);}
	|	literal-operator-id	LESS	template-argument-list-opt	GREATER	%merge <merge_function>	{$$=new Node("template-id",$1,$3);}
	;
template-name:
	IDENTIFIER	%merge <merge_function>	{$$=new Node("template-name");}
	;
template-parameter:
	type-parameter	%merge <merge_function>	{$$=new Node("template-parameter",$1);}
	|	parameter-declaration	%merge <merge_function>	{$$=new Node("template-parameter",$1);}
	;
template-parameter-list:
	template-parameter	%merge <merge_function>	{$$=new Node("template-parameter-list",$1);}
	|	template-parameter-list	COMMA	template-parameter	%merge <merge_function>	{$$=new Node("template-parameter-list",$1,$3);}
	;
throw-expression:
	THROW	assignment-expression-opt	%merge <merge_function>	{$$=new Node("throw-expression",$2);}
	;
trailing-return-type:
	DEREF	type-id	%merge <merge_function>	{$$=new Node("trailing-return-type",$2);}
	;
trailing-return-type-opt:
	%empty	%merge <merge_function>	{$$=new Node("trailing-return-type-opt");}
	|	trailing-return-type	%merge <merge_function>	{$$=new Node("trailing-return-type-opt",$1);}
	;
translation-unit:
	declaration-seq-opt	%merge <merge_function>	{$$=new Node("translation-unit",$1);}
	|	global-module-fragment-opt	module-declaration	declaration-seq-opt	private-module-fragment-opt	%merge <merge_function>	{$$=new Node("translation-unit",$1,$2,$3,$4);}
	;
try-block:
	TRY	compound-statement	handler-seq	%merge <merge_function>	{$$=new Node("try-block",$2,$3);}
	;
type-constraint:
	nested-name-specifier-opt	concept-name	%merge <merge_function>	{$$=new Node("type-constraint",$1,$2);}
	|	nested-name-specifier-opt	concept-name	LESS	template-argument-list-opt	GREATER	%merge <merge_function>	{$$=new Node("type-constraint",$1,$2,$4);}
	;
type-constraint-opt:
	%empty	%merge <merge_function>	{$$=new Node("type-constraint-opt");}
	|	type-constraint	%merge <merge_function>	{$$=new Node("type-constraint-opt",$1);}
	;
type-id:
	type-specifier-seq	abstract-declarator-opt	%merge <merge_function>	{$$=new Node("type-id",$1,$2);}
	;
type-name:
	class-name	%merge <merge_function>	{$$=new Node("type-name",$1);}
	|	enum-name	%merge <merge_function>	{$$=new Node("type-name",$1);}
	|	typedef-name	%merge <merge_function>	{$$=new Node("type-name",$1);}
	;
type-parameter:
	type-parameter-key	ELLIPSIS-opt	IDENTIFIER-opt	%merge <merge_function>	{$$=new Node("type-parameter",$1,$2,$3);}
	|	type-parameter-key	IDENTIFIER-opt	EQ	type-id	%merge <merge_function>	{$$=new Node("type-parameter",$1,$2,$4);}
	|	type-constraint	ELLIPSIS-opt	IDENTIFIER-opt	%merge <merge_function>	{$$=new Node("type-parameter",$1,$2,$3);}
	|	type-constraint	IDENTIFIER-opt	EQ	type-id	%merge <merge_function>	{$$=new Node("type-parameter",$1,$2,$4);}
	|	template-head	type-parameter-key	ELLIPSIS-opt	IDENTIFIER-opt	%merge <merge_function>	{$$=new Node("type-parameter",$1,$2,$3,$4);}
	|	template-head	type-parameter-key	IDENTIFIER-opt	EQ	id-expression	%merge <merge_function>	{$$=new Node("type-parameter",$1,$2,$3,$5);}
	;
type-parameter-key:
	CLASS	%merge <merge_function>	{$$=new Node("type-parameter-key");}
	|	TYPENAME	%merge <merge_function>	{$$=new Node("type-parameter-key");}
	;
type-requirement:
	TYPENAME	nested-name-specifier-opt	type-name	SEMICOLON	%merge <merge_function>	{$$=new Node("type-requirement",$2,$3);}
	;
type-specifier:
	simple-type-specifier	%merge <merge_function>	{$$=new Node("type-specifier",$1);}
	|	elaborated-type-specifier	%merge <merge_function>	{$$=new Node("type-specifier",$1);}
	|	typename-specifier	%merge <merge_function>	{$$=new Node("type-specifier",$1);}
	|	cv-qualifier	%merge <merge_function>	{$$=new Node("type-specifier",$1);}
	;
type-specifier-seq:
	type-specifier	attribute-specifier-seq-opt	%merge <merge_function>	{$$=new Node("type-specifier-seq",$1,$2);}
	|	type-specifier	type-specifier-seq	%merge <merge_function>	{$$=new Node("type-specifier-seq",$1,$2);}
	;
typedef-name:
	IDENTIFIER	%merge <merge_function>	{$$=new Node("typedef-name");}
	|	simple-template-id	%merge <merge_function>	{$$=new Node("typedef-name",$1);}
	;
typename-specifier:
	TYPENAME	nested-name-specifier	IDENTIFIER	%merge <merge_function>	{$$=new Node("typename-specifier",$2);}
	|	TYPENAME	nested-name-specifier	TEMPLATE-opt	simple-template-id	%merge <merge_function>	{$$=new Node("typename-specifier",$2,$3,$4);}
	;
ud-suffix:
	IDENTIFIER	%merge <merge_function>	{$$=new Node("ud-suffix");}
	;
unary-expression:
	postfix-expression	%merge <merge_function>	{$$=new Node("unary-expression",$1);}
	|	unary-operator	cast-expression	%merge <merge_function>	{$$=new Node("unary-expression",$1,$2);}
	|	PLUS_PLUS	cast-expression	%merge <merge_function>	{$$=new Node("unary-expression",$2);}
	|	MINUS_MINUS	cast-expression	%merge <merge_function>	{$$=new Node("unary-expression",$2);}
	|	await-expression	%merge <merge_function>	{$$=new Node("unary-expression",$1);}
	|	SIZEOF	unary-expression	%merge <merge_function>	{$$=new Node("unary-expression",$2);}
	|	SIZEOF	OPEN_PAREN	type-id	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("unary-expression",$3);}
	|	SIZEOF	ELLIPSIS	OPEN_PAREN	IDENTIFIER	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("unary-expression");}
	|	ALIGNOF	OPEN_PAREN	type-id	CLOSE_PAREN	%merge <merge_function>	{$$=new Node("unary-expression",$3);}
	|	noexcept-expression	%merge <merge_function>	{$$=new Node("unary-expression",$1);}
	|	new-expression	%merge <merge_function>	{$$=new Node("unary-expression",$1);}
	|	delete-expression	%merge <merge_function>	{$$=new Node("unary-expression",$1);}
	;
unary-operator:
	MULT	%merge <merge_function>	{$$=new Node("unary-operator");}
	|	AND	%merge <merge_function>	{$$=new Node("unary-operator");}
	|	PLUS	%merge <merge_function>	{$$=new Node("unary-operator");}
	|	MINUS	%merge <merge_function>	{$$=new Node("unary-operator");}
	|	NOT	%merge <merge_function>	{$$=new Node("unary-operator");}
	|	COMPL	%merge <merge_function>	{$$=new Node("unary-operator");}
	;
unnamed-namespace-definition:
	INLINE-opt	NAMESPACE	attribute-specifier-seq-opt	OPEN_BRACE	namespace-body	CLOSE_BRACE	%merge <merge_function>	{$$=new Node("unnamed-namespace-definition",$1,$3,$5);}
	;
unqualified-id:
	IDENTIFIER	%merge <merge_function>	{$$=new Node("unqualified-id");}
	|	operator-function-id	%merge <merge_function>	{$$=new Node("unqualified-id",$1);}
	|	conversion-function-id	%merge <merge_function>	{$$=new Node("unqualified-id",$1);}
	|	literal-operator-id	%merge <merge_function>	{$$=new Node("unqualified-id",$1);}
	|	COMPL	type-name	%merge <merge_function>	{$$=new Node("unqualified-id",$2);}
	|	COMPL	decltype-specifier	%merge <merge_function>	{$$=new Node("unqualified-id",$2);}
	|	template-id	%merge <merge_function>	{$$=new Node("unqualified-id",$1);}
	;
user-defined-character-literal:
	USER_DEFINED_CHARACTER_LITERAL	%merge <merge_function>	{$$=new Node("user-defined-character-literal");}
	;
user-defined-floating-point-literal:
	USER_DEFINED_FLOATING_POINT_LITERAL	%merge <merge_function>	{$$=new Node("user-defined-floating-point-literal");}
	;
user-defined-integer-literal:
	USER_DEFINED_INTEGER_LITERAL	%merge <merge_function>	{$$=new Node("user-defined-integer-literal");}
	;
user-defined-literal:
	user-defined-integer-literal	%merge <merge_function>	{$$=new Node("user-defined-literal",$1);}
	|	user-defined-floating-point-literal	%merge <merge_function>	{$$=new Node("user-defined-literal",$1);}
	|	user-defined-string-literal	%merge <merge_function>	{$$=new Node("user-defined-literal",$1);}
	|	user-defined-character-literal	%merge <merge_function>	{$$=new Node("user-defined-literal",$1);}
	;
user-defined-string-literal:
	string-literal	ud-suffix	%merge <merge_function>	{$$=new Node("user-defined-string-literal",$1,$2);}
	;
using-declaration:
	USING	using-declarator-list	SEMICOLON	%merge <merge_function>	{$$=new Node("using-declaration",$2);}
	;
using-declarator:
	TYPENAME-opt	nested-name-specifier	unqualified-id	%merge <merge_function>	{$$=new Node("using-declarator",$1,$2,$3);}
	;
using-declarator-list:
	using-declarator	ELLIPSIS-opt	%merge <merge_function>	{$$=new Node("using-declarator-list",$1,$2);}
	|	using-declarator-list	COMMA	using-declarator	ELLIPSIS-opt	%merge <merge_function>	{$$=new Node("using-declarator-list",$1,$3,$4);}
	;
using-directive:
	attribute-specifier-seq-opt	USING	NAMESPACE	nested-name-specifier-opt	namespace-name	SEMICOLON	%merge <merge_function>	{$$=new Node("using-directive",$1,$4,$5);}
	;
using-enum-declaration:
	USING	elaborated-enum-specifier	SEMICOLON	%merge <merge_function>	{$$=new Node("using-enum-declaration",$2);}
	;
virt-specifier:
	OVERRIDE	%merge <merge_function>	{$$=new Node("virt-specifier");}
	|	FINAL	%merge <merge_function>	{$$=new Node("virt-specifier");}
	;
virt-specifier-seq:
	virt-specifier	%merge <merge_function>	{$$=new Node("virt-specifier-seq",$1);}
	|	virt-specifier-seq	virt-specifier	%merge <merge_function>	{$$=new Node("virt-specifier-seq",$1,$2);}
	;
virt-specifier-seq-opt:
	%empty	%merge <merge_function>	{$$=new Node("virt-specifier-seq-opt");}
	|	virt-specifier-seq	%merge <merge_function>	{$$=new Node("virt-specifier-seq-opt",$1);}
	;
yield-expression:
	CO_YIELD	assignment-expression	%merge <merge_function>	{$$=new Node("yield-expression",$2);}
	|	CO_YIELD	braced-init-list	%merge <merge_function>	{$$=new Node("yield-expression",$2);}
	;
result:
	translation-unit	{std::cout << *$1 << '\n';}
	;
%%

void yy::parser::error (const std::string& m)
{
  std::cerr << m << '\n';
}
Node* merge_function (yy::parser::value_type x0, yy::parser::value_type x1)
{
	Node*result=new Node ("***<OR>***", x0.node, x1.node);
	result->m_bMerged=true;
	return result;
}

int main(int argc, char**argv){		
	extern FILE *yyin;
	extern int yydebug;
	yydebug=1;
	if (argc!=2){
		fprintf(stderr, "usage: %s <source>\n", argv[0]);
		return -1;
	}
	yyin=fopen(argv[1], "r");
	if (yyin){	
		yy::parser parser;	
		if (parser.parse()==0){
				printf("success!\n");
			}else{
				printf("failure\n");
			}
			fclose(yyin);
		}else{
			perror(argv[1]);
		return -2;
	}
	return 0;
}

