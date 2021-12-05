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
    PRIVATE = 258,                 /* PRIVATE  */
    PROTECTED = 259,               /* PROTECTED  */
    PUBLIC = 260,                  /* PUBLIC  */
    PLUS = 261,                    /* PLUS  */
    MINUS = 262,                   /* MINUS  */
    USING = 263,                   /* USING  */
    IDENTIFIER = 264,              /* IDENTIFIER  */
    EQ = 265,                      /* EQ  */
    SEMICOLON = 266,               /* SEMICOLON  */
    ALIGNAS = 267,                 /* ALIGNAS  */
    OPEN_PAREN = 268,              /* OPEN_PAREN  */
    CLOSE_PAREN = 269,             /* CLOSE_PAREN  */
    ELLIPSIS = 270,                /* ELLIPSIS  */
    AND = 271,                     /* AND  */
    ASM = 272,                     /* ASM  */
    MULT_EQ = 273,                 /* MULT_EQ  */
    DIV_EQ = 274,                  /* DIV_EQ  */
    MOD_EQ = 275,                  /* MOD_EQ  */
    PLUS_EQ = 276,                 /* PLUS_EQ  */
    MINUS_EQ = 277,                /* MINUS_EQ  */
    RSHIFT_EQ = 278,               /* RSHIFT_EQ  */
    LSHIFT_EQ = 279,               /* LSHIFT_EQ  */
    AND_EQ = 280,                  /* AND_EQ  */
    XOR_EQ = 281,                  /* XOR_EQ  */
    OR_EQ = 282,                   /* OR_EQ  */
    COMMA = 283,                   /* COMMA  */
    SCOPE = 284,                   /* SCOPE  */
    OPEN_SQUARE = 285,             /* OPEN_SQUARE  */
    CLOSE_SQUARE = 286,            /* CLOSE_SQUARE  */
    COLON = 287,                   /* COLON  */
    CO_AWAIT = 288,                /* CO_AWAIT  */
    OPEN_BRACE = 289,              /* OPEN_BRACE  */
    CLOSE_BRACE = 290,             /* CLOSE_BRACE  */
    BALANCED_TOKEN = 291,          /* BALANCED_TOKEN  */
    VIRTUAL = 292,                 /* VIRTUAL  */
    BASIC_C_CHAR = 293,            /* BASIC_C_CHAR  */
    BASIC_S_CHAR = 294,            /* BASIC_S_CHAR  */
    ZERO_LB = 295,                 /* ZERO_LB  */
    ZERO_HB = 296,                 /* ZERO_HB  */
    SINGLE_QUOTE = 297,            /* SINGLE_QUOTE  */
    FALSE = 298,                   /* FALSE  */
    TRUE = 299,                    /* TRUE  */
    CLASS = 300,                   /* CLASS  */
    STRUCT = 301,                  /* STRUCT  */
    UNION = 302,                   /* UNION  */
    TEMPLATE = 303,                /* TEMPLATE  */
    FINAL = 304,                   /* FINAL  */
    SPACESHIP = 305,               /* SPACESHIP  */
    NOEXCEPT = 306,                /* NOEXCEPT  */
    CONCEPT = 307,                 /* CONCEPT  */
    ESCAPE = 308,                  /* ESCAPE  */
    CONDITIONAL_ESCAPE_SEQUENCE_CHAR = 309, /* CONDITIONAL_ESCAPE_SEQUENCE_CHAR  */
    QUERY = 310,                   /* QUERY  */
    AND_AND = 311,                 /* AND_AND  */
    OR_OR = 312,                   /* OR_OR  */
    OPERATOR = 313,                /* OPERATOR  */
    CO_RETURN = 314,               /* CO_RETURN  */
    CONST = 315,                   /* CONST  */
    VOLATILE = 316,                /* VOLATILE  */
    FRIEND = 317,                  /* FRIEND  */
    TYPEDEF = 318,                 /* TYPEDEF  */
    CONSTEXPR = 319,               /* CONSTEXPR  */
    CONSTEVAL = 320,               /* CONSTEVAL  */
    CONSTINIT = 321,               /* CONSTINIT  */
    INLINE = 322,                  /* INLINE  */
    DECLTYPE = 323,                /* DECLTYPE  */
    DEREF = 324,                   /* DEREF  */
    DELETE = 325,                  /* DELETE  */
    DOT = 326,                     /* DOT  */
    ENUM = 327,                    /* ENUM  */
    UNICODE_8 = 328,               /* UNICODE_8  */
    EQ_EQ = 329,                   /* EQ_EQ  */
    NOT_EQ = 330,                  /* NOT_EQ  */
    XOR = 331,                     /* XOR  */
    EXTERN = 332,                  /* EXTERN  */
    LESS = 333,                    /* LESS  */
    GREATER = 334,                 /* GREATER  */
    EXPLICIT = 335,                /* EXPLICIT  */
    EXPORT = 336,                  /* EXPORT  */
    MULT = 337,                    /* MULT  */
    DIV = 338,                     /* DIV  */
    MOD = 339,                     /* MOD  */
    OR = 340,                      /* OR  */
    LSHIFT = 341,                  /* LSHIFT  */
    RSHIFT = 342,                  /* RSHIFT  */
    LESS_EQ = 343,                 /* LESS_EQ  */
    GREATER_EQ = 344,              /* GREATER_EQ  */
    DOT_STAR = 345,                /* DOT_STAR  */
    DEREF_STAR = 346,              /* DEREF_STAR  */
    DEFAULT = 347,                 /* DEFAULT  */
    TRY = 348,                     /* TRY  */
    MODULE = 349,                  /* MODULE  */
    H_CHAR = 350,                  /* H_CHAR  */
    CATCH = 351,                   /* CATCH  */
    DOUBLE_QUOTE = 352,            /* DOUBLE_QUOTE  */
    ESCAPE_LX = 353,               /* ESCAPE_LX  */
    ZERO_LX = 354,                 /* ZERO_LX  */
    ZERO_HX = 355,                 /* ZERO_HX  */
    WHILE = 356,                   /* WHILE  */
    DO = 357,                      /* DO  */
    FOR = 358,                     /* FOR  */
    BREAK = 359,                   /* BREAK  */
    CONTINUE = 360,                /* CONTINUE  */
    RETURN = 361,                  /* RETURN  */
    GOTO = 362,                    /* GOTO  */
    CASE = 363,                    /* CASE  */
    LONG_LONG_L = 364,             /* LONG_LONG_L  */
    LONG_LONG_H = 365,             /* LONG_LONG_H  */
    IMPORT = 366,                  /* IMPORT  */
    NAMESPACE = 367,               /* NAMESPACE  */
    REQUIRES = 368,                /* REQUIRES  */
    NEW = 369,                     /* NEW  */
    COMPL = 370,                   /* COMPL  */
    NOT = 371,                     /* NOT  */
    PLUS_PLUS = 372,               /* PLUS_PLUS  */
    MINUS_MINUS = 373,             /* MINUS_MINUS  */
    THIS = 374,                    /* THIS  */
    AUTO = 375,                    /* AUTO  */
    NULLPTR = 376,                 /* NULLPTR  */
    DYNAMIC_CAST = 377,            /* DYNAMIC_CAST  */
    STATIC_CAST = 378,             /* STATIC_CAST  */
    REINTERPRET_CAST = 379,        /* REINTERPRET_CAST  */
    CONST_CAST = 380,              /* CONST_CAST  */
    TYPEID = 381,                  /* TYPEID  */
    Q_CHAR = 382,                  /* Q_CHAR  */
    IF = 383,                      /* IF  */
    ELSE = 384,                    /* ELSE  */
    SWITCH = 385,                  /* SWITCH  */
    CHAR = 386,                    /* CHAR  */
    CHAR8_T = 387,                 /* CHAR8_T  */
    CHAR16_T = 388,                /* CHAR16_T  */
    CHAR32_T = 389,                /* CHAR32_T  */
    WCHAR_T = 390,                 /* WCHAR_T  */
    BOOL = 391,                    /* BOOL  */
    SHORT = 392,                   /* SHORT  */
    INT = 393,                     /* INT  */
    LONG = 394,                    /* LONG  */
    SIGNED = 395,                  /* SIGNED  */
    UNSIGNED = 396,                /* UNSIGNED  */
    FLOAT = 397,                   /* FLOAT  */
    DOUBLE = 398,                  /* DOUBLE  */
    VOID = 399,                    /* VOID  */
    STATIC_ASSERT = 400,           /* STATIC_ASSERT  */
    STATIC = 401,                  /* STATIC  */
    THREAD_LOCAL = 402,            /* THREAD_LOCAL  */
    MUTABLE = 403,                 /* MUTABLE  */
    THROW = 404,                   /* THROW  */
    TYPENAME = 405,                /* TYPENAME  */
    SIZEOF = 406,                  /* SIZEOF  */
    ALIGNOF = 407,                 /* ALIGNOF  */
    ESCAPE_LU = 408,               /* ESCAPE_LU  */
    ESCAPE_HU = 409,               /* ESCAPE_HU  */
    OVERRIDE = 410,                /* OVERRIDE  */
    CO_YIELD = 411                 /* CO_YIELD  */
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
