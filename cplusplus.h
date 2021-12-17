/* A Bison parser, made by GNU Bison 3.8.2.9-6571.  */

/* Skeleton interface for Bison GLR parsers in C

   Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_CPLUSPLUS_H_INCLUDED
# define YY_YY_CPLUSPLUS_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    COMMA = 258,                   /* COMMA  */
    CONSTEXPR = 259,               /* CONSTEXPR  */
    ELLIPSIS = 260,                /* ELLIPSIS  */
    EXPORT = 261,                  /* EXPORT  */
    EXTERN = 262,                  /* EXTERN  */
    IDENTIFIER = 263,              /* IDENTIFIER  */
    INLINE = 264,                  /* INLINE  */
    NOEXCEPT = 265,                /* NOEXCEPT  */
    NOT = 266,                     /* NOT  */
    SCOPE = 267,                   /* SCOPE  */
    TEMPLATE = 268,                /* TEMPLATE  */
    THIS = 269,                    /* THIS  */
    TYPENAME = 270,                /* TYPENAME  */
    VIRTUAL = 271,                 /* VIRTUAL  */
    PRIVATE = 272,                 /* PRIVATE  */
    PROTECTED = 273,               /* PROTECTED  */
    PUBLIC = 274,                  /* PUBLIC  */
    PLUS = 275,                    /* PLUS  */
    MINUS = 276,                   /* MINUS  */
    USING = 277,                   /* USING  */
    EQ = 278,                      /* EQ  */
    SEMICOLON = 279,               /* SEMICOLON  */
    ALIGNAS = 280,                 /* ALIGNAS  */
    OPEN_PAREN = 281,              /* OPEN_PAREN  */
    CLOSE_PAREN = 282,             /* CLOSE_PAREN  */
    AND = 283,                     /* AND  */
    ASM = 284,                     /* ASM  */
    MULT_EQ = 285,                 /* MULT_EQ  */
    DIV_EQ = 286,                  /* DIV_EQ  */
    MOD_EQ = 287,                  /* MOD_EQ  */
    PLUS_EQ = 288,                 /* PLUS_EQ  */
    MINUS_EQ = 289,                /* MINUS_EQ  */
    RSHIFT_EQ = 290,               /* RSHIFT_EQ  */
    LSHIFT_EQ = 291,               /* LSHIFT_EQ  */
    AND_EQ = 292,                  /* AND_EQ  */
    XOR_EQ = 293,                  /* XOR_EQ  */
    OR_EQ = 294,                   /* OR_EQ  */
    OPEN_SQUARE = 295,             /* OPEN_SQUARE  */
    CLOSE_SQUARE = 296,            /* CLOSE_SQUARE  */
    COLON = 297,                   /* COLON  */
    CO_AWAIT = 298,                /* CO_AWAIT  */
    OPEN_BRACE = 299,              /* OPEN_BRACE  */
    CLOSE_BRACE = 300,             /* CLOSE_BRACE  */
    BALANCED_TOKEN = 301,          /* BALANCED_TOKEN  */
    CLASS = 302,                   /* CLASS  */
    STRUCT = 303,                  /* STRUCT  */
    UNION = 304,                   /* UNION  */
    FINAL = 305,                   /* FINAL  */
    SPACESHIP = 306,               /* SPACESHIP  */
    CONCEPT = 307,                 /* CONCEPT  */
    QUERY = 308,                   /* QUERY  */
    AND_AND = 309,                 /* AND_AND  */
    OR_OR = 310,                   /* OR_OR  */
    OPERATOR = 311,                /* OPERATOR  */
    CO_RETURN = 312,               /* CO_RETURN  */
    CONST = 313,                   /* CONST  */
    VOLATILE = 314,                /* VOLATILE  */
    FRIEND = 315,                  /* FRIEND  */
    TYPEDEF = 316,                 /* TYPEDEF  */
    CONSTEVAL = 317,               /* CONSTEVAL  */
    CONSTINIT = 318,               /* CONSTINIT  */
    DECLTYPE = 319,                /* DECLTYPE  */
    DEREF = 320,                   /* DEREF  */
    DELETE = 321,                  /* DELETE  */
    DOT = 322,                     /* DOT  */
    ENUM = 323,                    /* ENUM  */
    EQ_EQ = 324,                   /* EQ_EQ  */
    NOT_EQ = 325,                  /* NOT_EQ  */
    XOR = 326,                     /* XOR  */
    LESS = 327,                    /* LESS  */
    GREATER = 328,                 /* GREATER  */
    EXPLICIT = 329,                /* EXPLICIT  */
    MULT = 330,                    /* MULT  */
    DIV = 331,                     /* DIV  */
    MOD = 332,                     /* MOD  */
    OR = 333,                      /* OR  */
    LSHIFT = 334,                  /* LSHIFT  */
    RSHIFT = 335,                  /* RSHIFT  */
    LESS_EQ = 336,                 /* LESS_EQ  */
    GREATER_EQ = 337,              /* GREATER_EQ  */
    DOT_STAR = 338,                /* DOT_STAR  */
    DEREF_STAR = 339,              /* DEREF_STAR  */
    DEFAULT = 340,                 /* DEFAULT  */
    TRY = 341,                     /* TRY  */
    MODULE = 342,                  /* MODULE  */
    CATCH = 343,                   /* CATCH  */
    HEADER_NAME = 344,             /* HEADER_NAME  */
    WHILE = 345,                   /* WHILE  */
    DO = 346,                      /* DO  */
    FOR = 347,                     /* FOR  */
    BREAK = 348,                   /* BREAK  */
    CONTINUE = 349,                /* CONTINUE  */
    RETURN = 350,                  /* RETURN  */
    GOTO = 351,                    /* GOTO  */
    CASE = 352,                    /* CASE  */
    IMPORT = 353,                  /* IMPORT  */
    NAMESPACE = 354,               /* NAMESPACE  */
    REQUIRES = 355,                /* REQUIRES  */
    NEW = 356,                     /* NEW  */
    COMPL = 357,                   /* COMPL  */
    PLUS_PLUS = 358,               /* PLUS_PLUS  */
    MINUS_MINUS = 359,             /* MINUS_MINUS  */
    AUTO = 360,                    /* AUTO  */
    DYNAMIC_CAST = 361,            /* DYNAMIC_CAST  */
    STATIC_CAST = 362,             /* STATIC_CAST  */
    REINTERPRET_CAST = 363,        /* REINTERPRET_CAST  */
    CONST_CAST = 364,              /* CONST_CAST  */
    TYPEID = 365,                  /* TYPEID  */
    LITERAL = 366,                 /* LITERAL  */
    IF = 367,                      /* IF  */
    ELSE = 368,                    /* ELSE  */
    SWITCH = 369,                  /* SWITCH  */
    CHAR = 370,                    /* CHAR  */
    CHAR8_T = 371,                 /* CHAR8_T  */
    CHAR16_T = 372,                /* CHAR16_T  */
    CHAR32_T = 373,                /* CHAR32_T  */
    WCHAR_T = 374,                 /* WCHAR_T  */
    BOOL = 375,                    /* BOOL  */
    SHORT = 376,                   /* SHORT  */
    INT = 377,                     /* INT  */
    LONG = 378,                    /* LONG  */
    SIGNED = 379,                  /* SIGNED  */
    UNSIGNED = 380,                /* UNSIGNED  */
    FLOAT = 381,                   /* FLOAT  */
    DOUBLE = 382,                  /* DOUBLE  */
    VOID = 383,                    /* VOID  */
    STATIC_ASSERT = 384,           /* STATIC_ASSERT  */
    STATIC = 385,                  /* STATIC  */
    THREAD_LOCAL = 386,            /* THREAD_LOCAL  */
    MUTABLE = 387,                 /* MUTABLE  */
    STRING_LITERAL = 388,          /* STRING_LITERAL  */
    THROW = 389,                   /* THROW  */
    SIZEOF = 390,                  /* SIZEOF  */
    ALIGNOF = 391,                 /* ALIGNOF  */
    OVERRIDE = 392,                /* OVERRIDE  */
    CO_YIELD = 393                 /* CO_YIELD  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CPLUSPLUS_H_INCLUDED  */
