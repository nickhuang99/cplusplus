%token  IDENTIFIER
%token  ANY_TOKEN_OTHER_THAN_PARENTHESIS_BRACKET_BRACE
%token  EXCEPT_THE_APOSTROPHE_REVERSE_SOLIDUS_OR_NEW_LINE_CHARACTER
%token  EXCEPT_THE_QUOTATION_MARK_REVERSE_SOLIDUS_OR_NEW_LINE_CHARACTER
%token  NOT_AN_OCTAL_DIGIT_A_SIMPLE_ESCAPE_SEQUENCE_CHAR_OR_THE_CHARACTERS_U_U_OR_X
%token  EXCEPT_SPACE_PARENTHESIS_REVERSE_SOLIDUS_TABULATION_LINE_TABULATION_FORM_FEED_AND_NEW_LINE
%token  EXCEPT_NEW_LINE_AND_GREATER_THAN_SIGN
%token  LL
%token  EXCEPT_NEW_LINE_AND_QUOTATION_MARK
%token  EXCEPT_RIGHT_PARENTHESIS_FOLLOWED_BY_THE_INITIAL_D_CHAR_SEQUENCE_FOLLOWED_BY_QUOTATION_MARK
%glr-parser
%%
%start  translation-unit;
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
	"private"
	|	"protected"
	|	"public"
	;
additive-expression:
	multiplicative-expression
	|	additive-expression	'+'	multiplicative-expression
	|	additive-expression	'-'	multiplicative-expression
	;
alias-declaration:
	"using"	IDENTIFIER	'='	defining-type-id	';'
	|	"using"	IDENTIFIER	attribute-specifier-seq	'='	defining-type-id	';'
	;
alignment-specifier:
	"alignas"	'('	type-id	')'
	|	"alignas"	'('	type-id	"..."	')'
	|	"alignas"	'('	constant-expression	')'
	|	"alignas"	'('	constant-expression	"..."	')'
	;
and-expression:
	equality-expression
	|	and-expression	'&'	equality-expression
	;
asm-declaration:
	attribute-specifier-seq	"asm"	'('	string-literal	')'	';'
	|	"asm"	'('	string-literal	')'	';'
	;
assignment-expression:
	conditional-expression
	|	yield-expression
	|	throw-expression
	|	logical-or-expression	assignment-operator	initializer-clause
	;
assignment-operator:
	'='
	|	"*="
	|	"/="
	|	"%="
	|	"+="
	|	"-="
	|	">>="
	|	"<<="
	|	"&="
	|	"^="
	|	"|="
	;
attribute:
	attribute-token
	|	attribute-token	attribute-argument-clause
	;
attribute-argument-clause:
	'('	')'
	|	'('	balanced-token-seq	')'
	;
attribute-declaration:
	attribute-specifier-seq	';'
	;
attribute-list:
	attribute
	|	attribute-list	','
	|	attribute-list	','	attribute
	|	attribute	"..."
	|	attribute-list	','	attribute	"..."
	;
attribute-namespace:
	IDENTIFIER
	;
attribute-scoped-token:
	attribute-namespace	"::"	IDENTIFIER
	;
attribute-specifier:
	'['	'['	attribute-list	']'	']'
	|	'['	'['	attribute-using-prefix	attribute-list	']'	']'
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
	"using"	attribute-namespace	':'
	;
await-expression:
	"co_await"	cast-expression
	;
balanced-token:
	'('	')'
	|	'('	balanced-token-seq	')'
	|	'['	']'
	|	'['	balanced-token-seq	']'
	|	'{'	'}'
	|	'{'	balanced-token-seq	'}'
	|	ANY_TOKEN_OTHER_THAN_PARENTHESIS_BRACKET_BRACE
	;
balanced-token-seq:
	balanced-token
	|	balanced-token-seq	balanced-token
	;
base-clause:
	':'	base-specifier-list
	;
base-specifier:
	attribute-specifier-seq	class-or-decltype
	|	class-or-decltype
	|	attribute-specifier-seq	"virtual"	class-or-decltype
	|	"virtual"	class-or-decltype
	|	attribute-specifier-seq	"virtual"	access-specifier	class-or-decltype
	|	"virtual"	access-specifier	class-or-decltype
	|	attribute-specifier-seq	access-specifier	class-or-decltype
	|	access-specifier	class-or-decltype
	|	attribute-specifier-seq	access-specifier	"virtual"	class-or-decltype
	|	access-specifier	"virtual"	class-or-decltype
	;
base-specifier-list:
	base-specifier
	|	base-specifier	"..."
	|	base-specifier-list	','	base-specifier
	|	base-specifier-list	','	base-specifier	"..."
	;
basic-c-char:
	EXCEPT_THE_APOSTROPHE_REVERSE_SOLIDUS_OR_NEW_LINE_CHARACTER
	;
basic-s-char:
	EXCEPT_THE_QUOTATION_MARK_REVERSE_SOLIDUS_OR_NEW_LINE_CHARACTER
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
	"0b"	binary-digit
	|	"0B"	binary-digit
	|	binary-literal	binary-digit
	|	binary-literal	'\''	binary-digit
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
	"false"
	|	"true"
	;
brace-or-equal-initializer:
	'='	initializer-clause
	|	braced-init-list
	;
braced-init-list:
	'{'	initializer-list	'}'
	|	'{'	initializer-list	','	'}'
	|	'{'	designated-initializer-list	'}'
	|	'{'	designated-initializer-list	','	'}'
	|	'{'	'}'
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
	'&'
	|	'='
	;
capture-list:
	capture
	|	capture-list	','	capture
	;
cast-expression:
	unary-expression
	|	'('	type-id	')'	cast-expression
	;
character-literal:
	encoding-prefix	'\''	c-char-sequence	'\''
	|	'\''	c-char-sequence	'\''
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
	"class"
	|	"struct"
	|	"union"
	;
class-name:
	IDENTIFIER
	|	simple-template-id
	;
class-or-decltype:
	nested-name-specifier	type-name
	|	type-name
	|	nested-name-specifier	"template"	simple-template-id
	|	decltype-specifier
	;
class-specifier:
	class-head	'{'	'}'
	|	class-head	'{'	member-specification	'}'
	;
class-virt-specifier:
	"final"
	;
compare-expression:
	shift-expression
	|	compare-expression	"<=>"	shift-expression
	;
compound-requirement:
	'{'	expression	'}'	';'
	|	'{'	expression	'}'	"noexcept"	';'
	|	'{'	expression	'}'	return-type-requirement	';'
	|	'{'	expression	'}'	"noexcept"	return-type-requirement	';'
	;
compound-statement:
	'{'	'}'
	|	'{'	statement-seq	'}'
	;
concept-definition:
	"concept"	concept-name	'='	constraint-expression	';'
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
	'\\'	conditional-escape-sequence-char
	;
conditional-escape-sequence-char:
	NOT_AN_OCTAL_DIGIT_A_SIMPLE_ESCAPE_SEQUENCE_CHAR_OR_THE_CHARACTERS_U_U_OR_X
	;
conditional-expression:
	logical-or-expression
	|	logical-or-expression	'?'	expression	':'	assignment-expression
	;
constant-expression:
	conditional-expression
	;
constraint-expression:
	logical-or-expression
	;
constraint-logical-and-expression:
	primary-expression
	|	constraint-logical-and-expression	"&&"	primary-expression
	;
constraint-logical-or-expression:
	constraint-logical-and-expression
	|	constraint-logical-or-expression	"||"	constraint-logical-and-expression
	;
conversion-declarator:
	ptr-operator
	|	ptr-operator	conversion-declarator
	;
conversion-function-id:
	"operator"	conversion-type-id
	;
conversion-type-id:
	type-specifier-seq
	|	type-specifier-seq	conversion-declarator
	;
coroutine-return-statement:
	"co_return"	';'
	|	"co_return"	expr-or-braced-init-list	';'
	;
ctor-initializer:
	':'	mem-initializer-list
	;
cv-qualifier:
	"const"
	|	"volatile"
	;
cv-qualifier-seq:
	cv-qualifier
	|	cv-qualifier	cv-qualifier-seq
	;
d-char:
	EXCEPT_SPACE_PARENTHESIS_REVERSE_SOLIDUS_TABULATION_LINE_TABULATION_FORM_FEED_AND_NEW_LINE
	;
d-char-sequence:
	d-char
	|	d-char-sequence	d-char
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
	|	decimal-literal	'\''	digit
	;
decl-specifier:
	storage-class-specifier
	|	defining-type-specifier
	|	function-specifier
	|	"friend"
	|	"typedef"
	|	"constexpr"
	|	"consteval"
	|	"constinit"
	|	"inline"
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
	"..."	id-expression
	|	id-expression
	;
decltype-specifier:
	"decltype"	'('	expression	')'
	;
deduction-guide:
	explicit-specifier	template-name	'('	parameter-declaration-clause	')'	"->"	simple-template-id	';'
	|	template-name	'('	parameter-declaration-clause	')'	"->"	simple-template-id	';'
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
	"::"	"delete"	cast-expression
	|	"delete"	cast-expression
	|	"::"	"delete"	'['	']'	cast-expression
	|	"delete"	'['	']'	cast-expression
	;
designated-initializer-clause:
	designator	brace-or-equal-initializer
	;
designated-initializer-list:
	designated-initializer-clause
	|	designated-initializer-list	','	designated-initializer-clause
	;
designator:
	'.'	IDENTIFIER
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
	|	digit-sequence	'\''	digit
	;
elaborated-enum-specifier:
	"enum"	IDENTIFIER
	|	"enum"	nested-name-specifier	IDENTIFIER
	;
elaborated-type-specifier:
	class-key	IDENTIFIER
	|	class-key	attribute-specifier-seq	IDENTIFIER
	|	class-key	nested-name-specifier	IDENTIFIER
	|	class-key	attribute-specifier-seq	nested-name-specifier	IDENTIFIER
	|	class-key	simple-template-id
	|	class-key	nested-name-specifier	simple-template-id
	|	class-key	nested-name-specifier	"template"	simple-template-id
	|	elaborated-enum-specifier
	;
empty-declaration:
	';'
	;
enclosing-namespace-specifier:
	IDENTIFIER
	|	enclosing-namespace-specifier	"::"	IDENTIFIER
	|	enclosing-namespace-specifier	"::"	"inline"	IDENTIFIER
	;
encoding-prefix:
	"u8"
	|	'u'
	|	'U'
	|	'L'
	;
enum-base:
	':'	type-specifier-seq
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
	"enum"
	|	"enum"	"class"
	|	"enum"	"struct"
	;
enum-name:
	IDENTIFIER
	;
enum-specifier:
	enum-head	'{'	'}'
	|	enum-head	'{'	enumerator-list	'}'
	|	enum-head	'{'	enumerator-list	','	'}'
	;
enumerator:
	IDENTIFIER
	|	IDENTIFIER	attribute-specifier-seq
	;
enumerator-definition:
	enumerator
	|	enumerator	'='	constant-expression
	;
enumerator-list:
	enumerator-definition
	|	enumerator-list	','	enumerator-definition
	;
equality-expression:
	relational-expression
	|	equality-expression	"=="	relational-expression
	|	equality-expression	"!="	relational-expression
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
	|	"..."
	;
exclusive-or-expression:
	and-expression
	|	exclusive-or-expression	'^'	and-expression
	;
explicit-instantiation:
	"extern"	"template"	declaration
	|	"template"	declaration
	;
explicit-specialization:
	"template"	'<'	'>'	declaration
	;
explicit-specifier:
	"explicit"	'('	constant-expression	')'
	|	"explicit"
	;
exponent-part:
	'e'	digit-sequence
	|	'e'	sign	digit-sequence
	|	'E'	digit-sequence
	|	'E'	sign	digit-sequence
	;
export-declaration:
	"export"	declaration
	|	"export"	'{'	'}'
	|	"export"	'{'	declaration-seq	'}'
	|	"export-keyword"	module-import-declaration
	;
expr-or-braced-init-list:
	expression
	|	braced-init-list
	;
expression:
	assignment-expression
	|	expression	','	assignment-expression
	;
expression-list:
	initializer-list
	;
expression-statement:
	expression	';'
	|	';'
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
	'('	cast-expression	fold-operator	"..."	')'
	|	'('	"..."	fold-operator	cast-expression	')'
	|	'('	cast-expression	fold-operator	"..."	fold-operator	cast-expression	')'
	;
fold-operator:
	'+'
	|	'-'
	|	'*'
	|	'/'
	|	'%'
	|	'^'
	|	'&'
	|	'|'
	|	"<<"
	|	">>"
	|	"+="
	|	"-="
	|	"*="
	|	"/="
	|	"%="
	|	"^="
	|	"&="
	|	"|="
	|	"<<="
	|	">>="
	|	'='
	|	"=="
	|	"!="
	|	'<'
	|	'>'
	|	"<="
	|	">="
	|	"&&"
	|	"||"
	|	','
	|	".*"
	|	"->*"
	;
for-range-declaration:
	attribute-specifier-seq	decl-specifier-seq	declarator
	|	decl-specifier-seq	declarator
	|	attribute-specifier-seq	decl-specifier-seq	'['	identifier-list	']'
	|	decl-specifier-seq	'['	identifier-list	']'
	|	attribute-specifier-seq	decl-specifier-seq	ref-qualifier	'['	identifier-list	']'
	|	decl-specifier-seq	ref-qualifier	'['	identifier-list	']'
	;
for-range-initializer:
	expr-or-braced-init-list
	;
fractional-constant:
	digit-sequence	'.'	digit-sequence
	|	'.'	digit-sequence
	|	digit-sequence	'.'
	;
function-body:
	ctor-initializer	compound-statement
	|	compound-statement
	|	function-try-block
	|	'='	"default"	';'
	|	'='	"delete"	';'
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
	"virtual"
	|	explicit-specifier
	;
function-try-block:
	"try"	compound-statement	handler-seq
	|	"try"	ctor-initializer	compound-statement	handler-seq
	;
global-module-fragment:
	"module-keyword"	';'
	|	"module-keyword"	';'	declaration-seq
	;
h-char:
	EXCEPT_NEW_LINE_AND_GREATER_THAN_SIGN
	;
handler:
	"catch"	'('	exception-declaration	')'	compound-statement
	;
handler-seq:
	handler
	|	handler	handler-seq
	;
header-name:
	'<'	"h-char-sequence"	'>'
	|	'"'	q-char-sequence	'"'
	|	"h-char-sequence:"
	|	h-char
	|	"h-char-sequence"	h-char
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
	|	hexadecimal-digit-sequence	'\''	hexadecimal-digit
	;
hexadecimal-escape-sequence:
	"\\x"	hexadecimal-digit
	|	hexadecimal-escape-sequence	hexadecimal-digit
	;
hexadecimal-floating-point-literal:
	hexadecimal-prefix	hexadecimal-fractional-constant	binary-exponent-part
	|	hexadecimal-prefix	hexadecimal-fractional-constant	binary-exponent-part	floating-point-suffix
	|	hexadecimal-prefix	hexadecimal-digit-sequence	binary-exponent-part
	|	hexadecimal-prefix	hexadecimal-digit-sequence	binary-exponent-part	floating-point-suffix
	;
hexadecimal-fractional-constant:
	hexadecimal-digit-sequence	'.'	hexadecimal-digit-sequence
	|	'.'	hexadecimal-digit-sequence
	|	hexadecimal-digit-sequence	'.'
	;
hexadecimal-literal:
	hexadecimal-prefix	hexadecimal-digit-sequence
	;
hexadecimal-prefix:
	"0x"
	|	"0X"
	;
id-expression:
	unqualified-id
	|	qualified-id
	;
identifier-list:
	IDENTIFIER
	|	identifier-list	','	IDENTIFIER
	;
inclusive-or-expression:
	exclusive-or-expression
	|	inclusive-or-expression	'|'	exclusive-or-expression
	;
init-capture:
	"..."	IDENTIFIER	initializer
	|	IDENTIFIER	initializer
	|	'&'	IDENTIFIER	initializer
	|	'&'	"..."	IDENTIFIER	initializer
	;
init-declarator:
	declarator
	|	declarator	initializer
	|	declarator	requires-clause
	;
init-declarator-list:
	init-declarator
	|	init-declarator-list	','	init-declarator
	;
init-statement:
	expression-statement
	|	simple-declaration
	|	alias-declaration
	;
initializer:
	brace-or-equal-initializer
	|	'('	expression-list	')'
	;
initializer-clause:
	assignment-expression
	|	braced-init-list
	;
initializer-list:
	initializer-clause
	|	initializer-clause	"..."
	|	initializer-list	','	initializer-clause
	|	initializer-list	','	initializer-clause	"..."
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
	"while"	'('	condition	')'	statement
	|	"do"	statement	"while"	'('	expression	')'	';'
	|	"for"	'('	init-statement	';'	')'	statement
	|	"for"	'('	init-statement	condition	';'	')'	statement
	|	"for"	'('	init-statement	';'	expression	')'	statement
	|	"for"	'('	init-statement	condition	';'	expression	')'	statement
	|	"for"	'('	for-range-declaration	':'	for-range-initializer	')'	statement
	|	"for"	'('	init-statement	for-range-declaration	':'	for-range-initializer	')'	statement
	;
jump-statement:
	"break"	';'
	|	"continue"	';'
	|	"return"	';'
	|	"return"	expr-or-braced-init-list	';'
	|	coroutine-return-statement
	|	"goto"	IDENTIFIER	';'
	;
labeled-statement:
	attribute-specifier-seq	IDENTIFIER	':'	statement
	|	IDENTIFIER	':'	statement
	|	attribute-specifier-seq	"case"	constant-expression	':'	statement
	|	"case"	constant-expression	':'	statement
	|	attribute-specifier-seq	"default"	':'	statement
	|	"default"	':'	statement
	;
lambda-capture:
	capture-default
	|	capture-list
	|	capture-default	','	capture-list
	;
lambda-declarator:
	lambda-specifiers
	|	'('	parameter-declaration-clause	')'	lambda-specifiers
	|	'('	parameter-declaration-clause	')'	lambda-specifiers	requires-clause
	;
lambda-expression:
	lambda-introducer	lambda-declarator	compound-statement
	|	lambda-introducer	'<'	template-parameter-list	'>'	lambda-declarator	compound-statement
	|	lambda-introducer	'<'	template-parameter-list	'>'	requires-clause	lambda-declarator	compound-statement
	;
lambda-introducer:
	'['	']'
	|	'['	lambda-capture	']'
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
	"extern"	string-literal	'{'	'}'
	|	"extern"	string-literal	'{'	declaration-seq	'}'
	|	"extern"	string-literal	declaration
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
	"operator"	string-literal	IDENTIFIER
	|	"operator"	user-defined-string-literal
	;
logical-and-expression:
	inclusive-or-expression
	|	logical-and-expression	"&&"	inclusive-or-expression
	;
logical-or-expression:
	logical-and-expression
	|	logical-or-expression	"||"	logical-and-expression
	;
long-long-suffix:
	"ll"
	|	LL
	;
long-suffix:
	'l'
	|	'L'
	;
mem-initializer:
	mem-initializer-id	'('	')'
	|	mem-initializer-id	'('	expression-list	')'
	|	mem-initializer-id	braced-init-list
	;
mem-initializer-id:
	class-or-decltype
	|	IDENTIFIER
	;
mem-initializer-list:
	mem-initializer
	|	mem-initializer	"..."
	|	mem-initializer-list	','	mem-initializer
	|	mem-initializer-list	','	mem-initializer	"..."
	;
member-declaration:
	attribute-specifier-seq	';'
	|	';'
	|	attribute-specifier-seq	decl-specifier-seq	';'
	|	decl-specifier-seq	';'
	|	attribute-specifier-seq	member-declarator-list	';'
	|	member-declarator-list	';'
	|	attribute-specifier-seq	decl-specifier-seq	member-declarator-list	';'
	|	decl-specifier-seq	member-declarator-list	';'
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
	|	IDENTIFIER	':'	constant-expression
	|	':'	constant-expression
	|	IDENTIFIER	attribute-specifier-seq	':'	constant-expression
	|	attribute-specifier-seq	':'	constant-expression
	|	IDENTIFIER	':'	constant-expression	brace-or-equal-initializer
	|	':'	constant-expression	brace-or-equal-initializer
	|	IDENTIFIER	attribute-specifier-seq	':'	constant-expression	brace-or-equal-initializer
	|	attribute-specifier-seq	':'	constant-expression	brace-or-equal-initializer
	;
member-declarator-list:
	member-declarator
	|	member-declarator-list	','	member-declarator
	;
member-specification:
	member-declaration
	|	member-declaration	member-specification
	|	access-specifier	':'
	|	access-specifier	':'	member-specification
	;
module-declaration:
	"export-keyword"	"module-keyword"	module-name	';'
	|	"module-keyword"	module-name	';'
	|	"export-keyword"	"module-keyword"	module-name	module-partition	';'
	|	"module-keyword"	module-name	module-partition	';'
	|	"export-keyword"	"module-keyword"	module-name	attribute-specifier-seq	';'
	|	"module-keyword"	module-name	attribute-specifier-seq	';'
	|	"export-keyword"	"module-keyword"	module-name	module-partition	attribute-specifier-seq	';'
	|	"module-keyword"	module-name	module-partition	attribute-specifier-seq	';'
	;
module-import-declaration:
	"import-keyword"	module-name	';'
	|	"import-keyword"	module-name	attribute-specifier-seq	';'
	|	"import-keyword"	module-partition	';'
	|	"import-keyword"	module-partition	attribute-specifier-seq	';'
	|	"import-keyword"	header-name	';'
	|	"import-keyword"	header-name	attribute-specifier-seq	';'
	;
module-name:
	module-name-qualifier	IDENTIFIER
	|	IDENTIFIER
	;
module-name-qualifier:
	IDENTIFIER	'.'
	|	module-name-qualifier	IDENTIFIER	'.'
	;
module-partition:
	':'	IDENTIFIER
	|	':'	module-name-qualifier	IDENTIFIER
	;
multiplicative-expression:
	pm-expression
	|	multiplicative-expression	'*'	pm-expression
	|	multiplicative-expression	'/'	pm-expression
	|	multiplicative-expression	'%'	pm-expression
	;
named-namespace-definition:
	"inline"	"namespace"	IDENTIFIER	'{'	namespace-body	'}'
	|	"namespace"	IDENTIFIER	'{'	namespace-body	'}'
	|	"inline"	"namespace"	attribute-specifier-seq	IDENTIFIER	'{'	namespace-body	'}'
	|	"namespace"	attribute-specifier-seq	IDENTIFIER	'{'	namespace-body	'}'
	;
namespace-alias:
	IDENTIFIER
	;
namespace-alias-definition:
	"namespace"	IDENTIFIER	'='	qualified-namespace-specifier	';'
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
	"::"
	|	type-name	"::"
	|	namespace-name	"::"
	|	decltype-specifier	"::"
	|	nested-name-specifier	IDENTIFIER	"::"
	|	nested-name-specifier	simple-template-id	"::"
	|	nested-name-specifier	"template"	simple-template-id	"::"
	;
nested-namespace-definition:
	"namespace"	enclosing-namespace-specifier	"::"	IDENTIFIER	'{'	namespace-body	'}'
	|	"namespace"	enclosing-namespace-specifier	"::"	"inline"	IDENTIFIER	'{'	namespace-body	'}'
	;
nested-requirement:
	"requires"	constraint-expression	';'
	;
new-declarator:
	ptr-operator
	|	ptr-operator	new-declarator
	|	noptr-new-declarator
	;
new-expression:
	"::"	"new"	new-type-id
	|	"new"	new-type-id
	|	"::"	"new"	new-placement	new-type-id
	|	"new"	new-placement	new-type-id
	|	"::"	"new"	new-type-id	new-initializer
	|	"new"	new-type-id	new-initializer
	|	"::"	"new"	new-placement	new-type-id	new-initializer
	|	"new"	new-placement	new-type-id	new-initializer
	|	"::"	"new"	'('	type-id	')'
	|	"new"	'('	type-id	')'
	|	"::"	"new"	new-placement	'('	type-id	')'
	|	"new"	new-placement	'('	type-id	')'
	|	"::"	"new"	'('	type-id	')'	new-initializer
	|	"new"	'('	type-id	')'	new-initializer
	|	"::"	"new"	new-placement	'('	type-id	')'	new-initializer
	|	"new"	new-placement	'('	type-id	')'	new-initializer
	;
new-initializer:
	'('	')'
	|	'('	expression-list	')'
	|	braced-init-list
	;
new-placement:
	'('	expression-list	')'
	;
new-type-id:
	type-specifier-seq
	|	type-specifier-seq	new-declarator
	;
nodeclspec-function-declaration:
	attribute-specifier-seq	declarator	';'
	|	declarator	';'
	;
noexcept-expression:
	"noexcept"	'('	expression	')'
	;
noexcept-specifier:
	"noexcept"	'('	constant-expression	')'
	|	"noexcept"
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
	|	noptr-abstract-declarator	'['	']'
	|	'['	']'
	|	noptr-abstract-declarator	'['	constant-expression	']'
	|	'['	constant-expression	']'
	|	noptr-abstract-declarator	'['	']'	attribute-specifier-seq
	|	'['	']'	attribute-specifier-seq
	|	noptr-abstract-declarator	'['	constant-expression	']'	attribute-specifier-seq
	|	'['	constant-expression	']'	attribute-specifier-seq
	|	'('	ptr-abstract-declarator	')'
	;
noptr-abstract-pack-declarator:
	noptr-abstract-pack-declarator	parameters-and-qualifiers
	|	noptr-abstract-pack-declarator	'['	']'
	|	noptr-abstract-pack-declarator	'['	constant-expression	']'
	|	noptr-abstract-pack-declarator	'['	']'	attribute-specifier-seq
	|	noptr-abstract-pack-declarator	'['	constant-expression	']'	attribute-specifier-seq
	|	"..."
	;
noptr-declarator:
	declarator-id
	|	declarator-id	attribute-specifier-seq
	|	noptr-declarator	parameters-and-qualifiers
	|	noptr-declarator	'['	']'
	|	noptr-declarator	'['	constant-expression	']'
	|	noptr-declarator	'['	']'	attribute-specifier-seq
	|	noptr-declarator	'['	constant-expression	']'	attribute-specifier-seq
	|	'('	ptr-declarator	')'
	;
noptr-new-declarator:
	'['	']'
	|	'['	expression	']'
	|	'['	']'	attribute-specifier-seq
	|	'['	expression	']'	attribute-specifier-seq
	|	noptr-new-declarator	'['	constant-expression	']'
	|	noptr-new-declarator	'['	constant-expression	']'	attribute-specifier-seq
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
	'\\'	octal-digit
	|	'\\'	octal-digit	octal-digit
	|	'\\'	octal-digit	octal-digit	octal-digit
	;
octal-literal:
	'0'
	|	octal-literal	octal-digit
	|	octal-literal	'\''	octal-digit
	;
opaque-enum-declaration:
	enum-key	enum-head-name	';'
	|	enum-key	attribute-specifier-seq	enum-head-name	';'
	|	enum-key	enum-head-name	enum-base	';'
	|	enum-key	attribute-specifier-seq	enum-head-name	enum-base	';'
	;
operator-function-id:
	"operator"	overloadable-operator
	|	"operator"	overloadable-operator	'<'	'>'
	|	"operator"	overloadable-operator	'<'	template-argument-list	'>'
	;
overloadable-operator:
	"new"
	|	"delete"
	|	"new"	'['	']'
	|	"delete"	'['	']'
	|	"co_await"
	|	'('	')'
	|	'['	']'
	|	"->"
	|	"->*"
	|	'~'
	|	'!'
	|	'+'
	|	'-'
	|	'*'
	|	'/'
	|	'%'
	|	'^'
	|	'&'
	|	'|'
	|	'='
	|	"+="
	|	"-="
	|	"*="
	|	"/="
	|	"%="
	|	"^="
	|	"&="
	|	"|="
	|	"=="
	|	"!="
	|	'<'
	|	'>'
	|	"<="
	|	">="
	|	"<=>"
	|	"&&"
	|	"||"
	|	"<<"
	|	">>"
	|	"<<="
	|	">>="
	|	"++"
	|	"--"
	|	','
	;
parameter-declaration:
	attribute-specifier-seq	decl-specifier-seq	declarator
	|	decl-specifier-seq	declarator
	|	attribute-specifier-seq	"this"	decl-specifier-seq	declarator
	|	"this"	decl-specifier-seq	declarator
	|	attribute-specifier-seq	decl-specifier-seq	declarator	'='	initializer-clause
	|	decl-specifier-seq	declarator	'='	initializer-clause
	|	attribute-specifier-seq	"this"	decl-specifier-seq	declarator	'='	initializer-clause
	|	"this"	decl-specifier-seq	declarator	'='	initializer-clause
	|	attribute-specifier-seq	decl-specifier-seq
	|	decl-specifier-seq
	|	attribute-specifier-seq	"this"	decl-specifier-seq
	|	"this"	decl-specifier-seq
	|	attribute-specifier-seq	decl-specifier-seq	abstract-declarator
	|	decl-specifier-seq	abstract-declarator
	|	attribute-specifier-seq	"this"	decl-specifier-seq	abstract-declarator
	|	"this"	decl-specifier-seq	abstract-declarator
	|	attribute-specifier-seq	decl-specifier-seq	'='	initializer-clause
	|	decl-specifier-seq	'='	initializer-clause
	|	attribute-specifier-seq	"this"	decl-specifier-seq	'='	initializer-clause
	|	"this"	decl-specifier-seq	'='	initializer-clause
	|	attribute-specifier-seq	decl-specifier-seq	abstract-declarator	'='	initializer-clause
	|	decl-specifier-seq	abstract-declarator	'='	initializer-clause
	|	attribute-specifier-seq	"this"	decl-specifier-seq	abstract-declarator	'='	initializer-clause
	|	"this"	decl-specifier-seq	abstract-declarator	'='	initializer-clause
	;
parameter-declaration-clause:
	parameter-declaration-list
	|	parameter-declaration-list	"..."
	|	"..."
	|	parameter-declaration-list	','	"..."
	;
parameter-declaration-list:
	parameter-declaration
	|	parameter-declaration-list	','	parameter-declaration
	;
parameters-and-qualifiers:
	'('	parameter-declaration-clause	')'
	|	'('	parameter-declaration-clause	')'	cv-qualifier-seq
	|	'('	parameter-declaration-clause	')'	ref-qualifier
	|	'('	parameter-declaration-clause	')'	cv-qualifier-seq	ref-qualifier
	|	'('	parameter-declaration-clause	')'	noexcept-specifier
	|	'('	parameter-declaration-clause	')'	cv-qualifier-seq	noexcept-specifier
	|	'('	parameter-declaration-clause	')'	ref-qualifier	noexcept-specifier
	|	'('	parameter-declaration-clause	')'	cv-qualifier-seq	ref-qualifier	noexcept-specifier
	|	'('	parameter-declaration-clause	')'	attribute-specifier-seq
	|	'('	parameter-declaration-clause	')'	cv-qualifier-seq	attribute-specifier-seq
	|	'('	parameter-declaration-clause	')'	ref-qualifier	attribute-specifier-seq
	|	'('	parameter-declaration-clause	')'	cv-qualifier-seq	ref-qualifier	attribute-specifier-seq
	|	'('	parameter-declaration-clause	')'	noexcept-specifier	attribute-specifier-seq
	|	'('	parameter-declaration-clause	')'	cv-qualifier-seq	noexcept-specifier	attribute-specifier-seq
	|	'('	parameter-declaration-clause	')'	ref-qualifier	noexcept-specifier	attribute-specifier-seq
	|	'('	parameter-declaration-clause	')'	cv-qualifier-seq	ref-qualifier	noexcept-specifier	attribute-specifier-seq
	;
placeholder-type-specifier:
	type-constraint	"auto"
	|	"auto"
	|	type-constraint	"decltype"	'('	"auto"	')'
	|	"decltype"	'('	"auto"	')'
	;
pm-expression:
	cast-expression
	|	pm-expression	".*"	cast-expression
	|	pm-expression	"->*"	cast-expression
	;
pointer-literal:
	"nullptr"
	;
postfix-expression:
	primary-expression
	|	postfix-expression	'['	']'
	|	postfix-expression	'['	expression-list	']'
	|	postfix-expression	'('	')'
	|	postfix-expression	'('	expression-list	')'
	|	simple-type-specifier	'('	')'
	|	simple-type-specifier	'('	expression-list	')'
	|	typename-specifier	'('	')'
	|	typename-specifier	'('	expression-list	')'
	|	simple-type-specifier	braced-init-list
	|	typename-specifier	braced-init-list
	|	postfix-expression	'.'	id-expression
	|	postfix-expression	'.'	"template"	id-expression
	|	postfix-expression	"->"	id-expression
	|	postfix-expression	"->"	"template"	id-expression
	|	postfix-expression	"++"
	|	postfix-expression	"--"
	|	"dynamic_cast"	'<'	type-id	'>'	'('	expression	')'
	|	"static_cast"	'<'	type-id	'>'	'('	expression	')'
	|	"reinterpret_cast"	'<'	type-id	'>'	'('	expression	')'
	|	"const_cast"	'<'	type-id	'>'	'('	expression	')'
	|	"typeid"	'('	expression	')'
	|	"typeid"	'('	type-id	')'
	;
primary-expression:
	literal
	|	"this"
	|	'('	expression	')'
	|	id-expression
	|	lambda-expression
	|	fold-expression
	|	requires-expression
	;
private-module-fragment:
	"module-keyword"	':'	"private"	';'
	|	"module-keyword"	':'	"private"	';'	declaration-seq
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
	'*'
	|	'*'	attribute-specifier-seq
	|	'*'	cv-qualifier-seq
	|	'*'	attribute-specifier-seq	cv-qualifier-seq
	|	'&'
	|	'&'	attribute-specifier-seq
	|	"&&"
	|	"&&"	attribute-specifier-seq
	|	nested-name-specifier	'*'
	|	nested-name-specifier	'*'	attribute-specifier-seq
	|	nested-name-specifier	'*'	cv-qualifier-seq
	|	nested-name-specifier	'*'	attribute-specifier-seq	cv-qualifier-seq
	;
pure-specifier:
	'='	'0'
	;
q-char:
	EXCEPT_NEW_LINE_AND_QUOTATION_MARK
	;
q-char-sequence:
	q-char
	|	q-char-sequence	q-char
	;
qualified-id:
	nested-name-specifier	unqualified-id
	|	nested-name-specifier	"template"	unqualified-id
	;
qualified-namespace-specifier:
	nested-name-specifier	namespace-name
	|	namespace-name
	;
r-char:
	EXCEPT_RIGHT_PARENTHESIS_FOLLOWED_BY_THE_INITIAL_D_CHAR_SEQUENCE_FOLLOWED_BY_QUOTATION_MARK
	;
r-char-sequence:
	r-char
	|	r-char-sequence	r-char
	;
raw-string:
	'"'	'('	')'	'"'
	|	'"'	d-char-sequence	'('	')'	'"'
	|	'"'	'('	r-char-sequence	')'	'"'
	|	'"'	d-char-sequence	'('	r-char-sequence	')'	'"'
	|	'"'	'('	')'	d-char-sequence	'"'
	|	'"'	d-char-sequence	'('	')'	d-char-sequence	'"'
	|	'"'	'('	r-char-sequence	')'	d-char-sequence	'"'
	|	'"'	d-char-sequence	'('	r-char-sequence	')'	d-char-sequence	'"'
	;
ref-qualifier:
	'&'
	|	"&&"
	;
relational-expression:
	compare-expression
	|	relational-expression	'<'	compare-expression
	|	relational-expression	'>'	compare-expression
	|	relational-expression	"<="	compare-expression
	|	relational-expression	">="	compare-expression
	;
requirement:
	simple-requirement
	|	type-requirement
	|	compound-requirement
	|	nested-requirement
	;
requirement-body:
	'{'	requirement-seq	'}'
	;
requirement-parameter-list:
	'('	parameter-declaration-clause	')'
	;
requirement-seq:
	requirement
	|	requirement-seq	requirement
	;
requires-clause:
	"requires"	constraint-logical-or-expression
	;
requires-expression:
	"requires"	requirement-body
	|	"requires"	requirement-parameter-list	requirement-body
	;
return-type-requirement:
	"->"	type-constraint
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
	"if"	'('	condition	')'	statement
	|	"if"	"constexpr"	'('	condition	')'	statement
	|	"if"	'('	init-statement	condition	')'	statement
	|	"if"	"constexpr"	'('	init-statement	condition	')'	statement
	|	"if"	'('	condition	')'	statement	"else"	statement
	|	"if"	"constexpr"	'('	condition	')'	statement	"else"	statement
	|	"if"	'('	init-statement	condition	')'	statement	"else"	statement
	|	"if"	"constexpr"	'('	init-statement	condition	')'	statement	"else"	statement
	|	"if"	"consteval"	compound-statement
	|	"if"	'!'	"consteval"	compound-statement
	|	"if"	"consteval"	compound-statement	"else"	statement
	|	"if"	'!'	"consteval"	compound-statement	"else"	statement
	|	"switch"	'('	condition	')'	statement
	|	"switch"	'('	init-statement	condition	')'	statement
	;
shift-expression:
	additive-expression
	|	shift-expression	"<<"	additive-expression
	|	shift-expression	">>"	additive-expression
	;
sign:
	'+'
	|	'-'
	;
simple-capture:
	IDENTIFIER
	|	IDENTIFIER	"..."
	|	'&'	IDENTIFIER
	|	'&'	IDENTIFIER	"..."
	|	"this"
	|	'*'	"this"
	;
simple-declaration:
	decl-specifier-seq	';'
	|	decl-specifier-seq	init-declarator-list	';'
	|	attribute-specifier-seq	decl-specifier-seq	init-declarator-list	';'
	|	attribute-specifier-seq	decl-specifier-seq	'['	identifier-list	']'	initializer	';'
	|	decl-specifier-seq	'['	identifier-list	']'	initializer	';'
	|	attribute-specifier-seq	decl-specifier-seq	ref-qualifier	'['	identifier-list	']'	initializer	';'
	|	decl-specifier-seq	ref-qualifier	'['	identifier-list	']'	initializer	';'
	;
simple-escape-sequence:
	'\\'	simple-escape-sequence-char
	;
simple-escape-sequence-char:
	'\''
	|	'"'
	|	'?'
	|	'\\'
	|	'a'
	|	'b'
	|	'f'
	|	'n'
	|	'r'
	|	't'
	|	'v'
	;
simple-requirement:
	expression	';'
	;
simple-template-id:
	template-name	'<'	'>'
	|	template-name	'<'	template-argument-list	'>'
	;
simple-type-specifier:
	nested-name-specifier	type-name
	|	type-name
	|	nested-name-specifier	"template"	simple-template-id
	|	decltype-specifier
	|	placeholder-type-specifier
	|	nested-name-specifier	template-name
	|	template-name
	|	"char"
	|	"char8_t"
	|	"char16_t"
	|	"char32_t"
	|	"wchar_t"
	|	"bool"
	|	"short"
	|	"int"
	|	"long"
	|	"signed"
	|	"unsigned"
	|	"float"
	|	"double"
	|	"void"
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
	"static_assert"	'('	constant-expression	')'	';'
	|	"static_assert"	'('	constant-expression	','	string-literal	')'	';'
	;
storage-class-specifier:
	"static"
	|	"thread_local"
	|	"extern"
	|	"mutable"
	;
string-literal:
	encoding-prefix	'"'	'"'
	|	'"'	'"'
	|	encoding-prefix	'"'	s-char-sequence	'"'
	|	'"'	s-char-sequence	'"'
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
	|	template-argument	"..."
	|	template-argument-list	','	template-argument
	|	template-argument-list	','	template-argument	"..."
	;
template-declaration:
	template-head	declaration
	|	template-head	concept-definition
	;
template-head:
	"template"	'<'	template-parameter-list	'>'
	|	"template"	'<'	template-parameter-list	'>'	requires-clause
	;
template-id:
	simple-template-id
	|	operator-function-id	'<'	'>'
	|	operator-function-id	'<'	template-argument-list	'>'
	|	literal-operator-id	'<'	'>'
	|	literal-operator-id	'<'	template-argument-list	'>'
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
	|	template-parameter-list	','	template-parameter
	;
throw-expression:
	"throw"
	|	"throw"	assignment-expression
	;
trailing-return-type:
	"->"	type-id
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
	"try"	compound-statement	handler-seq
	;
type-constraint:
	nested-name-specifier	concept-name
	|	concept-name
	|	nested-name-specifier	concept-name	'<'	'>'
	|	concept-name	'<'	'>'
	|	nested-name-specifier	concept-name	'<'	template-argument-list	'>'
	|	concept-name	'<'	template-argument-list	'>'
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
	|	type-parameter-key	"..."
	|	type-parameter-key	IDENTIFIER
	|	type-parameter-key	"..."	IDENTIFIER
	|	type-parameter-key	'='	type-id
	|	type-parameter-key	IDENTIFIER	'='	type-id
	|	type-constraint
	|	type-constraint	"..."
	|	type-constraint	IDENTIFIER
	|	type-constraint	"..."	IDENTIFIER
	|	type-constraint	'='	type-id
	|	type-constraint	IDENTIFIER	'='	type-id
	|	template-head	type-parameter-key
	|	template-head	type-parameter-key	"..."
	|	template-head	type-parameter-key	IDENTIFIER
	|	template-head	type-parameter-key	"..."	IDENTIFIER
	|	template-head	type-parameter-key	'='	id-expression
	|	template-head	type-parameter-key	IDENTIFIER	'='	id-expression
	;
type-parameter-key:
	"class"
	|	"typename"
	;
type-requirement:
	"typename"	type-name	';'
	|	"typename"	nested-name-specifier	type-name	';'
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
	"typename"	nested-name-specifier	IDENTIFIER
	|	"typename"	nested-name-specifier	simple-template-id
	|	"typename"	nested-name-specifier	"template"	simple-template-id
	;
ud-suffix:
	IDENTIFIER
	;
unary-expression:
	postfix-expression
	|	unary-operator	cast-expression
	|	"++"	cast-expression
	|	"--"	cast-expression
	|	await-expression
	|	"sizeof"	unary-expression
	|	"sizeof"	'('	type-id	')'
	|	"sizeof"	"..."	'('	IDENTIFIER	')'
	|	"alignof"	'('	type-id	')'
	|	noexcept-expression
	|	new-expression
	|	delete-expression
	;
unary-operator:
	'*'
	|	'&'
	|	'+'
	|	'-'
	|	'!'
	|	'~'
	;
universal-character-name:
	"\\u"	hex-quad
	|	"\\U"	hex-quad	hex-quad
	;
unnamed-namespace-definition:
	"inline"	"namespace"	'{'	namespace-body	'}'
	|	"namespace"	'{'	namespace-body	'}'
	|	"inline"	"namespace"	attribute-specifier-seq	'{'	namespace-body	'}'
	|	"namespace"	attribute-specifier-seq	'{'	namespace-body	'}'
	;
unqualified-id:
	IDENTIFIER
	|	operator-function-id
	|	conversion-function-id
	|	literal-operator-id
	|	'~'	type-name
	|	'~'	decltype-specifier
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
	"using"	using-declarator-list	';'
	;
using-declarator:
	"typename"	nested-name-specifier	unqualified-id
	|	nested-name-specifier	unqualified-id
	;
using-declarator-list:
	using-declarator
	|	using-declarator	"..."
	|	using-declarator-list	','	using-declarator
	|	using-declarator-list	','	using-declarator	"..."
	;
using-directive:
	attribute-specifier-seq	"using"	"namespace"	namespace-name	';'
	|	"using"	"namespace"	namespace-name	';'
	|	attribute-specifier-seq	"using"	"namespace"	nested-name-specifier	namespace-name	';'
	|	"using"	"namespace"	nested-name-specifier	namespace-name	';'
	;
using-enum-declaration:
	"using"	elaborated-enum-specifier	';'
	;
virt-specifier:
	"override"
	|	"final"
	;
virt-specifier-seq:
	virt-specifier
	|	virt-specifier-seq	virt-specifier
	;
yield-expression:
	"co_yield"	assignment-expression
	|	"co_yield"	braced-init-list
	;
