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
# define YYDEBUG 0
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
    D_CHAR = 317,                  /* D_CHAR  */
    FRIEND = 318,                  /* FRIEND  */
    TYPEDEF = 319,                 /* TYPEDEF  */
    CONSTEXPR = 320,               /* CONSTEXPR  */
    CONSTEVAL = 321,               /* CONSTEVAL  */
    CONSTINIT = 322,               /* CONSTINIT  */
    INLINE = 323,                  /* INLINE  */
    DECLTYPE = 324,                /* DECLTYPE  */
    DEREF = 325,                   /* DEREF  */
    DELETE = 326,                  /* DELETE  */
    DOT = 327,                     /* DOT  */
    ENUM = 328,                    /* ENUM  */
    UNICODE_8 = 329,               /* UNICODE_8  */
    EQ_EQ = 330,                   /* EQ_EQ  */
    NOT_EQ = 331,                  /* NOT_EQ  */
    XOR = 332,                     /* XOR  */
    EXTERN = 333,                  /* EXTERN  */
    LESS = 334,                    /* LESS  */
    GREATER = 335,                 /* GREATER  */
    EXPLICIT = 336,                /* EXPLICIT  */
    EXPORT = 337,                  /* EXPORT  */
    MULT = 338,                    /* MULT  */
    DIV = 339,                     /* DIV  */
    MOD = 340,                     /* MOD  */
    OR = 341,                      /* OR  */
    LSHIFT = 342,                  /* LSHIFT  */
    RSHIFT = 343,                  /* RSHIFT  */
    LESS_EQ = 344,                 /* LESS_EQ  */
    GREATER_EQ = 345,              /* GREATER_EQ  */
    DOT_STAR = 346,                /* DOT_STAR  */
    DEREF_STAR = 347,              /* DEREF_STAR  */
    DEFAULT = 348,                 /* DEFAULT  */
    TRY = 349,                     /* TRY  */
    MODULE = 350,                  /* MODULE  */
    H_CHAR = 351,                  /* H_CHAR  */
    CATCH = 352,                   /* CATCH  */
    DOUBLE_QUOTE = 353,            /* DOUBLE_QUOTE  */
    ESCAPE_LX = 354,               /* ESCAPE_LX  */
    ZERO_LX = 355,                 /* ZERO_LX  */
    ZERO_HX = 356,                 /* ZERO_HX  */
    WHILE = 357,                   /* WHILE  */
    DO = 358,                      /* DO  */
    FOR = 359,                     /* FOR  */
    BREAK = 360,                   /* BREAK  */
    CONTINUE = 361,                /* CONTINUE  */
    RETURN = 362,                  /* RETURN  */
    GOTO = 363,                    /* GOTO  */
    CASE = 364,                    /* CASE  */
    LONG_LONG_L = 365,             /* LONG_LONG_L  */
    LONG_LONG_H = 366,             /* LONG_LONG_H  */
    IMPORT = 367,                  /* IMPORT  */
    NAMESPACE = 368,               /* NAMESPACE  */
    REQUIRES = 369,                /* REQUIRES  */
    NEW = 370,                     /* NEW  */
    COMPL = 371,                   /* COMPL  */
    NOT = 372,                     /* NOT  */
    PLUS_PLUS = 373,               /* PLUS_PLUS  */
    MINUS_MINUS = 374,             /* MINUS_MINUS  */
    THIS = 375,                    /* THIS  */
    AUTO = 376,                    /* AUTO  */
    NULLPTR = 377,                 /* NULLPTR  */
    DYNAMIC_CAST = 378,            /* DYNAMIC_CAST  */
    STATIC_CAST = 379,             /* STATIC_CAST  */
    REINTERPRET_CAST = 380,        /* REINTERPRET_CAST  */
    CONST_CAST = 381,              /* CONST_CAST  */
    TYPEID = 382,                  /* TYPEID  */
    Q_CHAR = 383,                  /* Q_CHAR  */
    R_CHAR = 384,                  /* R_CHAR  */
    IF = 385,                      /* IF  */
    ELSE = 386,                    /* ELSE  */
    SWITCH = 387,                  /* SWITCH  */
    CHAR = 388,                    /* CHAR  */
    CHAR8_T = 389,                 /* CHAR8_T  */
    CHAR16_T = 390,                /* CHAR16_T  */
    CHAR32_T = 391,                /* CHAR32_T  */
    WCHAR_T = 392,                 /* WCHAR_T  */
    BOOL = 393,                    /* BOOL  */
    SHORT = 394,                   /* SHORT  */
    INT = 395,                     /* INT  */
    LONG = 396,                    /* LONG  */
    SIGNED = 397,                  /* SIGNED  */
    UNSIGNED = 398,                /* UNSIGNED  */
    FLOAT = 399,                   /* FLOAT  */
    DOUBLE = 400,                  /* DOUBLE  */
    VOID = 401,                    /* VOID  */
    STATIC_ASSERT = 402,           /* STATIC_ASSERT  */
    STATIC = 403,                  /* STATIC  */
    THREAD_LOCAL = 404,            /* THREAD_LOCAL  */
    MUTABLE = 405,                 /* MUTABLE  */
    THROW = 406,                   /* THROW  */
    TYPENAME = 407,                /* TYPENAME  */
    SIZEOF = 408,                  /* SIZEOF  */
    ALIGNOF = 409,                 /* ALIGNOF  */
    ESCAPE_LU = 410,               /* ESCAPE_LU  */
    ESCAPE_HU = 411,               /* ESCAPE_HU  */
    OVERRIDE = 412,                /* OVERRIDE  */
    CO_YIELD = 413                 /* CO_YIELD  */
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
