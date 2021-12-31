// A Bison parser, made by GNU Bison 3.8.2.9-6571-dirty.

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

// C++ GLR parser skeleton written by Valentin Tolmer.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_CPLUSPLUS_H_INCLUDED
# define YY_YY_CPLUSPLUS_H_INCLUDED
// "%code requires" blocks.
#line 148 "cplusplus.y"

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#line 57 "cplusplus.h"

#include <algorithm>
#include <cstddef> // ptrdiff_t
#include <cstring> // memcpy
#include <iostream>
#include <iomanip>
#include <limits>
#include <stdexcept>
#include <stdint.h>
#include <string>
#include <vector>

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

#include <typeinfo>
#ifndef YY_ASSERT
# include <cassert>
# define YY_ASSERT assert
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

namespace yy {
#line 120 "cplusplus.h"




  /// A Bison parser.
  class parser
  {
  public:
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class value_type
  {
  public:
    /// Type of *this.
    typedef value_type self_type;

    /// Empty construction.
    value_type () YY_NOEXCEPT
      : yyraw_ ()
      , yytypeid_ (YY_NULLPTR)
    {}

    /// Construct and fill.
    template <typename T>
    value_type (YY_RVREF (T) t)
      : yytypeid_ (&typeid (T))
    {
      YY_ASSERT (sizeof (T) <= size);
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    value_type (const self_type&) = delete;
    /// Non copyable.
    self_type& operator= (const self_type&) = delete;
#endif

    /// Destruction, allowed only if empty.
    ~value_type () YY_NOEXCEPT
    {
      YY_ASSERT (!yytypeid_);
    }

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == *that.yytypeid_);
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
      yytypeid_ = YY_NULLPTR;
    }

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    value_type (const self_type&);
    /// Non copyable.
    self_type& operator= (const self_type&);
#endif

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yyraw_;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yyraw_;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me_;
      /// A buffer large enough to store any of the semantic values.
      char yyraw_[size];
    };

    /// Whether the content is built: if defined, the name of the stored type.
    const std::type_info *yytypeid_;
  };


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
        YYEMPTY = -2,
    YYEOF = 0,                     // "end of file"
    YYerror = 256,                 // error
    YYUNDEF = 257,                 // "invalid token"
    COMMA = 258,                   // ","
    CONSTEXPR = 259,               // "constexpr"
    ELLIPSIS = 260,                // "..."
    EXPORT = 261,                  // "export"
    EXTERN = 262,                  // "extern"
    IDENTIFIER = 263,              // IDENTIFIER
    INLINE = 264,                  // "inline"
    NOEXCEPT = 265,                // "noexcept"
    NOT = 266,                     // "!"
    SCOPE = 267,                   // "::"
    TEMPLATE = 268,                // "template"
    THIS = 269,                    // "this"
    TYPENAME = 270,                // "typename"
    VIRTUAL = 271,                 // "virtual"
    PRIVATE = 272,                 // "private"
    PROTECTED = 273,               // "protected"
    PUBLIC = 274,                  // "public"
    PLUS = 275,                    // "+"
    MINUS = 276,                   // "-"
    USING = 277,                   // "using"
    EQ = 278,                      // "="
    SEMICOLON = 279,               // ";"
    ALIGNAS = 280,                 // "alignas"
    OPEN_PAREN = 281,              // "("
    CLOSE_PAREN = 282,             // ")"
    AND = 283,                     // "&"
    ASM = 284,                     // "asm"
    MULT_EQ = 285,                 // "*="
    DIV_EQ = 286,                  // "/="
    MOD_EQ = 287,                  // "%="
    PLUS_EQ = 288,                 // "+="
    MINUS_EQ = 289,                // "-="
    RSHIFT_EQ = 290,               // ">>="
    LSHIFT_EQ = 291,               // "<<="
    AND_EQ = 292,                  // "&="
    XOR_EQ = 293,                  // "^="
    OR_EQ = 294,                   // "|="
    OPEN_SQUARE = 295,             // "["
    CLOSE_SQUARE = 296,            // "]"
    COLON = 297,                   // ":"
    CO_AWAIT = 298,                // "co_await"
    OPEN_BRACE = 299,              // "{"
    CLOSE_BRACE = 300,             // "}"
    BALANCED_TOKEN = 301,          // BALANCED_TOKEN
    CLASS = 302,                   // "class"
    STRUCT = 303,                  // "struct"
    UNION = 304,                   // "union"
    FINAL = 305,                   // "final"
    SPACESHIP = 306,               // "<=>"
    CONCEPT = 307,                 // "concept"
    QUERY = 308,                   // "?"
    AND_AND = 309,                 // "&&"
    OR_OR = 310,                   // "||"
    OPERATOR = 311,                // "operator"
    CO_RETURN = 312,               // "co_return"
    CONST = 313,                   // "const"
    VOLATILE = 314,                // "volatile"
    FRIEND = 315,                  // "friend"
    TYPEDEF = 316,                 // "typedef"
    CONSTEVAL = 317,               // "consteval"
    CONSTINIT = 318,               // "constinit"
    DECLTYPE = 319,                // "decltype"
    DEREF = 320,                   // "->"
    DELETE = 321,                  // "delete"
    DOT = 322,                     // "."
    ENUM = 323,                    // "enum"
    EQ_EQ = 324,                   // "=="
    NOT_EQ = 325,                  // "!="
    XOR = 326,                     // "^"
    LESS = 327,                    // "<"
    GREATER = 328,                 // ">"
    EXPLICIT = 329,                // "explicit"
    MULT = 330,                    // "*"
    DIV = 331,                     // "/"
    MOD = 332,                     // "%"
    OR = 333,                      // "|"
    LSHIFT = 334,                  // "<<"
    RSHIFT = 335,                  // ">>"
    LESS_EQ = 336,                 // "<="
    GREATER_EQ = 337,              // ">="
    DOT_STAR = 338,                // ".*"
    DEREF_STAR = 339,              // "->*"
    DEFAULT = 340,                 // "default"
    TRY = 341,                     // "try"
    MODULE = 342,                  // "module"
    CATCH = 343,                   // "catch"
    HEADER_NAME = 344,             // HEADER_NAME
    WHILE = 345,                   // "while"
    DO = 346,                      // "do"
    FOR = 347,                     // "for"
    BREAK = 348,                   // "break"
    CONTINUE = 349,                // "continue"
    RETURN = 350,                  // "return"
    GOTO = 351,                    // "goto"
    CASE = 352,                    // "case"
    IMPORT = 353,                  // "import"
    NAMESPACE = 354,               // "namespace"
    REQUIRES = 355,                // "requires"
    NEW = 356,                     // "new"
    COMPL = 357,                   // "~"
    PLUS_PLUS = 358,               // "++"
    MINUS_MINUS = 359,             // "--"
    AUTO = 360,                    // "auto"
    DYNAMIC_CAST = 361,            // "dynamic_cast"
    STATIC_CAST = 362,             // "static_cast"
    REINTERPRET_CAST = 363,        // "reinterpret_cast"
    CONST_CAST = 364,              // "const_cast"
    TYPEID = 365,                  // "typeid"
    LITERAL = 366,                 // "literal"
    IF = 367,                      // "if"
    ELSE = 368,                    // "else"
    SWITCH = 369,                  // "switch"
    CHAR = 370,                    // "char"
    CHAR8_T = 371,                 // "char8_t"
    CHAR16_T = 372,                // "char16_t"
    CHAR32_T = 373,                // "char32_t"
    WCHAR_T = 374,                 // "wchar_t"
    BOOL = 375,                    // "bool"
    SHORT = 376,                   // "short"
    INT = 377,                     // "int"
    LONG = 378,                    // "long"
    SIGNED = 379,                  // "signed"
    UNSIGNED = 380,                // "unsigned"
    FLOAT = 381,                   // "float"
    DOUBLE = 382,                  // "double"
    VOID = 383,                    // "void"
    STATIC_ASSERT = 384,           // "static_assert"
    STATIC = 385,                  // "static"
    THREAD_LOCAL = 386,            // "thread_local"
    MUTABLE = 387,                 // "mutable"
    STRING_LITERAL = 388,          // STRING_LITERAL
    THROW = 389,                   // "throw"
    SIZEOF = 390,                  // "sizeof"
    ALIGNOF = 391,                 // "alignof"
    OVERRIDE = 392,                // "override"
    CO_YIELD = 393                 // "co_yield"
      };
    };

    /// Token kind, as returned by yylex.
    typedef token::token_kind_type token_kind_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 140, ///< Number of tokens.
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
        S_CLASS = 47,                            // "class"
        S_STRUCT = 48,                           // "struct"
        S_UNION = 49,                            // "union"
        S_FINAL = 50,                            // "final"
        S_SPACESHIP = 51,                        // "<=>"
        S_CONCEPT = 52,                          // "concept"
        S_QUERY = 53,                            // "?"
        S_AND_AND = 54,                          // "&&"
        S_OR_OR = 55,                            // "||"
        S_OPERATOR = 56,                         // "operator"
        S_CO_RETURN = 57,                        // "co_return"
        S_CONST = 58,                            // "const"
        S_VOLATILE = 59,                         // "volatile"
        S_FRIEND = 60,                           // "friend"
        S_TYPEDEF = 61,                          // "typedef"
        S_CONSTEVAL = 62,                        // "consteval"
        S_CONSTINIT = 63,                        // "constinit"
        S_DECLTYPE = 64,                         // "decltype"
        S_DEREF = 65,                            // "->"
        S_DELETE = 66,                           // "delete"
        S_DOT = 67,                              // "."
        S_ENUM = 68,                             // "enum"
        S_EQ_EQ = 69,                            // "=="
        S_NOT_EQ = 70,                           // "!="
        S_XOR = 71,                              // "^"
        S_LESS = 72,                             // "<"
        S_GREATER = 73,                          // ">"
        S_EXPLICIT = 74,                         // "explicit"
        S_MULT = 75,                             // "*"
        S_DIV = 76,                              // "/"
        S_MOD = 77,                              // "%"
        S_OR = 78,                               // "|"
        S_LSHIFT = 79,                           // "<<"
        S_RSHIFT = 80,                           // ">>"
        S_LESS_EQ = 81,                          // "<="
        S_GREATER_EQ = 82,                       // ">="
        S_DOT_STAR = 83,                         // ".*"
        S_DEREF_STAR = 84,                       // "->*"
        S_DEFAULT = 85,                          // "default"
        S_TRY = 86,                              // "try"
        S_MODULE = 87,                           // "module"
        S_CATCH = 88,                            // "catch"
        S_HEADER_NAME = 89,                      // HEADER_NAME
        S_WHILE = 90,                            // "while"
        S_DO = 91,                               // "do"
        S_FOR = 92,                              // "for"
        S_BREAK = 93,                            // "break"
        S_CONTINUE = 94,                         // "continue"
        S_RETURN = 95,                           // "return"
        S_GOTO = 96,                             // "goto"
        S_CASE = 97,                             // "case"
        S_IMPORT = 98,                           // "import"
        S_NAMESPACE = 99,                        // "namespace"
        S_REQUIRES = 100,                        // "requires"
        S_NEW = 101,                             // "new"
        S_COMPL = 102,                           // "~"
        S_PLUS_PLUS = 103,                       // "++"
        S_MINUS_MINUS = 104,                     // "--"
        S_AUTO = 105,                            // "auto"
        S_DYNAMIC_CAST = 106,                    // "dynamic_cast"
        S_STATIC_CAST = 107,                     // "static_cast"
        S_REINTERPRET_CAST = 108,                // "reinterpret_cast"
        S_CONST_CAST = 109,                      // "const_cast"
        S_TYPEID = 110,                          // "typeid"
        S_LITERAL = 111,                         // "literal"
        S_IF = 112,                              // "if"
        S_ELSE = 113,                            // "else"
        S_SWITCH = 114,                          // "switch"
        S_CHAR = 115,                            // "char"
        S_CHAR8_T = 116,                         // "char8_t"
        S_CHAR16_T = 117,                        // "char16_t"
        S_CHAR32_T = 118,                        // "char32_t"
        S_WCHAR_T = 119,                         // "wchar_t"
        S_BOOL = 120,                            // "bool"
        S_SHORT = 121,                           // "short"
        S_INT = 122,                             // "int"
        S_LONG = 123,                            // "long"
        S_SIGNED = 124,                          // "signed"
        S_UNSIGNED = 125,                        // "unsigned"
        S_FLOAT = 126,                           // "float"
        S_DOUBLE = 127,                          // "double"
        S_VOID = 128,                            // "void"
        S_STATIC_ASSERT = 129,                   // "static_assert"
        S_STATIC = 130,                          // "static"
        S_THREAD_LOCAL = 131,                    // "thread_local"
        S_MUTABLE = 132,                         // "mutable"
        S_STRING_LITERAL = 133,                  // STRING_LITERAL
        S_THROW = 134,                           // "throw"
        S_SIZEOF = 135,                          // "sizeof"
        S_ALIGNOF = 136,                         // "alignof"
        S_OVERRIDE = 137,                        // "override"
        S_CO_YIELD = 138,                        // "co_yield"
        S_139_0_ = 139,                          // '0'
        S_YYACCEPT = 140,                        // $accept
        S_141_COMMA_opt = 141,                   // COMMA-opt
        S_142_CONSTEXPR_opt = 142,               // CONSTEXPR-opt
        S_143_ELLIPSIS_opt = 143,                // ELLIPSIS-opt
        S_144_EXPORT_opt = 144,                  // EXPORT-opt
        S_145_EXTERN_opt = 145,                  // EXTERN-opt
        S_146_IDENTIFIER_opt = 146,              // IDENTIFIER-opt
        S_147_INLINE_opt = 147,                  // INLINE-opt
        S_148_NOEXCEPT_opt = 148,                // NOEXCEPT-opt
        S_149_NOT_opt = 149,                     // NOT-opt
        S_150_SCOPE_opt = 150,                   // SCOPE-opt
        S_151_TEMPLATE_opt = 151,                // TEMPLATE-opt
        S_152_THIS_opt = 152,                    // THIS-opt
        S_153_TYPENAME_opt = 153,                // TYPENAME-opt
        S_154_VIRTUAL_opt = 154,                 // VIRTUAL-opt
        S_155_abstract_declarator = 155,         // abstract-declarator
        S_156_abstract_declarator_opt = 156,     // abstract-declarator-opt
        S_157_abstract_pack_declarator = 157,    // abstract-pack-declarator
        S_158_access_specifier = 158,            // access-specifier
        S_159_access_specifier_opt = 159,        // access-specifier-opt
        S_160_additive_expression = 160,         // additive-expression
        S_161_alias_declaration = 161,           // alias-declaration
        S_162_alignment_specifier = 162,         // alignment-specifier
        S_163_and_expression = 163,              // and-expression
        S_164_asm_declaration = 164,             // asm-declaration
        S_165_assignment_expression = 165,       // assignment-expression
        S_166_assignment_expression_opt = 166,   // assignment-expression-opt
        S_167_assignment_operator = 167,         // assignment-operator
        S_attribute = 168,                       // attribute
        S_169_attribute_argument_clause = 169,   // attribute-argument-clause
        S_170_attribute_argument_clause_opt = 170, // attribute-argument-clause-opt
        S_171_attribute_declaration = 171,       // attribute-declaration
        S_172_attribute_list = 172,              // attribute-list
        S_173_attribute_namespace = 173,         // attribute-namespace
        S_174_attribute_opt = 174,               // attribute-opt
        S_175_attribute_scoped_token = 175,      // attribute-scoped-token
        S_176_attribute_specifier = 176,         // attribute-specifier
        S_177_attribute_specifier_seq = 177,     // attribute-specifier-seq
        S_178_attribute_specifier_seq_opt = 178, // attribute-specifier-seq-opt
        S_179_attribute_token = 179,             // attribute-token
        S_180_attribute_using_prefix = 180,      // attribute-using-prefix
        S_181_attribute_using_prefix_opt = 181,  // attribute-using-prefix-opt
        S_182_await_expression = 182,            // await-expression
        S_183_balanced_token = 183,              // balanced-token
        S_184_balanced_token_seq = 184,          // balanced-token-seq
        S_185_balanced_token_seq_opt = 185,      // balanced-token-seq-opt
        S_186_base_clause = 186,                 // base-clause
        S_187_base_clause_opt = 187,             // base-clause-opt
        S_188_base_specifier = 188,              // base-specifier
        S_189_base_specifier_list = 189,         // base-specifier-list
        S_190_block_declaration = 190,           // block-declaration
        S_191_brace_or_equal_initializer = 191,  // brace-or-equal-initializer
        S_192_brace_or_equal_initializer_opt = 192, // brace-or-equal-initializer-opt
        S_193_braced_init_list = 193,            // braced-init-list
        S_capture = 194,                         // capture
        S_195_capture_default = 195,             // capture-default
        S_196_capture_list = 196,                // capture-list
        S_197_cast_expression = 197,             // cast-expression
        S_198_class_head = 198,                  // class-head
        S_199_class_head_name = 199,             // class-head-name
        S_200_class_key = 200,                   // class-key
        S_201_class_name = 201,                  // class-name
        S_202_class_or_decltype = 202,           // class-or-decltype
        S_203_class_specifier = 203,             // class-specifier
        S_204_class_virt_specifier = 204,        // class-virt-specifier
        S_205_class_virt_specifier_opt = 205,    // class-virt-specifier-opt
        S_206_compare_expression = 206,          // compare-expression
        S_207_compound_requirement = 207,        // compound-requirement
        S_208_compound_statement = 208,          // compound-statement
        S_209_concept_definition = 209,          // concept-definition
        S_210_concept_name = 210,                // concept-name
        S_condition = 211,                       // condition
        S_212_condition_opt = 212,               // condition-opt
        S_213_conditional_expression = 213,      // conditional-expression
        S_214_constant_expression = 214,         // constant-expression
        S_215_constant_expression_opt = 215,     // constant-expression-opt
        S_216_constraint_expression = 216,       // constraint-expression
        S_217_constraint_logical_and_expression = 217, // constraint-logical-and-expression
        S_218_constraint_logical_or_expression = 218, // constraint-logical-or-expression
        S_219_conversion_declarator = 219,       // conversion-declarator
        S_220_conversion_declarator_opt = 220,   // conversion-declarator-opt
        S_221_conversion_function_id = 221,      // conversion-function-id
        S_222_conversion_type_id = 222,          // conversion-type-id
        S_223_coroutine_return_statement = 223,  // coroutine-return-statement
        S_224_ctor_initializer = 224,            // ctor-initializer
        S_225_ctor_initializer_opt = 225,        // ctor-initializer-opt
        S_226_cv_qualifier = 226,                // cv-qualifier
        S_227_cv_qualifier_seq = 227,            // cv-qualifier-seq
        S_228_cv_qualifier_seq_opt = 228,        // cv-qualifier-seq-opt
        S_229_decl_specifier = 229,              // decl-specifier
        S_230_decl_specifier_seq = 230,          // decl-specifier-seq
        S_231_decl_specifier_seq_opt = 231,      // decl-specifier-seq-opt
        S_declaration = 232,                     // declaration
        S_233_declaration_seq = 233,             // declaration-seq
        S_234_declaration_seq_opt = 234,         // declaration-seq-opt
        S_235_declaration_statement = 235,       // declaration-statement
        S_declarator = 236,                      // declarator
        S_237_declarator_id = 237,               // declarator-id
        S_238_decltype_specifier = 238,          // decltype-specifier
        S_239_deduction_guide = 239,             // deduction-guide
        S_240_defining_type_id = 240,            // defining-type-id
        S_241_defining_type_specifier = 241,     // defining-type-specifier
        S_242_defining_type_specifier_seq = 242, // defining-type-specifier-seq
        S_243_delete_expression = 243,           // delete-expression
        S_244_designated_initializer_clause = 244, // designated-initializer-clause
        S_245_designated_initializer_list = 245, // designated-initializer-list
        S_designator = 246,                      // designator
        S_247_elaborated_enum_specifier = 247,   // elaborated-enum-specifier
        S_248_elaborated_type_specifier = 248,   // elaborated-type-specifier
        S_249_empty_declaration = 249,           // empty-declaration
        S_250_enclosing_namespace_specifier = 250, // enclosing-namespace-specifier
        S_251_enum_base = 251,                   // enum-base
        S_252_enum_base_opt = 252,               // enum-base-opt
        S_253_enum_head = 253,                   // enum-head
        S_254_enum_head_name = 254,              // enum-head-name
        S_255_enum_head_name_opt = 255,          // enum-head-name-opt
        S_256_enum_key = 256,                    // enum-key
        S_257_enum_name = 257,                   // enum-name
        S_258_enum_specifier = 258,              // enum-specifier
        S_enumerator = 259,                      // enumerator
        S_260_enumerator_definition = 260,       // enumerator-definition
        S_261_enumerator_list = 261,             // enumerator-list
        S_262_enumerator_list_opt = 262,         // enumerator-list-opt
        S_263_equality_expression = 263,         // equality-expression
        S_264_exception_declaration = 264,       // exception-declaration
        S_265_exclusive_or_expression = 265,     // exclusive-or-expression
        S_266_explicit_instantiation = 266,      // explicit-instantiation
        S_267_explicit_specialization = 267,     // explicit-specialization
        S_268_explicit_specifier = 268,          // explicit-specifier
        S_269_explicit_specifier_opt = 269,      // explicit-specifier-opt
        S_270_export_declaration = 270,          // export-declaration
        S_271_expr_or_braced_init_list = 271,    // expr-or-braced-init-list
        S_272_expr_or_braced_init_list_opt = 272, // expr-or-braced-init-list-opt
        S_expression = 273,                      // expression
        S_274_expression_list = 274,             // expression-list
        S_275_expression_list_opt = 275,         // expression-list-opt
        S_276_expression_opt = 276,              // expression-opt
        S_277_expression_statement = 277,        // expression-statement
        S_278_fold_expression = 278,             // fold-expression
        S_279_fold_operator = 279,               // fold-operator
        S_280_for_range_declaration = 280,       // for-range-declaration
        S_281_for_range_initializer = 281,       // for-range-initializer
        S_282_function_body = 282,               // function-body
        S_283_function_definition = 283,         // function-definition
        S_284_function_specifier = 284,          // function-specifier
        S_285_function_try_block = 285,          // function-try-block
        S_286_global_module_fragment = 286,      // global-module-fragment
        S_287_global_module_fragment_opt = 287,  // global-module-fragment-opt
        S_handler = 288,                         // handler
        S_289_handler_seq = 289,                 // handler-seq
        S_290_handler_seq_opt = 290,             // handler-seq-opt
        S_291_header_name = 291,                 // header-name
        S_292_id_expression = 292,               // id-expression
        S_293_identifier_list = 293,             // identifier-list
        S_294_inclusive_or_expression = 294,     // inclusive-or-expression
        S_295_init_capture = 295,                // init-capture
        S_296_init_declarator = 296,             // init-declarator
        S_297_init_declarator_list = 297,        // init-declarator-list
        S_298_init_declarator_list_opt = 298,    // init-declarator-list-opt
        S_299_init_statement = 299,              // init-statement
        S_300_init_statement_opt = 300,          // init-statement-opt
        S_initializer = 301,                     // initializer
        S_302_initializer_clause = 302,          // initializer-clause
        S_303_initializer_list = 303,            // initializer-list
        S_304_initializer_opt = 304,             // initializer-opt
        S_305_iteration_statement = 305,         // iteration-statement
        S_306_jump_statement = 306,              // jump-statement
        S_307_labeled_statement = 307,           // labeled-statement
        S_308_lambda_capture = 308,              // lambda-capture
        S_309_lambda_capture_opt = 309,          // lambda-capture-opt
        S_310_lambda_declarator = 310,           // lambda-declarator
        S_311_lambda_expression = 311,           // lambda-expression
        S_312_lambda_introducer = 312,           // lambda-introducer
        S_313_lambda_specifiers = 313,           // lambda-specifiers
        S_314_linkage_specification = 314,       // linkage-specification
        S_315_literal_operator_id = 315,         // literal-operator-id
        S_316_logical_and_expression = 316,      // logical-and-expression
        S_317_logical_or_expression = 317,       // logical-or-expression
        S_318_mem_initializer = 318,             // mem-initializer
        S_319_mem_initializer_id = 319,          // mem-initializer-id
        S_320_mem_initializer_list = 320,        // mem-initializer-list
        S_321_member_declaration = 321,          // member-declaration
        S_322_member_declarator = 322,           // member-declarator
        S_323_member_declarator_list = 323,      // member-declarator-list
        S_324_member_declarator_list_opt = 324,  // member-declarator-list-opt
        S_325_member_specification = 325,        // member-specification
        S_326_member_specification_opt = 326,    // member-specification-opt
        S_327_module_declaration = 327,          // module-declaration
        S_328_module_import_declaration = 328,   // module-import-declaration
        S_329_module_name = 329,                 // module-name
        S_330_module_name_qualifier = 330,       // module-name-qualifier
        S_331_module_name_qualifier_opt = 331,   // module-name-qualifier-opt
        S_332_module_partition = 332,            // module-partition
        S_333_module_partition_opt = 333,        // module-partition-opt
        S_334_multiplicative_expression = 334,   // multiplicative-expression
        S_335_named_namespace_definition = 335,  // named-namespace-definition
        S_336_namespace_alias = 336,             // namespace-alias
        S_337_namespace_alias_definition = 337,  // namespace-alias-definition
        S_338_namespace_body = 338,              // namespace-body
        S_339_namespace_definition = 339,        // namespace-definition
        S_340_namespace_name = 340,              // namespace-name
        S_341_nested_name_specifier = 341,       // nested-name-specifier
        S_342_nested_name_specifier_opt = 342,   // nested-name-specifier-opt
        S_343_nested_namespace_definition = 343, // nested-namespace-definition
        S_344_nested_requirement = 344,          // nested-requirement
        S_345_new_declarator = 345,              // new-declarator
        S_346_new_declarator_opt = 346,          // new-declarator-opt
        S_347_new_expression = 347,              // new-expression
        S_348_new_initializer = 348,             // new-initializer
        S_349_new_initializer_opt = 349,         // new-initializer-opt
        S_350_new_placement = 350,               // new-placement
        S_351_new_placement_opt = 351,           // new-placement-opt
        S_352_new_type_id = 352,                 // new-type-id
        S_353_nodeclspec_function_declaration = 353, // nodeclspec-function-declaration
        S_354_noexcept_expression = 354,         // noexcept-expression
        S_355_noexcept_specifier = 355,          // noexcept-specifier
        S_356_noexcept_specifier_opt = 356,      // noexcept-specifier-opt
        S_357_noptr_abstract_declarator = 357,   // noptr-abstract-declarator
        S_358_noptr_abstract_declarator_opt = 358, // noptr-abstract-declarator-opt
        S_359_noptr_abstract_pack_declarator = 359, // noptr-abstract-pack-declarator
        S_360_noptr_declarator = 360,            // noptr-declarator
        S_361_noptr_new_declarator = 361,        // noptr-new-declarator
        S_362_opaque_enum_declaration = 362,     // opaque-enum-declaration
        S_363_operator_function_id = 363,        // operator-function-id
        S_364_overloadable_operator = 364,       // overloadable-operator
        S_365_parameter_declaration = 365,       // parameter-declaration
        S_366_parameter_declaration_clause = 366, // parameter-declaration-clause
        S_367_parameter_declaration_list = 367,  // parameter-declaration-list
        S_368_parameter_declaration_list_opt = 368, // parameter-declaration-list-opt
        S_369_parameters_and_qualifiers = 369,   // parameters-and-qualifiers
        S_370_placeholder_type_specifier = 370,  // placeholder-type-specifier
        S_371_pm_expression = 371,               // pm-expression
        S_372_postfix_expression = 372,          // postfix-expression
        S_373_primary_expression = 373,          // primary-expression
        S_374_private_module_fragment = 374,     // private-module-fragment
        S_375_private_module_fragment_opt = 375, // private-module-fragment-opt
        S_376_ptr_abstract_declarator = 376,     // ptr-abstract-declarator
        S_377_ptr_abstract_declarator_opt = 377, // ptr-abstract-declarator-opt
        S_378_ptr_declarator = 378,              // ptr-declarator
        S_379_ptr_operator = 379,                // ptr-operator
        S_380_pure_specifier = 380,              // pure-specifier
        S_381_pure_specifier_opt = 381,          // pure-specifier-opt
        S_382_qualified_id = 382,                // qualified-id
        S_383_qualified_namespace_specifier = 383, // qualified-namespace-specifier
        S_384_ref_qualifier = 384,               // ref-qualifier
        S_385_ref_qualifier_opt = 385,           // ref-qualifier-opt
        S_386_relational_expression = 386,       // relational-expression
        S_requirement = 387,                     // requirement
        S_388_requirement_body = 388,            // requirement-body
        S_389_requirement_parameter_list = 389,  // requirement-parameter-list
        S_390_requirement_parameter_list_opt = 390, // requirement-parameter-list-opt
        S_391_requirement_seq = 391,             // requirement-seq
        S_392_requires_clause = 392,             // requires-clause
        S_393_requires_clause_opt = 393,         // requires-clause-opt
        S_394_requires_expression = 394,         // requires-expression
        S_395_return_type_requirement = 395,     // return-type-requirement
        S_396_return_type_requirement_opt = 396, // return-type-requirement-opt
        S_397_selection_statement = 397,         // selection-statement
        S_398_shift_expression = 398,            // shift-expression
        S_399_simple_capture = 399,              // simple-capture
        S_400_simple_declaration = 400,          // simple-declaration
        S_401_simple_requirement = 401,          // simple-requirement
        S_402_simple_template_id = 402,          // simple-template-id
        S_403_simple_type_specifier = 403,       // simple-type-specifier
        S_statement = 404,                       // statement
        S_405_statement_seq = 405,               // statement-seq
        S_406_statement_seq_opt = 406,           // statement-seq-opt
        S_407_static_assert_declaration = 407,   // static_assert-declaration
        S_408_storage_class_specifier = 408,     // storage-class-specifier
        S_409_string_literal = 409,              // string-literal
        S_410_template_argument = 410,           // template-argument
        S_411_template_argument_list = 411,      // template-argument-list
        S_412_template_argument_list_opt = 412,  // template-argument-list-opt
        S_413_template_declaration = 413,        // template-declaration
        S_414_template_head = 414,               // template-head
        S_415_template_id = 415,                 // template-id
        S_416_template_name = 416,               // template-name
        S_417_template_parameter = 417,          // template-parameter
        S_418_template_parameter_list = 418,     // template-parameter-list
        S_419_throw_expression = 419,            // throw-expression
        S_420_trailing_return_type = 420,        // trailing-return-type
        S_421_trailing_return_type_opt = 421,    // trailing-return-type-opt
        S_422_translation_unit = 422,            // translation-unit
        S_423_try_block = 423,                   // try-block
        S_424_type_constraint = 424,             // type-constraint
        S_425_type_constraint_opt = 425,         // type-constraint-opt
        S_426_type_id = 426,                     // type-id
        S_427_type_name = 427,                   // type-name
        S_428_type_parameter = 428,              // type-parameter
        S_429_type_parameter_key = 429,          // type-parameter-key
        S_430_type_requirement = 430,            // type-requirement
        S_431_type_specifier = 431,              // type-specifier
        S_432_type_specifier_seq = 432,          // type-specifier-seq
        S_433_typedef_name = 433,                // typedef-name
        S_434_typename_specifier = 434,          // typename-specifier
        S_435_ud_suffix = 435,                   // ud-suffix
        S_436_unary_expression = 436,            // unary-expression
        S_437_unary_operator = 437,              // unary-operator
        S_438_unnamed_namespace_definition = 438, // unnamed-namespace-definition
        S_439_unqualified_id = 439,              // unqualified-id
        S_440_user_defined_string_literal = 440, // user-defined-string-literal
        S_441_using_declaration = 441,           // using-declaration
        S_442_using_declarator = 442,            // using-declarator
        S_443_using_declarator_list = 443,       // using-declarator-list
        S_444_using_directive = 444,             // using-directive
        S_445_using_enum_declaration = 445,      // using-enum-declaration
        S_446_virt_specifier = 446,              // virt-specifier
        S_447_virt_specifier_seq = 447,          // virt-specifier-seq
        S_448_virt_specifier_seq_opt = 448,      // virt-specifier-seq-opt
        S_449_yield_expression = 449             // yield-expression
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol kind
    /// via kind ().
    ///
    /// Provide access to semantic value.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol () YY_NOEXCEPT
        : value ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that)
        : Base (std::move (that))
        , value ()
      {
        switch (this->kind ())
    {
      default:
        break;
    }

      }
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructors for typed symbols.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t)
        : Base (t)
      {}
#else
      basic_symbol (typename Base::kind_type t)
        : Base (t)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }


      /// Copy assignment.
      basic_symbol& operator= (const basic_symbol& that)
      {
        Base::operator= (that);
        switch (this->kind ())
    {
      default:
        break;
    }
;
        return *this;
      }

      /// Move assignment.
      basic_symbol& operator= (basic_symbol&& that)
      {
        Base::operator= (std::move (that));
        switch (this->kind ())
    {
      default:
        break;
    }
;
        return *this;
      }


      /// Destroy contents, and record that is empty.
      void clear () YY_NOEXCEPT
      {
        // User destructor.
        symbol_kind_type yykind = this->kind ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yykind)
        {
       default:
          break;
        }

        // Value type destructor.
switch (yykind)
    {
      default:
        break;
    }

        Base::clear ();
      }

      /// The user-facing name of this symbol.
      const char *name () const YY_NOEXCEPT
      {
        return parser::symbol_name (this->kind ());
      }

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      value_type value;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_kind
    {
      /// The symbol kind as needed by the constructor.
      typedef token_kind_type kind_type;

      /// Default constructor.
      by_kind () YY_NOEXCEPT;

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_kind (by_kind&& that) YY_NOEXCEPT;
#endif

      /// Copy constructor.
      by_kind (const by_kind& that) YY_NOEXCEPT;

      /// Constructor from (external) token numbers.
      by_kind (kind_type t) YY_NOEXCEPT;


      /// Copy assignment.
      by_kind& operator= (const by_kind& that);

      /// Move assignment.
      by_kind& operator= (by_kind&& that);


      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_kind& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// The symbol kind.
      /// \a S_YYEMPTY when empty.
      symbol_kind_type kind_;
    };

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_kind>
    {
      /// Superclass.
      typedef basic_symbol<by_kind> super_type;

      /// Empty symbol.
      symbol_type () YY_NOEXCEPT {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok)
        : super_type (token_kind_type (tok))
#else
      symbol_type (int tok)
        : super_type (token_kind_type (tok))
#endif
      {
#if !defined _MSC_VER || defined __clang__
        YY_ASSERT (tok == token::YYEOF
                   || (token::YYerror <= tok && tok <= token::CO_YIELD)
                   || tok == 48);
#endif
      }
    };


    // FIXME: should be private eventually.
    class glr_stack;
    class glr_state;

    /// Build a parser object.
    parser ();
    ~parser ();

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    using debug_level_type = int;
    /// The current debugging level.
    debug_level_type debug_level () const;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param msg    a description of the syntax error.
    void error (const std::string& msg);

    /// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static const char *symbol_name (symbol_kind_type yysymbol);

    // Implementation of make_symbol for each token kind.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYEOF ()
      {
        return symbol_type (token::YYEOF);
      }
#else
      static
      symbol_type
      make_YYEOF ()
      {
        return symbol_type (token::YYEOF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYerror ()
      {
        return symbol_type (token::YYerror);
      }
#else
      static
      symbol_type
      make_YYerror ()
      {
        return symbol_type (token::YYerror);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYUNDEF ()
      {
        return symbol_type (token::YYUNDEF);
      }
#else
      static
      symbol_type
      make_YYUNDEF ()
      {
        return symbol_type (token::YYUNDEF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMMA ()
      {
        return symbol_type (token::COMMA);
      }
#else
      static
      symbol_type
      make_COMMA ()
      {
        return symbol_type (token::COMMA);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONSTEXPR ()
      {
        return symbol_type (token::CONSTEXPR);
      }
#else
      static
      symbol_type
      make_CONSTEXPR ()
      {
        return symbol_type (token::CONSTEXPR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ELLIPSIS ()
      {
        return symbol_type (token::ELLIPSIS);
      }
#else
      static
      symbol_type
      make_ELLIPSIS ()
      {
        return symbol_type (token::ELLIPSIS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EXPORT ()
      {
        return symbol_type (token::EXPORT);
      }
#else
      static
      symbol_type
      make_EXPORT ()
      {
        return symbol_type (token::EXPORT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EXTERN ()
      {
        return symbol_type (token::EXTERN);
      }
#else
      static
      symbol_type
      make_EXTERN ()
      {
        return symbol_type (token::EXTERN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IDENTIFIER ()
      {
        return symbol_type (token::IDENTIFIER);
      }
#else
      static
      symbol_type
      make_IDENTIFIER ()
      {
        return symbol_type (token::IDENTIFIER);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INLINE ()
      {
        return symbol_type (token::INLINE);
      }
#else
      static
      symbol_type
      make_INLINE ()
      {
        return symbol_type (token::INLINE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOEXCEPT ()
      {
        return symbol_type (token::NOEXCEPT);
      }
#else
      static
      symbol_type
      make_NOEXCEPT ()
      {
        return symbol_type (token::NOEXCEPT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOT ()
      {
        return symbol_type (token::NOT);
      }
#else
      static
      symbol_type
      make_NOT ()
      {
        return symbol_type (token::NOT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SCOPE ()
      {
        return symbol_type (token::SCOPE);
      }
#else
      static
      symbol_type
      make_SCOPE ()
      {
        return symbol_type (token::SCOPE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TEMPLATE ()
      {
        return symbol_type (token::TEMPLATE);
      }
#else
      static
      symbol_type
      make_TEMPLATE ()
      {
        return symbol_type (token::TEMPLATE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_THIS ()
      {
        return symbol_type (token::THIS);
      }
#else
      static
      symbol_type
      make_THIS ()
      {
        return symbol_type (token::THIS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TYPENAME ()
      {
        return symbol_type (token::TYPENAME);
      }
#else
      static
      symbol_type
      make_TYPENAME ()
      {
        return symbol_type (token::TYPENAME);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VIRTUAL ()
      {
        return symbol_type (token::VIRTUAL);
      }
#else
      static
      symbol_type
      make_VIRTUAL ()
      {
        return symbol_type (token::VIRTUAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PRIVATE ()
      {
        return symbol_type (token::PRIVATE);
      }
#else
      static
      symbol_type
      make_PRIVATE ()
      {
        return symbol_type (token::PRIVATE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PROTECTED ()
      {
        return symbol_type (token::PROTECTED);
      }
#else
      static
      symbol_type
      make_PROTECTED ()
      {
        return symbol_type (token::PROTECTED);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PUBLIC ()
      {
        return symbol_type (token::PUBLIC);
      }
#else
      static
      symbol_type
      make_PUBLIC ()
      {
        return symbol_type (token::PUBLIC);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PLUS ()
      {
        return symbol_type (token::PLUS);
      }
#else
      static
      symbol_type
      make_PLUS ()
      {
        return symbol_type (token::PLUS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MINUS ()
      {
        return symbol_type (token::MINUS);
      }
#else
      static
      symbol_type
      make_MINUS ()
      {
        return symbol_type (token::MINUS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_USING ()
      {
        return symbol_type (token::USING);
      }
#else
      static
      symbol_type
      make_USING ()
      {
        return symbol_type (token::USING);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EQ ()
      {
        return symbol_type (token::EQ);
      }
#else
      static
      symbol_type
      make_EQ ()
      {
        return symbol_type (token::EQ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SEMICOLON ()
      {
        return symbol_type (token::SEMICOLON);
      }
#else
      static
      symbol_type
      make_SEMICOLON ()
      {
        return symbol_type (token::SEMICOLON);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ALIGNAS ()
      {
        return symbol_type (token::ALIGNAS);
      }
#else
      static
      symbol_type
      make_ALIGNAS ()
      {
        return symbol_type (token::ALIGNAS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OPEN_PAREN ()
      {
        return symbol_type (token::OPEN_PAREN);
      }
#else
      static
      symbol_type
      make_OPEN_PAREN ()
      {
        return symbol_type (token::OPEN_PAREN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CLOSE_PAREN ()
      {
        return symbol_type (token::CLOSE_PAREN);
      }
#else
      static
      symbol_type
      make_CLOSE_PAREN ()
      {
        return symbol_type (token::CLOSE_PAREN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AND ()
      {
        return symbol_type (token::AND);
      }
#else
      static
      symbol_type
      make_AND ()
      {
        return symbol_type (token::AND);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASM ()
      {
        return symbol_type (token::ASM);
      }
#else
      static
      symbol_type
      make_ASM ()
      {
        return symbol_type (token::ASM);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MULT_EQ ()
      {
        return symbol_type (token::MULT_EQ);
      }
#else
      static
      symbol_type
      make_MULT_EQ ()
      {
        return symbol_type (token::MULT_EQ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DIV_EQ ()
      {
        return symbol_type (token::DIV_EQ);
      }
#else
      static
      symbol_type
      make_DIV_EQ ()
      {
        return symbol_type (token::DIV_EQ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MOD_EQ ()
      {
        return symbol_type (token::MOD_EQ);
      }
#else
      static
      symbol_type
      make_MOD_EQ ()
      {
        return symbol_type (token::MOD_EQ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PLUS_EQ ()
      {
        return symbol_type (token::PLUS_EQ);
      }
#else
      static
      symbol_type
      make_PLUS_EQ ()
      {
        return symbol_type (token::PLUS_EQ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MINUS_EQ ()
      {
        return symbol_type (token::MINUS_EQ);
      }
#else
      static
      symbol_type
      make_MINUS_EQ ()
      {
        return symbol_type (token::MINUS_EQ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RSHIFT_EQ ()
      {
        return symbol_type (token::RSHIFT_EQ);
      }
#else
      static
      symbol_type
      make_RSHIFT_EQ ()
      {
        return symbol_type (token::RSHIFT_EQ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LSHIFT_EQ ()
      {
        return symbol_type (token::LSHIFT_EQ);
      }
#else
      static
      symbol_type
      make_LSHIFT_EQ ()
      {
        return symbol_type (token::LSHIFT_EQ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AND_EQ ()
      {
        return symbol_type (token::AND_EQ);
      }
#else
      static
      symbol_type
      make_AND_EQ ()
      {
        return symbol_type (token::AND_EQ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_XOR_EQ ()
      {
        return symbol_type (token::XOR_EQ);
      }
#else
      static
      symbol_type
      make_XOR_EQ ()
      {
        return symbol_type (token::XOR_EQ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OR_EQ ()
      {
        return symbol_type (token::OR_EQ);
      }
#else
      static
      symbol_type
      make_OR_EQ ()
      {
        return symbol_type (token::OR_EQ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OPEN_SQUARE ()
      {
        return symbol_type (token::OPEN_SQUARE);
      }
#else
      static
      symbol_type
      make_OPEN_SQUARE ()
      {
        return symbol_type (token::OPEN_SQUARE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CLOSE_SQUARE ()
      {
        return symbol_type (token::CLOSE_SQUARE);
      }
#else
      static
      symbol_type
      make_CLOSE_SQUARE ()
      {
        return symbol_type (token::CLOSE_SQUARE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COLON ()
      {
        return symbol_type (token::COLON);
      }
#else
      static
      symbol_type
      make_COLON ()
      {
        return symbol_type (token::COLON);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CO_AWAIT ()
      {
        return symbol_type (token::CO_AWAIT);
      }
#else
      static
      symbol_type
      make_CO_AWAIT ()
      {
        return symbol_type (token::CO_AWAIT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OPEN_BRACE ()
      {
        return symbol_type (token::OPEN_BRACE);
      }
#else
      static
      symbol_type
      make_OPEN_BRACE ()
      {
        return symbol_type (token::OPEN_BRACE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CLOSE_BRACE ()
      {
        return symbol_type (token::CLOSE_BRACE);
      }
#else
      static
      symbol_type
      make_CLOSE_BRACE ()
      {
        return symbol_type (token::CLOSE_BRACE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BALANCED_TOKEN ()
      {
        return symbol_type (token::BALANCED_TOKEN);
      }
#else
      static
      symbol_type
      make_BALANCED_TOKEN ()
      {
        return symbol_type (token::BALANCED_TOKEN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CLASS ()
      {
        return symbol_type (token::CLASS);
      }
#else
      static
      symbol_type
      make_CLASS ()
      {
        return symbol_type (token::CLASS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STRUCT ()
      {
        return symbol_type (token::STRUCT);
      }
#else
      static
      symbol_type
      make_STRUCT ()
      {
        return symbol_type (token::STRUCT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_UNION ()
      {
        return symbol_type (token::UNION);
      }
#else
      static
      symbol_type
      make_UNION ()
      {
        return symbol_type (token::UNION);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FINAL ()
      {
        return symbol_type (token::FINAL);
      }
#else
      static
      symbol_type
      make_FINAL ()
      {
        return symbol_type (token::FINAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SPACESHIP ()
      {
        return symbol_type (token::SPACESHIP);
      }
#else
      static
      symbol_type
      make_SPACESHIP ()
      {
        return symbol_type (token::SPACESHIP);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONCEPT ()
      {
        return symbol_type (token::CONCEPT);
      }
#else
      static
      symbol_type
      make_CONCEPT ()
      {
        return symbol_type (token::CONCEPT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_QUERY ()
      {
        return symbol_type (token::QUERY);
      }
#else
      static
      symbol_type
      make_QUERY ()
      {
        return symbol_type (token::QUERY);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AND_AND ()
      {
        return symbol_type (token::AND_AND);
      }
#else
      static
      symbol_type
      make_AND_AND ()
      {
        return symbol_type (token::AND_AND);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OR_OR ()
      {
        return symbol_type (token::OR_OR);
      }
#else
      static
      symbol_type
      make_OR_OR ()
      {
        return symbol_type (token::OR_OR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OPERATOR ()
      {
        return symbol_type (token::OPERATOR);
      }
#else
      static
      symbol_type
      make_OPERATOR ()
      {
        return symbol_type (token::OPERATOR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CO_RETURN ()
      {
        return symbol_type (token::CO_RETURN);
      }
#else
      static
      symbol_type
      make_CO_RETURN ()
      {
        return symbol_type (token::CO_RETURN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONST ()
      {
        return symbol_type (token::CONST);
      }
#else
      static
      symbol_type
      make_CONST ()
      {
        return symbol_type (token::CONST);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VOLATILE ()
      {
        return symbol_type (token::VOLATILE);
      }
#else
      static
      symbol_type
      make_VOLATILE ()
      {
        return symbol_type (token::VOLATILE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FRIEND ()
      {
        return symbol_type (token::FRIEND);
      }
#else
      static
      symbol_type
      make_FRIEND ()
      {
        return symbol_type (token::FRIEND);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TYPEDEF ()
      {
        return symbol_type (token::TYPEDEF);
      }
#else
      static
      symbol_type
      make_TYPEDEF ()
      {
        return symbol_type (token::TYPEDEF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONSTEVAL ()
      {
        return symbol_type (token::CONSTEVAL);
      }
#else
      static
      symbol_type
      make_CONSTEVAL ()
      {
        return symbol_type (token::CONSTEVAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONSTINIT ()
      {
        return symbol_type (token::CONSTINIT);
      }
#else
      static
      symbol_type
      make_CONSTINIT ()
      {
        return symbol_type (token::CONSTINIT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DECLTYPE ()
      {
        return symbol_type (token::DECLTYPE);
      }
#else
      static
      symbol_type
      make_DECLTYPE ()
      {
        return symbol_type (token::DECLTYPE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DEREF ()
      {
        return symbol_type (token::DEREF);
      }
#else
      static
      symbol_type
      make_DEREF ()
      {
        return symbol_type (token::DEREF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DELETE ()
      {
        return symbol_type (token::DELETE);
      }
#else
      static
      symbol_type
      make_DELETE ()
      {
        return symbol_type (token::DELETE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT ()
      {
        return symbol_type (token::DOT);
      }
#else
      static
      symbol_type
      make_DOT ()
      {
        return symbol_type (token::DOT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ENUM ()
      {
        return symbol_type (token::ENUM);
      }
#else
      static
      symbol_type
      make_ENUM ()
      {
        return symbol_type (token::ENUM);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EQ_EQ ()
      {
        return symbol_type (token::EQ_EQ);
      }
#else
      static
      symbol_type
      make_EQ_EQ ()
      {
        return symbol_type (token::EQ_EQ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOT_EQ ()
      {
        return symbol_type (token::NOT_EQ);
      }
#else
      static
      symbol_type
      make_NOT_EQ ()
      {
        return symbol_type (token::NOT_EQ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_XOR ()
      {
        return symbol_type (token::XOR);
      }
#else
      static
      symbol_type
      make_XOR ()
      {
        return symbol_type (token::XOR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LESS ()
      {
        return symbol_type (token::LESS);
      }
#else
      static
      symbol_type
      make_LESS ()
      {
        return symbol_type (token::LESS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GREATER ()
      {
        return symbol_type (token::GREATER);
      }
#else
      static
      symbol_type
      make_GREATER ()
      {
        return symbol_type (token::GREATER);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EXPLICIT ()
      {
        return symbol_type (token::EXPLICIT);
      }
#else
      static
      symbol_type
      make_EXPLICIT ()
      {
        return symbol_type (token::EXPLICIT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MULT ()
      {
        return symbol_type (token::MULT);
      }
#else
      static
      symbol_type
      make_MULT ()
      {
        return symbol_type (token::MULT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DIV ()
      {
        return symbol_type (token::DIV);
      }
#else
      static
      symbol_type
      make_DIV ()
      {
        return symbol_type (token::DIV);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MOD ()
      {
        return symbol_type (token::MOD);
      }
#else
      static
      symbol_type
      make_MOD ()
      {
        return symbol_type (token::MOD);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OR ()
      {
        return symbol_type (token::OR);
      }
#else
      static
      symbol_type
      make_OR ()
      {
        return symbol_type (token::OR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LSHIFT ()
      {
        return symbol_type (token::LSHIFT);
      }
#else
      static
      symbol_type
      make_LSHIFT ()
      {
        return symbol_type (token::LSHIFT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RSHIFT ()
      {
        return symbol_type (token::RSHIFT);
      }
#else
      static
      symbol_type
      make_RSHIFT ()
      {
        return symbol_type (token::RSHIFT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LESS_EQ ()
      {
        return symbol_type (token::LESS_EQ);
      }
#else
      static
      symbol_type
      make_LESS_EQ ()
      {
        return symbol_type (token::LESS_EQ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GREATER_EQ ()
      {
        return symbol_type (token::GREATER_EQ);
      }
#else
      static
      symbol_type
      make_GREATER_EQ ()
      {
        return symbol_type (token::GREATER_EQ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT_STAR ()
      {
        return symbol_type (token::DOT_STAR);
      }
#else
      static
      symbol_type
      make_DOT_STAR ()
      {
        return symbol_type (token::DOT_STAR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DEREF_STAR ()
      {
        return symbol_type (token::DEREF_STAR);
      }
#else
      static
      symbol_type
      make_DEREF_STAR ()
      {
        return symbol_type (token::DEREF_STAR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DEFAULT ()
      {
        return symbol_type (token::DEFAULT);
      }
#else
      static
      symbol_type
      make_DEFAULT ()
      {
        return symbol_type (token::DEFAULT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TRY ()
      {
        return symbol_type (token::TRY);
      }
#else
      static
      symbol_type
      make_TRY ()
      {
        return symbol_type (token::TRY);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MODULE ()
      {
        return symbol_type (token::MODULE);
      }
#else
      static
      symbol_type
      make_MODULE ()
      {
        return symbol_type (token::MODULE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CATCH ()
      {
        return symbol_type (token::CATCH);
      }
#else
      static
      symbol_type
      make_CATCH ()
      {
        return symbol_type (token::CATCH);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_HEADER_NAME ()
      {
        return symbol_type (token::HEADER_NAME);
      }
#else
      static
      symbol_type
      make_HEADER_NAME ()
      {
        return symbol_type (token::HEADER_NAME);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WHILE ()
      {
        return symbol_type (token::WHILE);
      }
#else
      static
      symbol_type
      make_WHILE ()
      {
        return symbol_type (token::WHILE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DO ()
      {
        return symbol_type (token::DO);
      }
#else
      static
      symbol_type
      make_DO ()
      {
        return symbol_type (token::DO);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FOR ()
      {
        return symbol_type (token::FOR);
      }
#else
      static
      symbol_type
      make_FOR ()
      {
        return symbol_type (token::FOR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BREAK ()
      {
        return symbol_type (token::BREAK);
      }
#else
      static
      symbol_type
      make_BREAK ()
      {
        return symbol_type (token::BREAK);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONTINUE ()
      {
        return symbol_type (token::CONTINUE);
      }
#else
      static
      symbol_type
      make_CONTINUE ()
      {
        return symbol_type (token::CONTINUE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RETURN ()
      {
        return symbol_type (token::RETURN);
      }
#else
      static
      symbol_type
      make_RETURN ()
      {
        return symbol_type (token::RETURN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GOTO ()
      {
        return symbol_type (token::GOTO);
      }
#else
      static
      symbol_type
      make_GOTO ()
      {
        return symbol_type (token::GOTO);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CASE ()
      {
        return symbol_type (token::CASE);
      }
#else
      static
      symbol_type
      make_CASE ()
      {
        return symbol_type (token::CASE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IMPORT ()
      {
        return symbol_type (token::IMPORT);
      }
#else
      static
      symbol_type
      make_IMPORT ()
      {
        return symbol_type (token::IMPORT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NAMESPACE ()
      {
        return symbol_type (token::NAMESPACE);
      }
#else
      static
      symbol_type
      make_NAMESPACE ()
      {
        return symbol_type (token::NAMESPACE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_REQUIRES ()
      {
        return symbol_type (token::REQUIRES);
      }
#else
      static
      symbol_type
      make_REQUIRES ()
      {
        return symbol_type (token::REQUIRES);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NEW ()
      {
        return symbol_type (token::NEW);
      }
#else
      static
      symbol_type
      make_NEW ()
      {
        return symbol_type (token::NEW);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMPL ()
      {
        return symbol_type (token::COMPL);
      }
#else
      static
      symbol_type
      make_COMPL ()
      {
        return symbol_type (token::COMPL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PLUS_PLUS ()
      {
        return symbol_type (token::PLUS_PLUS);
      }
#else
      static
      symbol_type
      make_PLUS_PLUS ()
      {
        return symbol_type (token::PLUS_PLUS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MINUS_MINUS ()
      {
        return symbol_type (token::MINUS_MINUS);
      }
#else
      static
      symbol_type
      make_MINUS_MINUS ()
      {
        return symbol_type (token::MINUS_MINUS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AUTO ()
      {
        return symbol_type (token::AUTO);
      }
#else
      static
      symbol_type
      make_AUTO ()
      {
        return symbol_type (token::AUTO);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DYNAMIC_CAST ()
      {
        return symbol_type (token::DYNAMIC_CAST);
      }
#else
      static
      symbol_type
      make_DYNAMIC_CAST ()
      {
        return symbol_type (token::DYNAMIC_CAST);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STATIC_CAST ()
      {
        return symbol_type (token::STATIC_CAST);
      }
#else
      static
      symbol_type
      make_STATIC_CAST ()
      {
        return symbol_type (token::STATIC_CAST);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_REINTERPRET_CAST ()
      {
        return symbol_type (token::REINTERPRET_CAST);
      }
#else
      static
      symbol_type
      make_REINTERPRET_CAST ()
      {
        return symbol_type (token::REINTERPRET_CAST);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONST_CAST ()
      {
        return symbol_type (token::CONST_CAST);
      }
#else
      static
      symbol_type
      make_CONST_CAST ()
      {
        return symbol_type (token::CONST_CAST);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TYPEID ()
      {
        return symbol_type (token::TYPEID);
      }
#else
      static
      symbol_type
      make_TYPEID ()
      {
        return symbol_type (token::TYPEID);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LITERAL ()
      {
        return symbol_type (token::LITERAL);
      }
#else
      static
      symbol_type
      make_LITERAL ()
      {
        return symbol_type (token::LITERAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IF ()
      {
        return symbol_type (token::IF);
      }
#else
      static
      symbol_type
      make_IF ()
      {
        return symbol_type (token::IF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ELSE ()
      {
        return symbol_type (token::ELSE);
      }
#else
      static
      symbol_type
      make_ELSE ()
      {
        return symbol_type (token::ELSE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SWITCH ()
      {
        return symbol_type (token::SWITCH);
      }
#else
      static
      symbol_type
      make_SWITCH ()
      {
        return symbol_type (token::SWITCH);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CHAR ()
      {
        return symbol_type (token::CHAR);
      }
#else
      static
      symbol_type
      make_CHAR ()
      {
        return symbol_type (token::CHAR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CHAR8_T ()
      {
        return symbol_type (token::CHAR8_T);
      }
#else
      static
      symbol_type
      make_CHAR8_T ()
      {
        return symbol_type (token::CHAR8_T);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CHAR16_T ()
      {
        return symbol_type (token::CHAR16_T);
      }
#else
      static
      symbol_type
      make_CHAR16_T ()
      {
        return symbol_type (token::CHAR16_T);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CHAR32_T ()
      {
        return symbol_type (token::CHAR32_T);
      }
#else
      static
      symbol_type
      make_CHAR32_T ()
      {
        return symbol_type (token::CHAR32_T);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WCHAR_T ()
      {
        return symbol_type (token::WCHAR_T);
      }
#else
      static
      symbol_type
      make_WCHAR_T ()
      {
        return symbol_type (token::WCHAR_T);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BOOL ()
      {
        return symbol_type (token::BOOL);
      }
#else
      static
      symbol_type
      make_BOOL ()
      {
        return symbol_type (token::BOOL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SHORT ()
      {
        return symbol_type (token::SHORT);
      }
#else
      static
      symbol_type
      make_SHORT ()
      {
        return symbol_type (token::SHORT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INT ()
      {
        return symbol_type (token::INT);
      }
#else
      static
      symbol_type
      make_INT ()
      {
        return symbol_type (token::INT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LONG ()
      {
        return symbol_type (token::LONG);
      }
#else
      static
      symbol_type
      make_LONG ()
      {
        return symbol_type (token::LONG);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SIGNED ()
      {
        return symbol_type (token::SIGNED);
      }
#else
      static
      symbol_type
      make_SIGNED ()
      {
        return symbol_type (token::SIGNED);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_UNSIGNED ()
      {
        return symbol_type (token::UNSIGNED);
      }
#else
      static
      symbol_type
      make_UNSIGNED ()
      {
        return symbol_type (token::UNSIGNED);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FLOAT ()
      {
        return symbol_type (token::FLOAT);
      }
#else
      static
      symbol_type
      make_FLOAT ()
      {
        return symbol_type (token::FLOAT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOUBLE ()
      {
        return symbol_type (token::DOUBLE);
      }
#else
      static
      symbol_type
      make_DOUBLE ()
      {
        return symbol_type (token::DOUBLE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VOID ()
      {
        return symbol_type (token::VOID);
      }
#else
      static
      symbol_type
      make_VOID ()
      {
        return symbol_type (token::VOID);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STATIC_ASSERT ()
      {
        return symbol_type (token::STATIC_ASSERT);
      }
#else
      static
      symbol_type
      make_STATIC_ASSERT ()
      {
        return symbol_type (token::STATIC_ASSERT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STATIC ()
      {
        return symbol_type (token::STATIC);
      }
#else
      static
      symbol_type
      make_STATIC ()
      {
        return symbol_type (token::STATIC);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_THREAD_LOCAL ()
      {
        return symbol_type (token::THREAD_LOCAL);
      }
#else
      static
      symbol_type
      make_THREAD_LOCAL ()
      {
        return symbol_type (token::THREAD_LOCAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MUTABLE ()
      {
        return symbol_type (token::MUTABLE);
      }
#else
      static
      symbol_type
      make_MUTABLE ()
      {
        return symbol_type (token::MUTABLE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STRING_LITERAL ()
      {
        return symbol_type (token::STRING_LITERAL);
      }
#else
      static
      symbol_type
      make_STRING_LITERAL ()
      {
        return symbol_type (token::STRING_LITERAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_THROW ()
      {
        return symbol_type (token::THROW);
      }
#else
      static
      symbol_type
      make_THROW ()
      {
        return symbol_type (token::THROW);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SIZEOF ()
      {
        return symbol_type (token::SIZEOF);
      }
#else
      static
      symbol_type
      make_SIZEOF ()
      {
        return symbol_type (token::SIZEOF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ALIGNOF ()
      {
        return symbol_type (token::ALIGNOF);
      }
#else
      static
      symbol_type
      make_ALIGNOF ()
      {
        return symbol_type (token::ALIGNOF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OVERRIDE ()
      {
        return symbol_type (token::OVERRIDE);
      }
#else
      static
      symbol_type
      make_OVERRIDE ()
      {
        return symbol_type (token::OVERRIDE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CO_YIELD ()
      {
        return symbol_type (token::CO_YIELD);
      }
#else
      static
      symbol_type
      make_CO_YIELD ()
      {
        return symbol_type (token::CO_YIELD);
      }
#endif


    class context
    {
    public:
      context (glr_stack& yystack, const symbol_type& yyla);
      const symbol_type& lookahead () const YY_NOEXCEPT { return yyla_; }
      symbol_kind_type token () const YY_NOEXCEPT { return yyla_.kind (); }
      /// Put in YYARG at most YYARGN of the expected tokens, and return the
      /// number of tokens stored in YYARG.  If YYARG is null, return the
      /// number of expected tokens (guaranteed to be less than YYNTOKENS).
      int expected_tokens (symbol_kind_type yyarg[], int yyargn) const;

    private:
      glr_stack& yystack_;
      const symbol_type& yyla_;
    };

# if YYDEBUG
  public:
    /// \brief Report a symbol value on the debug stream.
    /// \param yykind   The symbol kind.
    /// \param yyval    Its semantic value.
    void yy_symbol_value_print_ (symbol_kind_type yykind,
                                 const value_type& yyval) const;
    /// \brief Report a symbol on the debug stream.
    /// \param yykind   The symbol kind.
    /// \param yyval    Its semantic value.
    void yy_symbol_print_ (symbol_kind_type yykind,
                           const value_type& yyval) const;
  private:
    /// Debug stream.
    std::ostream* yycdebug_;
#endif


  private:
    /// The arguments of the error message.
    int yy_syntax_error_arguments_ (const context& yyctx,
                                    symbol_kind_type yyarg[], int yyargn) const;

    /// Generate an error message.
    /// \param yyctx     the context in which the error occurred.
    virtual std::string yysyntax_error_ (const context& yyctx) const;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_kind_type enum.
    static symbol_kind_type yytranslate_ (int t) YY_NOEXCEPT;



    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yykind    The symbol kind.
    void yy_destroy_ (const char* yymsg, symbol_kind_type yykind,
                      value_type& yyval);


    // Needs access to yy_destroy_, report_syntax_error, etc.
    friend glr_stack;
  };

  inline
  parser::symbol_kind_type
  parser::yytranslate_ (int t) YY_NOEXCEPT
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const unsigned char
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   139,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138
    };
    // Last valid token kind.
    const int code_max = 393;

    if (t <= 0)
      return symbol_kind::S_YYEOF;
    else if (t <= code_max)
      return static_cast <symbol_kind_type> (translate_table[t]);
    else
      return symbol_kind::S_YYUNDEF;
  }

  // basic_symbol.
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
  {
    switch (this->kind ())
    {
      default:
        break;
    }

  }





  template <typename Base>
  bool
  parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->kind ())
    {
      default:
        break;
    }

  }

  // by_kind.
  inline
  parser::by_kind::by_kind () YY_NOEXCEPT
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  inline
  parser::by_kind::by_kind (by_kind&& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  inline
  parser::by_kind::by_kind (const by_kind& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {}

  inline
  parser::by_kind::by_kind (token_kind_type t) YY_NOEXCEPT
    : kind_ (yytranslate_ (t))
  {}


  inline
  parser::by_kind&
  parser::by_kind::by_kind::operator= (const by_kind& that)
  {
    kind_ = that.kind_;
    return *this;
  }

  inline
  parser::by_kind&
  parser::by_kind::by_kind::operator= (by_kind&& that)
  {
    kind_ = that.kind_;
    that.clear ();
    return *this;
  }


  inline
  void
  parser::by_kind::clear () YY_NOEXCEPT
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  inline
  void
  parser::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  inline
  parser::symbol_kind_type
  parser::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }



} // yy
#line 3534 "cplusplus.h"




#endif // !YY_YY_CPLUSPLUS_H_INCLUDED
