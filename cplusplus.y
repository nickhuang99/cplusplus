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
	"private"
	|	"protected"
	|	"public"
	;
access-specifier-opt:
	%empty
	|	access-specifier
	;
additive-expression:
	multiplicative-expression
	|	additive-expression	'+'	multiplicative-expression
	|	additive-expression	'-'	multiplicative-expression
	;
alias-declaration:
	"using"	IDENTIFIER	attribute-specifier-seq-opt	'='	defining-type-id	';'
	;
alignment-specifier:
	"alignas"	'('	type-id	eclipse-opt	')'
	|	"alignas"	'('	constant-expression	eclipse-opt	')'
	;
and-expression:
	equality-expression
	|	and-expression	'&'	equality-expression
	;
apostrophe-opt:
	%empty
	|	'\''
	;
asm-declaration:
	attribute-specifier-seq-opt	"asm"	'('	string-literal	')'	';'
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
	attribute-token	attribute-argument-clause-opt
	;
attribute-argument-clause:
	'('	balanced-token-seq-opt	')'
	;
attribute-argument-clause-opt:
	%empty
	|	attribute-argument-clause
	;
attribute-declaration:
	attribute-specifier-seq	';'
	;
attribute-list:
	attribute-opt
	|	attribute-list	','	attribute-opt
	|	attribute	"..."
	|	attribute-list	','	attribute	"..."
	;
attribute-namespace:
	IDENTIFIER
	;
attribute-opt:
	%empty
	|	attribute
	;
attribute-scoped-token:
	attribute-namespace	"::"	IDENTIFIER
	;
attribute-specifier:
	'['	'['	attribute-using-prefix-opt	attribute-list	']'	']'
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
	"using"	attribute-namespace	':'
	;
attribute-using-prefix-opt:
	%empty
	|	attribute-using-prefix
	;
await-expression:
	"co_await"	cast-expression
	;
balanced-token:
	'('	balanced-token-seq-opt	')'
	|	'['	balanced-token-seq-opt	']'
	|	'{'	balanced-token-seq-opt	'}'
	|	ANY_TOKEN_OTHER_THAN_PARENTHESIS_BRACKET_BRACE
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
	':'	base-specifier-list
	;
base-clause-opt:
	%empty
	|	base-clause
	;
base-specifier:
	attribute-specifier-seq-opt	class-or-decltype
	|	attribute-specifier-seq-opt	"virtual"	access-specifier-opt	class-or-decltype
	|	attribute-specifier-seq-opt	access-specifier	virtual-opt	class-or-decltype
	;
base-specifier-list:
	base-specifier	eclipse-opt
	|	base-specifier-list	','	base-specifier	eclipse-opt
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
	'p'	sign-opt	digit-sequence
	|	'P'	sign-opt	digit-sequence
	;
binary-literal:
	"0b"	binary-digit
	|	"0B"	binary-digit
	|	binary-literal	apostrophe-opt	binary-digit
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
brace-or-equal-initializer-opt:
	%empty
	|	brace-or-equal-initializer
	;
braced-init-list:
	'{'	initializer-list	comma-opt	'}'
	|	'{'	designated-initializer-list	comma-opt	'}'
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
	encoding-prefix-opt	'\''	c-char-sequence	'\''
	;
class-head:
	class-key	attribute-specifier-seq-opt	class-head-name	class-virt-specifier-opt	base-clause-opt
	|	class-key	attribute-specifier-seq-opt	base-clause-opt
	;
class-head-name:
	nested-name-specifier-opt	class-name
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
	nested-name-specifier-opt	type-name
	|	nested-name-specifier	"template"	simple-template-id
	|	decltype-specifier
	;
class-specifier:
	class-head	'{'	member-specification-opt	'}'
	;
class-virt-specifier:
	"final"
	;
class-virt-specifier-opt:
	%empty
	|	class-virt-specifier
	;
comma-opt:
	%empty
	|	','
	;
compare-expression:
	shift-expression
	|	compare-expression	"<=>"	shift-expression
	;
compound-requirement:
	'{'	expression	'}'	noexcept-opt	return-type-requirement-opt	';'
	;
compound-statement:
	'{'	statement-seq-opt	'}'
	;
concept-definition:
	"concept"	concept-name	'='	constraint-expression	';'
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
constant-expression-opt:
	%empty
	|	constant-expression
	;
constexpr-opt:
	%empty
	|	"constexpr"
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
	ptr-operator	conversion-declarator-opt
	;
conversion-declarator-opt:
	%empty
	|	conversion-declarator
	;
conversion-function-id:
	"operator"	conversion-type-id
	;
conversion-type-id:
	type-specifier-seq	conversion-declarator-opt
	;
coroutine-return-statement:
	"co_return"	expr-or-braced-init-list-opt	';'
	;
ctor-initializer:
	':'	mem-initializer-list
	;
ctor-initializer-opt:
	%empty
	|	ctor-initializer
	;
cv-qualifier:
	"const"
	|	"volatile"
	;
cv-qualifier-seq:
	cv-qualifier	cv-qualifier-seq-opt
	;
cv-qualifier-seq-opt:
	%empty
	|	cv-qualifier-seq
	;
d-char:
	EXCEPT_SPACE_PARENTHESIS_REVERSE_SOLIDUS_TABULATION_LINE_TABULATION_FORM_FEED_AND_NEW_LINE
	;
d-char-sequence:
	d-char
	|	d-char-sequence	d-char
	;
d-char-sequence-opt:
	%empty
	|	d-char-sequence
	;
decimal-floating-point-literal:
	fractional-constant	exponent-part-opt	floating-point-suffix-opt
	|	digit-sequence	exponent-part	floating-point-suffix-opt
	;
decimal-literal:
	nonzero-digit
	|	decimal-literal	apostrophe-opt	digit
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
	eclipse-opt	id-expression
	;
decltype-specifier:
	"decltype"	'('	expression	')'
	;
deduction-guide:
	explicit-specifier-opt	template-name	'('	parameter-declaration-clause	')'	"->"	simple-template-id	';'
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
	scope-opt	"delete"	cast-expression
	|	scope-opt	"delete"	'['	']'	cast-expression
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
	|	digit-sequence	apostrophe-opt	digit
	;
digit-sequence-opt:
	%empty
	|	digit-sequence
	;
eclipse-opt:
	%empty
	|	"..."
	;
elaborated-enum-specifier:
	"enum"	nested-name-specifier-opt	IDENTIFIER
	;
elaborated-type-specifier:
	class-key	attribute-specifier-seq-opt	nested-name-specifier-opt	IDENTIFIER
	|	class-key	simple-template-id
	|	class-key	nested-name-specifier	template-opt	simple-template-id
	|	elaborated-enum-specifier
	;
empty-declaration:
	';'
	;
enclosing-namespace-specifier:
	IDENTIFIER
	|	enclosing-namespace-specifier	"::"	inline-opt	IDENTIFIER
	;
encoding-prefix:
	"u8"
	|	'u'
	|	'U'
	|	'L'
	;
encoding-prefix-opt:
	%empty
	|	encoding-prefix
	;
enum-base:
	':'	type-specifier-seq
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
	"enum"
	|	"enum"	"class"
	|	"enum"	"struct"
	;
enum-name:
	IDENTIFIER
	;
enum-specifier:
	enum-head	'{'	enumerator-list-opt	'}'
	|	enum-head	'{'	enumerator-list	','	'}'
	;
enumerator:
	IDENTIFIER	attribute-specifier-seq-opt
	;
enumerator-definition:
	enumerator
	|	enumerator	'='	constant-expression
	;
enumerator-list:
	enumerator-definition
	|	enumerator-list	','	enumerator-definition
	;
enumerator-list-opt:
	%empty
	|	enumerator-list
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
	attribute-specifier-seq-opt	type-specifier-seq	declarator
	|	attribute-specifier-seq-opt	type-specifier-seq	abstract-declarator-opt
	|	"..."
	;
exclamation-opt:
	%empty
	|	'!'
	;
exclusive-or-expression:
	and-expression
	|	exclusive-or-expression	'^'	and-expression
	;
explicit-instantiation:
	extern-opt	"template"	declaration
	;
explicit-specialization:
	"template"	'<'	'>'	declaration
	;
explicit-specifier:
	"explicit"	'('	constant-expression	')'
	|	"explicit"
	;
explicit-specifier-opt:
	%empty
	|	explicit-specifier
	;
exponent-part:
	'e'	sign-opt	digit-sequence
	|	'E'	sign-opt	digit-sequence
	;
exponent-part-opt:
	%empty
	|	exponent-part
	;
export-declaration:
	"export"	declaration
	|	"export"	'{'	declaration-seq-opt	'}'
	|	"export-keyword"	module-import-declaration
	;
export-keyword-opt:
	%empty
	|	"export-keyword"
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
	|	expression	','	assignment-expression
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
	expression-opt	';'
	;
extern-opt:
	%empty
	|	"extern"
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
floating-point-suffix-opt:
	%empty
	|	floating-point-suffix
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
	attribute-specifier-seq-opt	decl-specifier-seq	declarator
	|	attribute-specifier-seq-opt	decl-specifier-seq	ref-qualifier-opt	'['	identifier-list	']'
	;
for-range-initializer:
	expr-or-braced-init-list
	;
fractional-constant:
	digit-sequence-opt	'.'	digit-sequence
	|	digit-sequence	'.'
	;
function-body:
	ctor-initializer-opt	compound-statement
	|	function-try-block
	|	'='	"default"	';'
	|	'='	"delete"	';'
	;
function-definition:
	attribute-specifier-seq-opt	decl-specifier-seq-opt	declarator	virt-specifier-seq-opt	function-body
	|	attribute-specifier-seq-opt	decl-specifier-seq-opt	declarator	requires-clause	function-body
	;
function-specifier:
	"virtual"
	|	explicit-specifier
	;
function-try-block:
	"try"	ctor-initializer-opt	compound-statement	handler-seq
	;
global-module-fragment:
	"module-keyword"	';'	declaration-seq-opt
	;
global-module-fragment-opt:
	%empty
	|	global-module-fragment
	;
h-char:
	EXCEPT_NEW_LINE_AND_GREATER_THAN_SIGN
	;
handler:
	"catch"	'('	exception-declaration	')'	compound-statement
	;
handler-seq:
	handler	handler-seq-opt
	;
handler-seq-opt:
	%empty
	|	handler-seq
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
	|	hexadecimal-digit-sequence	apostrophe-opt	hexadecimal-digit
	;
hexadecimal-digit-sequence-opt:
	%empty
	|	hexadecimal-digit-sequence
	;
hexadecimal-escape-sequence:
	"\\x"	hexadecimal-digit
	|	hexadecimal-escape-sequence	hexadecimal-digit
	;
hexadecimal-floating-point-literal:
	hexadecimal-prefix	hexadecimal-fractional-constant	binary-exponent-part	floating-point-suffix-opt
	|	hexadecimal-prefix	hexadecimal-digit-sequence	binary-exponent-part	floating-point-suffix-opt
	;
hexadecimal-fractional-constant:
	hexadecimal-digit-sequence-opt	'.'	hexadecimal-digit-sequence
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
identifier-opt:
	%empty
	|	IDENTIFIER
	;
inclusive-or-expression:
	exclusive-or-expression
	|	inclusive-or-expression	'|'	exclusive-or-expression
	;
init-capture:
	eclipse-opt	IDENTIFIER	initializer
	|	'&'	eclipse-opt	IDENTIFIER	initializer
	;
init-declarator:
	declarator	initializer-opt
	|	declarator	requires-clause
	;
init-declarator-list:
	init-declarator
	|	init-declarator-list	','	init-declarator
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
	|	'('	expression-list	')'
	;
initializer-clause:
	assignment-expression
	|	braced-init-list
	;
initializer-list:
	initializer-clause	eclipse-opt
	|	initializer-list	','	initializer-clause	eclipse-opt
	;
initializer-opt:
	%empty
	|	initializer
	;
inline-opt:
	%empty
	|	"inline"
	;
integer-literal:
	binary-literal	integer-suffix-opt
	|	octal-literal	integer-suffix-opt
	|	decimal-literal	integer-suffix-opt
	|	hexadecimal-literal	integer-suffix-opt
	;
integer-suffix:
	unsigned-suffix	long-suffix-opt
	|	unsigned-suffix	long-long-suffix-opt
	|	unsigned-suffix	size-suffix-opt
	|	long-suffix	unsigned-suffix-opt
	|	long-long-suffix	unsigned-suffix-opt
	|	size-suffix	unsigned-suffix-opt
	;
integer-suffix-opt:
	%empty
	|	integer-suffix
	;
iteration-statement:
	"while"	'('	condition	')'	statement
	|	"do"	statement	"while"	'('	expression	')'	';'
	|	"for"	'('	init-statement	condition-opt	';'	expression-opt	')'	statement
	|	"for"	'('	init-statement-opt	for-range-declaration	':'	for-range-initializer	')'	statement
	;
jump-statement:
	"break"	';'
	|	"continue"	';'
	|	"return"	expr-or-braced-init-list-opt	';'
	|	coroutine-return-statement
	|	"goto"	IDENTIFIER	';'
	;
labeled-statement:
	attribute-specifier-seq-opt	IDENTIFIER	':'	statement
	|	attribute-specifier-seq-opt	"case"	constant-expression	':'	statement
	|	attribute-specifier-seq-opt	"default"	':'	statement
	;
lambda-capture:
	capture-default
	|	capture-list
	|	capture-default	','	capture-list
	;
lambda-capture-opt:
	%empty
	|	lambda-capture
	;
lambda-declarator:
	lambda-specifiers
	|	'('	parameter-declaration-clause	')'	lambda-specifiers	requires-clause-opt
	;
lambda-expression:
	lambda-introducer	lambda-declarator	compound-statement
	|	lambda-introducer	'<'	template-parameter-list	'>'	requires-clause-opt	lambda-declarator	compound-statement
	;
lambda-introducer:
	'['	lambda-capture-opt	']'
	;
lambda-specifiers:
	decl-specifier-seq-opt	noexcept-specifier-opt	attribute-specifier-seq-opt	trailing-return-type-opt
	;
linkage-specification:
	"extern"	string-literal	'{'	declaration-seq-opt	'}'
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
long-long-suffix-opt:
	%empty
	|	long-long-suffix
	;
long-suffix:
	'l'
	|	'L'
	;
long-suffix-opt:
	%empty
	|	long-suffix
	;
mem-initializer:
	mem-initializer-id	'('	expression-list-opt	')'
	|	mem-initializer-id	braced-init-list
	;
mem-initializer-id:
	class-or-decltype
	|	IDENTIFIER
	;
mem-initializer-list:
	mem-initializer	eclipse-opt
	|	mem-initializer-list	','	mem-initializer	eclipse-opt
	;
member-declaration:
	attribute-specifier-seq-opt	decl-specifier-seq-opt	member-declarator-list-opt	';'
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
	|	identifier-opt	attribute-specifier-seq-opt	':'	constant-expression	brace-or-equal-initializer-opt
	;
member-declarator-list:
	member-declarator
	|	member-declarator-list	','	member-declarator
	;
member-declarator-list-opt:
	%empty
	|	member-declarator-list
	;
member-specification:
	member-declaration	member-specification-opt
	|	access-specifier	':'	member-specification-opt
	;
member-specification-opt:
	%empty
	|	member-specification
	;
module-declaration:
	export-keyword-opt	"module-keyword"	module-name	module-partition-opt	attribute-specifier-seq-opt	';'
	;
module-import-declaration:
	"import-keyword"	module-name	attribute-specifier-seq-opt	';'
	|	"import-keyword"	module-partition	attribute-specifier-seq-opt	';'
	|	"import-keyword"	header-name	attribute-specifier-seq-opt	';'
	;
module-name:
	module-name-qualifier-opt	IDENTIFIER
	;
module-name-qualifier:
	IDENTIFIER	'.'
	|	module-name-qualifier	IDENTIFIER	'.'
	;
module-name-qualifier-opt:
	%empty
	|	module-name-qualifier
	;
module-partition:
	':'	module-name-qualifier-opt	IDENTIFIER
	;
module-partition-opt:
	%empty
	|	module-partition
	;
multiplicative-expression:
	pm-expression
	|	multiplicative-expression	'*'	pm-expression
	|	multiplicative-expression	'/'	pm-expression
	|	multiplicative-expression	'%'	pm-expression
	;
named-namespace-definition:
	inline-opt	"namespace"	attribute-specifier-seq-opt	IDENTIFIER	'{'	namespace-body	'}'
	;
namespace-alias:
	IDENTIFIER
	;
namespace-alias-definition:
	"namespace"	IDENTIFIER	'='	qualified-namespace-specifier	';'
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
	"::"
	|	type-name	"::"
	|	namespace-name	"::"
	|	decltype-specifier	"::"
	|	nested-name-specifier	IDENTIFIER	"::"
	|	nested-name-specifier	template-opt	simple-template-id	"::"
	;
nested-name-specifier-opt:
	%empty
	|	nested-name-specifier
	;
nested-namespace-definition:
	"namespace"	enclosing-namespace-specifier	"::"	inline-opt	IDENTIFIER	'{'	namespace-body	'}'
	;
nested-requirement:
	"requires"	constraint-expression	';'
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
	scope-opt	"new"	new-placement-opt	new-type-id	new-initializer-opt
	|	scope-opt	"new"	new-placement-opt	'('	type-id	')'	new-initializer-opt
	;
new-initializer:
	'('	expression-list-opt	')'
	|	braced-init-list
	;
new-initializer-opt:
	%empty
	|	new-initializer
	;
new-placement:
	'('	expression-list	')'
	;
new-placement-opt:
	%empty
	|	new-placement
	;
new-type-id:
	type-specifier-seq	new-declarator-opt
	;
nodeclspec-function-declaration:
	attribute-specifier-seq-opt	declarator	';'
	;
noexcept-expression:
	"noexcept"	'('	expression	')'
	;
noexcept-opt:
	%empty
	|	"noexcept"
	;
noexcept-specifier:
	"noexcept"	'('	constant-expression	')'
	|	"noexcept"
	;
noexcept-specifier-opt:
	%empty
	|	noexcept-specifier
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
	noptr-abstract-declarator-opt	parameters-and-qualifiers
	|	noptr-abstract-declarator-opt	'['	constant-expression-opt	']'	attribute-specifier-seq-opt
	|	'('	ptr-abstract-declarator	')'
	;
noptr-abstract-declarator-opt:
	%empty
	|	noptr-abstract-declarator
	;
noptr-abstract-pack-declarator:
	noptr-abstract-pack-declarator	parameters-and-qualifiers
	|	noptr-abstract-pack-declarator	'['	constant-expression-opt	']'	attribute-specifier-seq-opt
	|	"..."
	;
noptr-declarator:
	declarator-id	attribute-specifier-seq-opt
	|	noptr-declarator	parameters-and-qualifiers
	|	noptr-declarator	'['	constant-expression-opt	']'	attribute-specifier-seq-opt
	|	'('	ptr-declarator	')'
	;
noptr-new-declarator:
	'['	expression-opt	']'	attribute-specifier-seq-opt
	|	noptr-new-declarator	'['	constant-expression	']'	attribute-specifier-seq-opt
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
	|	octal-literal	apostrophe-opt	octal-digit
	;
opaque-enum-declaration:
	enum-key	attribute-specifier-seq-opt	enum-head-name	enum-base-opt	';'
	;
operator-function-id:
	"operator"	overloadable-operator
	|	"operator"	overloadable-operator	'<'	template-argument-list-opt	'>'
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
	attribute-specifier-seq-opt	this-opt	decl-specifier-seq	declarator
	|	attribute-specifier-seq-opt	this-opt	decl-specifier-seq	declarator	'='	initializer-clause
	|	attribute-specifier-seq-opt	this-opt	decl-specifier-seq	abstract-declarator-opt
	|	attribute-specifier-seq-opt	this-opt	decl-specifier-seq	abstract-declarator-opt	'='	initializer-clause
	;
parameter-declaration-clause:
	parameter-declaration-list-opt	eclipse-opt
	|	parameter-declaration-list	','	"..."
	;
parameter-declaration-list:
	parameter-declaration
	|	parameter-declaration-list	','	parameter-declaration
	;
parameter-declaration-list-opt:
	%empty
	|	parameter-declaration-list
	;
parameters-and-qualifiers:
	'('	parameter-declaration-clause	')'	cv-qualifier-seq-opt	ref-qualifier-opt	noexcept-specifier-opt	attribute-specifier-seq-opt
	;
placeholder-type-specifier:
	type-constraint-opt	"auto"
	|	type-constraint-opt	"decltype"	'('	"auto"	')'
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
	|	postfix-expression	'['	expression-list-opt	']'
	|	postfix-expression	'('	expression-list-opt	')'
	|	simple-type-specifier	'('	expression-list-opt	')'
	|	typename-specifier	'('	expression-list-opt	')'
	|	simple-type-specifier	braced-init-list
	|	typename-specifier	braced-init-list
	|	postfix-expression	'.'	template-opt	id-expression
	|	postfix-expression	"->"	template-opt	id-expression
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
	"module-keyword"	':'	"private"	';'	declaration-seq-opt
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
	'*'	attribute-specifier-seq-opt	cv-qualifier-seq-opt
	|	'&'	attribute-specifier-seq-opt
	|	"&&"	attribute-specifier-seq-opt
	|	nested-name-specifier	'*'	attribute-specifier-seq-opt	cv-qualifier-seq-opt
	;
pure-specifier:
	'='	'0'
	;
pure-specifier-opt:
	%empty
	|	pure-specifier
	;
q-char:
	EXCEPT_NEW_LINE_AND_QUOTATION_MARK
	;
q-char-sequence:
	q-char
	|	q-char-sequence	q-char
	;
qualified-id:
	nested-name-specifier	template-opt	unqualified-id
	;
qualified-namespace-specifier:
	nested-name-specifier-opt	namespace-name
	;
r-char:
	EXCEPT_RIGHT_PARENTHESIS_FOLLOWED_BY_THE_INITIAL_D_CHAR_SEQUENCE_FOLLOWED_BY_QUOTATION_MARK
	;
r-char-sequence:
	r-char
	|	r-char-sequence	r-char
	;
r-char-sequence-opt:
	%empty
	|	r-char-sequence
	;
raw-string:
	'"'	d-char-sequence-opt	'('	r-char-sequence-opt	')'	d-char-sequence-opt	'"'
	;
ref-qualifier:
	'&'
	|	"&&"
	;
ref-qualifier-opt:
	%empty
	|	ref-qualifier
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
requirement-parameter-list-opt:
	%empty
	|	requirement-parameter-list
	;
requirement-seq:
	requirement
	|	requirement-seq	requirement
	;
requires-clause:
	"requires"	constraint-logical-or-expression
	;
requires-clause-opt:
	%empty
	|	requires-clause
	;
requires-expression:
	"requires"	requirement-parameter-list-opt	requirement-body
	;
return-type-requirement:
	"->"	type-constraint
	;
return-type-requirement-opt:
	%empty
	|	return-type-requirement
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
s-char-sequence-opt:
	%empty
	|	s-char-sequence
	;
scope-opt:
	%empty
	|	"::"
	;
selection-statement:
	"if"	constexpr-opt	'('	init-statement-opt	condition	')'	statement
	|	"if"	constexpr-opt	'('	init-statement-opt	condition	')'	statement	"else"	statement
	|	"if"	exclamation-opt	"consteval"	compound-statement
	|	"if"	exclamation-opt	"consteval"	compound-statement	"else"	statement
	|	"switch"	'('	init-statement-opt	condition	')'	statement
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
sign-opt:
	%empty
	|	sign
	;
simple-capture:
	IDENTIFIER	eclipse-opt
	|	'&'	IDENTIFIER	eclipse-opt
	|	"this"
	|	'*'	"this"
	;
simple-declaration:
	decl-specifier-seq	init-declarator-list-opt	';'
	|	attribute-specifier-seq	decl-specifier-seq	init-declarator-list	';'
	|	attribute-specifier-seq-opt	decl-specifier-seq	ref-qualifier-opt	'['	identifier-list	']'	initializer	';'
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
	template-name	'<'	template-argument-list-opt	'>'
	;
simple-type-specifier:
	nested-name-specifier-opt	type-name
	|	nested-name-specifier	"template"	simple-template-id
	|	decltype-specifier
	|	placeholder-type-specifier
	|	nested-name-specifier-opt	template-name
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
size-suffix-opt:
	%empty
	|	size-suffix
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
	encoding-prefix-opt	'"'	s-char-sequence-opt	'"'
	|	encoding-prefix-opt	'R'	raw-string
	;
template-argument:
	constant-expression
	|	type-id
	|	id-expression
	;
template-argument-list:
	template-argument	eclipse-opt
	|	template-argument-list	','	template-argument	eclipse-opt
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
	"template"	'<'	template-parameter-list	'>'	requires-clause-opt
	;
template-id:
	simple-template-id
	|	operator-function-id	'<'	template-argument-list-opt	'>'
	|	literal-operator-id	'<'	template-argument-list-opt	'>'
	;
template-name:
	IDENTIFIER
	;
template-opt:
	%empty
	|	"template"
	;
template-parameter:
	type-parameter
	|	parameter-declaration
	;
template-parameter-list:
	template-parameter
	|	template-parameter-list	','	template-parameter
	;
this-opt:
	%empty
	|	"this"
	;
throw-expression:
	"throw"	assignment-expression-opt
	;
trailing-return-type:
	"->"	type-id
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
	"try"	compound-statement	handler-seq
	;
type-constraint:
	nested-name-specifier-opt	concept-name
	|	nested-name-specifier-opt	concept-name	'<'	template-argument-list-opt	'>'
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
	type-parameter-key	eclipse-opt	identifier-opt
	|	type-parameter-key	identifier-opt	'='	type-id
	|	type-constraint	eclipse-opt	identifier-opt
	|	type-constraint	identifier-opt	'='	type-id
	|	template-head	type-parameter-key	eclipse-opt	identifier-opt
	|	template-head	type-parameter-key	identifier-opt	'='	id-expression
	;
type-parameter-key:
	"class"
	|	"typename"
	;
type-requirement:
	"typename"	nested-name-specifier-opt	type-name	';'
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
typename-opt:
	%empty
	|	"typename"
	;
typename-specifier:
	"typename"	nested-name-specifier	IDENTIFIER
	|	"typename"	nested-name-specifier	template-opt	simple-template-id
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
	inline-opt	"namespace"	attribute-specifier-seq-opt	'{'	namespace-body	'}'
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
unsigned-suffix-opt:
	%empty
	|	unsigned-suffix
	;
user-defined-character-literal:
	character-literal	ud-suffix
	;
user-defined-floating-point-literal:
	fractional-constant	exponent-part-opt	ud-suffix
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
	typename-opt	nested-name-specifier	unqualified-id
	;
using-declarator-list:
	using-declarator	eclipse-opt
	|	using-declarator-list	','	using-declarator	eclipse-opt
	;
using-directive:
	attribute-specifier-seq-opt	"using"	"namespace"	nested-name-specifier-opt	namespace-name	';'
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
virt-specifier-seq-opt:
	%empty
	|	virt-specifier-seq
	;
virtual-opt:
	%empty
	|	"virtual"
	;
yield-expression:
	"co_yield"	assignment-expression
	|	"co_yield"	braced-init-list
	;
