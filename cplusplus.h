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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    ANY_TOKEN_OTHER_THAN_PARENTHESIS_BRACKET_BRACE = 259, /* ANY_TOKEN_OTHER_THAN_PARENTHESIS_BRACKET_BRACE  */
    EXCEPT_THE_APOSTROPHE_REVERSE_SOLIDUS_OR_NEW_LINE_CHARACTER = 260, /* EXCEPT_THE_APOSTROPHE_REVERSE_SOLIDUS_OR_NEW_LINE_CHARACTER  */
    EXCEPT_THE_QUOTATION_MARK_REVERSE_SOLIDUS_OR_NEW_LINE_CHARACTER = 261, /* EXCEPT_THE_QUOTATION_MARK_REVERSE_SOLIDUS_OR_NEW_LINE_CHARACTER  */
    NOT_AN_OCTAL_DIGIT_A_SIMPLE_ESCAPE_SEQUENCE_CHAR_OR_THE_CHARACTERS_U_U_OR_X = 262, /* NOT_AN_OCTAL_DIGIT_A_SIMPLE_ESCAPE_SEQUENCE_CHAR_OR_THE_CHARACTERS_U_U_OR_X  */
    EXCEPT_SPACE_PARENTHESIS_REVERSE_SOLIDUS_TABULATION_LINE_TABULATION_FORM_FEED_AND_NEW_LINE = 263, /* EXCEPT_SPACE_PARENTHESIS_REVERSE_SOLIDUS_TABULATION_LINE_TABULATION_FORM_FEED_AND_NEW_LINE  */
    EXCEPT_NEW_LINE_AND_GREATER_THAN_SIGN = 264, /* EXCEPT_NEW_LINE_AND_GREATER_THAN_SIGN  */
    LL = 265,                      /* LL  */
    EXCEPT_NEW_LINE_AND_QUOTATION_MARK = 266, /* EXCEPT_NEW_LINE_AND_QUOTATION_MARK  */
    EXCEPT_RIGHT_PARENTHESIS_FOLLOWED_BY_THE_INITIAL_D_CHAR_SEQUENCE_FOLLOWED_BY_QUOTATION_MARK = 267 /* EXCEPT_RIGHT_PARENTHESIS_FOLLOWED_BY_THE_INITIAL_D_CHAR_SEQUENCE_FOLLOWED_BY_QUOTATION_MARK  */
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
