
%{
#include <stdio.h>
extern int lineno;
static void yyerror(const char *s);
extern int yylex (void);
%}

%token  PRIVATE
%token  PROTECTED
%token  PUBLIC
%token  PLUS
%token  MINUS
%token  USING
%token  IDENTIFIER
%token  EQ
%token  SEMICOLON
%token  ALIGNAS
%token  OPEN_PAREN
%token  CLOSE_PAREN
%token  ELLIPSIS
%token  AND
%token  ASM
%token  MULT_EQ
%token  DIV_EQ
%token  MOD_EQ
%token  PLUS_EQ
%token  MINUS_EQ
%token  RSHIFT_EQ
%token  LSHIFT_EQ
%token  AND_EQ
%token  XOR_EQ
%token  OR_EQ
%token  COMMA
%token  SCOPE
%token  OPEN_SQUARE
%token  CLOSE_SQUARE
%token  COLON
%token  CO_AWAIT
%token  OPEN_BRACE
%token  CLOSE_BRACE
%token  BALANCED_TOKEN
%token  VIRTUAL
%token  BASIC_C_CHAR
%token  BASIC_S_CHAR
%token  ZERO_LB
%token  ZERO_HB
%token  SINGLE_QUOTE
%token  FALSE
%token  TRUE
%token  CLASS
%token  STRUCT
%token  UNION
%token  TEMPLATE
%token  FINAL
%token  SPACESHIP
%token  NOEXCEPT
%token  CONCEPT
%token  ESCAPE
%token  CONDITIONAL_ESCAPE_SEQUENCE_CHAR
%token  QUERY
%token  AND_AND
%token  OR_OR
%token  OPERATOR
%token  CO_RETURN
%token  CONST
%token  VOLATILE
%token  FRIEND
%token  TYPEDEF
%token  CONSTEXPR
%token  CONSTEVAL
%token  CONSTINIT
%token  INLINE
%token  DECLTYPE
%token  DEREF
%token  DELETE
%token  DOT
%token  ENUM
%token  UNICODE_8
%token  EQ_EQ
%token  NOT_EQ
%token  XOR
%token  EXTERN
%token  LESS
%token  GREATER
%token  EXPLICIT
%token  EXPORT
%token  MULT
%token  DIV
%token  MOD
%token  OR
%token  LSHIFT
%token  RSHIFT
%token  LESS_EQ
%token  GREATER_EQ
%token  DOT_STAR
%token  DEREF_STAR
%token  DEFAULT
%token  TRY
%token  MODULE
%token  H_CHAR
%token  CATCH
%token  DOUBLE_QUOTE
%token  ESCAPE_LX
%token  ZERO_LX
%token  ZERO_HX
%token  WHILE
%token  DO
%token  FOR
%token  BREAK
%token  CONTINUE
%token  RETURN
%token  GOTO
%token  CASE
%token  LONG_LONG_L
%token  LONG_LONG_H
%token  IMPORT
%token  NAMESPACE
%token  REQUIRES
%token  NEW
%token  COMPL
%token  NOT
%token  PLUS_PLUS
%token  MINUS_MINUS
%token  THIS
%token  AUTO
%token  NULLPTR
%token  DYNAMIC_CAST
%token  STATIC_CAST
%token  REINTERPRET_CAST
%token  CONST_CAST
%token  TYPEID
%token  Q_CHAR
%token  IF
%token  ELSE
%token  SWITCH
%token  CHAR
%token  CHAR8_T
%token  CHAR16_T
%token  CHAR32_T
%token  WCHAR_T
%token  BOOL
%token  SHORT
%token  INT
%token  LONG
%token  SIGNED
%token  UNSIGNED
%token  FLOAT
%token  DOUBLE
%token  VOID
%token  STATIC_ASSERT
%token  STATIC
%token  THREAD_LOCAL
%token  MUTABLE
%token  THROW
%token  TYPENAME
%token  SIZEOF
%token  ALIGNOF
%token  ESCAPE_LU
%token  ESCAPE_HU
%token  OVERRIDE
%token  CO_YIELD
%glr-parser
%start  translation-unit;
%%
abstract-declarator:
	ptr-abstract-declarator
	|	noptr-abstract-declarator	parameters-and-qualifiers	trailing-return-type
	|	parameters-and-qualifiers	trailing-return-type
	|	abstract-pack-declarator
	;
abstract-pack-declarator:
	noptr-abstract-pack-declarator
	|	ptr-operator	abstract-pack-declarator
	;
access-specifier:
	PRIVATE
	|	PROTECTED
	|	PUBLIC
	;
additive-expression:
	multiplicative-expression
	|	additive-expression	PLUS	multiplicative-expression
	|	additive-expression	MINUS	multiplicative-expression
	;
alias-declaration:
	USING	IDENTIFIER	EQ	defining-type-id	SEMICOLON
	|	USING	IDENTIFIER	attribute-specifier-seq	EQ	defining-type-id	SEMICOLON
	;
alignment-specifier:
	ALIGNAS	OPEN_PAREN	type-id	CLOSE_PAREN
	|	ALIGNAS	OPEN_PAREN	type-id	ELLIPSIS	CLOSE_PAREN
	|	ALIGNAS	OPEN_PAREN	constant-expression	CLOSE_PAREN
	|	ALIGNAS	OPEN_PAREN	constant-expression	ELLIPSIS	CLOSE_PAREN
	;
and-expression:
	equality-expression
	|	and-expression	AND	equality-expression
	;
asm-declaration:
	attribute-specifier-seq	ASM	OPEN_PAREN	string-literal	CLOSE_PAREN	SEMICOLON
	|	ASM	OPEN_PAREN	string-literal	CLOSE_PAREN	SEMICOLON
	;
assignment-expression:
	conditional-expression
	|	yield-expression
	|	throw-expression
	|	logical-or-expression	assignment-operator	initializer-clause
	;
assignment-operator:
	EQ
	|	MULT_EQ
	|	DIV_EQ
	|	MOD_EQ
	|	PLUS_EQ
	|	MINUS_EQ
	|	RSHIFT_EQ
	|	LSHIFT_EQ
	|	AND_EQ
	|	XOR_EQ
	|	OR_EQ
	;
attribute:
	attribute-token
	|	attribute-token	attribute-argument-clause
	;
attribute-argument-clause:
	OPEN_PAREN	CLOSE_PAREN
	|	OPEN_PAREN	balanced-token-seq	CLOSE_PAREN
	;
attribute-declaration:
	attribute-specifier-seq	SEMICOLON
	;
attribute-list:
	attribute
	|	attribute-list	COMMA
	|	attribute-list	COMMA	attribute
	|	attribute	ELLIPSIS
	|	attribute-list	COMMA	attribute	ELLIPSIS
	;
attribute-namespace:
	IDENTIFIER
	;
attribute-scoped-token:
	attribute-namespace	SCOPE	IDENTIFIER
	;
attribute-specifier:
	OPEN_SQUARE	OPEN_SQUARE	attribute-list	CLOSE_SQUARE	CLOSE_SQUARE
	|	OPEN_SQUARE	OPEN_SQUARE	attribute-using-prefix	attribute-list	CLOSE_SQUARE	CLOSE_SQUARE
	|	alignment-specifier
	;
attribute-specifier-seq:
	attribute-specifier-seq	attribute-specifier
	|	attribute-specifier
	;
attribute-token:
	IDENTIFIER
	|	attribute-scoped-token
	;
attribute-using-prefix:
	USING	attribute-namespace	COLON
	;
await-expression:
	CO_AWAIT	cast-expression
	;
balanced-token:
	OPEN_PAREN	CLOSE_PAREN
	|	OPEN_PAREN	balanced-token-seq	CLOSE_PAREN
	|	OPEN_SQUARE	CLOSE_SQUARE
	|	OPEN_SQUARE	balanced-token-seq	CLOSE_SQUARE
	|	OPEN_BRACE	CLOSE_BRACE
	|	OPEN_BRACE	balanced-token-seq	CLOSE_BRACE
	|	BALANCED_TOKEN
	;
balanced-token-seq:
	balanced-token
	|	balanced-token-seq	balanced-token
	;
base-clause:
	COLON	base-specifier-list
	;
base-specifier:
	attribute-specifier-seq	class-or-decltype
	|	class-or-decltype
	|	attribute-specifier-seq	VIRTUAL	class-or-decltype
	|	VIRTUAL	class-or-decltype
	|	attribute-specifier-seq	VIRTUAL	access-specifier	class-or-decltype
	|	VIRTUAL	access-specifier	class-or-decltype
	|	attribute-specifier-seq	access-specifier	class-or-decltype
	|	access-specifier	class-or-decltype
	|	attribute-specifier-seq	access-specifier	VIRTUAL	class-or-decltype
	|	access-specifier	VIRTUAL	class-or-decltype
	;
base-specifier-list:
	base-specifier
	|	base-specifier	ELLIPSIS
	|	base-specifier-list	COMMA	base-specifier
	|	base-specifier-list	COMMA	base-specifier	ELLIPSIS
	;
basic-c-char:
	BASIC_C_CHAR
	;
basic-s-char:
	BASIC_S_CHAR
	;
binary-digit:
	'0'
	|	'1'
	;
binary-exponent-part:
	'p'	digit-sequence
	|	'p'	sign	digit-sequence
	|	'P'	digit-sequence
	|	'P'	sign	digit-sequence
	;
binary-literal:
	ZERO_LB	binary-digit
	|	ZERO_HB	binary-digit
	|	binary-literal	binary-digit
	|	binary-literal	SINGLE_QUOTE	binary-digit
	;
block-declaration:
	simple-declaration
	|	asm-declaration
	|	namespace-alias-definition
	|	using-declaration
	|	using-enum-declaration
	|	using-directive
	|	static_assert-declaration
	|	alias-declaration
	|	opaque-enum-declaration
	;
boolean-literal:
	FALSE
	|	TRUE
	;
brace-or-equal-initializer:
	EQ	initializer-clause
	|	braced-init-list
	;
braced-init-list:
	OPEN_BRACE	initializer-list	CLOSE_BRACE
	|	OPEN_BRACE	initializer-list	COMMA	CLOSE_BRACE
	|	OPEN_BRACE	designated-initializer-list	CLOSE_BRACE
	|	OPEN_BRACE	designated-initializer-list	COMMA	CLOSE_BRACE
	|	OPEN_BRACE	CLOSE_BRACE
	;
c-char:
	basic-c-char
	|	escape-sequence
	|	universal-character-name
	;
c-char-sequence:
	c-char
	|	c-char-sequence	c-char
	;
capture:
	simple-capture
	|	init-capture
	;
capture-default:
	AND
	|	EQ
	;
capture-list:
	capture
	|	capture-list	COMMA	capture
	;
cast-expression:
	unary-expression
	|	OPEN_PAREN	type-id	CLOSE_PAREN	cast-expression
	;
character-literal:
	encoding-prefix	SINGLE_QUOTE	c-char-sequence	SINGLE_QUOTE
	|	SINGLE_QUOTE	c-char-sequence	SINGLE_QUOTE
	;
class-head:
	class-key	class-head-name
	|	class-key	attribute-specifier-seq	class-head-name
	|	class-key	class-head-name	class-virt-specifier
	|	class-key	attribute-specifier-seq	class-head-name	class-virt-specifier
	|	class-key	class-head-name	base-clause
	|	class-key	attribute-specifier-seq	class-head-name	base-clause
	|	class-key	class-head-name	class-virt-specifier	base-clause
	|	class-key	attribute-specifier-seq	class-head-name	class-virt-specifier	base-clause
	|	class-key
	|	class-key	attribute-specifier-seq
	|	class-key	base-clause
	|	class-key	attribute-specifier-seq	base-clause
	;
class-head-name:
	nested-name-specifier	class-name
	|	class-name
	;
class-key:
	CLASS
	|	STRUCT
	|	UNION
	;
class-name:
	IDENTIFIER
	|	simple-template-id
	;
class-or-decltype:
	nested-name-specifier	type-name
	|	type-name
	|	nested-name-specifier	TEMPLATE	simple-template-id
	|	decltype-specifier
	;
class-specifier:
	class-head	OPEN_BRACE	CLOSE_BRACE
	|	class-head	OPEN_BRACE	member-specification	CLOSE_BRACE
	;
class-virt-specifier:
	FINAL
	;
compare-expression:
	shift-expression
	|	compare-expression	SPACESHIP	shift-expression
	;
compound-requirement:
	OPEN_BRACE	expression	CLOSE_BRACE	SEMICOLON
	|	OPEN_BRACE	expression	CLOSE_BRACE	NOEXCEPT	SEMICOLON
	|	OPEN_BRACE	expression	CLOSE_BRACE	return-type-requirement	SEMICOLON
	|	OPEN_BRACE	expression	CLOSE_BRACE	NOEXCEPT	return-type-requirement	SEMICOLON
	;
compound-statement:
	OPEN_BRACE	CLOSE_BRACE
	|	OPEN_BRACE	statement-seq	CLOSE_BRACE
	;
concept-definition:
	CONCEPT	concept-name	EQ	constraint-expression	SEMICOLON
	;
concept-name:
	IDENTIFIER
	;
condition:
	expression
	|	attribute-specifier-seq	decl-specifier-seq	declarator	brace-or-equal-initializer
	|	decl-specifier-seq	declarator	brace-or-equal-initializer
	;
conditional-escape-sequence:
	ESCAPE	conditional-escape-sequence-char
	;
conditional-escape-sequence-char:
	CONDITIONAL_ESCAPE_SEQUENCE_CHAR
	;
conditional-expression:
	logical-or-expression
	|	logical-or-expression	QUERY	expression	COLON	assignment-expression
	;
constant-expression:
	conditional-expression
	;
constraint-expression:
	logical-or-expression
	;
constraint-logical-and-expression:
	primary-expression
	|	constraint-logical-and-expression	AND_AND	primary-expression
	;
constraint-logical-or-expression:
	constraint-logical-and-expression
	|	constraint-logical-or-expression	OR_OR	constraint-logical-and-expression
	;
conversion-declarator:
	ptr-operator
	|	ptr-operator	conversion-declarator
	;
conversion-function-id:
	OPERATOR	conversion-type-id
	;
conversion-type-id:
	type-specifier-seq
	|	type-specifier-seq	conversion-declarator
	;
coroutine-return-statement:
	CO_RETURN	SEMICOLON
	|	CO_RETURN	expr-or-braced-init-list	SEMICOLON
	;
ctor-initializer:
	COLON	mem-initializer-list
	;
cv-qualifier:
	CONST
	|	VOLATILE
	;
cv-qualifier-seq:
	cv-qualifier
	|	cv-qualifier	cv-qualifier-seq
	;
decimal-floating-point-literal:
	fractional-constant
	|	fractional-constant	exponent-part
	|	fractional-constant	floating-point-suffix
	|	fractional-constant	exponent-part	floating-point-suffix
	|	digit-sequence	exponent-part
	|	digit-sequence	exponent-part	floating-point-suffix
	;
decimal-literal:
	nonzero-digit
	|	decimal-literal	digit
	|	decimal-literal	SINGLE_QUOTE	digit
	;
decl-specifier:
	storage-class-specifier
	|	defining-type-specifier
	|	function-specifier
	|	FRIEND
	|	TYPEDEF
	|	CONSTEXPR
	|	CONSTEVAL
	|	CONSTINIT
	|	INLINE
	;
decl-specifier-seq:
	decl-specifier
	|	decl-specifier	attribute-specifier-seq
	|	decl-specifier	decl-specifier-seq
	;
declaration:
	block-declaration
	|	nodeclspec-function-declaration
	|	function-definition
	|	template-declaration
	|	deduction-guide
	|	explicit-instantiation
	|	explicit-specialization
	|	export-declaration
	|	linkage-specification
	|	namespace-definition
	|	empty-declaration
	|	attribute-declaration
	|	module-import-declaration
	;
declaration-seq:
	declaration
	|	declaration-seq	declaration
	;
declaration-statement:
	block-declaration
	;
declarator:
	ptr-declarator
	|	noptr-declarator	parameters-and-qualifiers	trailing-return-type
	;
declarator-id:
	ELLIPSIS	id-expression
	|	id-expression
	;
decltype-specifier:
	DECLTYPE	OPEN_PAREN	expression	CLOSE_PAREN
	;
deduction-guide:
	explicit-specifier	template-name	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	DEREF	simple-template-id	SEMICOLON
	|	template-name	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	DEREF	simple-template-id	SEMICOLON
	;
defining-type-id:
	defining-type-specifier-seq
	|	defining-type-specifier-seq	abstract-declarator
	;
defining-type-specifier:
	type-specifier
	|	class-specifier
	|	enum-specifier
	;
defining-type-specifier-seq:
	defining-type-specifier
	|	defining-type-specifier	attribute-specifier-seq
	|	defining-type-specifier	defining-type-specifier-seq
	;
delete-expression:
	SCOPE	DELETE	cast-expression
	|	DELETE	cast-expression
	|	SCOPE	DELETE	OPEN_SQUARE	CLOSE_SQUARE	cast-expression
	|	DELETE	OPEN_SQUARE	CLOSE_SQUARE	cast-expression
	;
designated-initializer-clause:
	designator	brace-or-equal-initializer
	;
designated-initializer-list:
	designated-initializer-clause
	|	designated-initializer-list	COMMA	designated-initializer-clause
	;
designator:
	DOT	IDENTIFIER
	;
digit:
	'0'
	|	'1'
	|	'2'
	|	'3'
	|	'4'
	|	'5'
	|	'6'
	|	'7'
	|	'8'
	|	'9'
	;
digit-sequence:
	digit
	|	digit-sequence	digit
	|	digit-sequence	SINGLE_QUOTE	digit
	;
elaborated-enum-specifier:
	ENUM	IDENTIFIER
	|	ENUM	nested-name-specifier	IDENTIFIER
	;
elaborated-type-specifier:
	class-key	IDENTIFIER
	|	class-key	attribute-specifier-seq	IDENTIFIER
	|	class-key	nested-name-specifier	IDENTIFIER
	|	class-key	attribute-specifier-seq	nested-name-specifier	IDENTIFIER
	|	class-key	simple-template-id
	|	class-key	nested-name-specifier	simple-template-id
	|	class-key	nested-name-specifier	TEMPLATE	simple-template-id
	|	elaborated-enum-specifier
	;
empty-declaration:
	SEMICOLON
	;
enclosing-namespace-specifier:
	IDENTIFIER
	|	enclosing-namespace-specifier	SCOPE	IDENTIFIER
	|	enclosing-namespace-specifier	SCOPE	INLINE	IDENTIFIER
	;
encoding-prefix:
	UNICODE_8
	|	'u'
	|	'U'
	|	'L'
	;
enum-base:
	COLON	type-specifier-seq
	;
enum-head:
	enum-key
	|	enum-key	attribute-specifier-seq
	|	enum-key	enum-head-name
	|	enum-key	attribute-specifier-seq	enum-head-name
	|	enum-key	enum-base
	|	enum-key	attribute-specifier-seq	enum-base
	|	enum-key	enum-head-name	enum-base
	|	enum-key	attribute-specifier-seq	enum-head-name	enum-base
	;
enum-head-name:
	nested-name-specifier	IDENTIFIER
	|	IDENTIFIER
	;
enum-key:
	ENUM
	|	ENUM	CLASS
	|	ENUM	STRUCT
	;
enum-name:
	IDENTIFIER
	;
enum-specifier:
	enum-head	OPEN_BRACE	CLOSE_BRACE
	|	enum-head	OPEN_BRACE	enumerator-list	CLOSE_BRACE
	|	enum-head	OPEN_BRACE	enumerator-list	COMMA	CLOSE_BRACE
	;
enumerator:
	IDENTIFIER
	|	IDENTIFIER	attribute-specifier-seq
	;
enumerator-definition:
	enumerator
	|	enumerator	EQ	constant-expression
	;
enumerator-list:
	enumerator-definition
	|	enumerator-list	COMMA	enumerator-definition
	;
equality-expression:
	relational-expression
	|	equality-expression	EQ_EQ	relational-expression
	|	equality-expression	NOT_EQ	relational-expression
	;
escape-sequence:
	simple-escape-sequence
	|	numeric-escape-sequence
	|	conditional-escape-sequence
	;
exception-declaration:
	attribute-specifier-seq	type-specifier-seq	declarator
	|	type-specifier-seq	declarator
	|	attribute-specifier-seq	type-specifier-seq
	|	type-specifier-seq
	|	attribute-specifier-seq	type-specifier-seq	abstract-declarator
	|	type-specifier-seq	abstract-declarator
	|	ELLIPSIS
	;
exclusive-or-expression:
	and-expression
	|	exclusive-or-expression	XOR	and-expression
	;
explicit-instantiation:
	EXTERN	TEMPLATE	declaration
	|	TEMPLATE	declaration
	;
explicit-specialization:
	TEMPLATE	LESS	GREATER	declaration
	;
explicit-specifier:
	EXPLICIT	OPEN_PAREN	constant-expression	CLOSE_PAREN
	|	EXPLICIT
	;
exponent-part:
	'e'	digit-sequence
	|	'e'	sign	digit-sequence
	|	'E'	digit-sequence
	|	'E'	sign	digit-sequence
	;
export-declaration:
	EXPORT	declaration
	|	EXPORT	OPEN_BRACE	CLOSE_BRACE
	|	EXPORT	OPEN_BRACE	declaration-seq	CLOSE_BRACE
	|	EXPORT	module-import-declaration
	;
expr-or-braced-init-list:
	expression
	|	braced-init-list
	;
expression:
	assignment-expression
	|	expression	COMMA	assignment-expression
	;
expression-list:
	initializer-list
	;
expression-statement:
	expression	SEMICOLON
	|	SEMICOLON
	;
floating-point-literal:
	decimal-floating-point-literal
	|	hexadecimal-floating-point-literal
	;
floating-point-suffix:
	'f'
	|	'l'
	|	'F'
	|	'L'
	;
fold-expression:
	OPEN_PAREN	cast-expression	fold-operator	ELLIPSIS	CLOSE_PAREN
	|	OPEN_PAREN	ELLIPSIS	fold-operator	cast-expression	CLOSE_PAREN
	|	OPEN_PAREN	cast-expression	fold-operator	ELLIPSIS	fold-operator	cast-expression	CLOSE_PAREN
	;
fold-operator:
	PLUS
	|	MINUS
	|	MULT
	|	DIV
	|	MOD
	|	XOR
	|	AND
	|	OR
	|	LSHIFT
	|	RSHIFT
	|	PLUS_EQ
	|	MINUS_EQ
	|	MULT_EQ
	|	DIV_EQ
	|	MOD_EQ
	|	XOR_EQ
	|	AND_EQ
	|	OR_EQ
	|	LSHIFT_EQ
	|	RSHIFT_EQ
	|	EQ
	|	EQ_EQ
	|	NOT_EQ
	|	LESS
	|	GREATER
	|	LESS_EQ
	|	GREATER_EQ
	|	AND_AND
	|	OR_OR
	|	COMMA
	|	DOT_STAR
	|	DEREF_STAR
	;
for-range-declaration:
	attribute-specifier-seq	decl-specifier-seq	declarator
	|	decl-specifier-seq	declarator
	|	attribute-specifier-seq	decl-specifier-seq	OPEN_SQUARE	identifier-list	CLOSE_SQUARE
	|	decl-specifier-seq	OPEN_SQUARE	identifier-list	CLOSE_SQUARE
	|	attribute-specifier-seq	decl-specifier-seq	ref-qualifier	OPEN_SQUARE	identifier-list	CLOSE_SQUARE
	|	decl-specifier-seq	ref-qualifier	OPEN_SQUARE	identifier-list	CLOSE_SQUARE
	;
for-range-initializer:
	expr-or-braced-init-list
	;
fractional-constant:
	digit-sequence	DOT	digit-sequence
	|	DOT	digit-sequence
	|	digit-sequence	DOT
	;
function-body:
	ctor-initializer	compound-statement
	|	compound-statement
	|	function-try-block
	|	EQ	DEFAULT	SEMICOLON
	|	EQ	DELETE	SEMICOLON
	;
function-definition:
	attribute-specifier-seq	declarator	function-body
	|	declarator	function-body
	|	attribute-specifier-seq	decl-specifier-seq	declarator	function-body
	|	decl-specifier-seq	declarator	function-body
	|	attribute-specifier-seq	declarator	virt-specifier-seq	function-body
	|	declarator	virt-specifier-seq	function-body
	|	attribute-specifier-seq	decl-specifier-seq	declarator	virt-specifier-seq	function-body
	|	decl-specifier-seq	declarator	virt-specifier-seq	function-body
	|	attribute-specifier-seq	declarator	requires-clause	function-body
	|	declarator	requires-clause	function-body
	|	attribute-specifier-seq	decl-specifier-seq	declarator	requires-clause	function-body
	|	decl-specifier-seq	declarator	requires-clause	function-body
	;
function-specifier:
	VIRTUAL
	|	explicit-specifier
	;
function-try-block:
	TRY	compound-statement	handler-seq
	|	TRY	ctor-initializer	compound-statement	handler-seq
	;
global-module-fragment:
	MODULE	SEMICOLON
	|	MODULE	SEMICOLON	declaration-seq
	;
h-char:
	H_CHAR
	;
h-char-sequence:
	h-char
	|	h-char-sequence	h-char
	;
handler:
	CATCH	OPEN_PAREN	exception-declaration	CLOSE_PAREN	compound-statement
	;
handler-seq:
	handler
	|	handler	handler-seq
	;
header-name:
	LESS	h-char-sequence	GREATER
	|	DOUBLE_QUOTE	q-char-sequence	DOUBLE_QUOTE
	;
hex-quad:
	hexadecimal-digit	hexadecimal-digit	hexadecimal-digit	hexadecimal-digit
	;
hexadecimal-digit:
	'0'
	|	'1'
	|	'2'
	|	'3'
	|	'4'
	|	'5'
	|	'6'
	|	'7'
	|	'8'
	|	'9'
	|	'a'
	|	'b'
	|	'c'
	|	'd'
	|	'e'
	|	'f'
	|	'A'
	|	'B'
	|	'C'
	|	'D'
	|	'E'
	|	'F'
	;
hexadecimal-digit-sequence:
	hexadecimal-digit
	|	hexadecimal-digit-sequence	hexadecimal-digit
	|	hexadecimal-digit-sequence	SINGLE_QUOTE	hexadecimal-digit
	;
hexadecimal-escape-sequence:
	ESCAPE_LX	hexadecimal-digit
	|	hexadecimal-escape-sequence	hexadecimal-digit
	;
hexadecimal-floating-point-literal:
	hexadecimal-prefix	hexadecimal-fractional-constant	binary-exponent-part
	|	hexadecimal-prefix	hexadecimal-fractional-constant	binary-exponent-part	floating-point-suffix
	|	hexadecimal-prefix	hexadecimal-digit-sequence	binary-exponent-part
	|	hexadecimal-prefix	hexadecimal-digit-sequence	binary-exponent-part	floating-point-suffix
	;
hexadecimal-fractional-constant:
	hexadecimal-digit-sequence	DOT	hexadecimal-digit-sequence
	|	DOT	hexadecimal-digit-sequence
	|	hexadecimal-digit-sequence	DOT
	;
hexadecimal-literal:
	hexadecimal-prefix	hexadecimal-digit-sequence
	;
hexadecimal-prefix:
	ZERO_LX
	|	ZERO_HX
	;
id-expression:
	unqualified-id
	|	qualified-id
	;
identifier-list:
	IDENTIFIER
	|	identifier-list	COMMA	IDENTIFIER
	;
inclusive-or-expression:
	exclusive-or-expression
	|	inclusive-or-expression	OR	exclusive-or-expression
	;
init-capture:
	ELLIPSIS	IDENTIFIER	initializer
	|	IDENTIFIER	initializer
	|	AND	IDENTIFIER	initializer
	|	AND	ELLIPSIS	IDENTIFIER	initializer
	;
init-declarator:
	declarator
	|	declarator	initializer
	|	declarator	requires-clause
	;
init-declarator-list:
	init-declarator
	|	init-declarator-list	COMMA	init-declarator
	;
init-statement:
	expression-statement
	|	simple-declaration
	|	alias-declaration
	;
initializer:
	brace-or-equal-initializer
	|	OPEN_PAREN	expression-list	CLOSE_PAREN
	;
initializer-clause:
	assignment-expression
	|	braced-init-list
	;
initializer-list:
	initializer-clause
	|	initializer-clause	ELLIPSIS
	|	initializer-list	COMMA	initializer-clause
	|	initializer-list	COMMA	initializer-clause	ELLIPSIS
	;
integer-literal:
	binary-literal
	|	binary-literal	integer-suffix
	|	octal-literal
	|	octal-literal	integer-suffix
	|	decimal-literal
	|	decimal-literal	integer-suffix
	|	hexadecimal-literal
	|	hexadecimal-literal	integer-suffix
	;
integer-suffix:
	unsigned-suffix
	|	unsigned-suffix	long-suffix
	|	unsigned-suffix
	|	unsigned-suffix	long-long-suffix
	|	unsigned-suffix
	|	unsigned-suffix	size-suffix
	|	long-suffix
	|	long-suffix	unsigned-suffix
	|	long-long-suffix
	|	long-long-suffix	unsigned-suffix
	|	size-suffix
	|	size-suffix	unsigned-suffix
	;
iteration-statement:
	WHILE	OPEN_PAREN	condition	CLOSE_PAREN	statement
	|	DO	statement	WHILE	OPEN_PAREN	expression	CLOSE_PAREN	SEMICOLON
	|	FOR	OPEN_PAREN	init-statement	SEMICOLON	CLOSE_PAREN	statement
	|	FOR	OPEN_PAREN	init-statement	condition	SEMICOLON	CLOSE_PAREN	statement
	|	FOR	OPEN_PAREN	init-statement	SEMICOLON	expression	CLOSE_PAREN	statement
	|	FOR	OPEN_PAREN	init-statement	condition	SEMICOLON	expression	CLOSE_PAREN	statement
	|	FOR	OPEN_PAREN	for-range-declaration	COLON	for-range-initializer	CLOSE_PAREN	statement
	|	FOR	OPEN_PAREN	init-statement	for-range-declaration	COLON	for-range-initializer	CLOSE_PAREN	statement
	;
jump-statement:
	BREAK	SEMICOLON
	|	CONTINUE	SEMICOLON
	|	RETURN	SEMICOLON
	|	RETURN	expr-or-braced-init-list	SEMICOLON
	|	coroutine-return-statement
	|	GOTO	IDENTIFIER	SEMICOLON
	;
labeled-statement:
	attribute-specifier-seq	IDENTIFIER	COLON	statement
	|	IDENTIFIER	COLON	statement
	|	attribute-specifier-seq	CASE	constant-expression	COLON	statement
	|	CASE	constant-expression	COLON	statement
	|	attribute-specifier-seq	DEFAULT	COLON	statement
	|	DEFAULT	COLON	statement
	;
lambda-capture:
	capture-default
	|	capture-list
	|	capture-default	COMMA	capture-list
	;
lambda-declarator:
	lambda-specifiers
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	lambda-specifiers
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	lambda-specifiers	requires-clause
	;
lambda-expression:
	lambda-introducer	lambda-declarator	compound-statement
	|	lambda-introducer	LESS	template-parameter-list	GREATER	lambda-declarator	compound-statement
	|	lambda-introducer	LESS	template-parameter-list	GREATER	requires-clause	lambda-declarator	compound-statement
	;
lambda-introducer:
	OPEN_SQUARE	CLOSE_SQUARE
	|	OPEN_SQUARE	lambda-capture	CLOSE_SQUARE
	;
lambda-specifiers:
	decl-specifier-seq
	|	decl-specifier-seq	noexcept-specifier
	|	noexcept-specifier
	|	decl-specifier-seq	attribute-specifier-seq
	|	attribute-specifier-seq
	|	decl-specifier-seq	noexcept-specifier	attribute-specifier-seq
	|	noexcept-specifier	attribute-specifier-seq
	|	decl-specifier-seq	trailing-return-type
	|	trailing-return-type
	|	decl-specifier-seq	noexcept-specifier	trailing-return-type
	|	noexcept-specifier	trailing-return-type
	|	decl-specifier-seq	attribute-specifier-seq	trailing-return-type
	|	attribute-specifier-seq	trailing-return-type
	|	decl-specifier-seq	noexcept-specifier	attribute-specifier-seq	trailing-return-type
	|	noexcept-specifier	attribute-specifier-seq	trailing-return-type
	;
linkage-specification:
	EXTERN	string-literal	OPEN_BRACE	CLOSE_BRACE
	|	EXTERN	string-literal	OPEN_BRACE	declaration-seq	CLOSE_BRACE
	|	EXTERN	string-literal	declaration
	;
literal:
	integer-literal
	|	character-literal
	|	floating-point-literal
	|	string-literal
	|	boolean-literal
	|	pointer-literal
	|	user-defined-literal
	;
literal-operator-id:
	OPERATOR	string-literal	IDENTIFIER
	|	OPERATOR	user-defined-string-literal
	;
logical-and-expression:
	inclusive-or-expression
	|	logical-and-expression	AND_AND	inclusive-or-expression
	;
logical-or-expression:
	logical-and-expression
	|	logical-or-expression	OR_OR	logical-and-expression
	;
long-long-suffix:
	LONG_LONG_L
	|	LONG_LONG_H
	;
long-suffix:
	'l'
	|	'L'
	;
mem-initializer:
	mem-initializer-id	OPEN_PAREN	CLOSE_PAREN
	|	mem-initializer-id	OPEN_PAREN	expression-list	CLOSE_PAREN
	|	mem-initializer-id	braced-init-list
	;
mem-initializer-id:
	class-or-decltype
	|	IDENTIFIER
	;
mem-initializer-list:
	mem-initializer
	|	mem-initializer	ELLIPSIS
	|	mem-initializer-list	COMMA	mem-initializer
	|	mem-initializer-list	COMMA	mem-initializer	ELLIPSIS
	;
member-declaration:
	attribute-specifier-seq	SEMICOLON
	|	SEMICOLON
	|	attribute-specifier-seq	decl-specifier-seq	SEMICOLON
	|	decl-specifier-seq	SEMICOLON
	|	attribute-specifier-seq	member-declarator-list	SEMICOLON
	|	member-declarator-list	SEMICOLON
	|	attribute-specifier-seq	decl-specifier-seq	member-declarator-list	SEMICOLON
	|	decl-specifier-seq	member-declarator-list	SEMICOLON
	|	function-definition
	|	using-declaration
	|	using-enum-declaration
	|	static_assert-declaration
	|	template-declaration
	|	explicit-specialization
	|	deduction-guide
	|	alias-declaration
	|	opaque-enum-declaration
	|	empty-declaration
	;
member-declarator:
	declarator
	|	declarator	virt-specifier-seq
	|	declarator	pure-specifier
	|	declarator	virt-specifier-seq	pure-specifier
	|	declarator	requires-clause
	|	declarator
	|	declarator	brace-or-equal-initializer
	|	IDENTIFIER	COLON	constant-expression
	|	COLON	constant-expression
	|	IDENTIFIER	attribute-specifier-seq	COLON	constant-expression
	|	attribute-specifier-seq	COLON	constant-expression
	|	IDENTIFIER	COLON	constant-expression	brace-or-equal-initializer
	|	COLON	constant-expression	brace-or-equal-initializer
	|	IDENTIFIER	attribute-specifier-seq	COLON	constant-expression	brace-or-equal-initializer
	|	attribute-specifier-seq	COLON	constant-expression	brace-or-equal-initializer
	;
member-declarator-list:
	member-declarator
	|	member-declarator-list	COMMA	member-declarator
	;
member-specification:
	member-declaration
	|	member-declaration	member-specification
	|	access-specifier	COLON
	|	access-specifier	COLON	member-specification
	;
module-declaration:
	EXPORT	MODULE	module-name	SEMICOLON
	|	MODULE	module-name	SEMICOLON
	|	EXPORT	MODULE	module-name	module-partition	SEMICOLON
	|	MODULE	module-name	module-partition	SEMICOLON
	|	EXPORT	MODULE	module-name	attribute-specifier-seq	SEMICOLON
	|	MODULE	module-name	attribute-specifier-seq	SEMICOLON
	|	EXPORT	MODULE	module-name	module-partition	attribute-specifier-seq	SEMICOLON
	|	MODULE	module-name	module-partition	attribute-specifier-seq	SEMICOLON
	;
module-import-declaration:
	IMPORT	module-name	SEMICOLON
	|	IMPORT	module-name	attribute-specifier-seq	SEMICOLON
	|	IMPORT	module-partition	SEMICOLON
	|	IMPORT	module-partition	attribute-specifier-seq	SEMICOLON
	|	IMPORT	header-name	SEMICOLON
	|	IMPORT	header-name	attribute-specifier-seq	SEMICOLON
	;
module-name:
	module-name-qualifier	IDENTIFIER
	|	IDENTIFIER
	;
module-name-qualifier:
	IDENTIFIER	DOT
	|	module-name-qualifier	IDENTIFIER	DOT
	;
module-partition:
	COLON	IDENTIFIER
	|	COLON	module-name-qualifier	IDENTIFIER
	;
multiplicative-expression:
	pm-expression
	|	multiplicative-expression	MULT	pm-expression
	|	multiplicative-expression	DIV	pm-expression
	|	multiplicative-expression	MOD	pm-expression
	;
named-namespace-definition:
	INLINE	NAMESPACE	IDENTIFIER	OPEN_BRACE	namespace-body	CLOSE_BRACE
	|	NAMESPACE	IDENTIFIER	OPEN_BRACE	namespace-body	CLOSE_BRACE
	|	INLINE	NAMESPACE	attribute-specifier-seq	IDENTIFIER	OPEN_BRACE	namespace-body	CLOSE_BRACE
	|	NAMESPACE	attribute-specifier-seq	IDENTIFIER	OPEN_BRACE	namespace-body	CLOSE_BRACE
	;
namespace-alias:
	IDENTIFIER
	;
namespace-alias-definition:
	NAMESPACE	IDENTIFIER	EQ	qualified-namespace-specifier	SEMICOLON
	;
namespace-body:
	declaration-seq
	;
namespace-definition:
	named-namespace-definition
	|	unnamed-namespace-definition
	|	nested-namespace-definition
	;
namespace-name:
	IDENTIFIER
	|	namespace-alias
	;
nested-name-specifier:
	SCOPE
	|	type-name	SCOPE
	|	namespace-name	SCOPE
	|	decltype-specifier	SCOPE
	|	nested-name-specifier	IDENTIFIER	SCOPE
	|	nested-name-specifier	simple-template-id	SCOPE
	|	nested-name-specifier	TEMPLATE	simple-template-id	SCOPE
	;
nested-namespace-definition:
	NAMESPACE	enclosing-namespace-specifier	SCOPE	IDENTIFIER	OPEN_BRACE	namespace-body	CLOSE_BRACE
	|	NAMESPACE	enclosing-namespace-specifier	SCOPE	INLINE	IDENTIFIER	OPEN_BRACE	namespace-body	CLOSE_BRACE
	;
nested-requirement:
	REQUIRES	constraint-expression	SEMICOLON
	;
new-declarator:
	ptr-operator
	|	ptr-operator	new-declarator
	|	noptr-new-declarator
	;
new-expression:
	SCOPE	NEW	new-type-id
	|	NEW	new-type-id
	|	SCOPE	NEW	new-placement	new-type-id
	|	NEW	new-placement	new-type-id
	|	SCOPE	NEW	new-type-id	new-initializer
	|	NEW	new-type-id	new-initializer
	|	SCOPE	NEW	new-placement	new-type-id	new-initializer
	|	NEW	new-placement	new-type-id	new-initializer
	|	SCOPE	NEW	OPEN_PAREN	type-id	CLOSE_PAREN
	|	NEW	OPEN_PAREN	type-id	CLOSE_PAREN
	|	SCOPE	NEW	new-placement	OPEN_PAREN	type-id	CLOSE_PAREN
	|	NEW	new-placement	OPEN_PAREN	type-id	CLOSE_PAREN
	|	SCOPE	NEW	OPEN_PAREN	type-id	CLOSE_PAREN	new-initializer
	|	NEW	OPEN_PAREN	type-id	CLOSE_PAREN	new-initializer
	|	SCOPE	NEW	new-placement	OPEN_PAREN	type-id	CLOSE_PAREN	new-initializer
	|	NEW	new-placement	OPEN_PAREN	type-id	CLOSE_PAREN	new-initializer
	;
new-initializer:
	OPEN_PAREN	CLOSE_PAREN
	|	OPEN_PAREN	expression-list	CLOSE_PAREN
	|	braced-init-list
	;
new-placement:
	OPEN_PAREN	expression-list	CLOSE_PAREN
	;
new-type-id:
	type-specifier-seq
	|	type-specifier-seq	new-declarator
	;
nodeclspec-function-declaration:
	attribute-specifier-seq	declarator	SEMICOLON
	|	declarator	SEMICOLON
	;
noexcept-expression:
	NOEXCEPT	OPEN_PAREN	expression	CLOSE_PAREN
	;
noexcept-specifier:
	NOEXCEPT	OPEN_PAREN	constant-expression	CLOSE_PAREN
	|	NOEXCEPT
	;
nonzero-digit:
	'1'
	|	'2'
	|	'3'
	|	'4'
	|	'5'
	|	'6'
	|	'7'
	|	'8'
	|	'9'
	;
noptr-abstract-declarator:
	noptr-abstract-declarator	parameters-and-qualifiers
	|	parameters-and-qualifiers
	|	noptr-abstract-declarator	OPEN_SQUARE	CLOSE_SQUARE
	|	OPEN_SQUARE	CLOSE_SQUARE
	|	noptr-abstract-declarator	OPEN_SQUARE	constant-expression	CLOSE_SQUARE
	|	OPEN_SQUARE	constant-expression	CLOSE_SQUARE
	|	noptr-abstract-declarator	OPEN_SQUARE	CLOSE_SQUARE	attribute-specifier-seq
	|	OPEN_SQUARE	CLOSE_SQUARE	attribute-specifier-seq
	|	noptr-abstract-declarator	OPEN_SQUARE	constant-expression	CLOSE_SQUARE	attribute-specifier-seq
	|	OPEN_SQUARE	constant-expression	CLOSE_SQUARE	attribute-specifier-seq
	|	OPEN_PAREN	ptr-abstract-declarator	CLOSE_PAREN
	;
noptr-abstract-pack-declarator:
	noptr-abstract-pack-declarator	parameters-and-qualifiers
	|	noptr-abstract-pack-declarator	OPEN_SQUARE	CLOSE_SQUARE
	|	noptr-abstract-pack-declarator	OPEN_SQUARE	constant-expression	CLOSE_SQUARE
	|	noptr-abstract-pack-declarator	OPEN_SQUARE	CLOSE_SQUARE	attribute-specifier-seq
	|	noptr-abstract-pack-declarator	OPEN_SQUARE	constant-expression	CLOSE_SQUARE	attribute-specifier-seq
	|	ELLIPSIS
	;
noptr-declarator:
	declarator-id
	|	declarator-id	attribute-specifier-seq
	|	noptr-declarator	parameters-and-qualifiers
	|	noptr-declarator	OPEN_SQUARE	CLOSE_SQUARE
	|	noptr-declarator	OPEN_SQUARE	constant-expression	CLOSE_SQUARE
	|	noptr-declarator	OPEN_SQUARE	CLOSE_SQUARE	attribute-specifier-seq
	|	noptr-declarator	OPEN_SQUARE	constant-expression	CLOSE_SQUARE	attribute-specifier-seq
	|	OPEN_PAREN	ptr-declarator	CLOSE_PAREN
	;
noptr-new-declarator:
	OPEN_SQUARE	CLOSE_SQUARE
	|	OPEN_SQUARE	expression	CLOSE_SQUARE
	|	OPEN_SQUARE	CLOSE_SQUARE	attribute-specifier-seq
	|	OPEN_SQUARE	expression	CLOSE_SQUARE	attribute-specifier-seq
	|	noptr-new-declarator	OPEN_SQUARE	constant-expression	CLOSE_SQUARE
	|	noptr-new-declarator	OPEN_SQUARE	constant-expression	CLOSE_SQUARE	attribute-specifier-seq
	;
numeric-escape-sequence:
	octal-escape-sequence
	|	hexadecimal-escape-sequence
	;
octal-digit:
	'0'
	|	'1'
	|	'2'
	|	'3'
	|	'4'
	|	'5'
	|	'6'
	|	'7'
	;
octal-escape-sequence:
	ESCAPE	octal-digit
	|	ESCAPE	octal-digit	octal-digit
	|	ESCAPE	octal-digit	octal-digit	octal-digit
	;
octal-literal:
	'0'
	|	octal-literal	octal-digit
	|	octal-literal	SINGLE_QUOTE	octal-digit
	;
opaque-enum-declaration:
	enum-key	enum-head-name	SEMICOLON
	|	enum-key	attribute-specifier-seq	enum-head-name	SEMICOLON
	|	enum-key	enum-head-name	enum-base	SEMICOLON
	|	enum-key	attribute-specifier-seq	enum-head-name	enum-base	SEMICOLON
	;
operator-function-id:
	OPERATOR	overloadable-operator
	|	OPERATOR	overloadable-operator	LESS	GREATER
	|	OPERATOR	overloadable-operator	LESS	template-argument-list	GREATER
	;
overloadable-operator:
	NEW
	|	DELETE
	|	NEW	OPEN_SQUARE	CLOSE_SQUARE
	|	DELETE	OPEN_SQUARE	CLOSE_SQUARE
	|	CO_AWAIT
	|	OPEN_PAREN	CLOSE_PAREN
	|	OPEN_SQUARE	CLOSE_SQUARE
	|	DEREF
	|	DEREF_STAR
	|	COMPL
	|	NOT
	|	PLUS
	|	MINUS
	|	MULT
	|	DIV
	|	MOD
	|	XOR
	|	AND
	|	OR
	|	EQ
	|	PLUS_EQ
	|	MINUS_EQ
	|	MULT_EQ
	|	DIV_EQ
	|	MOD_EQ
	|	XOR_EQ
	|	AND_EQ
	|	OR_EQ
	|	EQ_EQ
	|	NOT_EQ
	|	LESS
	|	GREATER
	|	LESS_EQ
	|	GREATER_EQ
	|	SPACESHIP
	|	AND_AND
	|	OR_OR
	|	LSHIFT
	|	RSHIFT
	|	LSHIFT_EQ
	|	RSHIFT_EQ
	|	PLUS_PLUS
	|	MINUS_MINUS
	|	COMMA
	;
parameter-declaration:
	attribute-specifier-seq	decl-specifier-seq	declarator
	|	decl-specifier-seq	declarator
	|	attribute-specifier-seq	THIS	decl-specifier-seq	declarator
	|	THIS	decl-specifier-seq	declarator
	|	attribute-specifier-seq	decl-specifier-seq	declarator	EQ	initializer-clause
	|	decl-specifier-seq	declarator	EQ	initializer-clause
	|	attribute-specifier-seq	THIS	decl-specifier-seq	declarator	EQ	initializer-clause
	|	THIS	decl-specifier-seq	declarator	EQ	initializer-clause
	|	attribute-specifier-seq	decl-specifier-seq
	|	decl-specifier-seq
	|	attribute-specifier-seq	THIS	decl-specifier-seq
	|	THIS	decl-specifier-seq
	|	attribute-specifier-seq	decl-specifier-seq	abstract-declarator
	|	decl-specifier-seq	abstract-declarator
	|	attribute-specifier-seq	THIS	decl-specifier-seq	abstract-declarator
	|	THIS	decl-specifier-seq	abstract-declarator
	|	attribute-specifier-seq	decl-specifier-seq	EQ	initializer-clause
	|	decl-specifier-seq	EQ	initializer-clause
	|	attribute-specifier-seq	THIS	decl-specifier-seq	EQ	initializer-clause
	|	THIS	decl-specifier-seq	EQ	initializer-clause
	|	attribute-specifier-seq	decl-specifier-seq	abstract-declarator	EQ	initializer-clause
	|	decl-specifier-seq	abstract-declarator	EQ	initializer-clause
	|	attribute-specifier-seq	THIS	decl-specifier-seq	abstract-declarator	EQ	initializer-clause
	|	THIS	decl-specifier-seq	abstract-declarator	EQ	initializer-clause
	;
parameter-declaration-clause:
	parameter-declaration-list
	|	parameter-declaration-list	ELLIPSIS
	|	ELLIPSIS
	|	parameter-declaration-list	COMMA	ELLIPSIS
	;
parameter-declaration-list:
	parameter-declaration
	|	parameter-declaration-list	COMMA	parameter-declaration
	;
parameters-and-qualifiers:
	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	cv-qualifier-seq
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	ref-qualifier
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	cv-qualifier-seq	ref-qualifier
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	noexcept-specifier
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	cv-qualifier-seq	noexcept-specifier
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	ref-qualifier	noexcept-specifier
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	cv-qualifier-seq	ref-qualifier	noexcept-specifier
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	attribute-specifier-seq
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	cv-qualifier-seq	attribute-specifier-seq
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	ref-qualifier	attribute-specifier-seq
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	cv-qualifier-seq	ref-qualifier	attribute-specifier-seq
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	noexcept-specifier	attribute-specifier-seq
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	cv-qualifier-seq	noexcept-specifier	attribute-specifier-seq
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	ref-qualifier	noexcept-specifier	attribute-specifier-seq
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	cv-qualifier-seq	ref-qualifier	noexcept-specifier	attribute-specifier-seq
	;
placeholder-type-specifier:
	type-constraint	AUTO
	|	AUTO
	|	type-constraint	DECLTYPE	OPEN_PAREN	AUTO	CLOSE_PAREN
	|	DECLTYPE	OPEN_PAREN	AUTO	CLOSE_PAREN
	;
pm-expression:
	cast-expression
	|	pm-expression	DOT_STAR	cast-expression
	|	pm-expression	DEREF_STAR	cast-expression
	;
pointer-literal:
	NULLPTR
	;
postfix-expression:
	primary-expression
	|	postfix-expression	OPEN_SQUARE	CLOSE_SQUARE
	|	postfix-expression	OPEN_SQUARE	expression-list	CLOSE_SQUARE
	|	postfix-expression	OPEN_PAREN	CLOSE_PAREN
	|	postfix-expression	OPEN_PAREN	expression-list	CLOSE_PAREN
	|	simple-type-specifier	OPEN_PAREN	CLOSE_PAREN
	|	simple-type-specifier	OPEN_PAREN	expression-list	CLOSE_PAREN
	|	typename-specifier	OPEN_PAREN	CLOSE_PAREN
	|	typename-specifier	OPEN_PAREN	expression-list	CLOSE_PAREN
	|	simple-type-specifier	braced-init-list
	|	typename-specifier	braced-init-list
	|	postfix-expression	DOT	id-expression
	|	postfix-expression	DOT	TEMPLATE	id-expression
	|	postfix-expression	DEREF	id-expression
	|	postfix-expression	DEREF	TEMPLATE	id-expression
	|	postfix-expression	PLUS_PLUS
	|	postfix-expression	MINUS_MINUS
	|	DYNAMIC_CAST	LESS	type-id	GREATER	OPEN_PAREN	expression	CLOSE_PAREN
	|	STATIC_CAST	LESS	type-id	GREATER	OPEN_PAREN	expression	CLOSE_PAREN
	|	REINTERPRET_CAST	LESS	type-id	GREATER	OPEN_PAREN	expression	CLOSE_PAREN
	|	CONST_CAST	LESS	type-id	GREATER	OPEN_PAREN	expression	CLOSE_PAREN
	|	TYPEID	OPEN_PAREN	expression	CLOSE_PAREN
	|	TYPEID	OPEN_PAREN	type-id	CLOSE_PAREN
	;
primary-expression:
	literal
	|	THIS
	|	OPEN_PAREN	expression	CLOSE_PAREN
	|	id-expression
	|	lambda-expression
	|	fold-expression
	|	requires-expression
	;
private-module-fragment:
	MODULE	COLON	PRIVATE	SEMICOLON
	|	MODULE	COLON	PRIVATE	SEMICOLON	declaration-seq
	;
ptr-abstract-declarator:
	noptr-abstract-declarator
	|	ptr-operator
	|	ptr-operator	ptr-abstract-declarator
	;
ptr-declarator:
	noptr-declarator
	|	ptr-operator	ptr-declarator
	;
ptr-operator:
	MULT
	|	MULT	attribute-specifier-seq
	|	MULT	cv-qualifier-seq
	|	MULT	attribute-specifier-seq	cv-qualifier-seq
	|	AND
	|	AND	attribute-specifier-seq
	|	AND_AND
	|	AND_AND	attribute-specifier-seq
	|	nested-name-specifier	MULT
	|	nested-name-specifier	MULT	attribute-specifier-seq
	|	nested-name-specifier	MULT	cv-qualifier-seq
	|	nested-name-specifier	MULT	attribute-specifier-seq	cv-qualifier-seq
	;
pure-specifier:
	EQ	'0'
	;
q-char:
	Q_CHAR
	;
q-char-sequence:
	q-char
	|	q-char-sequence	q-char
	;
qualified-id:
	nested-name-specifier	unqualified-id
	|	nested-name-specifier	TEMPLATE	unqualified-id
	;
qualified-namespace-specifier:
	nested-name-specifier	namespace-name
	|	namespace-name
	;
raw-string:
	BASIC_S_CHAR
	;
ref-qualifier:
	AND
	|	AND_AND
	;
relational-expression:
	compare-expression
	|	relational-expression	LESS	compare-expression
	|	relational-expression	GREATER	compare-expression
	|	relational-expression	LESS_EQ	compare-expression
	|	relational-expression	GREATER_EQ	compare-expression
	;
requirement:
	simple-requirement
	|	type-requirement
	|	compound-requirement
	|	nested-requirement
	;
requirement-body:
	OPEN_BRACE	requirement-seq	CLOSE_BRACE
	;
requirement-parameter-list:
	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN
	;
requirement-seq:
	requirement
	|	requirement-seq	requirement
	;
requires-clause:
	REQUIRES	constraint-logical-or-expression
	;
requires-expression:
	REQUIRES	requirement-body
	|	REQUIRES	requirement-parameter-list	requirement-body
	;
return-type-requirement:
	DEREF	type-constraint
	;
s-char:
	basic-s-char
	|	escape-sequence
	|	universal-character-name
	;
s-char-sequence:
	s-char
	|	s-char-sequence	s-char
	;
selection-statement:
	IF	OPEN_PAREN	condition	CLOSE_PAREN	statement
	|	IF	CONSTEXPR	OPEN_PAREN	condition	CLOSE_PAREN	statement
	|	IF	OPEN_PAREN	init-statement	condition	CLOSE_PAREN	statement
	|	IF	CONSTEXPR	OPEN_PAREN	init-statement	condition	CLOSE_PAREN	statement
	|	IF	OPEN_PAREN	condition	CLOSE_PAREN	statement	ELSE	statement
	|	IF	CONSTEXPR	OPEN_PAREN	condition	CLOSE_PAREN	statement	ELSE	statement
	|	IF	OPEN_PAREN	init-statement	condition	CLOSE_PAREN	statement	ELSE	statement
	|	IF	CONSTEXPR	OPEN_PAREN	init-statement	condition	CLOSE_PAREN	statement	ELSE	statement
	|	IF	CONSTEVAL	compound-statement
	|	IF	NOT	CONSTEVAL	compound-statement
	|	IF	CONSTEVAL	compound-statement	ELSE	statement
	|	IF	NOT	CONSTEVAL	compound-statement	ELSE	statement
	|	SWITCH	OPEN_PAREN	condition	CLOSE_PAREN	statement
	|	SWITCH	OPEN_PAREN	init-statement	condition	CLOSE_PAREN	statement
	;
shift-expression:
	additive-expression
	|	shift-expression	LSHIFT	additive-expression
	|	shift-expression	RSHIFT	additive-expression
	;
sign:
	PLUS
	|	MINUS
	;
simple-capture:
	IDENTIFIER
	|	IDENTIFIER	ELLIPSIS
	|	AND	IDENTIFIER
	|	AND	IDENTIFIER	ELLIPSIS
	|	THIS
	|	MULT	THIS
	;
simple-declaration:
	decl-specifier-seq	SEMICOLON
	|	decl-specifier-seq	init-declarator-list	SEMICOLON
	|	attribute-specifier-seq	decl-specifier-seq	init-declarator-list	SEMICOLON
	|	attribute-specifier-seq	decl-specifier-seq	OPEN_SQUARE	identifier-list	CLOSE_SQUARE	initializer	SEMICOLON
	|	decl-specifier-seq	OPEN_SQUARE	identifier-list	CLOSE_SQUARE	initializer	SEMICOLON
	|	attribute-specifier-seq	decl-specifier-seq	ref-qualifier	OPEN_SQUARE	identifier-list	CLOSE_SQUARE	initializer	SEMICOLON
	|	decl-specifier-seq	ref-qualifier	OPEN_SQUARE	identifier-list	CLOSE_SQUARE	initializer	SEMICOLON
	;
simple-escape-sequence:
	ESCAPE	simple-escape-sequence-char
	;
simple-escape-sequence-char:
	SINGLE_QUOTE
	|	DOUBLE_QUOTE
	|	QUERY
	|	ESCAPE
	|	'a'
	|	'b'
	|	'f'
	|	'n'
	|	'r'
	|	't'
	|	'v'
	;
simple-requirement:
	expression	SEMICOLON
	;
simple-template-id:
	template-name	LESS	GREATER
	|	template-name	LESS	template-argument-list	GREATER
	;
simple-type-specifier:
	nested-name-specifier	type-name
	|	type-name
	|	nested-name-specifier	TEMPLATE	simple-template-id
	|	decltype-specifier
	|	placeholder-type-specifier
	|	nested-name-specifier	template-name
	|	template-name
	|	CHAR
	|	CHAR8_T
	|	CHAR16_T
	|	CHAR32_T
	|	WCHAR_T
	|	BOOL
	|	SHORT
	|	INT
	|	LONG
	|	SIGNED
	|	UNSIGNED
	|	FLOAT
	|	DOUBLE
	|	VOID
	;
size-suffix:
	'z'
	|	'Z'
	;
statement:
	labeled-statement
	|	attribute-specifier-seq	expression-statement
	|	expression-statement
	|	attribute-specifier-seq	compound-statement
	|	compound-statement
	|	attribute-specifier-seq	selection-statement
	|	selection-statement
	|	attribute-specifier-seq	iteration-statement
	|	iteration-statement
	|	attribute-specifier-seq	jump-statement
	|	jump-statement
	|	declaration-statement
	|	attribute-specifier-seq	try-block
	|	try-block
	;
statement-seq:
	statement
	|	statement-seq	statement
	;
static_assert-declaration:
	STATIC_ASSERT	OPEN_PAREN	constant-expression	CLOSE_PAREN	SEMICOLON
	|	STATIC_ASSERT	OPEN_PAREN	constant-expression	COMMA	string-literal	CLOSE_PAREN	SEMICOLON
	;
storage-class-specifier:
	STATIC
	|	THREAD_LOCAL
	|	EXTERN
	|	MUTABLE
	;
string-literal:
	encoding-prefix	DOUBLE_QUOTE	DOUBLE_QUOTE
	|	DOUBLE_QUOTE	DOUBLE_QUOTE
	|	encoding-prefix	DOUBLE_QUOTE	s-char-sequence	DOUBLE_QUOTE
	|	DOUBLE_QUOTE	s-char-sequence	DOUBLE_QUOTE
	|	encoding-prefix	'R'	raw-string
	|	'R'	raw-string
	;
template-argument:
	constant-expression
	|	type-id
	|	id-expression
	;
template-argument-list:
	template-argument
	|	template-argument	ELLIPSIS
	|	template-argument-list	COMMA	template-argument
	|	template-argument-list	COMMA	template-argument	ELLIPSIS
	;
template-declaration:
	template-head	declaration
	|	template-head	concept-definition
	;
template-head:
	TEMPLATE	LESS	template-parameter-list	GREATER
	|	TEMPLATE	LESS	template-parameter-list	GREATER	requires-clause
	;
template-id:
	simple-template-id
	|	operator-function-id	LESS	GREATER
	|	operator-function-id	LESS	template-argument-list	GREATER
	|	literal-operator-id	LESS	GREATER
	|	literal-operator-id	LESS	template-argument-list	GREATER
	;
template-name:
	IDENTIFIER
	;
template-parameter:
	type-parameter
	|	parameter-declaration
	;
template-parameter-list:
	template-parameter
	|	template-parameter-list	COMMA	template-parameter
	;
throw-expression:
	THROW
	|	THROW	assignment-expression
	;
trailing-return-type:
	DEREF	type-id
	;
translation-unit:
	declaration-seq
	|	global-module-fragment	module-declaration
	|	module-declaration
	|	global-module-fragment	module-declaration	declaration-seq
	|	module-declaration	declaration-seq
	|	global-module-fragment	module-declaration	private-module-fragment
	|	module-declaration	private-module-fragment
	|	global-module-fragment	module-declaration	declaration-seq	private-module-fragment
	|	module-declaration	declaration-seq	private-module-fragment
	;
try-block:
	TRY	compound-statement	handler-seq
	;
type-constraint:
	nested-name-specifier	concept-name
	|	concept-name
	|	nested-name-specifier	concept-name	LESS	GREATER
	|	concept-name	LESS	GREATER
	|	nested-name-specifier	concept-name	LESS	template-argument-list	GREATER
	|	concept-name	LESS	template-argument-list	GREATER
	;
type-id:
	type-specifier-seq
	|	type-specifier-seq	abstract-declarator
	;
type-name:
	class-name
	|	enum-name
	|	typedef-name
	;
type-parameter:
	type-parameter-key
	|	type-parameter-key	ELLIPSIS
	|	type-parameter-key	IDENTIFIER
	|	type-parameter-key	ELLIPSIS	IDENTIFIER
	|	type-parameter-key	EQ	type-id
	|	type-parameter-key	IDENTIFIER	EQ	type-id
	|	type-constraint
	|	type-constraint	ELLIPSIS
	|	type-constraint	IDENTIFIER
	|	type-constraint	ELLIPSIS	IDENTIFIER
	|	type-constraint	EQ	type-id
	|	type-constraint	IDENTIFIER	EQ	type-id
	|	template-head	type-parameter-key
	|	template-head	type-parameter-key	ELLIPSIS
	|	template-head	type-parameter-key	IDENTIFIER
	|	template-head	type-parameter-key	ELLIPSIS	IDENTIFIER
	|	template-head	type-parameter-key	EQ	id-expression
	|	template-head	type-parameter-key	IDENTIFIER	EQ	id-expression
	;
type-parameter-key:
	CLASS
	|	TYPENAME
	;
type-requirement:
	TYPENAME	type-name	SEMICOLON
	|	TYPENAME	nested-name-specifier	type-name	SEMICOLON
	;
type-specifier:
	simple-type-specifier
	|	elaborated-type-specifier
	|	typename-specifier
	|	cv-qualifier
	;
type-specifier-seq:
	type-specifier
	|	type-specifier	attribute-specifier-seq
	|	type-specifier	type-specifier-seq
	;
typedef-name:
	IDENTIFIER
	|	simple-template-id
	;
typename-specifier:
	TYPENAME	nested-name-specifier	IDENTIFIER
	|	TYPENAME	nested-name-specifier	simple-template-id
	|	TYPENAME	nested-name-specifier	TEMPLATE	simple-template-id
	;
ud-suffix:
	IDENTIFIER
	;
unary-expression:
	postfix-expression
	|	unary-operator	cast-expression
	|	PLUS_PLUS	cast-expression
	|	MINUS_MINUS	cast-expression
	|	await-expression
	|	SIZEOF	unary-expression
	|	SIZEOF	OPEN_PAREN	type-id	CLOSE_PAREN
	|	SIZEOF	ELLIPSIS	OPEN_PAREN	IDENTIFIER	CLOSE_PAREN
	|	ALIGNOF	OPEN_PAREN	type-id	CLOSE_PAREN
	|	noexcept-expression
	|	new-expression
	|	delete-expression
	;
unary-operator:
	MULT
	|	AND
	|	PLUS
	|	MINUS
	|	NOT
	|	COMPL
	;
universal-character-name:
	ESCAPE_LU	hex-quad
	|	ESCAPE_HU	hex-quad	hex-quad
	;
unnamed-namespace-definition:
	INLINE	NAMESPACE	OPEN_BRACE	namespace-body	CLOSE_BRACE
	|	NAMESPACE	OPEN_BRACE	namespace-body	CLOSE_BRACE
	|	INLINE	NAMESPACE	attribute-specifier-seq	OPEN_BRACE	namespace-body	CLOSE_BRACE
	|	NAMESPACE	attribute-specifier-seq	OPEN_BRACE	namespace-body	CLOSE_BRACE
	;
unqualified-id:
	IDENTIFIER
	|	operator-function-id
	|	conversion-function-id
	|	literal-operator-id
	|	COMPL	type-name
	|	COMPL	decltype-specifier
	|	template-id
	;
unsigned-suffix:
	'u'
	|	'U'
	;
user-defined-character-literal:
	character-literal	ud-suffix
	;
user-defined-floating-point-literal:
	fractional-constant	ud-suffix
	|	fractional-constant	exponent-part	ud-suffix
	|	digit-sequence	exponent-part	ud-suffix
	|	hexadecimal-prefix	hexadecimal-fractional-constant	binary-exponent-part	ud-suffix
	|	hexadecimal-prefix	hexadecimal-digit-sequence	binary-exponent-part	ud-suffix
	;
user-defined-integer-literal:
	decimal-literal	ud-suffix
	|	octal-literal	ud-suffix
	|	hexadecimal-literal	ud-suffix
	|	binary-literal	ud-suffix
	;
user-defined-literal:
	user-defined-integer-literal
	|	user-defined-floating-point-literal
	|	user-defined-string-literal
	|	user-defined-character-literal
	;
user-defined-string-literal:
	string-literal	ud-suffix
	;
using-declaration:
	USING	using-declarator-list	SEMICOLON
	;
using-declarator:
	TYPENAME	nested-name-specifier	unqualified-id
	|	nested-name-specifier	unqualified-id
	;
using-declarator-list:
	using-declarator
	|	using-declarator	ELLIPSIS
	|	using-declarator-list	COMMA	using-declarator
	|	using-declarator-list	COMMA	using-declarator	ELLIPSIS
	;
using-directive:
	attribute-specifier-seq	USING	NAMESPACE	namespace-name	SEMICOLON
	|	USING	NAMESPACE	namespace-name	SEMICOLON
	|	attribute-specifier-seq	USING	NAMESPACE	nested-name-specifier	namespace-name	SEMICOLON
	|	USING	NAMESPACE	nested-name-specifier	namespace-name	SEMICOLON
	;
using-enum-declaration:
	USING	elaborated-enum-specifier	SEMICOLON
	;
virt-specifier:
	OVERRIDE
	|	FINAL
	;
virt-specifier-seq:
	virt-specifier
	|	virt-specifier-seq	virt-specifier
	;
yield-expression:
	CO_YIELD	assignment-expression
	|	CO_YIELD	braced-init-list
	;

%%
static void yyerror(const char *s)
{
	fprintf(stderr, "%d: %s\n", lineno, s);
}
int main(int argc, char**argv){
	lineno = 1;
	extern FILE *yyin;
	if (argc!=2){
		fprintf(stderr, "usage: %s <source>\n", argv[0]);
		return -1;
	}
	yyin=fopen(argv[1], "r");
	if (yyin){	
		if (yyparse()==0){
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


