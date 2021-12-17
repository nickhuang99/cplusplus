
%{
#include <iostream>
#include <string>
using namespace std;
extern int yylineno;
extern void yyerror(const string& );
extern int yylex (void);
%}
%term  COMMA
%term  CONSTEXPR
%term  ELLIPSIS
%term  EXPORT
%term  EXTERN
%term  IDENTIFIER
%term  INLINE
%term  NOEXCEPT
%term  NOT
%term  SCOPE
%term  TEMPLATE
%term  THIS
%term  TYPENAME
%term  VIRTUAL
%term  PRIVATE
%term  PROTECTED
%term  PUBLIC
%term  PLUS
%term  MINUS
%term  USING
%term  EQ
%term  SEMICOLON
%term  ALIGNAS
%term  OPEN_PAREN
%term  CLOSE_PAREN
%term  AND
%term  ASM
%term  MULT_EQ
%term  DIV_EQ
%term  MOD_EQ
%term  PLUS_EQ
%term  MINUS_EQ
%term  RSHIFT_EQ
%term  LSHIFT_EQ
%term  AND_EQ
%term  XOR_EQ
%term  OR_EQ
%term  OPEN_SQUARE
%term  CLOSE_SQUARE
%term  COLON
%term  CO_AWAIT
%term  OPEN_BRACE
%term  CLOSE_BRACE
%term  BALANCED_TOKEN
%term  CLASS
%term  STRUCT
%term  UNION
%term  FINAL
%term  SPACESHIP
%term  CONCEPT
%term  QUERY
%term  AND_AND
%term  OR_OR
%term  OPERATOR
%term  CO_RETURN
%term  CONST
%term  VOLATILE
%term  FRIEND
%term  TYPEDEF
%term  CONSTEVAL
%term  CONSTINIT
%term  DECLTYPE
%term  DEREF
%term  DELETE
%term  DOT
%term  ENUM
%term  EQ_EQ
%term  NOT_EQ
%term  XOR
%term  LESS
%term  GREATER
%term  EXPLICIT
%term  MULT
%term  DIV
%term  MOD
%term  OR
%term  LSHIFT
%term  RSHIFT
%term  LESS_EQ
%term  GREATER_EQ
%term  DOT_STAR
%term  DEREF_STAR
%term  DEFAULT
%term  TRY
%term  MODULE
%term  CATCH
%term  HEADER_NAME
%term  WHILE
%term  DO
%term  FOR
%term  BREAK
%term  CONTINUE
%term  RETURN
%term  GOTO
%term  CASE
%term  IMPORT
%term  NAMESPACE
%term  REQUIRES
%term  NEW
%term  COMPL
%term  PLUS_PLUS
%term  MINUS_MINUS
%term  AUTO
%term  DYNAMIC_CAST
%term  STATIC_CAST
%term  REINTERPRET_CAST
%term  CONST_CAST
%term  TYPEID
%term  LITERAL
%term  IF
%term  ELSE
%term  SWITCH
%term  CHAR
%term  CHAR8_T
%term  CHAR16_T
%term  CHAR32_T
%term  WCHAR_T
%term  BOOL
%term  SHORT
%term  INT
%term  LONG
%term  SIGNED
%term  UNSIGNED
%term  FLOAT
%term  DOUBLE
%term  VOID
%term  STATIC_ASSERT
%term  STATIC
%term  THREAD_LOCAL
%term  MUTABLE
%term  STRING_LITERAL
%term  THROW
%term  SIZEOF
%term  ALIGNOF
%term  OVERRIDE
%term  CO_YIELD

%start  translation-unit
%glr-parser
%%
COMMA-opt:
	%empty
	|	COMMA
	;
CONSTEXPR-opt:
	%empty
	|	CONSTEXPR
	;
ELLIPSIS-opt:
	%empty
	|	ELLIPSIS
	;
EXPORT-opt:
	%empty
	|	EXPORT
	;
EXTERN-opt:
	%empty
	|	EXTERN
	;
IDENTIFIER-opt:
	%empty
	|	IDENTIFIER
	;
INLINE-opt:
	%empty
	|	INLINE
	;
NOEXCEPT-opt:
	%empty
	|	NOEXCEPT
	;
NOT-opt:
	%empty
	|	NOT
	;
SCOPE-opt:
	%empty
	|	SCOPE
	;
TEMPLATE-opt:
	%empty
	|	TEMPLATE
	;
THIS-opt:
	%empty
	|	THIS
	;
TYPENAME-opt:
	%empty
	|	TYPENAME
	;
VIRTUAL-opt:
	%empty
	|	VIRTUAL
	;
abstract-declarator:
	ptr-abstract-declarator
	|	noptr-abstract-declarator-opt	parameters-and-qualifiers	trailing-return-type
	|	abstract-pack-declarator
	;
abstract-declarator-opt:
	%empty
	|	abstract-declarator
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
access-specifier-opt:
	%empty
	|	access-specifier
	;
additive-expression:
	multiplicative-expression
	|	additive-expression	PLUS	multiplicative-expression
	|	additive-expression	MINUS	multiplicative-expression
	;
alias-declaration:
	USING	IDENTIFIER	attribute-specifier-seq-opt	EQ	defining-type-id	SEMICOLON
	;
alignment-specifier:
	ALIGNAS	OPEN_PAREN	type-id	ELLIPSIS-opt	CLOSE_PAREN
	|	ALIGNAS	OPEN_PAREN	constant-expression	ELLIPSIS-opt	CLOSE_PAREN
	;
and-expression:
	equality-expression
	|	and-expression	AND	equality-expression
	;
asm-declaration:
	attribute-specifier-seq-opt	ASM	OPEN_PAREN	string-literal	CLOSE_PAREN	SEMICOLON
	;
assignment-expression:
	conditional-expression
	|	yield-expression
	|	throw-expression
	|	logical-or-expression	assignment-operator	initializer-clause
	;
assignment-expression-opt:
	%empty
	|	assignment-expression
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
	attribute-token	attribute-argument-clause-opt
	;
attribute-argument-clause:
	OPEN_PAREN	balanced-token-seq-opt	CLOSE_PAREN
	;
attribute-argument-clause-opt:
	%empty
	|	attribute-argument-clause
	;
attribute-declaration:
	attribute-specifier-seq	SEMICOLON
	;
attribute-list:
	attribute-opt
	|	attribute-list	COMMA	attribute-opt
	|	attribute	ELLIPSIS
	|	attribute-list	COMMA	attribute	ELLIPSIS
	;
attribute-namespace:
	IDENTIFIER
	;
attribute-opt:
	%empty
	|	attribute
	;
attribute-scoped-token:
	attribute-namespace	SCOPE	IDENTIFIER
	;
attribute-specifier:
	OPEN_SQUARE	OPEN_SQUARE	attribute-using-prefix-opt	attribute-list	CLOSE_SQUARE	CLOSE_SQUARE
	|	alignment-specifier
	;
attribute-specifier-seq:
	attribute-specifier-seq-opt	attribute-specifier
	;
attribute-specifier-seq-opt:
	%empty
	|	attribute-specifier-seq
	;
attribute-token:
	IDENTIFIER
	|	attribute-scoped-token
	;
attribute-using-prefix:
	USING	attribute-namespace	COLON
	;
attribute-using-prefix-opt:
	%empty
	|	attribute-using-prefix
	;
await-expression:
	CO_AWAIT	cast-expression
	;
balanced-token:
	OPEN_PAREN	balanced-token-seq-opt	CLOSE_PAREN
	|	OPEN_SQUARE	balanced-token-seq-opt	CLOSE_SQUARE
	|	OPEN_BRACE	balanced-token-seq-opt	CLOSE_BRACE
	|	BALANCED_TOKEN
	;
balanced-token-seq:
	balanced-token
	|	balanced-token-seq	balanced-token
	;
balanced-token-seq-opt:
	%empty
	|	balanced-token-seq
	;
base-clause:
	COLON	base-specifier-list
	;
base-clause-opt:
	%empty
	|	base-clause
	;
base-specifier:
	attribute-specifier-seq-opt	class-or-decltype
	|	attribute-specifier-seq-opt	VIRTUAL	access-specifier-opt	class-or-decltype
	|	attribute-specifier-seq-opt	access-specifier	VIRTUAL-opt	class-or-decltype
	;
base-specifier-list:
	base-specifier	ELLIPSIS-opt
	|	base-specifier-list	COMMA	base-specifier	ELLIPSIS-opt
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
brace-or-equal-initializer:
	EQ	initializer-clause
	|	braced-init-list
	;
brace-or-equal-initializer-opt:
	%empty
	|	brace-or-equal-initializer
	;
braced-init-list:
	OPEN_BRACE	initializer-list	COMMA-opt	CLOSE_BRACE
	|	OPEN_BRACE	designated-initializer-list	COMMA-opt	CLOSE_BRACE
	|	OPEN_BRACE	CLOSE_BRACE
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
class-head:
	class-key	attribute-specifier-seq-opt	class-head-name	class-virt-specifier-opt	base-clause-opt
	|	class-key	attribute-specifier-seq-opt	base-clause-opt
	;
class-head-name:
	nested-name-specifier-opt	class-name
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
	nested-name-specifier-opt	type-name
	|	nested-name-specifier	TEMPLATE	simple-template-id
	|	decltype-specifier
	;
class-specifier:
	class-head	OPEN_BRACE	member-specification-opt	CLOSE_BRACE
	;
class-virt-specifier:
	FINAL
	;
class-virt-specifier-opt:
	%empty
	|	class-virt-specifier
	;
compare-expression:
	shift-expression
	|	compare-expression	SPACESHIP	shift-expression
	;
compound-requirement:
	OPEN_BRACE	expression	CLOSE_BRACE	NOEXCEPT-opt	return-type-requirement-opt	SEMICOLON
	;
compound-statement:
	OPEN_BRACE	statement-seq-opt	CLOSE_BRACE
	;
concept-definition:
	CONCEPT	concept-name	EQ	constraint-expression	SEMICOLON
	;
concept-name:
	IDENTIFIER
	;
condition:
	expression
	|	attribute-specifier-seq-opt	decl-specifier-seq	declarator	brace-or-equal-initializer
	;
condition-opt:
	%empty
	|	condition
	;
conditional-expression:
	logical-or-expression
	|	logical-or-expression	QUERY	expression	COLON	assignment-expression
	;
constant-expression:
	conditional-expression
	;
constant-expression-opt:
	%empty
	|	constant-expression
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
	ptr-operator	conversion-declarator-opt
	;
conversion-declarator-opt:
	%empty
	|	conversion-declarator
	;
conversion-function-id:
	OPERATOR	conversion-type-id
	;
conversion-type-id:
	type-specifier-seq	conversion-declarator-opt
	;
coroutine-return-statement:
	CO_RETURN	expr-or-braced-init-list-opt	SEMICOLON
	;
ctor-initializer:
	COLON	mem-initializer-list
	;
ctor-initializer-opt:
	%empty
	|	ctor-initializer
	;
cv-qualifier:
	CONST
	|	VOLATILE
	;
cv-qualifier-seq:
	cv-qualifier	cv-qualifier-seq-opt
	;
cv-qualifier-seq-opt:
	%empty
	|	cv-qualifier-seq
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
	decl-specifier	attribute-specifier-seq-opt
	|	decl-specifier	decl-specifier-seq
	;
decl-specifier-seq-opt:
	%empty
	|	decl-specifier-seq
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
declaration-seq-opt:
	%empty
	|	declaration-seq
	;
declaration-statement:
	block-declaration
	;
declarator:
	ptr-declarator
	|	noptr-declarator	parameters-and-qualifiers	trailing-return-type
	;
declarator-id:
	ELLIPSIS-opt	id-expression
	;
decltype-specifier:
	DECLTYPE	OPEN_PAREN	expression	CLOSE_PAREN
	;
deduction-guide:
	explicit-specifier-opt	template-name	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	DEREF	simple-template-id	SEMICOLON
	;
defining-type-id:
	defining-type-specifier-seq	abstract-declarator-opt
	;
defining-type-specifier:
	type-specifier
	|	class-specifier
	|	enum-specifier
	;
defining-type-specifier-seq:
	defining-type-specifier	attribute-specifier-seq-opt
	|	defining-type-specifier	defining-type-specifier-seq
	;
delete-expression:
	SCOPE-opt	DELETE	cast-expression
	|	SCOPE-opt	DELETE	OPEN_SQUARE	CLOSE_SQUARE	cast-expression
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
elaborated-enum-specifier:
	ENUM	nested-name-specifier-opt	IDENTIFIER
	;
elaborated-type-specifier:
	class-key	attribute-specifier-seq-opt	nested-name-specifier-opt	IDENTIFIER
	|	class-key	simple-template-id
	|	class-key	nested-name-specifier	TEMPLATE-opt	simple-template-id
	|	elaborated-enum-specifier
	;
empty-declaration:
	SEMICOLON
	;
enclosing-namespace-specifier:
	IDENTIFIER
	|	enclosing-namespace-specifier	SCOPE	INLINE-opt	IDENTIFIER
	;
enum-base:
	COLON	type-specifier-seq
	;
enum-base-opt:
	%empty
	|	enum-base
	;
enum-head:
	enum-key	attribute-specifier-seq-opt	enum-head-name-opt	enum-base-opt
	;
enum-head-name:
	nested-name-specifier-opt	IDENTIFIER
	;
enum-head-name-opt:
	%empty
	|	enum-head-name
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
	enum-head	OPEN_BRACE	enumerator-list-opt	CLOSE_BRACE
	|	enum-head	OPEN_BRACE	enumerator-list	COMMA	CLOSE_BRACE
	;
enumerator:
	IDENTIFIER	attribute-specifier-seq-opt
	;
enumerator-definition:
	enumerator
	|	enumerator	EQ	constant-expression
	;
enumerator-list:
	enumerator-definition
	|	enumerator-list	COMMA	enumerator-definition
	;
enumerator-list-opt:
	%empty
	|	enumerator-list
	;
equality-expression:
	relational-expression
	|	equality-expression	EQ_EQ	relational-expression
	|	equality-expression	NOT_EQ	relational-expression
	;
exception-declaration:
	attribute-specifier-seq-opt	type-specifier-seq	declarator
	|	attribute-specifier-seq-opt	type-specifier-seq	abstract-declarator-opt
	|	ELLIPSIS
	;
exclusive-or-expression:
	and-expression
	|	exclusive-or-expression	XOR	and-expression
	;
explicit-instantiation:
	EXTERN-opt	TEMPLATE	declaration
	;
explicit-specialization:
	TEMPLATE	LESS	GREATER	declaration
	;
explicit-specifier:
	EXPLICIT	OPEN_PAREN	constant-expression	CLOSE_PAREN
	|	EXPLICIT
	;
explicit-specifier-opt:
	%empty
	|	explicit-specifier
	;
export-declaration:
	EXPORT	declaration
	|	EXPORT	OPEN_BRACE	declaration-seq-opt	CLOSE_BRACE
	|	EXPORT	module-import-declaration
	;
expr-or-braced-init-list:
	expression
	|	braced-init-list
	;
expr-or-braced-init-list-opt:
	%empty
	|	expr-or-braced-init-list
	;
expression:
	assignment-expression
	|	expression	COMMA	assignment-expression
	;
expression-list:
	initializer-list
	;
expression-list-opt:
	%empty
	|	expression-list
	;
expression-opt:
	%empty
	|	expression
	;
expression-statement:
	expression-opt	SEMICOLON
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
	attribute-specifier-seq-opt	decl-specifier-seq	declarator
	|	attribute-specifier-seq-opt	decl-specifier-seq	ref-qualifier-opt	OPEN_SQUARE	identifier-list	CLOSE_SQUARE
	;
for-range-initializer:
	expr-or-braced-init-list
	;
function-body:
	ctor-initializer-opt	compound-statement
	|	function-try-block
	|	EQ	DEFAULT	SEMICOLON
	|	EQ	DELETE	SEMICOLON
	;
function-definition:
	attribute-specifier-seq-opt	decl-specifier-seq-opt	declarator	virt-specifier-seq-opt	function-body
	|	attribute-specifier-seq-opt	decl-specifier-seq-opt	declarator	requires-clause	function-body
	;
function-specifier:
	VIRTUAL
	|	explicit-specifier
	;
function-try-block:
	TRY	ctor-initializer-opt	compound-statement	handler-seq
	;
global-module-fragment:
	MODULE	SEMICOLON	declaration-seq-opt
	;
global-module-fragment-opt:
	%empty
	|	global-module-fragment
	;
handler:
	CATCH	OPEN_PAREN	exception-declaration	CLOSE_PAREN	compound-statement
	;
handler-seq:
	handler	handler-seq-opt
	;
handler-seq-opt:
	%empty
	|	handler-seq
	;
header-name:
	HEADER_NAME
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
	ELLIPSIS-opt	IDENTIFIER	initializer
	|	AND	ELLIPSIS-opt	IDENTIFIER	initializer
	;
init-declarator:
	declarator	initializer-opt
	|	declarator	requires-clause
	;
init-declarator-list:
	init-declarator
	|	init-declarator-list	COMMA	init-declarator
	;
init-declarator-list-opt:
	%empty
	|	init-declarator-list
	;
init-statement:
	expression-statement
	|	simple-declaration
	|	alias-declaration
	;
init-statement-opt:
	%empty
	|	init-statement
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
	initializer-clause	ELLIPSIS-opt
	|	initializer-list	COMMA	initializer-clause	ELLIPSIS-opt
	;
initializer-opt:
	%empty
	|	initializer
	;
iteration-statement:
	WHILE	OPEN_PAREN	condition	CLOSE_PAREN	statement
	|	DO	statement	WHILE	OPEN_PAREN	expression	CLOSE_PAREN	SEMICOLON
	|	FOR	OPEN_PAREN	init-statement	condition-opt	SEMICOLON	expression-opt	CLOSE_PAREN	statement
	|	FOR	OPEN_PAREN	init-statement-opt	for-range-declaration	COLON	for-range-initializer	CLOSE_PAREN	statement
	;
jump-statement:
	BREAK	SEMICOLON
	|	CONTINUE	SEMICOLON
	|	RETURN	expr-or-braced-init-list-opt	SEMICOLON
	|	coroutine-return-statement
	|	GOTO	IDENTIFIER	SEMICOLON
	;
labeled-statement:
	attribute-specifier-seq-opt	IDENTIFIER	COLON	statement
	|	attribute-specifier-seq-opt	CASE	constant-expression	COLON	statement
	|	attribute-specifier-seq-opt	DEFAULT	COLON	statement
	;
lambda-capture:
	capture-default
	|	capture-list
	|	capture-default	COMMA	capture-list
	;
lambda-capture-opt:
	%empty
	|	lambda-capture
	;
lambda-declarator:
	lambda-specifiers
	|	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	lambda-specifiers	requires-clause-opt
	;
lambda-expression:
	lambda-introducer	lambda-declarator	compound-statement
	|	lambda-introducer	LESS	template-parameter-list	GREATER	requires-clause-opt	lambda-declarator	compound-statement
	;
lambda-introducer:
	OPEN_SQUARE	lambda-capture-opt	CLOSE_SQUARE
	;
lambda-specifiers:
	decl-specifier-seq-opt	noexcept-specifier-opt	attribute-specifier-seq-opt	trailing-return-type-opt
	;
linkage-specification:
	EXTERN	string-literal	OPEN_BRACE	declaration-seq-opt	CLOSE_BRACE
	|	EXTERN	string-literal	declaration
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
mem-initializer:
	mem-initializer-id	OPEN_PAREN	expression-list-opt	CLOSE_PAREN
	|	mem-initializer-id	braced-init-list
	;
mem-initializer-id:
	class-or-decltype
	|	IDENTIFIER
	;
mem-initializer-list:
	mem-initializer	ELLIPSIS-opt
	|	mem-initializer-list	COMMA	mem-initializer	ELLIPSIS-opt
	;
member-declaration:
	attribute-specifier-seq-opt	decl-specifier-seq-opt	member-declarator-list-opt	SEMICOLON
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
	declarator	virt-specifier-seq-opt	pure-specifier-opt
	|	declarator	requires-clause
	|	declarator	brace-or-equal-initializer-opt
	|	IDENTIFIER-opt	attribute-specifier-seq-opt	COLON	constant-expression	brace-or-equal-initializer-opt
	;
member-declarator-list:
	member-declarator
	|	member-declarator-list	COMMA	member-declarator
	;
member-declarator-list-opt:
	%empty
	|	member-declarator-list
	;
member-specification:
	member-declaration	member-specification-opt
	|	access-specifier	COLON	member-specification-opt
	;
member-specification-opt:
	%empty
	|	member-specification
	;
module-declaration:
	EXPORT-opt	MODULE	module-name	module-partition-opt	attribute-specifier-seq-opt	SEMICOLON
	;
module-import-declaration:
	IMPORT	module-name	attribute-specifier-seq-opt	SEMICOLON
	|	IMPORT	module-partition	attribute-specifier-seq-opt	SEMICOLON
	|	IMPORT	header-name	attribute-specifier-seq-opt	SEMICOLON
	;
module-name:
	module-name-qualifier-opt	IDENTIFIER
	;
module-name-qualifier:
	IDENTIFIER	DOT
	|	module-name-qualifier	IDENTIFIER	DOT
	;
module-name-qualifier-opt:
	%empty
	|	module-name-qualifier
	;
module-partition:
	COLON	module-name-qualifier-opt	IDENTIFIER
	;
module-partition-opt:
	%empty
	|	module-partition
	;
multiplicative-expression:
	pm-expression
	|	multiplicative-expression	MULT	pm-expression
	|	multiplicative-expression	DIV	pm-expression
	|	multiplicative-expression	MOD	pm-expression
	;
named-namespace-definition:
	INLINE-opt	NAMESPACE	attribute-specifier-seq-opt	IDENTIFIER	OPEN_BRACE	namespace-body	CLOSE_BRACE
	;
namespace-alias:
	IDENTIFIER
	;
namespace-alias-definition:
	NAMESPACE	IDENTIFIER	EQ	qualified-namespace-specifier	SEMICOLON
	;
namespace-body:
	declaration-seq-opt
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
	|	nested-name-specifier	TEMPLATE-opt	simple-template-id	SCOPE
	;
nested-name-specifier-opt:
	%empty
	|	nested-name-specifier
	;
nested-namespace-definition:
	NAMESPACE	enclosing-namespace-specifier	SCOPE	INLINE-opt	IDENTIFIER	OPEN_BRACE	namespace-body	CLOSE_BRACE
	;
nested-requirement:
	REQUIRES	constraint-expression	SEMICOLON
	;
new-declarator:
	ptr-operator	new-declarator-opt
	|	noptr-new-declarator
	;
new-declarator-opt:
	%empty
	|	new-declarator
	;
new-expression:
	SCOPE-opt	NEW	new-placement-opt	new-type-id	new-initializer-opt
	|	SCOPE-opt	NEW	new-placement-opt	OPEN_PAREN	type-id	CLOSE_PAREN	new-initializer-opt
	;
new-initializer:
	OPEN_PAREN	expression-list-opt	CLOSE_PAREN
	|	braced-init-list
	;
new-initializer-opt:
	%empty
	|	new-initializer
	;
new-placement:
	OPEN_PAREN	expression-list	CLOSE_PAREN
	;
new-placement-opt:
	%empty
	|	new-placement
	;
new-type-id:
	type-specifier-seq	new-declarator-opt
	;
nodeclspec-function-declaration:
	attribute-specifier-seq-opt	declarator	SEMICOLON
	;
noexcept-expression:
	NOEXCEPT	OPEN_PAREN	expression	CLOSE_PAREN
	;
noexcept-specifier:
	NOEXCEPT	OPEN_PAREN	constant-expression	CLOSE_PAREN
	|	NOEXCEPT
	;
noexcept-specifier-opt:
	%empty
	|	noexcept-specifier
	;
noptr-abstract-declarator:
	noptr-abstract-declarator-opt	parameters-and-qualifiers
	|	noptr-abstract-declarator-opt	OPEN_SQUARE	constant-expression-opt	CLOSE_SQUARE	attribute-specifier-seq-opt
	|	OPEN_PAREN	ptr-abstract-declarator	CLOSE_PAREN
	;
noptr-abstract-declarator-opt:
	%empty
	|	noptr-abstract-declarator
	;
noptr-abstract-pack-declarator:
	noptr-abstract-pack-declarator	parameters-and-qualifiers
	|	noptr-abstract-pack-declarator	OPEN_SQUARE	constant-expression-opt	CLOSE_SQUARE	attribute-specifier-seq-opt
	|	ELLIPSIS
	;
noptr-declarator:
	declarator-id	attribute-specifier-seq-opt
	|	noptr-declarator	parameters-and-qualifiers
	|	noptr-declarator	OPEN_SQUARE	constant-expression-opt	CLOSE_SQUARE	attribute-specifier-seq-opt
	|	OPEN_PAREN	ptr-declarator	CLOSE_PAREN
	;
noptr-new-declarator:
	OPEN_SQUARE	expression-opt	CLOSE_SQUARE	attribute-specifier-seq-opt
	|	noptr-new-declarator	OPEN_SQUARE	constant-expression	CLOSE_SQUARE	attribute-specifier-seq-opt
	;
opaque-enum-declaration:
	enum-key	attribute-specifier-seq-opt	enum-head-name	enum-base-opt	SEMICOLON
	;
operator-function-id:
	OPERATOR	overloadable-operator
	|	OPERATOR	overloadable-operator	LESS	template-argument-list-opt	GREATER
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
	attribute-specifier-seq-opt	THIS-opt	decl-specifier-seq	declarator
	|	attribute-specifier-seq-opt	THIS-opt	decl-specifier-seq	declarator	EQ	initializer-clause
	|	attribute-specifier-seq-opt	THIS-opt	decl-specifier-seq	abstract-declarator-opt
	|	attribute-specifier-seq-opt	THIS-opt	decl-specifier-seq	abstract-declarator-opt	EQ	initializer-clause
	;
parameter-declaration-clause:
	parameter-declaration-list-opt	ELLIPSIS-opt
	|	parameter-declaration-list	COMMA	ELLIPSIS
	;
parameter-declaration-list:
	parameter-declaration
	|	parameter-declaration-list	COMMA	parameter-declaration
	;
parameter-declaration-list-opt:
	%empty
	|	parameter-declaration-list
	;
parameters-and-qualifiers:
	OPEN_PAREN	parameter-declaration-clause	CLOSE_PAREN	cv-qualifier-seq-opt	ref-qualifier-opt	noexcept-specifier-opt	attribute-specifier-seq-opt
	;
placeholder-type-specifier:
	type-constraint-opt	AUTO
	|	type-constraint-opt	DECLTYPE	OPEN_PAREN	AUTO	CLOSE_PAREN
	;
pm-expression:
	cast-expression
	|	pm-expression	DOT_STAR	cast-expression
	|	pm-expression	DEREF_STAR	cast-expression
	;
postfix-expression:
	primary-expression
	|	postfix-expression	OPEN_SQUARE	expression-list-opt	CLOSE_SQUARE
	|	postfix-expression	OPEN_PAREN	expression-list-opt	CLOSE_PAREN
	|	simple-type-specifier	OPEN_PAREN	expression-list-opt	CLOSE_PAREN
	|	typename-specifier	OPEN_PAREN	expression-list-opt	CLOSE_PAREN
	|	simple-type-specifier	braced-init-list
	|	typename-specifier	braced-init-list
	|	postfix-expression	DOT	TEMPLATE-opt	id-expression
	|	postfix-expression	DEREF	TEMPLATE-opt	id-expression
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
	LITERAL
	|	THIS
	|	OPEN_PAREN	expression	CLOSE_PAREN
	|	id-expression
	|	lambda-expression
	|	fold-expression
	|	requires-expression
	;
private-module-fragment:
	MODULE	COLON	PRIVATE	SEMICOLON	declaration-seq-opt
	;
private-module-fragment-opt:
	%empty
	|	private-module-fragment
	;
ptr-abstract-declarator:
	noptr-abstract-declarator
	|	ptr-operator	ptr-abstract-declarator-opt
	;
ptr-abstract-declarator-opt:
	%empty
	|	ptr-abstract-declarator
	;
ptr-declarator:
	noptr-declarator
	|	ptr-operator	ptr-declarator
	;
ptr-operator:
	MULT	attribute-specifier-seq-opt	cv-qualifier-seq-opt
	|	AND	attribute-specifier-seq-opt
	|	AND_AND	attribute-specifier-seq-opt
	|	nested-name-specifier	MULT	attribute-specifier-seq-opt	cv-qualifier-seq-opt
	;
pure-specifier:
	EQ	'0'
	;
pure-specifier-opt:
	%empty
	|	pure-specifier
	;
qualified-id:
	nested-name-specifier	TEMPLATE-opt	unqualified-id
	;
qualified-namespace-specifier:
	nested-name-specifier-opt	namespace-name
	;
ref-qualifier:
	AND
	|	AND_AND
	;
ref-qualifier-opt:
	%empty
	|	ref-qualifier
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
requirement-parameter-list-opt:
	%empty
	|	requirement-parameter-list
	;
requirement-seq:
	requirement
	|	requirement-seq	requirement
	;
requires-clause:
	REQUIRES	constraint-logical-or-expression
	;
requires-clause-opt:
	%empty
	|	requires-clause
	;
requires-expression:
	REQUIRES	requirement-parameter-list-opt	requirement-body
	;
return-type-requirement:
	DEREF	type-constraint
	;
return-type-requirement-opt:
	%empty
	|	return-type-requirement
	;
selection-statement:
	IF	CONSTEXPR-opt	OPEN_PAREN	init-statement-opt	condition	CLOSE_PAREN	statement
	|	IF	CONSTEXPR-opt	OPEN_PAREN	init-statement-opt	condition	CLOSE_PAREN	statement	ELSE	statement
	|	IF	NOT-opt	CONSTEVAL	compound-statement
	|	IF	NOT-opt	CONSTEVAL	compound-statement	ELSE	statement
	|	SWITCH	OPEN_PAREN	init-statement-opt	condition	CLOSE_PAREN	statement
	;
shift-expression:
	additive-expression
	|	shift-expression	LSHIFT	additive-expression
	|	shift-expression	RSHIFT	additive-expression
	;
simple-capture:
	IDENTIFIER	ELLIPSIS-opt
	|	AND	IDENTIFIER	ELLIPSIS-opt
	|	THIS
	|	MULT	THIS
	;
simple-declaration:
	decl-specifier-seq	init-declarator-list-opt	SEMICOLON
	|	attribute-specifier-seq	decl-specifier-seq	init-declarator-list	SEMICOLON
	|	attribute-specifier-seq-opt	decl-specifier-seq	ref-qualifier-opt	OPEN_SQUARE	identifier-list	CLOSE_SQUARE	initializer	SEMICOLON
	;
simple-requirement:
	expression	SEMICOLON
	;
simple-template-id:
	template-name	LESS	template-argument-list-opt	GREATER
	;
simple-type-specifier:
	nested-name-specifier-opt	type-name
	|	nested-name-specifier	TEMPLATE	simple-template-id
	|	decltype-specifier
	|	placeholder-type-specifier
	|	nested-name-specifier-opt	template-name
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
statement:
	labeled-statement
	|	attribute-specifier-seq-opt	expression-statement
	|	attribute-specifier-seq-opt	compound-statement
	|	attribute-specifier-seq-opt	selection-statement
	|	attribute-specifier-seq-opt	iteration-statement
	|	attribute-specifier-seq-opt	jump-statement
	|	declaration-statement
	|	attribute-specifier-seq-opt	try-block
	;
statement-seq:
	statement
	|	statement-seq	statement
	;
statement-seq-opt:
	%empty
	|	statement-seq
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
	STRING_LITERAL
	;
template-argument:
	constant-expression
	|	type-id
	|	id-expression
	;
template-argument-list:
	template-argument	ELLIPSIS-opt
	|	template-argument-list	COMMA	template-argument	ELLIPSIS-opt
	;
template-argument-list-opt:
	%empty
	|	template-argument-list
	;
template-declaration:
	template-head	declaration
	|	template-head	concept-definition
	;
template-head:
	TEMPLATE	LESS	template-parameter-list	GREATER	requires-clause-opt
	;
template-id:
	simple-template-id
	|	operator-function-id	LESS	template-argument-list-opt	GREATER
	|	literal-operator-id	LESS	template-argument-list-opt	GREATER
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
	THROW	assignment-expression-opt
	;
trailing-return-type:
	DEREF	type-id
	;
trailing-return-type-opt:
	%empty
	|	trailing-return-type
	;
translation-unit:
	declaration-seq-opt
	|	global-module-fragment-opt	module-declaration	declaration-seq-opt	private-module-fragment-opt
	;
try-block:
	TRY	compound-statement	handler-seq
	;
type-constraint:
	nested-name-specifier-opt	concept-name
	|	nested-name-specifier-opt	concept-name	LESS	template-argument-list-opt	GREATER
	;
type-constraint-opt:
	%empty
	|	type-constraint
	;
type-id:
	type-specifier-seq	abstract-declarator-opt
	;
type-name:
	class-name
	|	enum-name
	|	typedef-name
	;
type-parameter:
	type-parameter-key	ELLIPSIS-opt	IDENTIFIER-opt
	|	type-parameter-key	IDENTIFIER-opt	EQ	type-id
	|	type-constraint	ELLIPSIS-opt	IDENTIFIER-opt
	|	type-constraint	IDENTIFIER-opt	EQ	type-id
	|	template-head	type-parameter-key	ELLIPSIS-opt	IDENTIFIER-opt
	|	template-head	type-parameter-key	IDENTIFIER-opt	EQ	id-expression
	;
type-parameter-key:
	CLASS
	|	TYPENAME
	;
type-requirement:
	TYPENAME	nested-name-specifier-opt	type-name	SEMICOLON
	;
type-specifier:
	simple-type-specifier
	|	elaborated-type-specifier
	|	typename-specifier
	|	cv-qualifier
	;
type-specifier-seq:
	type-specifier	attribute-specifier-seq-opt
	|	type-specifier	type-specifier-seq
	;
typedef-name:
	IDENTIFIER
	|	simple-template-id
	;
typename-specifier:
	TYPENAME	nested-name-specifier	IDENTIFIER
	|	TYPENAME	nested-name-specifier	TEMPLATE-opt	simple-template-id
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
unnamed-namespace-definition:
	INLINE-opt	NAMESPACE	attribute-specifier-seq-opt	OPEN_BRACE	namespace-body	CLOSE_BRACE
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
user-defined-string-literal:
	string-literal	ud-suffix
	;
using-declaration:
	USING	using-declarator-list	SEMICOLON
	;
using-declarator:
	TYPENAME-opt	nested-name-specifier	unqualified-id
	;
using-declarator-list:
	using-declarator	ELLIPSIS-opt
	|	using-declarator-list	COMMA	using-declarator	ELLIPSIS-opt
	;
using-directive:
	attribute-specifier-seq-opt	USING	NAMESPACE	nested-name-specifier-opt	namespace-name	SEMICOLON
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
virt-specifier-seq-opt:
	%empty
	|	virt-specifier-seq
	;
yield-expression:
	CO_YIELD	assignment-expression
	|	CO_YIELD	braced-init-list
	;

%%
int main(int argc, char**argv){	
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

