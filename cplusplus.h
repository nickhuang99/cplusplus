// A Bison parser, made by GNU Bison 3.8.2.9-6571.

// Skeleton interface for Bison GLR parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// C++ GLR parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_CPLUSPLUS_H_INCLUDED
# define YY_YY_CPLUSPLUS_H_INCLUDED
// "%code requires" blocks.
#line 12 "cplusplus.y"

#include "ast.h"

#line 47 "cplusplus.h"

#include <iostream>
#include <stdexcept>
#include <string>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif



// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

namespace yy {
#line 107 "cplusplus.h"




  /// A Bison parser.
  class parser
  {
  public:
#ifdef YYSTYPE
# ifdef __GNUC__
#  pragma GCC message "bison: do not #define YYSTYPE in C++, use %define api.value.type"
# endif
    typedef YYSTYPE value_type;
#else
    /// Symbol semantic values.
    union value_type
    {
#line 9 "cplusplus.y"
Node* node;

#line 128 "cplusplus.h"

    };
#endif
    /// Backward compatibility (Bison 3.8).
    typedef value_type semantic_type;


    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const std::string& m)
        : std::runtime_error (m)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        TOK_YYEMPTY = -2,
    TOK_YYEOF = 0,                 // "end of file"
    TOK_YYerror = 256,             // error
    TOK_YYUNDEF = 257,             // "invalid token"
    TOK_COMMA = 258,               // ","
    TOK_CONSTEXPR = 259,           // "constexpr"
    TOK_ELLIPSIS = 260,            // "..."
    TOK_EXPORT = 261,              // "export"
    TOK_EXTERN = 262,              // "extern"
    TOK_IDENTIFIER = 263,          // IDENTIFIER
    TOK_INLINE = 264,              // "inline"
    TOK_NOEXCEPT = 265,            // "noexcept"
    TOK_NOT = 266,                 // "!"
    TOK_SCOPE = 267,               // "::"
    TOK_TEMPLATE = 268,            // "template"
    TOK_THIS = 269,                // "this"
    TOK_TYPENAME = 270,            // "typename"
    TOK_VIRTUAL = 271,             // "virtual"
    TOK_PRIVATE = 272,             // "private"
    TOK_PROTECTED = 273,           // "protected"
    TOK_PUBLIC = 274,              // "public"
    TOK_PLUS = 275,                // "+"
    TOK_MINUS = 276,               // "-"
    TOK_USING = 277,               // "using"
    TOK_EQ = 278,                  // "="
    TOK_SEMICOLON = 279,           // ";"
    TOK_ALIGNAS = 280,             // "alignas"
    TOK_OPEN_PAREN = 281,          // "("
    TOK_CLOSE_PAREN = 282,         // ")"
    TOK_AND = 283,                 // "&"
    TOK_ASM = 284,                 // "asm"
    TOK_MULT_EQ = 285,             // "*="
    TOK_DIV_EQ = 286,              // "/="
    TOK_MOD_EQ = 287,              // "%="
    TOK_PLUS_EQ = 288,             // "+="
    TOK_MINUS_EQ = 289,            // "-="
    TOK_RSHIFT_EQ = 290,           // ">>="
    TOK_LSHIFT_EQ = 291,           // "<<="
    TOK_AND_EQ = 292,              // "&="
    TOK_XOR_EQ = 293,              // "^="
    TOK_OR_EQ = 294,               // "|="
    TOK_OPEN_SQUARE = 295,         // "["
    TOK_CLOSE_SQUARE = 296,        // "]"
    TOK_COLON = 297,               // ":"
    TOK_CO_AWAIT = 298,            // "co_await"
    TOK_OPEN_BRACE = 299,          // "{"
    TOK_CLOSE_BRACE = 300,         // "}"
    TOK_BALANCED_TOKEN = 301,      // BALANCED_TOKEN
    TOK_BOOLEAN_LITERAL = 302,     // BOOLEAN_LITERAL
    TOK_CHARACTER_LITERAL = 303,   // CHARACTER_LITERAL
    TOK_CLASS = 304,               // "class"
    TOK_STRUCT = 305,              // "struct"
    TOK_UNION = 306,               // "union"
    TOK_FINAL = 307,               // "final"
    TOK_SPACESHIP = 308,           // "<=>"
    TOK_CONCEPT = 309,             // "concept"
    TOK_QUERY = 310,               // "?"
    TOK_AND_AND = 311,             // "&&"
    TOK_OR_OR = 312,               // "||"
    TOK_OPERATOR = 313,            // "operator"
    TOK_CO_RETURN = 314,           // "co_return"
    TOK_CONST = 315,               // "const"
    TOK_VOLATILE = 316,            // "volatile"
    TOK_FRIEND = 317,              // "friend"
    TOK_TYPEDEF = 318,             // "typedef"
    TOK_CONSTEVAL = 319,           // "consteval"
    TOK_CONSTINIT = 320,           // "constinit"
    TOK_DECLTYPE = 321,            // "decltype"
    TOK_DEREF = 322,               // "->"
    TOK_DELETE = 323,              // "delete"
    TOK_DOT = 324,                 // "."
    TOK_ENUM = 325,                // "enum"
    TOK_EQ_EQ = 326,               // "=="
    TOK_NOT_EQ = 327,              // "!="
    TOK_XOR = 328,                 // "^"
    TOK_LESS = 329,                // "<"
    TOK_GREATER = 330,             // ">"
    TOK_EXPLICIT = 331,            // "explicit"
    TOK_FLOATING_POINT_LITERAL = 332, // FLOATING_POINT_LITERAL
    TOK_MULT = 333,                // "*"
    TOK_DIV = 334,                 // "/"
    TOK_MOD = 335,                 // "%"
    TOK_OR = 336,                  // "|"
    TOK_LSHIFT = 337,              // "<<"
    TOK_RSHIFT = 338,              // ">>"
    TOK_LESS_EQ = 339,             // "<="
    TOK_GREATER_EQ = 340,          // ">="
    TOK_DOT_STAR = 341,            // ".*"
    TOK_DEREF_STAR = 342,          // "->*"
    TOK_DEFAULT = 343,             // "default"
    TOK_TRY = 344,                 // "try"
    TOK_MODULE = 345,              // "module"
    TOK_CATCH = 346,               // "catch"
    TOK_HEADER_NAME = 347,         // HEADER_NAME
    TOK_INTEGER_LITERAL = 348,     // INTEGER_LITERAL
    TOK_WHILE = 349,               // "while"
    TOK_DO = 350,                  // "do"
    TOK_FOR = 351,                 // "for"
    TOK_BREAK = 352,               // "break"
    TOK_CONTINUE = 353,            // "continue"
    TOK_RETURN = 354,              // "return"
    TOK_GOTO = 355,                // "goto"
    TOK_CASE = 356,                // "case"
    TOK_IMPORT = 357,              // "import"
    TOK_NAMESPACE = 358,           // "namespace"
    TOK_REQUIRES = 359,            // "requires"
    TOK_NEW = 360,                 // "new"
    TOK_COMPL = 361,               // "~"
    TOK_PLUS_PLUS = 362,           // "++"
    TOK_MINUS_MINUS = 363,         // "--"
    TOK_AUTO = 364,                // "auto"
    TOK_POINTER_LITERAL = 365,     // POINTER_LITERAL
    TOK_DYNAMIC_CAST = 366,        // "dynamic_cast"
    TOK_STATIC_CAST = 367,         // "static_cast"
    TOK_REINTERPRET_CAST = 368,    // "reinterpret_cast"
    TOK_CONST_CAST = 369,          // "const_cast"
    TOK_TYPEID = 370,              // "typeid"
    TOK_IF = 371,                  // "if"
    TOK_ELSE = 372,                // "else"
    TOK_SWITCH = 373,              // "switch"
    TOK_CHAR = 374,                // "char"
    TOK_CHAR8_T = 375,             // "char8_t"
    TOK_CHAR16_T = 376,            // "char16_t"
    TOK_CHAR32_T = 377,            // "char32_t"
    TOK_WCHAR_T = 378,             // "wchar_t"
    TOK_BOOL = 379,                // "bool"
    TOK_SHORT = 380,               // "short"
    TOK_INT = 381,                 // "int"
    TOK_LONG = 382,                // "long"
    TOK_SIGNED = 383,              // "signed"
    TOK_UNSIGNED = 384,            // "unsigned"
    TOK_FLOAT = 385,               // "float"
    TOK_DOUBLE = 386,              // "double"
    TOK_VOID = 387,                // "void"
    TOK_STATIC_ASSERT = 388,       // "static_assert"
    TOK_STATIC = 389,              // "static"
    TOK_THREAD_LOCAL = 390,        // "thread_local"
    TOK_MUTABLE = 391,             // "mutable"
    TOK_STRING_LITERAL = 392,      // STRING_LITERAL
    TOK_THROW = 393,               // "throw"
    TOK_SIZEOF = 394,              // "sizeof"
    TOK_ALIGNOF = 395,             // "alignof"
    TOK_USER_DEFINED_CHARACTER_LITERAL = 396, // USER_DEFINED_CHARACTER_LITERAL
    TOK_USER_DEFINED_FLOATING_POINT_LITERAL = 397, // USER_DEFINED_FLOATING_POINT_LITERAL
    TOK_USER_DEFINED_INTEGER_LITERAL = 398, // USER_DEFINED_INTEGER_LITERAL
    TOK_OVERRIDE = 399,            // "override"
    TOK_CO_YIELD = 400             // "co_yield"
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::token_kind_type token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 146, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_COMMA = 3,                             // ","
        S_CONSTEXPR = 4,                         // "constexpr"
        S_ELLIPSIS = 5,                          // "..."
        S_EXPORT = 6,                            // "export"
        S_EXTERN = 7,                            // "extern"
        S_IDENTIFIER = 8,                        // IDENTIFIER
        S_INLINE = 9,                            // "inline"
        S_NOEXCEPT = 10,                         // "noexcept"
        S_NOT = 11,                              // "!"
        S_SCOPE = 12,                            // "::"
        S_TEMPLATE = 13,                         // "template"
        S_THIS = 14,                             // "this"
        S_TYPENAME = 15,                         // "typename"
        S_VIRTUAL = 16,                          // "virtual"
        S_PRIVATE = 17,                          // "private"
        S_PROTECTED = 18,                        // "protected"
        S_PUBLIC = 19,                           // "public"
        S_PLUS = 20,                             // "+"
        S_MINUS = 21,                            // "-"
        S_USING = 22,                            // "using"
        S_EQ = 23,                               // "="
        S_SEMICOLON = 24,                        // ";"
        S_ALIGNAS = 25,                          // "alignas"
        S_OPEN_PAREN = 26,                       // "("
        S_CLOSE_PAREN = 27,                      // ")"
        S_AND = 28,                              // "&"
        S_ASM = 29,                              // "asm"
        S_MULT_EQ = 30,                          // "*="
        S_DIV_EQ = 31,                           // "/="
        S_MOD_EQ = 32,                           // "%="
        S_PLUS_EQ = 33,                          // "+="
        S_MINUS_EQ = 34,                         // "-="
        S_RSHIFT_EQ = 35,                        // ">>="
        S_LSHIFT_EQ = 36,                        // "<<="
        S_AND_EQ = 37,                           // "&="
        S_XOR_EQ = 38,                           // "^="
        S_OR_EQ = 39,                            // "|="
        S_OPEN_SQUARE = 40,                      // "["
        S_CLOSE_SQUARE = 41,                     // "]"
        S_COLON = 42,                            // ":"
        S_CO_AWAIT = 43,                         // "co_await"
        S_OPEN_BRACE = 44,                       // "{"
        S_CLOSE_BRACE = 45,                      // "}"
        S_BALANCED_TOKEN = 46,                   // BALANCED_TOKEN
        S_BOOLEAN_LITERAL = 47,                  // BOOLEAN_LITERAL
        S_CHARACTER_LITERAL = 48,                // CHARACTER_LITERAL
        S_CLASS = 49,                            // "class"
        S_STRUCT = 50,                           // "struct"
        S_UNION = 51,                            // "union"
        S_FINAL = 52,                            // "final"
        S_SPACESHIP = 53,                        // "<=>"
        S_CONCEPT = 54,                          // "concept"
        S_QUERY = 55,                            // "?"
        S_AND_AND = 56,                          // "&&"
        S_OR_OR = 57,                            // "||"
        S_OPERATOR = 58,                         // "operator"
        S_CO_RETURN = 59,                        // "co_return"
        S_CONST = 60,                            // "const"
        S_VOLATILE = 61,                         // "volatile"
        S_FRIEND = 62,                           // "friend"
        S_TYPEDEF = 63,                          // "typedef"
        S_CONSTEVAL = 64,                        // "consteval"
        S_CONSTINIT = 65,                        // "constinit"
        S_DECLTYPE = 66,                         // "decltype"
        S_DEREF = 67,                            // "->"
        S_DELETE = 68,                           // "delete"
        S_DOT = 69,                              // "."
        S_ENUM = 70,                             // "enum"
        S_EQ_EQ = 71,                            // "=="
        S_NOT_EQ = 72,                           // "!="
        S_XOR = 73,                              // "^"
        S_LESS = 74,                             // "<"
        S_GREATER = 75,                          // ">"
        S_EXPLICIT = 76,                         // "explicit"
        S_FLOATING_POINT_LITERAL = 77,           // FLOATING_POINT_LITERAL
        S_MULT = 78,                             // "*"
        S_DIV = 79,                              // "/"
        S_MOD = 80,                              // "%"
        S_OR = 81,                               // "|"
        S_LSHIFT = 82,                           // "<<"
        S_RSHIFT = 83,                           // ">>"
        S_LESS_EQ = 84,                          // "<="
        S_GREATER_EQ = 85,                       // ">="
        S_DOT_STAR = 86,                         // ".*"
        S_DEREF_STAR = 87,                       // "->*"
        S_DEFAULT = 88,                          // "default"
        S_TRY = 89,                              // "try"
        S_MODULE = 90,                           // "module"
        S_CATCH = 91,                            // "catch"
        S_HEADER_NAME = 92,                      // HEADER_NAME
        S_INTEGER_LITERAL = 93,                  // INTEGER_LITERAL
        S_WHILE = 94,                            // "while"
        S_DO = 95,                               // "do"
        S_FOR = 96,                              // "for"
        S_BREAK = 97,                            // "break"
        S_CONTINUE = 98,                         // "continue"
        S_RETURN = 99,                           // "return"
        S_GOTO = 100,                            // "goto"
        S_CASE = 101,                            // "case"
        S_IMPORT = 102,                          // "import"
        S_NAMESPACE = 103,                       // "namespace"
        S_REQUIRES = 104,                        // "requires"
        S_NEW = 105,                             // "new"
        S_COMPL = 106,                           // "~"
        S_PLUS_PLUS = 107,                       // "++"
        S_MINUS_MINUS = 108,                     // "--"
        S_AUTO = 109,                            // "auto"
        S_POINTER_LITERAL = 110,                 // POINTER_LITERAL
        S_DYNAMIC_CAST = 111,                    // "dynamic_cast"
        S_STATIC_CAST = 112,                     // "static_cast"
        S_REINTERPRET_CAST = 113,                // "reinterpret_cast"
        S_CONST_CAST = 114,                      // "const_cast"
        S_TYPEID = 115,                          // "typeid"
        S_IF = 116,                              // "if"
        S_ELSE = 117,                            // "else"
        S_SWITCH = 118,                          // "switch"
        S_CHAR = 119,                            // "char"
        S_CHAR8_T = 120,                         // "char8_t"
        S_CHAR16_T = 121,                        // "char16_t"
        S_CHAR32_T = 122,                        // "char32_t"
        S_WCHAR_T = 123,                         // "wchar_t"
        S_BOOL = 124,                            // "bool"
        S_SHORT = 125,                           // "short"
        S_INT = 126,                             // "int"
        S_LONG = 127,                            // "long"
        S_SIGNED = 128,                          // "signed"
        S_UNSIGNED = 129,                        // "unsigned"
        S_FLOAT = 130,                           // "float"
        S_DOUBLE = 131,                          // "double"
        S_VOID = 132,                            // "void"
        S_STATIC_ASSERT = 133,                   // "static_assert"
        S_STATIC = 134,                          // "static"
        S_THREAD_LOCAL = 135,                    // "thread_local"
        S_MUTABLE = 136,                         // "mutable"
        S_STRING_LITERAL = 137,                  // STRING_LITERAL
        S_THROW = 138,                           // "throw"
        S_SIZEOF = 139,                          // "sizeof"
        S_ALIGNOF = 140,                         // "alignof"
        S_USER_DEFINED_CHARACTER_LITERAL = 141,  // USER_DEFINED_CHARACTER_LITERAL
        S_USER_DEFINED_FLOATING_POINT_LITERAL = 142, // USER_DEFINED_FLOATING_POINT_LITERAL
        S_USER_DEFINED_INTEGER_LITERAL = 143,    // USER_DEFINED_INTEGER_LITERAL
        S_OVERRIDE = 144,                        // "override"
        S_CO_YIELD = 145,                        // "co_yield"
        S_YYACCEPT = 146,                        // $accept
        S_147_COMMA_opt = 147,                   // COMMA-opt
        S_148_CONSTEXPR_opt = 148,               // CONSTEXPR-opt
        S_149_ELLIPSIS_opt = 149,                // ELLIPSIS-opt
        S_150_EXPORT_opt = 150,                  // EXPORT-opt
        S_151_EXTERN_opt = 151,                  // EXTERN-opt
        S_152_IDENTIFIER_opt = 152,              // IDENTIFIER-opt
        S_153_INLINE_opt = 153,                  // INLINE-opt
        S_154_NOEXCEPT_opt = 154,                // NOEXCEPT-opt
        S_155_NOT_opt = 155,                     // NOT-opt
        S_156_SCOPE_opt = 156,                   // SCOPE-opt
        S_157_TEMPLATE_opt = 157,                // TEMPLATE-opt
        S_158_THIS_opt = 158,                    // THIS-opt
        S_159_TYPENAME_opt = 159,                // TYPENAME-opt
        S_160_VIRTUAL_opt = 160,                 // VIRTUAL-opt
        S_161_abstract_declarator = 161,         // abstract-declarator
        S_162_abstract_declarator_opt = 162,     // abstract-declarator-opt
        S_163_abstract_pack_declarator = 163,    // abstract-pack-declarator
        S_164_access_specifier = 164,            // access-specifier
        S_165_access_specifier_opt = 165,        // access-specifier-opt
        S_166_additive_expression = 166,         // additive-expression
        S_167_alias_declaration = 167,           // alias-declaration
        S_168_alignment_specifier = 168,         // alignment-specifier
        S_169_and_expression = 169,              // and-expression
        S_170_asm_declaration = 170,             // asm-declaration
        S_171_assignment_expression = 171,       // assignment-expression
        S_172_assignment_expression_opt = 172,   // assignment-expression-opt
        S_173_assignment_operator = 173,         // assignment-operator
        S_attribute = 174,                       // attribute
        S_175_attribute_argument_clause = 175,   // attribute-argument-clause
        S_176_attribute_argument_clause_opt = 176, // attribute-argument-clause-opt
        S_177_attribute_declaration = 177,       // attribute-declaration
        S_178_attribute_list = 178,              // attribute-list
        S_179_attribute_namespace = 179,         // attribute-namespace
        S_180_attribute_opt = 180,               // attribute-opt
        S_181_attribute_scoped_token = 181,      // attribute-scoped-token
        S_182_attribute_specifier = 182,         // attribute-specifier
        S_183_attribute_specifier_seq = 183,     // attribute-specifier-seq
        S_184_attribute_specifier_seq_opt = 184, // attribute-specifier-seq-opt
        S_185_attribute_token = 185,             // attribute-token
        S_186_attribute_using_prefix = 186,      // attribute-using-prefix
        S_187_attribute_using_prefix_opt = 187,  // attribute-using-prefix-opt
        S_188_await_expression = 188,            // await-expression
        S_189_balanced_token = 189,              // balanced-token
        S_190_balanced_token_seq = 190,          // balanced-token-seq
        S_191_balanced_token_seq_opt = 191,      // balanced-token-seq-opt
        S_192_base_clause = 192,                 // base-clause
        S_193_base_clause_opt = 193,             // base-clause-opt
        S_194_base_specifier = 194,              // base-specifier
        S_195_base_specifier_list = 195,         // base-specifier-list
        S_196_block_declaration = 196,           // block-declaration
        S_197_boolean_literal = 197,             // boolean-literal
        S_198_brace_or_equal_initializer = 198,  // brace-or-equal-initializer
        S_199_brace_or_equal_initializer_opt = 199, // brace-or-equal-initializer-opt
        S_200_braced_init_list = 200,            // braced-init-list
        S_capture = 201,                         // capture
        S_202_capture_default = 202,             // capture-default
        S_203_capture_list = 203,                // capture-list
        S_204_cast_expression = 204,             // cast-expression
        S_205_character_literal = 205,           // character-literal
        S_206_class_head = 206,                  // class-head
        S_207_class_head_name = 207,             // class-head-name
        S_208_class_key = 208,                   // class-key
        S_209_class_name = 209,                  // class-name
        S_210_class_or_decltype = 210,           // class-or-decltype
        S_211_class_specifier = 211,             // class-specifier
        S_212_class_virt_specifier = 212,        // class-virt-specifier
        S_213_class_virt_specifier_opt = 213,    // class-virt-specifier-opt
        S_214_compare_expression = 214,          // compare-expression
        S_215_compound_requirement = 215,        // compound-requirement
        S_216_compound_statement = 216,          // compound-statement
        S_217_concept_definition = 217,          // concept-definition
        S_218_concept_name = 218,                // concept-name
        S_condition = 219,                       // condition
        S_220_condition_opt = 220,               // condition-opt
        S_221_conditional_expression = 221,      // conditional-expression
        S_222_constant_expression = 222,         // constant-expression
        S_223_constant_expression_opt = 223,     // constant-expression-opt
        S_224_constraint_expression = 224,       // constraint-expression
        S_225_constraint_logical_and_expression = 225, // constraint-logical-and-expression
        S_226_constraint_logical_or_expression = 226, // constraint-logical-or-expression
        S_227_conversion_declarator = 227,       // conversion-declarator
        S_228_conversion_declarator_opt = 228,   // conversion-declarator-opt
        S_229_conversion_function_id = 229,      // conversion-function-id
        S_230_conversion_type_id = 230,          // conversion-type-id
        S_231_coroutine_return_statement = 231,  // coroutine-return-statement
        S_232_ctor_initializer = 232,            // ctor-initializer
        S_233_ctor_initializer_opt = 233,        // ctor-initializer-opt
        S_234_cv_qualifier = 234,                // cv-qualifier
        S_235_cv_qualifier_seq = 235,            // cv-qualifier-seq
        S_236_cv_qualifier_seq_opt = 236,        // cv-qualifier-seq-opt
        S_237_decl_specifier = 237,              // decl-specifier
        S_238_decl_specifier_seq = 238,          // decl-specifier-seq
        S_239_decl_specifier_seq_opt = 239,      // decl-specifier-seq-opt
        S_declaration = 240,                     // declaration
        S_241_declaration_seq = 241,             // declaration-seq
        S_242_declaration_seq_opt = 242,         // declaration-seq-opt
        S_243_declaration_statement = 243,       // declaration-statement
        S_declarator = 244,                      // declarator
        S_245_declarator_id = 245,               // declarator-id
        S_246_decltype_specifier = 246,          // decltype-specifier
        S_247_deduction_guide = 247,             // deduction-guide
        S_248_defining_type_id = 248,            // defining-type-id
        S_249_defining_type_specifier = 249,     // defining-type-specifier
        S_250_defining_type_specifier_seq = 250, // defining-type-specifier-seq
        S_251_delete_expression = 251,           // delete-expression
        S_252_designated_initializer_clause = 252, // designated-initializer-clause
        S_253_designated_initializer_list = 253, // designated-initializer-list
        S_designator = 254,                      // designator
        S_255_elaborated_enum_specifier = 255,   // elaborated-enum-specifier
        S_256_elaborated_type_specifier = 256,   // elaborated-type-specifier
        S_257_empty_declaration = 257,           // empty-declaration
        S_258_enclosing_namespace_specifier = 258, // enclosing-namespace-specifier
        S_259_enum_base = 259,                   // enum-base
        S_260_enum_base_opt = 260,               // enum-base-opt
        S_261_enum_head = 261,                   // enum-head
        S_262_enum_head_name = 262,              // enum-head-name
        S_263_enum_head_name_opt = 263,          // enum-head-name-opt
        S_264_enum_key = 264,                    // enum-key
        S_265_enum_name = 265,                   // enum-name
        S_266_enum_specifier = 266,              // enum-specifier
        S_enumerator = 267,                      // enumerator
        S_268_enumerator_definition = 268,       // enumerator-definition
        S_269_enumerator_list = 269,             // enumerator-list
        S_270_enumerator_list_opt = 270,         // enumerator-list-opt
        S_271_equality_expression = 271,         // equality-expression
        S_272_exception_declaration = 272,       // exception-declaration
        S_273_exclusive_or_expression = 273,     // exclusive-or-expression
        S_274_explicit_instantiation = 274,      // explicit-instantiation
        S_275_explicit_specialization = 275,     // explicit-specialization
        S_276_explicit_specifier = 276,          // explicit-specifier
        S_277_explicit_specifier_opt = 277,      // explicit-specifier-opt
        S_278_export_declaration = 278,          // export-declaration
        S_279_expr_or_braced_init_list = 279,    // expr-or-braced-init-list
        S_280_expr_or_braced_init_list_opt = 280, // expr-or-braced-init-list-opt
        S_expression = 281,                      // expression
        S_282_expression_list = 282,             // expression-list
        S_283_expression_list_opt = 283,         // expression-list-opt
        S_284_expression_opt = 284,              // expression-opt
        S_285_expression_statement = 285,        // expression-statement
        S_286_floating_point_literal = 286,      // floating-point-literal
        S_287_fold_expression = 287,             // fold-expression
        S_288_fold_operator = 288,               // fold-operator
        S_289_for_range_declaration = 289,       // for-range-declaration
        S_290_for_range_initializer = 290,       // for-range-initializer
        S_291_function_body = 291,               // function-body
        S_292_function_definition = 292,         // function-definition
        S_293_function_specifier = 293,          // function-specifier
        S_294_function_try_block = 294,          // function-try-block
        S_295_global_module_fragment = 295,      // global-module-fragment
        S_296_global_module_fragment_opt = 296,  // global-module-fragment-opt
        S_handler = 297,                         // handler
        S_298_handler_seq = 298,                 // handler-seq
        S_299_handler_seq_opt = 299,             // handler-seq-opt
        S_300_header_name = 300,                 // header-name
        S_301_id_expression = 301,               // id-expression
        S_302_identifier_list = 302,             // identifier-list
        S_303_inclusive_or_expression = 303,     // inclusive-or-expression
        S_304_init_capture = 304,                // init-capture
        S_305_init_declarator = 305,             // init-declarator
        S_306_init_declarator_list = 306,        // init-declarator-list
        S_307_init_declarator_list_opt = 307,    // init-declarator-list-opt
        S_308_init_statement = 308,              // init-statement
        S_309_init_statement_opt = 309,          // init-statement-opt
        S_initializer = 310,                     // initializer
        S_311_initializer_clause = 311,          // initializer-clause
        S_312_initializer_list = 312,            // initializer-list
        S_313_initializer_opt = 313,             // initializer-opt
        S_314_integer_literal = 314,             // integer-literal
        S_315_iteration_statement = 315,         // iteration-statement
        S_316_jump_statement = 316,              // jump-statement
        S_317_labeled_statement = 317,           // labeled-statement
        S_318_lambda_capture = 318,              // lambda-capture
        S_319_lambda_capture_opt = 319,          // lambda-capture-opt
        S_320_lambda_declarator = 320,           // lambda-declarator
        S_321_lambda_expression = 321,           // lambda-expression
        S_322_lambda_introducer = 322,           // lambda-introducer
        S_323_lambda_specifiers = 323,           // lambda-specifiers
        S_324_linkage_specification = 324,       // linkage-specification
        S_literal = 325,                         // literal
        S_326_literal_operator_id = 326,         // literal-operator-id
        S_327_logical_and_expression = 327,      // logical-and-expression
        S_328_logical_or_expression = 328,       // logical-or-expression
        S_329_mem_initializer = 329,             // mem-initializer
        S_330_mem_initializer_id = 330,          // mem-initializer-id
        S_331_mem_initializer_list = 331,        // mem-initializer-list
        S_332_member_declaration = 332,          // member-declaration
        S_333_member_declarator = 333,           // member-declarator
        S_334_member_declarator_list = 334,      // member-declarator-list
        S_335_member_declarator_list_opt = 335,  // member-declarator-list-opt
        S_336_member_specification = 336,        // member-specification
        S_337_member_specification_opt = 337,    // member-specification-opt
        S_338_module_declaration = 338,          // module-declaration
        S_339_module_import_declaration = 339,   // module-import-declaration
        S_340_module_name = 340,                 // module-name
        S_341_module_name_qualifier = 341,       // module-name-qualifier
        S_342_module_name_qualifier_opt = 342,   // module-name-qualifier-opt
        S_343_module_partition = 343,            // module-partition
        S_344_module_partition_opt = 344,        // module-partition-opt
        S_345_multiplicative_expression = 345,   // multiplicative-expression
        S_346_named_namespace_definition = 346,  // named-namespace-definition
        S_347_namespace_alias = 347,             // namespace-alias
        S_348_namespace_alias_definition = 348,  // namespace-alias-definition
        S_349_namespace_body = 349,              // namespace-body
        S_350_namespace_definition = 350,        // namespace-definition
        S_351_namespace_name = 351,              // namespace-name
        S_352_nested_name_specifier = 352,       // nested-name-specifier
        S_353_nested_name_specifier_opt = 353,   // nested-name-specifier-opt
        S_354_nested_namespace_definition = 354, // nested-namespace-definition
        S_355_nested_requirement = 355,          // nested-requirement
        S_356_new_declarator = 356,              // new-declarator
        S_357_new_declarator_opt = 357,          // new-declarator-opt
        S_358_new_expression = 358,              // new-expression
        S_359_new_initializer = 359,             // new-initializer
        S_360_new_initializer_opt = 360,         // new-initializer-opt
        S_361_new_placement = 361,               // new-placement
        S_362_new_placement_opt = 362,           // new-placement-opt
        S_363_new_type_id = 363,                 // new-type-id
        S_364_nodeclspec_function_declaration = 364, // nodeclspec-function-declaration
        S_365_noexcept_expression = 365,         // noexcept-expression
        S_366_noexcept_specifier = 366,          // noexcept-specifier
        S_367_noexcept_specifier_opt = 367,      // noexcept-specifier-opt
        S_368_noptr_abstract_declarator = 368,   // noptr-abstract-declarator
        S_369_noptr_abstract_declarator_opt = 369, // noptr-abstract-declarator-opt
        S_370_noptr_abstract_pack_declarator = 370, // noptr-abstract-pack-declarator
        S_371_noptr_declarator = 371,            // noptr-declarator
        S_372_noptr_new_declarator = 372,        // noptr-new-declarator
        S_373_opaque_enum_declaration = 373,     // opaque-enum-declaration
        S_374_operator_function_id = 374,        // operator-function-id
        S_375_overloadable_operator = 375,       // overloadable-operator
        S_376_parameter_declaration = 376,       // parameter-declaration
        S_377_parameter_declaration_clause = 377, // parameter-declaration-clause
        S_378_parameter_declaration_list = 378,  // parameter-declaration-list
        S_379_parameter_declaration_list_opt = 379, // parameter-declaration-list-opt
        S_380_parameters_and_qualifiers = 380,   // parameters-and-qualifiers
        S_381_placeholder_type_specifier = 381,  // placeholder-type-specifier
        S_382_pm_expression = 382,               // pm-expression
        S_383_pointer_literal = 383,             // pointer-literal
        S_384_postfix_expression = 384,          // postfix-expression
        S_385_primary_expression = 385,          // primary-expression
        S_386_private_module_fragment = 386,     // private-module-fragment
        S_387_private_module_fragment_opt = 387, // private-module-fragment-opt
        S_388_ptr_abstract_declarator = 388,     // ptr-abstract-declarator
        S_389_ptr_abstract_declarator_opt = 389, // ptr-abstract-declarator-opt
        S_390_ptr_declarator = 390,              // ptr-declarator
        S_391_ptr_operator = 391,                // ptr-operator
        S_392_pure_specifier = 392,              // pure-specifier
        S_393_pure_specifier_opt = 393,          // pure-specifier-opt
        S_394_qualified_id = 394,                // qualified-id
        S_395_qualified_namespace_specifier = 395, // qualified-namespace-specifier
        S_396_ref_qualifier = 396,               // ref-qualifier
        S_397_ref_qualifier_opt = 397,           // ref-qualifier-opt
        S_398_relational_expression = 398,       // relational-expression
        S_requirement = 399,                     // requirement
        S_400_requirement_body = 400,            // requirement-body
        S_401_requirement_parameter_list = 401,  // requirement-parameter-list
        S_402_requirement_parameter_list_opt = 402, // requirement-parameter-list-opt
        S_403_requirement_seq = 403,             // requirement-seq
        S_404_requires_clause = 404,             // requires-clause
        S_405_requires_clause_opt = 405,         // requires-clause-opt
        S_406_requires_expression = 406,         // requires-expression
        S_407_return_type_requirement = 407,     // return-type-requirement
        S_408_return_type_requirement_opt = 408, // return-type-requirement-opt
        S_409_selection_statement = 409,         // selection-statement
        S_410_shift_expression = 410,            // shift-expression
        S_411_simple_capture = 411,              // simple-capture
        S_412_simple_declaration = 412,          // simple-declaration
        S_413_simple_requirement = 413,          // simple-requirement
        S_414_simple_template_id = 414,          // simple-template-id
        S_415_simple_type_specifier = 415,       // simple-type-specifier
        S_statement = 416,                       // statement
        S_417_statement_seq = 417,               // statement-seq
        S_418_statement_seq_opt = 418,           // statement-seq-opt
        S_419_static_assert_declaration = 419,   // static_assert-declaration
        S_420_storage_class_specifier = 420,     // storage-class-specifier
        S_421_string_literal = 421,              // string-literal
        S_422_template_argument = 422,           // template-argument
        S_423_template_argument_list = 423,      // template-argument-list
        S_424_template_argument_list_opt = 424,  // template-argument-list-opt
        S_425_template_declaration = 425,        // template-declaration
        S_426_template_head = 426,               // template-head
        S_427_template_id = 427,                 // template-id
        S_428_template_name = 428,               // template-name
        S_429_template_parameter = 429,          // template-parameter
        S_430_template_parameter_list = 430,     // template-parameter-list
        S_431_throw_expression = 431,            // throw-expression
        S_432_trailing_return_type = 432,        // trailing-return-type
        S_433_trailing_return_type_opt = 433,    // trailing-return-type-opt
        S_434_translation_unit = 434,            // translation-unit
        S_435_try_block = 435,                   // try-block
        S_436_type_constraint = 436,             // type-constraint
        S_437_type_constraint_opt = 437,         // type-constraint-opt
        S_438_type_id = 438,                     // type-id
        S_439_type_name = 439,                   // type-name
        S_440_type_parameter = 440,              // type-parameter
        S_441_type_parameter_key = 441,          // type-parameter-key
        S_442_type_requirement = 442,            // type-requirement
        S_443_type_specifier = 443,              // type-specifier
        S_444_type_specifier_seq = 444,          // type-specifier-seq
        S_445_typedef_name = 445,                // typedef-name
        S_446_typename_specifier = 446,          // typename-specifier
        S_447_ud_suffix = 447,                   // ud-suffix
        S_448_unary_expression = 448,            // unary-expression
        S_449_unary_operator = 449,              // unary-operator
        S_450_unnamed_namespace_definition = 450, // unnamed-namespace-definition
        S_451_unqualified_id = 451,              // unqualified-id
        S_452_user_defined_character_literal = 452, // user-defined-character-literal
        S_453_user_defined_floating_point_literal = 453, // user-defined-floating-point-literal
        S_454_user_defined_integer_literal = 454, // user-defined-integer-literal
        S_455_user_defined_literal = 455,        // user-defined-literal
        S_456_user_defined_string_literal = 456, // user-defined-string-literal
        S_457_using_declaration = 457,           // using-declaration
        S_458_using_declarator = 458,            // using-declarator
        S_459_using_declarator_list = 459,       // using-declarator-list
        S_460_using_directive = 460,             // using-directive
        S_461_using_enum_declaration = 461,      // using-enum-declaration
        S_462_virt_specifier = 462,              // virt-specifier
        S_463_virt_specifier_seq = 463,          // virt-specifier-seq
        S_464_virt_specifier_seq_opt = 464,      // virt-specifier-seq-opt
        S_465_yield_expression = 465,            // yield-expression
        S_result = 466                           // result
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;


    /// Build a parser object.
    parser ();
    virtual ~parser ();

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param msg    a description of the syntax error.
    virtual void error (const std::string& msg);

# if YYDEBUG
  public:
    /// \brief Report a symbol value on the debug stream.
    /// \param yykind       The symbol kind.
    /// \param yyvaluep     Its semantic value.
    virtual void yy_symbol_value_print_ (symbol_kind_type yykind,
                                         const value_type* yyvaluep) const;
    /// \brief Report a symbol on the debug stream.
    /// \param yykind       The symbol kind.
    /// \param yyvaluep     Its semantic value.
    virtual void yy_symbol_print_ (symbol_kind_type yykind,
                                   const value_type* yyvaluep) const;
  private:
    /// Debug stream.
    std::ostream* yycdebug_;
#endif


  };

} // yy
#line 848 "cplusplus.h"




#endif // !YY_YY_CPLUSPLUS_H_INCLUDED
