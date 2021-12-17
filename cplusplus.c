/* A Bison parser, made by GNU Bison 3.8.2.9-6571.  */

/* Skeleton implementation for Bison GLR parsers in C

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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2.9-6571"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* First part of user prologue.  */
#line 2 "cplusplus.y"

#include <iostream>
#include <string>
using namespace std;
extern int yylineno;
extern void yyerror(const string& );
extern int yylex (void);

#line 67 "cplusplus.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#include "cplusplus.h"

/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_COMMA = 3,                      /* COMMA  */
  YYSYMBOL_CONSTEXPR = 4,                  /* CONSTEXPR  */
  YYSYMBOL_ELLIPSIS = 5,                   /* ELLIPSIS  */
  YYSYMBOL_EXPORT = 6,                     /* EXPORT  */
  YYSYMBOL_EXTERN = 7,                     /* EXTERN  */
  YYSYMBOL_IDENTIFIER = 8,                 /* IDENTIFIER  */
  YYSYMBOL_INLINE = 9,                     /* INLINE  */
  YYSYMBOL_NOEXCEPT = 10,                  /* NOEXCEPT  */
  YYSYMBOL_NOT = 11,                       /* NOT  */
  YYSYMBOL_SCOPE = 12,                     /* SCOPE  */
  YYSYMBOL_TEMPLATE = 13,                  /* TEMPLATE  */
  YYSYMBOL_THIS = 14,                      /* THIS  */
  YYSYMBOL_TYPENAME = 15,                  /* TYPENAME  */
  YYSYMBOL_VIRTUAL = 16,                   /* VIRTUAL  */
  YYSYMBOL_PRIVATE = 17,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 18,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 19,                    /* PUBLIC  */
  YYSYMBOL_PLUS = 20,                      /* PLUS  */
  YYSYMBOL_MINUS = 21,                     /* MINUS  */
  YYSYMBOL_USING = 22,                     /* USING  */
  YYSYMBOL_EQ = 23,                        /* EQ  */
  YYSYMBOL_SEMICOLON = 24,                 /* SEMICOLON  */
  YYSYMBOL_ALIGNAS = 25,                   /* ALIGNAS  */
  YYSYMBOL_OPEN_PAREN = 26,                /* OPEN_PAREN  */
  YYSYMBOL_CLOSE_PAREN = 27,               /* CLOSE_PAREN  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_ASM = 29,                       /* ASM  */
  YYSYMBOL_MULT_EQ = 30,                   /* MULT_EQ  */
  YYSYMBOL_DIV_EQ = 31,                    /* DIV_EQ  */
  YYSYMBOL_MOD_EQ = 32,                    /* MOD_EQ  */
  YYSYMBOL_PLUS_EQ = 33,                   /* PLUS_EQ  */
  YYSYMBOL_MINUS_EQ = 34,                  /* MINUS_EQ  */
  YYSYMBOL_RSHIFT_EQ = 35,                 /* RSHIFT_EQ  */
  YYSYMBOL_LSHIFT_EQ = 36,                 /* LSHIFT_EQ  */
  YYSYMBOL_AND_EQ = 37,                    /* AND_EQ  */
  YYSYMBOL_XOR_EQ = 38,                    /* XOR_EQ  */
  YYSYMBOL_OR_EQ = 39,                     /* OR_EQ  */
  YYSYMBOL_OPEN_SQUARE = 40,               /* OPEN_SQUARE  */
  YYSYMBOL_CLOSE_SQUARE = 41,              /* CLOSE_SQUARE  */
  YYSYMBOL_COLON = 42,                     /* COLON  */
  YYSYMBOL_CO_AWAIT = 43,                  /* CO_AWAIT  */
  YYSYMBOL_OPEN_BRACE = 44,                /* OPEN_BRACE  */
  YYSYMBOL_CLOSE_BRACE = 45,               /* CLOSE_BRACE  */
  YYSYMBOL_BALANCED_TOKEN = 46,            /* BALANCED_TOKEN  */
  YYSYMBOL_CLASS = 47,                     /* CLASS  */
  YYSYMBOL_STRUCT = 48,                    /* STRUCT  */
  YYSYMBOL_UNION = 49,                     /* UNION  */
  YYSYMBOL_FINAL = 50,                     /* FINAL  */
  YYSYMBOL_SPACESHIP = 51,                 /* SPACESHIP  */
  YYSYMBOL_CONCEPT = 52,                   /* CONCEPT  */
  YYSYMBOL_QUERY = 53,                     /* QUERY  */
  YYSYMBOL_AND_AND = 54,                   /* AND_AND  */
  YYSYMBOL_OR_OR = 55,                     /* OR_OR  */
  YYSYMBOL_OPERATOR = 56,                  /* OPERATOR  */
  YYSYMBOL_CO_RETURN = 57,                 /* CO_RETURN  */
  YYSYMBOL_CONST = 58,                     /* CONST  */
  YYSYMBOL_VOLATILE = 59,                  /* VOLATILE  */
  YYSYMBOL_FRIEND = 60,                    /* FRIEND  */
  YYSYMBOL_TYPEDEF = 61,                   /* TYPEDEF  */
  YYSYMBOL_CONSTEVAL = 62,                 /* CONSTEVAL  */
  YYSYMBOL_CONSTINIT = 63,                 /* CONSTINIT  */
  YYSYMBOL_DECLTYPE = 64,                  /* DECLTYPE  */
  YYSYMBOL_DEREF = 65,                     /* DEREF  */
  YYSYMBOL_DELETE = 66,                    /* DELETE  */
  YYSYMBOL_DOT = 67,                       /* DOT  */
  YYSYMBOL_ENUM = 68,                      /* ENUM  */
  YYSYMBOL_EQ_EQ = 69,                     /* EQ_EQ  */
  YYSYMBOL_NOT_EQ = 70,                    /* NOT_EQ  */
  YYSYMBOL_XOR = 71,                       /* XOR  */
  YYSYMBOL_LESS = 72,                      /* LESS  */
  YYSYMBOL_GREATER = 73,                   /* GREATER  */
  YYSYMBOL_EXPLICIT = 74,                  /* EXPLICIT  */
  YYSYMBOL_MULT = 75,                      /* MULT  */
  YYSYMBOL_DIV = 76,                       /* DIV  */
  YYSYMBOL_MOD = 77,                       /* MOD  */
  YYSYMBOL_OR = 78,                        /* OR  */
  YYSYMBOL_LSHIFT = 79,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 80,                    /* RSHIFT  */
  YYSYMBOL_LESS_EQ = 81,                   /* LESS_EQ  */
  YYSYMBOL_GREATER_EQ = 82,                /* GREATER_EQ  */
  YYSYMBOL_DOT_STAR = 83,                  /* DOT_STAR  */
  YYSYMBOL_DEREF_STAR = 84,                /* DEREF_STAR  */
  YYSYMBOL_DEFAULT = 85,                   /* DEFAULT  */
  YYSYMBOL_TRY = 86,                       /* TRY  */
  YYSYMBOL_MODULE = 87,                    /* MODULE  */
  YYSYMBOL_CATCH = 88,                     /* CATCH  */
  YYSYMBOL_HEADER_NAME = 89,               /* HEADER_NAME  */
  YYSYMBOL_WHILE = 90,                     /* WHILE  */
  YYSYMBOL_DO = 91,                        /* DO  */
  YYSYMBOL_FOR = 92,                       /* FOR  */
  YYSYMBOL_BREAK = 93,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 94,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 95,                    /* RETURN  */
  YYSYMBOL_GOTO = 96,                      /* GOTO  */
  YYSYMBOL_CASE = 97,                      /* CASE  */
  YYSYMBOL_IMPORT = 98,                    /* IMPORT  */
  YYSYMBOL_NAMESPACE = 99,                 /* NAMESPACE  */
  YYSYMBOL_REQUIRES = 100,                 /* REQUIRES  */
  YYSYMBOL_NEW = 101,                      /* NEW  */
  YYSYMBOL_COMPL = 102,                    /* COMPL  */
  YYSYMBOL_PLUS_PLUS = 103,                /* PLUS_PLUS  */
  YYSYMBOL_MINUS_MINUS = 104,              /* MINUS_MINUS  */
  YYSYMBOL_AUTO = 105,                     /* AUTO  */
  YYSYMBOL_DYNAMIC_CAST = 106,             /* DYNAMIC_CAST  */
  YYSYMBOL_STATIC_CAST = 107,              /* STATIC_CAST  */
  YYSYMBOL_REINTERPRET_CAST = 108,         /* REINTERPRET_CAST  */
  YYSYMBOL_CONST_CAST = 109,               /* CONST_CAST  */
  YYSYMBOL_TYPEID = 110,                   /* TYPEID  */
  YYSYMBOL_LITERAL = 111,                  /* LITERAL  */
  YYSYMBOL_IF = 112,                       /* IF  */
  YYSYMBOL_ELSE = 113,                     /* ELSE  */
  YYSYMBOL_SWITCH = 114,                   /* SWITCH  */
  YYSYMBOL_CHAR = 115,                     /* CHAR  */
  YYSYMBOL_CHAR8_T = 116,                  /* CHAR8_T  */
  YYSYMBOL_CHAR16_T = 117,                 /* CHAR16_T  */
  YYSYMBOL_CHAR32_T = 118,                 /* CHAR32_T  */
  YYSYMBOL_WCHAR_T = 119,                  /* WCHAR_T  */
  YYSYMBOL_BOOL = 120,                     /* BOOL  */
  YYSYMBOL_SHORT = 121,                    /* SHORT  */
  YYSYMBOL_INT = 122,                      /* INT  */
  YYSYMBOL_LONG = 123,                     /* LONG  */
  YYSYMBOL_SIGNED = 124,                   /* SIGNED  */
  YYSYMBOL_UNSIGNED = 125,                 /* UNSIGNED  */
  YYSYMBOL_FLOAT = 126,                    /* FLOAT  */
  YYSYMBOL_DOUBLE = 127,                   /* DOUBLE  */
  YYSYMBOL_VOID = 128,                     /* VOID  */
  YYSYMBOL_STATIC_ASSERT = 129,            /* STATIC_ASSERT  */
  YYSYMBOL_STATIC = 130,                   /* STATIC  */
  YYSYMBOL_THREAD_LOCAL = 131,             /* THREAD_LOCAL  */
  YYSYMBOL_MUTABLE = 132,                  /* MUTABLE  */
  YYSYMBOL_STRING_LITERAL = 133,           /* STRING_LITERAL  */
  YYSYMBOL_THROW = 134,                    /* THROW  */
  YYSYMBOL_SIZEOF = 135,                   /* SIZEOF  */
  YYSYMBOL_ALIGNOF = 136,                  /* ALIGNOF  */
  YYSYMBOL_OVERRIDE = 137,                 /* OVERRIDE  */
  YYSYMBOL_CO_YIELD = 138,                 /* CO_YIELD  */
  YYSYMBOL_139_0_ = 139,                   /* '0'  */
  YYSYMBOL_YYACCEPT = 140,                 /* $accept  */
  YYSYMBOL_141_COMMA_opt = 141,            /* COMMA-opt  */
  YYSYMBOL_142_CONSTEXPR_opt = 142,        /* CONSTEXPR-opt  */
  YYSYMBOL_143_ELLIPSIS_opt = 143,         /* ELLIPSIS-opt  */
  YYSYMBOL_144_EXPORT_opt = 144,           /* EXPORT-opt  */
  YYSYMBOL_145_EXTERN_opt = 145,           /* EXTERN-opt  */
  YYSYMBOL_146_IDENTIFIER_opt = 146,       /* IDENTIFIER-opt  */
  YYSYMBOL_147_INLINE_opt = 147,           /* INLINE-opt  */
  YYSYMBOL_148_NOEXCEPT_opt = 148,         /* NOEXCEPT-opt  */
  YYSYMBOL_149_NOT_opt = 149,              /* NOT-opt  */
  YYSYMBOL_150_SCOPE_opt = 150,            /* SCOPE-opt  */
  YYSYMBOL_151_TEMPLATE_opt = 151,         /* TEMPLATE-opt  */
  YYSYMBOL_152_THIS_opt = 152,             /* THIS-opt  */
  YYSYMBOL_153_TYPENAME_opt = 153,         /* TYPENAME-opt  */
  YYSYMBOL_154_VIRTUAL_opt = 154,          /* VIRTUAL-opt  */
  YYSYMBOL_155_abstract_declarator = 155,  /* abstract-declarator  */
  YYSYMBOL_156_abstract_declarator_opt = 156, /* abstract-declarator-opt  */
  YYSYMBOL_157_abstract_pack_declarator = 157, /* abstract-pack-declarator  */
  YYSYMBOL_158_access_specifier = 158,     /* access-specifier  */
  YYSYMBOL_159_access_specifier_opt = 159, /* access-specifier-opt  */
  YYSYMBOL_160_additive_expression = 160,  /* additive-expression  */
  YYSYMBOL_161_alias_declaration = 161,    /* alias-declaration  */
  YYSYMBOL_162_alignment_specifier = 162,  /* alignment-specifier  */
  YYSYMBOL_163_and_expression = 163,       /* and-expression  */
  YYSYMBOL_164_asm_declaration = 164,      /* asm-declaration  */
  YYSYMBOL_165_assignment_expression = 165, /* assignment-expression  */
  YYSYMBOL_166_assignment_expression_opt = 166, /* assignment-expression-opt  */
  YYSYMBOL_167_assignment_operator = 167,  /* assignment-operator  */
  YYSYMBOL_attribute = 168,                /* attribute  */
  YYSYMBOL_169_attribute_argument_clause = 169, /* attribute-argument-clause  */
  YYSYMBOL_170_attribute_argument_clause_opt = 170, /* attribute-argument-clause-opt  */
  YYSYMBOL_171_attribute_declaration = 171, /* attribute-declaration  */
  YYSYMBOL_172_attribute_list = 172,       /* attribute-list  */
  YYSYMBOL_173_attribute_namespace = 173,  /* attribute-namespace  */
  YYSYMBOL_174_attribute_opt = 174,        /* attribute-opt  */
  YYSYMBOL_175_attribute_scoped_token = 175, /* attribute-scoped-token  */
  YYSYMBOL_176_attribute_specifier = 176,  /* attribute-specifier  */
  YYSYMBOL_177_attribute_specifier_seq = 177, /* attribute-specifier-seq  */
  YYSYMBOL_178_attribute_specifier_seq_opt = 178, /* attribute-specifier-seq-opt  */
  YYSYMBOL_179_attribute_token = 179,      /* attribute-token  */
  YYSYMBOL_180_attribute_using_prefix = 180, /* attribute-using-prefix  */
  YYSYMBOL_181_attribute_using_prefix_opt = 181, /* attribute-using-prefix-opt  */
  YYSYMBOL_182_await_expression = 182,     /* await-expression  */
  YYSYMBOL_183_balanced_token = 183,       /* balanced-token  */
  YYSYMBOL_184_balanced_token_seq = 184,   /* balanced-token-seq  */
  YYSYMBOL_185_balanced_token_seq_opt = 185, /* balanced-token-seq-opt  */
  YYSYMBOL_186_base_clause = 186,          /* base-clause  */
  YYSYMBOL_187_base_clause_opt = 187,      /* base-clause-opt  */
  YYSYMBOL_188_base_specifier = 188,       /* base-specifier  */
  YYSYMBOL_189_base_specifier_list = 189,  /* base-specifier-list  */
  YYSYMBOL_190_block_declaration = 190,    /* block-declaration  */
  YYSYMBOL_191_brace_or_equal_initializer = 191, /* brace-or-equal-initializer  */
  YYSYMBOL_192_brace_or_equal_initializer_opt = 192, /* brace-or-equal-initializer-opt  */
  YYSYMBOL_193_braced_init_list = 193,     /* braced-init-list  */
  YYSYMBOL_capture = 194,                  /* capture  */
  YYSYMBOL_195_capture_default = 195,      /* capture-default  */
  YYSYMBOL_196_capture_list = 196,         /* capture-list  */
  YYSYMBOL_197_cast_expression = 197,      /* cast-expression  */
  YYSYMBOL_198_class_head = 198,           /* class-head  */
  YYSYMBOL_199_class_head_name = 199,      /* class-head-name  */
  YYSYMBOL_200_class_key = 200,            /* class-key  */
  YYSYMBOL_201_class_name = 201,           /* class-name  */
  YYSYMBOL_202_class_or_decltype = 202,    /* class-or-decltype  */
  YYSYMBOL_203_class_specifier = 203,      /* class-specifier  */
  YYSYMBOL_204_class_virt_specifier = 204, /* class-virt-specifier  */
  YYSYMBOL_205_class_virt_specifier_opt = 205, /* class-virt-specifier-opt  */
  YYSYMBOL_206_compare_expression = 206,   /* compare-expression  */
  YYSYMBOL_207_compound_requirement = 207, /* compound-requirement  */
  YYSYMBOL_208_compound_statement = 208,   /* compound-statement  */
  YYSYMBOL_209_concept_definition = 209,   /* concept-definition  */
  YYSYMBOL_210_concept_name = 210,         /* concept-name  */
  YYSYMBOL_condition = 211,                /* condition  */
  YYSYMBOL_212_condition_opt = 212,        /* condition-opt  */
  YYSYMBOL_213_conditional_expression = 213, /* conditional-expression  */
  YYSYMBOL_214_constant_expression = 214,  /* constant-expression  */
  YYSYMBOL_215_constant_expression_opt = 215, /* constant-expression-opt  */
  YYSYMBOL_216_constraint_expression = 216, /* constraint-expression  */
  YYSYMBOL_217_constraint_logical_and_expression = 217, /* constraint-logical-and-expression  */
  YYSYMBOL_218_constraint_logical_or_expression = 218, /* constraint-logical-or-expression  */
  YYSYMBOL_219_conversion_declarator = 219, /* conversion-declarator  */
  YYSYMBOL_220_conversion_declarator_opt = 220, /* conversion-declarator-opt  */
  YYSYMBOL_221_conversion_function_id = 221, /* conversion-function-id  */
  YYSYMBOL_222_conversion_type_id = 222,   /* conversion-type-id  */
  YYSYMBOL_223_coroutine_return_statement = 223, /* coroutine-return-statement  */
  YYSYMBOL_224_ctor_initializer = 224,     /* ctor-initializer  */
  YYSYMBOL_225_ctor_initializer_opt = 225, /* ctor-initializer-opt  */
  YYSYMBOL_226_cv_qualifier = 226,         /* cv-qualifier  */
  YYSYMBOL_227_cv_qualifier_seq = 227,     /* cv-qualifier-seq  */
  YYSYMBOL_228_cv_qualifier_seq_opt = 228, /* cv-qualifier-seq-opt  */
  YYSYMBOL_229_decl_specifier = 229,       /* decl-specifier  */
  YYSYMBOL_230_decl_specifier_seq = 230,   /* decl-specifier-seq  */
  YYSYMBOL_231_decl_specifier_seq_opt = 231, /* decl-specifier-seq-opt  */
  YYSYMBOL_declaration = 232,              /* declaration  */
  YYSYMBOL_233_declaration_seq = 233,      /* declaration-seq  */
  YYSYMBOL_234_declaration_seq_opt = 234,  /* declaration-seq-opt  */
  YYSYMBOL_235_declaration_statement = 235, /* declaration-statement  */
  YYSYMBOL_declarator = 236,               /* declarator  */
  YYSYMBOL_237_declarator_id = 237,        /* declarator-id  */
  YYSYMBOL_238_decltype_specifier = 238,   /* decltype-specifier  */
  YYSYMBOL_239_deduction_guide = 239,      /* deduction-guide  */
  YYSYMBOL_240_defining_type_id = 240,     /* defining-type-id  */
  YYSYMBOL_241_defining_type_specifier = 241, /* defining-type-specifier  */
  YYSYMBOL_242_defining_type_specifier_seq = 242, /* defining-type-specifier-seq  */
  YYSYMBOL_243_delete_expression = 243,    /* delete-expression  */
  YYSYMBOL_244_designated_initializer_clause = 244, /* designated-initializer-clause  */
  YYSYMBOL_245_designated_initializer_list = 245, /* designated-initializer-list  */
  YYSYMBOL_designator = 246,               /* designator  */
  YYSYMBOL_247_elaborated_enum_specifier = 247, /* elaborated-enum-specifier  */
  YYSYMBOL_248_elaborated_type_specifier = 248, /* elaborated-type-specifier  */
  YYSYMBOL_249_empty_declaration = 249,    /* empty-declaration  */
  YYSYMBOL_250_enclosing_namespace_specifier = 250, /* enclosing-namespace-specifier  */
  YYSYMBOL_251_enum_base = 251,            /* enum-base  */
  YYSYMBOL_252_enum_base_opt = 252,        /* enum-base-opt  */
  YYSYMBOL_253_enum_head = 253,            /* enum-head  */
  YYSYMBOL_254_enum_head_name = 254,       /* enum-head-name  */
  YYSYMBOL_255_enum_head_name_opt = 255,   /* enum-head-name-opt  */
  YYSYMBOL_256_enum_key = 256,             /* enum-key  */
  YYSYMBOL_257_enum_name = 257,            /* enum-name  */
  YYSYMBOL_258_enum_specifier = 258,       /* enum-specifier  */
  YYSYMBOL_enumerator = 259,               /* enumerator  */
  YYSYMBOL_260_enumerator_definition = 260, /* enumerator-definition  */
  YYSYMBOL_261_enumerator_list = 261,      /* enumerator-list  */
  YYSYMBOL_262_enumerator_list_opt = 262,  /* enumerator-list-opt  */
  YYSYMBOL_263_equality_expression = 263,  /* equality-expression  */
  YYSYMBOL_264_exception_declaration = 264, /* exception-declaration  */
  YYSYMBOL_265_exclusive_or_expression = 265, /* exclusive-or-expression  */
  YYSYMBOL_266_explicit_instantiation = 266, /* explicit-instantiation  */
  YYSYMBOL_267_explicit_specialization = 267, /* explicit-specialization  */
  YYSYMBOL_268_explicit_specifier = 268,   /* explicit-specifier  */
  YYSYMBOL_269_explicit_specifier_opt = 269, /* explicit-specifier-opt  */
  YYSYMBOL_270_export_declaration = 270,   /* export-declaration  */
  YYSYMBOL_271_expr_or_braced_init_list = 271, /* expr-or-braced-init-list  */
  YYSYMBOL_272_expr_or_braced_init_list_opt = 272, /* expr-or-braced-init-list-opt  */
  YYSYMBOL_expression = 273,               /* expression  */
  YYSYMBOL_274_expression_list = 274,      /* expression-list  */
  YYSYMBOL_275_expression_list_opt = 275,  /* expression-list-opt  */
  YYSYMBOL_276_expression_opt = 276,       /* expression-opt  */
  YYSYMBOL_277_expression_statement = 277, /* expression-statement  */
  YYSYMBOL_278_fold_expression = 278,      /* fold-expression  */
  YYSYMBOL_279_fold_operator = 279,        /* fold-operator  */
  YYSYMBOL_280_for_range_declaration = 280, /* for-range-declaration  */
  YYSYMBOL_281_for_range_initializer = 281, /* for-range-initializer  */
  YYSYMBOL_282_function_body = 282,        /* function-body  */
  YYSYMBOL_283_function_definition = 283,  /* function-definition  */
  YYSYMBOL_284_function_specifier = 284,   /* function-specifier  */
  YYSYMBOL_285_function_try_block = 285,   /* function-try-block  */
  YYSYMBOL_286_global_module_fragment = 286, /* global-module-fragment  */
  YYSYMBOL_287_global_module_fragment_opt = 287, /* global-module-fragment-opt  */
  YYSYMBOL_handler = 288,                  /* handler  */
  YYSYMBOL_289_handler_seq = 289,          /* handler-seq  */
  YYSYMBOL_290_handler_seq_opt = 290,      /* handler-seq-opt  */
  YYSYMBOL_291_header_name = 291,          /* header-name  */
  YYSYMBOL_292_id_expression = 292,        /* id-expression  */
  YYSYMBOL_293_identifier_list = 293,      /* identifier-list  */
  YYSYMBOL_294_inclusive_or_expression = 294, /* inclusive-or-expression  */
  YYSYMBOL_295_init_capture = 295,         /* init-capture  */
  YYSYMBOL_296_init_declarator = 296,      /* init-declarator  */
  YYSYMBOL_297_init_declarator_list = 297, /* init-declarator-list  */
  YYSYMBOL_298_init_declarator_list_opt = 298, /* init-declarator-list-opt  */
  YYSYMBOL_299_init_statement = 299,       /* init-statement  */
  YYSYMBOL_300_init_statement_opt = 300,   /* init-statement-opt  */
  YYSYMBOL_initializer = 301,              /* initializer  */
  YYSYMBOL_302_initializer_clause = 302,   /* initializer-clause  */
  YYSYMBOL_303_initializer_list = 303,     /* initializer-list  */
  YYSYMBOL_304_initializer_opt = 304,      /* initializer-opt  */
  YYSYMBOL_305_iteration_statement = 305,  /* iteration-statement  */
  YYSYMBOL_306_jump_statement = 306,       /* jump-statement  */
  YYSYMBOL_307_labeled_statement = 307,    /* labeled-statement  */
  YYSYMBOL_308_lambda_capture = 308,       /* lambda-capture  */
  YYSYMBOL_309_lambda_capture_opt = 309,   /* lambda-capture-opt  */
  YYSYMBOL_310_lambda_declarator = 310,    /* lambda-declarator  */
  YYSYMBOL_311_lambda_expression = 311,    /* lambda-expression  */
  YYSYMBOL_312_lambda_introducer = 312,    /* lambda-introducer  */
  YYSYMBOL_313_lambda_specifiers = 313,    /* lambda-specifiers  */
  YYSYMBOL_314_linkage_specification = 314, /* linkage-specification  */
  YYSYMBOL_315_literal_operator_id = 315,  /* literal-operator-id  */
  YYSYMBOL_316_logical_and_expression = 316, /* logical-and-expression  */
  YYSYMBOL_317_logical_or_expression = 317, /* logical-or-expression  */
  YYSYMBOL_318_mem_initializer = 318,      /* mem-initializer  */
  YYSYMBOL_319_mem_initializer_id = 319,   /* mem-initializer-id  */
  YYSYMBOL_320_mem_initializer_list = 320, /* mem-initializer-list  */
  YYSYMBOL_321_member_declaration = 321,   /* member-declaration  */
  YYSYMBOL_322_member_declarator = 322,    /* member-declarator  */
  YYSYMBOL_323_member_declarator_list = 323, /* member-declarator-list  */
  YYSYMBOL_324_member_declarator_list_opt = 324, /* member-declarator-list-opt  */
  YYSYMBOL_325_member_specification = 325, /* member-specification  */
  YYSYMBOL_326_member_specification_opt = 326, /* member-specification-opt  */
  YYSYMBOL_327_module_declaration = 327,   /* module-declaration  */
  YYSYMBOL_328_module_import_declaration = 328, /* module-import-declaration  */
  YYSYMBOL_329_module_name = 329,          /* module-name  */
  YYSYMBOL_330_module_name_qualifier = 330, /* module-name-qualifier  */
  YYSYMBOL_331_module_name_qualifier_opt = 331, /* module-name-qualifier-opt  */
  YYSYMBOL_332_module_partition = 332,     /* module-partition  */
  YYSYMBOL_333_module_partition_opt = 333, /* module-partition-opt  */
  YYSYMBOL_334_multiplicative_expression = 334, /* multiplicative-expression  */
  YYSYMBOL_335_named_namespace_definition = 335, /* named-namespace-definition  */
  YYSYMBOL_336_namespace_alias = 336,      /* namespace-alias  */
  YYSYMBOL_337_namespace_alias_definition = 337, /* namespace-alias-definition  */
  YYSYMBOL_338_namespace_body = 338,       /* namespace-body  */
  YYSYMBOL_339_namespace_definition = 339, /* namespace-definition  */
  YYSYMBOL_340_namespace_name = 340,       /* namespace-name  */
  YYSYMBOL_341_nested_name_specifier = 341, /* nested-name-specifier  */
  YYSYMBOL_342_nested_name_specifier_opt = 342, /* nested-name-specifier-opt  */
  YYSYMBOL_343_nested_namespace_definition = 343, /* nested-namespace-definition  */
  YYSYMBOL_344_nested_requirement = 344,   /* nested-requirement  */
  YYSYMBOL_345_new_declarator = 345,       /* new-declarator  */
  YYSYMBOL_346_new_declarator_opt = 346,   /* new-declarator-opt  */
  YYSYMBOL_347_new_expression = 347,       /* new-expression  */
  YYSYMBOL_348_new_initializer = 348,      /* new-initializer  */
  YYSYMBOL_349_new_initializer_opt = 349,  /* new-initializer-opt  */
  YYSYMBOL_350_new_placement = 350,        /* new-placement  */
  YYSYMBOL_351_new_placement_opt = 351,    /* new-placement-opt  */
  YYSYMBOL_352_new_type_id = 352,          /* new-type-id  */
  YYSYMBOL_353_nodeclspec_function_declaration = 353, /* nodeclspec-function-declaration  */
  YYSYMBOL_354_noexcept_expression = 354,  /* noexcept-expression  */
  YYSYMBOL_355_noexcept_specifier = 355,   /* noexcept-specifier  */
  YYSYMBOL_356_noexcept_specifier_opt = 356, /* noexcept-specifier-opt  */
  YYSYMBOL_357_noptr_abstract_declarator = 357, /* noptr-abstract-declarator  */
  YYSYMBOL_358_noptr_abstract_declarator_opt = 358, /* noptr-abstract-declarator-opt  */
  YYSYMBOL_359_noptr_abstract_pack_declarator = 359, /* noptr-abstract-pack-declarator  */
  YYSYMBOL_360_noptr_declarator = 360,     /* noptr-declarator  */
  YYSYMBOL_361_noptr_new_declarator = 361, /* noptr-new-declarator  */
  YYSYMBOL_362_opaque_enum_declaration = 362, /* opaque-enum-declaration  */
  YYSYMBOL_363_operator_function_id = 363, /* operator-function-id  */
  YYSYMBOL_364_overloadable_operator = 364, /* overloadable-operator  */
  YYSYMBOL_365_parameter_declaration = 365, /* parameter-declaration  */
  YYSYMBOL_366_parameter_declaration_clause = 366, /* parameter-declaration-clause  */
  YYSYMBOL_367_parameter_declaration_list = 367, /* parameter-declaration-list  */
  YYSYMBOL_368_parameter_declaration_list_opt = 368, /* parameter-declaration-list-opt  */
  YYSYMBOL_369_parameters_and_qualifiers = 369, /* parameters-and-qualifiers  */
  YYSYMBOL_370_placeholder_type_specifier = 370, /* placeholder-type-specifier  */
  YYSYMBOL_371_pm_expression = 371,        /* pm-expression  */
  YYSYMBOL_372_postfix_expression = 372,   /* postfix-expression  */
  YYSYMBOL_373_primary_expression = 373,   /* primary-expression  */
  YYSYMBOL_374_private_module_fragment = 374, /* private-module-fragment  */
  YYSYMBOL_375_private_module_fragment_opt = 375, /* private-module-fragment-opt  */
  YYSYMBOL_376_ptr_abstract_declarator = 376, /* ptr-abstract-declarator  */
  YYSYMBOL_377_ptr_abstract_declarator_opt = 377, /* ptr-abstract-declarator-opt  */
  YYSYMBOL_378_ptr_declarator = 378,       /* ptr-declarator  */
  YYSYMBOL_379_ptr_operator = 379,         /* ptr-operator  */
  YYSYMBOL_380_pure_specifier = 380,       /* pure-specifier  */
  YYSYMBOL_381_pure_specifier_opt = 381,   /* pure-specifier-opt  */
  YYSYMBOL_382_qualified_id = 382,         /* qualified-id  */
  YYSYMBOL_383_qualified_namespace_specifier = 383, /* qualified-namespace-specifier  */
  YYSYMBOL_384_ref_qualifier = 384,        /* ref-qualifier  */
  YYSYMBOL_385_ref_qualifier_opt = 385,    /* ref-qualifier-opt  */
  YYSYMBOL_386_relational_expression = 386, /* relational-expression  */
  YYSYMBOL_requirement = 387,              /* requirement  */
  YYSYMBOL_388_requirement_body = 388,     /* requirement-body  */
  YYSYMBOL_389_requirement_parameter_list = 389, /* requirement-parameter-list  */
  YYSYMBOL_390_requirement_parameter_list_opt = 390, /* requirement-parameter-list-opt  */
  YYSYMBOL_391_requirement_seq = 391,      /* requirement-seq  */
  YYSYMBOL_392_requires_clause = 392,      /* requires-clause  */
  YYSYMBOL_393_requires_clause_opt = 393,  /* requires-clause-opt  */
  YYSYMBOL_394_requires_expression = 394,  /* requires-expression  */
  YYSYMBOL_395_return_type_requirement = 395, /* return-type-requirement  */
  YYSYMBOL_396_return_type_requirement_opt = 396, /* return-type-requirement-opt  */
  YYSYMBOL_397_selection_statement = 397,  /* selection-statement  */
  YYSYMBOL_398_shift_expression = 398,     /* shift-expression  */
  YYSYMBOL_399_simple_capture = 399,       /* simple-capture  */
  YYSYMBOL_400_simple_declaration = 400,   /* simple-declaration  */
  YYSYMBOL_401_simple_requirement = 401,   /* simple-requirement  */
  YYSYMBOL_402_simple_template_id = 402,   /* simple-template-id  */
  YYSYMBOL_403_simple_type_specifier = 403, /* simple-type-specifier  */
  YYSYMBOL_statement = 404,                /* statement  */
  YYSYMBOL_405_statement_seq = 405,        /* statement-seq  */
  YYSYMBOL_406_statement_seq_opt = 406,    /* statement-seq-opt  */
  YYSYMBOL_407_static_assert_declaration = 407, /* static_assert-declaration  */
  YYSYMBOL_408_storage_class_specifier = 408, /* storage-class-specifier  */
  YYSYMBOL_409_string_literal = 409,       /* string-literal  */
  YYSYMBOL_410_template_argument = 410,    /* template-argument  */
  YYSYMBOL_411_template_argument_list = 411, /* template-argument-list  */
  YYSYMBOL_412_template_argument_list_opt = 412, /* template-argument-list-opt  */
  YYSYMBOL_413_template_declaration = 413, /* template-declaration  */
  YYSYMBOL_414_template_head = 414,        /* template-head  */
  YYSYMBOL_415_template_id = 415,          /* template-id  */
  YYSYMBOL_416_template_name = 416,        /* template-name  */
  YYSYMBOL_417_template_parameter = 417,   /* template-parameter  */
  YYSYMBOL_418_template_parameter_list = 418, /* template-parameter-list  */
  YYSYMBOL_419_throw_expression = 419,     /* throw-expression  */
  YYSYMBOL_420_trailing_return_type = 420, /* trailing-return-type  */
  YYSYMBOL_421_trailing_return_type_opt = 421, /* trailing-return-type-opt  */
  YYSYMBOL_422_translation_unit = 422,     /* translation-unit  */
  YYSYMBOL_423_try_block = 423,            /* try-block  */
  YYSYMBOL_424_type_constraint = 424,      /* type-constraint  */
  YYSYMBOL_425_type_constraint_opt = 425,  /* type-constraint-opt  */
  YYSYMBOL_426_type_id = 426,              /* type-id  */
  YYSYMBOL_427_type_name = 427,            /* type-name  */
  YYSYMBOL_428_type_parameter = 428,       /* type-parameter  */
  YYSYMBOL_429_type_parameter_key = 429,   /* type-parameter-key  */
  YYSYMBOL_430_type_requirement = 430,     /* type-requirement  */
  YYSYMBOL_431_type_specifier = 431,       /* type-specifier  */
  YYSYMBOL_432_type_specifier_seq = 432,   /* type-specifier-seq  */
  YYSYMBOL_433_typedef_name = 433,         /* typedef-name  */
  YYSYMBOL_434_typename_specifier = 434,   /* typename-specifier  */
  YYSYMBOL_435_ud_suffix = 435,            /* ud-suffix  */
  YYSYMBOL_436_unary_expression = 436,     /* unary-expression  */
  YYSYMBOL_437_unary_operator = 437,       /* unary-operator  */
  YYSYMBOL_438_unnamed_namespace_definition = 438, /* unnamed-namespace-definition  */
  YYSYMBOL_439_unqualified_id = 439,       /* unqualified-id  */
  YYSYMBOL_440_user_defined_string_literal = 440, /* user-defined-string-literal  */
  YYSYMBOL_441_using_declaration = 441,    /* using-declaration  */
  YYSYMBOL_442_using_declarator = 442,     /* using-declarator  */
  YYSYMBOL_443_using_declarator_list = 443, /* using-declarator-list  */
  YYSYMBOL_444_using_directive = 444,      /* using-directive  */
  YYSYMBOL_445_using_enum_declaration = 445, /* using-enum-declaration  */
  YYSYMBOL_446_virt_specifier = 446,       /* virt-specifier  */
  YYSYMBOL_447_virt_specifier_seq = 447,   /* virt-specifier-seq  */
  YYSYMBOL_448_virt_specifier_seq_opt = 448, /* virt-specifier-seq-opt  */
  YYSYMBOL_449_yield_expression = 449      /* yield-expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;



#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif
#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#ifdef __cplusplus
  typedef bool yybool;
# define yytrue true
# define yyfalse false
#else
  /* When we move to stdbool, get rid of the various casts to yybool.  */
  typedef signed char yybool;
# define yytrue 1
# define yyfalse 0
#endif

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify Clang and ICC.  */
# define YYLONGJMP(Env, Val)                    \
 do {                                           \
   longjmp (Env, Val);                          \
   YY_ASSERT (0);                               \
 } while (yyfalse)
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)))
#  define _Noreturn [[noreturn]]
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) \
            || (!defined __STRICT_ANSI__ \
                && (4 < __GNUC__ + (7 <= __GNUC_MINOR__) \
                    || (defined __apple_build_version__ \
                        ? 6000000 <= __apple_build_version__ \
                        : 3 < __clang_major__ + (5 <= __clang_minor__))))))
   /* _Noreturn works as-is.  */
# elif (2 < __GNUC__ + (8 <= __GNUC_MINOR__) || defined __clang__ \
        || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  208
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   17220

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  140
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  310
/* YYNRULES -- Number of rules.  */
#define YYNRULES  776
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1324
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 9
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   393

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
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

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   151,   151,   152,   155,   156,   159,   160,   163,   164,
     167,   168,   171,   172,   175,   176,   179,   180,   183,   184,
     187,   188,   191,   192,   195,   196,   199,   200,   203,   204,
     207,   208,   209,   212,   213,   216,   217,   220,   221,   222,
     225,   226,   229,   230,   231,   234,   237,   238,   241,   242,
     245,   248,   249,   250,   251,   254,   255,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   271,   274,
     277,   278,   281,   284,   285,   286,   287,   290,   293,   294,
     297,   300,   301,   304,   307,   308,   311,   312,   315,   318,
     319,   322,   325,   326,   327,   328,   331,   332,   335,   336,
     339,   342,   343,   346,   347,   348,   351,   352,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   366,   367,   370,
     371,   374,   375,   376,   379,   380,   383,   384,   387,   388,
     391,   392,   395,   396,   399,   402,   403,   404,   407,   408,
     411,   412,   413,   416,   419,   422,   423,   426,   427,   430,
     433,   436,   439,   442,   443,   446,   447,   450,   451,   454,
     457,   458,   461,   464,   465,   468,   469,   472,   475,   476,
     479,   482,   485,   488,   491,   492,   495,   496,   499,   502,
     503,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     517,   518,   521,   522,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   540,   541,   544,
     545,   548,   551,   552,   555,   558,   561,   564,   567,   568,
     569,   572,   573,   576,   577,   580,   583,   584,   587,   590,
     593,   594,   595,   596,   599,   602,   603,   606,   609,   610,
     613,   616,   619,   620,   623,   624,   625,   628,   631,   632,
     635,   638,   639,   642,   643,   646,   647,   650,   651,   652,
     655,   656,   657,   660,   661,   664,   667,   670,   671,   674,
     675,   678,   679,   680,   683,   684,   687,   688,   691,   692,
     695,   698,   699,   702,   703,   706,   709,   710,   711,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   748,   749,   752,   755,   756,   757,   758,   761,   762,
     765,   766,   769,   772,   775,   776,   779,   782,   785,   786,
     789,   792,   793,   796,   797,   800,   801,   804,   805,   808,
     809,   812,   813,   816,   817,   820,   821,   822,   825,   826,
     829,   830,   833,   834,   837,   838,   841,   842,   845,   846,
     847,   848,   851,   852,   853,   854,   855,   858,   859,   860,
     863,   864,   865,   868,   869,   872,   873,   876,   877,   880,
     883,   886,   887,   890,   891,   894,   895,   898,   899,   902,
     903,   906,   907,   910,   911,   914,   915,   916,   917,   918,
     919,   920,   921,   922,   923,   924,   927,   928,   929,   930,
     933,   934,   937,   938,   941,   942,   945,   946,   949,   952,
     953,   954,   957,   960,   961,   964,   965,   968,   971,   972,
     975,   976,   977,   978,   981,   984,   987,   990,   993,   994,
     995,   998,   999,  1002,  1003,  1004,  1005,  1006,  1007,  1010,
    1011,  1014,  1017,  1020,  1021,  1024,  1025,  1028,  1029,  1032,
    1033,  1036,  1037,  1040,  1043,  1044,  1047,  1050,  1053,  1056,
    1057,  1060,  1061,  1064,  1065,  1066,  1069,  1070,  1073,  1074,
    1075,  1078,  1079,  1080,  1081,  1084,  1085,  1088,  1091,  1092,
    1095,  1096,  1097,  1098,  1099,  1100,  1101,  1102,  1103,  1104,
    1105,  1106,  1107,  1108,  1109,  1110,  1111,  1112,  1113,  1114,
    1115,  1116,  1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,
    1125,  1126,  1127,  1128,  1129,  1130,  1131,  1132,  1133,  1134,
    1135,  1136,  1137,  1138,  1141,  1142,  1143,  1144,  1147,  1148,
    1151,  1152,  1155,  1156,  1159,  1162,  1163,  1166,  1167,  1168,
    1171,  1172,  1173,  1174,  1175,  1176,  1177,  1178,  1179,  1180,
    1181,  1182,  1183,  1184,  1185,  1186,  1187,  1190,  1191,  1192,
    1193,  1194,  1195,  1196,  1199,  1202,  1203,  1206,  1207,  1210,
    1211,  1214,  1215,  1218,  1219,  1220,  1221,  1224,  1227,  1228,
    1231,  1234,  1237,  1238,  1241,  1242,  1245,  1246,  1247,  1248,
    1249,  1252,  1253,  1254,  1255,  1258,  1261,  1264,  1265,  1268,
    1269,  1272,  1275,  1276,  1279,  1282,  1285,  1286,  1289,  1290,
    1291,  1292,  1293,  1296,  1297,  1298,  1301,  1302,  1303,  1304,
    1307,  1308,  1309,  1312,  1315,  1318,  1319,  1320,  1321,  1322,
    1323,  1324,  1325,  1326,  1327,  1328,  1329,  1330,  1331,  1332,
    1333,  1334,  1335,  1336,  1339,  1340,  1341,  1342,  1343,  1344,
    1345,  1346,  1349,  1350,  1353,  1354,  1357,  1358,  1361,  1362,
    1363,  1364,  1367,  1370,  1371,  1372,  1375,  1376,  1379,  1380,
    1383,  1384,  1387,  1390,  1391,  1392,  1395,  1398,  1399,  1402,
    1403,  1406,  1409,  1412,  1413,  1416,  1417,  1420,  1423,  1424,
    1427,  1428,  1431,  1434,  1435,  1436,  1439,  1440,  1441,  1442,
    1443,  1444,  1447,  1448,  1451,  1454,  1455,  1456,  1457,  1460,
    1461,  1464,  1465,  1468,  1469,  1472,  1475,  1476,  1477,  1478,
    1479,  1480,  1481,  1482,  1483,  1484,  1485,  1486,  1489,  1490,
    1491,  1492,  1493,  1494,  1497,  1500,  1501,  1502,  1503,  1504,
    1505,  1506,  1509,  1512,  1515,  1518,  1519,  1522,  1525,  1528,
    1529,  1532,  1533,  1536,  1537,  1540,  1541
};
#endif

#define YYPACT_NINF (-1096)
#define YYTABLE_NINF (-774)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    4900, -1096, 10096,    72,   194,    -6, -1096,    34,   342, -1096,
     204, -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096,
   -1096,   144,   421,   249,   345,    67,   288, -1096, -1096, -1096,
   -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096,
   -1096,   339, -1096, -1096, -1096,   379,   316, -1096, -1096, -1096,
   15902,  2327, -1096,   382,   387, -1096, -1096, -1096, 16347,  1027,
   -1096,  4812, -1096,   420, -1096, -1096, -1096, -1096, -1096,   394,
   -1096, -1096, -1096, -1096, -1096,   440,   446, -1096, -1096, -1096,
   -1096,   455, -1096, -1096, -1096, -1096, -1096, -1096,   484,   939,
     459, -1096, -1096, -1096, -1096, -1096,  3522, -1096, -1096, -1096,
   -1096, 10184,   447,   538, -1096,   263,   530, -1096, -1096, -1096,
   -1096, -1096, -1096, -1096, 10272, -1096,  4724, -1096, 10401,  1057,
     574,   989, -1096, -1096,   416,   342,   600,   631,    88,  8238,
   -1096, -1096,  1098,   625, 11474, 10489,   582,   657, -1096, -1096,
   -1096,   664,   699, -1096,   727,   718, 11511, 10929, -1096, -1096,
   -1096, -1096,   756, -1096, -1096, -1096,   660,   753,  1305, -1096,
     759,   768, -1096, -1096,    86, -1096, -1096,   463,  1543,   794,
   -1096,    94,   658, -1096,  1825,   544, -1096,   645,  1110,   817,
     464, -1096,   107, -1096,   839,   848,   108, -1096, -1096,   847,
    1052, -1096,   873, -1096,   822,  4988, -1096,   907,   933,   446,
    3657,   897,  1004, -1096,   940, -1096, -1096,  9197, -1096,  1067,
   -1096, -1096,  1060, 10577, -1096,  1025, -1096, -1096, 11017,   448,
     940, -1096,   346, -1096,   100,   732, -1096,   748,  1097, -1096,
     446,   558,    97, -1096, -1096,  1100, -1096,   248,  1102, -1096,
      56, -1096, -1096, -1096,  4323, -1096,   831, 11640,  5330, -1096,
    1109,   103, 11677, 11806,  1073,  1093,  1105,  1112,  1165, -1096,
    5712,  5204,  1168,  7242,   121,   336,  1185, -1096, -1096, -1096,
    1167, -1096, -1096, -1096,   648,  1149,   454, -1096, -1096,  1145,
   -1096, 15744,  1155,  1176,  1986,  1134,  1123, -1096, -1096,  1161,
    1058,   628, -1096, -1096,  1080, -1096,   810,  1235,   529, -1096,
   -1096,   541, -1096, 11843, -1096, -1096, -1096, -1096,  1237,   941,
   -1096, -1096,  1266,   816,   843,  1210, -1096,   959,   539,  1269,
     498, -1096,   714,   572,  1082,   542,  9842,   853,  1260,   821,
    1159,  1271,   846,   351,   140, -1096,  1177, -1096, -1096, -1096,
    1258,    54, -1096,   856, -1096,   415, 11142,  1234, -1096, -1096,
   -1096, -1096,   882,  1261, -1096, 15873, -1096, -1096, -1096, -1096,
   -1096, -1096,  1095, -1096,  1255, -1096, -1096, -1096, -1096, -1096,
   -1096, -1096, -1096,  1254,  1297,   446,  7279,  7408,  5583,   458,
   -1096, -1096, -1096, -1096, -1096,  1854, -1096, -1096,  1292, -1096,
    1315,  1274,  1107,  1278,  1316,   415,  1320,  1236, -1096, -1096,
    1317,  9326, -1096,  1307,   576, -1096,   206,   638,   631,  1329,
    1262, -1096,  2466,  1142,   697,  1231, -1096,  1298,  1242, -1096,
   -1096, 16518,   793,  1613,  1244, -1096,  1338,  1314,  1338,  1325,
    1337,  2981,   259, -1096, -1096,   631,  8275,  5218,  5726,   532,
    1323,   631, -1096, -1096,  1051,  1339,  1347, -1096,  1355,  1357,
   -1096, -1096,  1322, -1096, -1096, -1096, -1096, -1096, -1096, -1096,
    1330, -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096,
   -1096, -1096,  1326, -1096, -1096, -1096, -1096, -1096,  1328, -1096,
   -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096,
   -1096, -1096, -1096,  1333, -1096, -1096, -1096, -1096,  1303,  1362,
     755, -1096,   415, -1096,  1334,  3792, -1096, -1096, -1096, -1096,
   16661, 16684, 16782, 16805,  5454, -1096, -1096,  1359,  4455, -1096,
   16827, -1096, -1096, 11972,  1363, 12009, 12138, 12175, 12304, 12341,
   12470, 12507,  8404, -1096, 12636,   415,  1623, -1096,  1371,  1351,
   -1096,  9455, 12673, -1096, -1096, -1096, -1096, -1096, -1096, -1096,
   -1096, -1096, -1096, -1096,  8441, 12802,  7445, 12839, 12968, 13005,
     172,  9584, 13134, 13171,  5841,  5878,  1370,  1370, -1096, -1096,
   13300, 13337, 13466, 13503, 13632, 13669,  6007, -1096,  6136, -1096,
   -1096, -1096, -1096, -1096, -1096, -1096, -1096,  1383,  1373, -1096,
    1391,  1159,  1376,  1360, 10665, -1096, -1096,  1383,   631,   631,
   -1096, -1096,  1379,  1399, -1096,  1402,   964, -1096, -1096,  1403,
   -1096, -1096,   223, -1096,    45,   223,   450, -1096,  1386,  1411,
     631, -1096,  1387, 16926, -1096,  1462,   809,  1248, -1096, -1096,
     708,   631,  1414, -1096, -1096,  1385,   945, -1096, -1096,  1417,
   -1096, -1096, -1096,  1404,   631,  1427, -1096,  1426, -1096,  1432,
     585,  1435,  4587,  1390,  1384, -1096, -1096,   876, 13798,   341,
   -1096, 16948, -1096,  1416, -1096, -1096,  1419,  1406,  1407, -1096,
   -1096, -1096,  1380, 13835,  1354, -1096,  9971, -1096,   935, -1096,
   -1096,   895, -1096, -1096, -1096,   891,  1000,  1026, -1096,  1393,
    1433, -1096,  1549,  1338,  1431, -1096, -1096, -1096, -1096, 16971,
   -1096, 17069,  1437, 10314,  1735, -1096,   568, -1096, -1096, -1096,
   -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096,
   -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096,
   -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096, 13964,
    1454, -1096, 14001, -1096,   631,  1461, -1096,   269,   277,   518,
   -1096, -1096, -1096,  1421,  1436,  9713,  3927, -1096, -1096, -1096,
    1171,  1455,  7574, -1096,  1412,  1415,  1418,  1424,   614,  1465,
    1481,  1466,  1471,   366, -1096,  7611, -1096, 16639,  1134,  1134,
     648,   810,  1156,  1180,  1185, -1096,  1149,  1472,   195,  1474,
   -1096, -1096, 14624, -1096,  1428,  1145,   255,  1176, -1096,  1058,
    1058,  1058,  1430,  1491, -1096,  1438, -1096, -1096, -1096,  1477,
    1468,    86,    86,  1167,  1167,  1167,  1167,   336,   336,  1479,
    1483,  1488, -1096, -1096,  1469,  1493, -1096, 10753, -1096,  1473,
    1497,  1496,  1499,  1500, -1096,  1485,  1516,  1524,   303,  1519,
   -1096, -1096,  1506, -1096, -1096,   329,   214,   735,  1495, -1096,
    1351, -1096, -1096, -1096, -1096, -1096,  1116,  1528, -1096, -1096,
   -1096, -1096,   261, -1096,   652, -1096,  1532,  1514,  1278,  1222,
    1525, -1096,   574,  1192,  1538, -1096, -1096, -1096, -1096, -1096,
    7740, -1096,  1486,  1513, -1096,  6173,  1517,   458,   458, -1096,
   -1096, -1096, -1096, -1096,  1475, -1096, -1096,  1548, -1096,  1554,
    1526,  1577,   631,  1000,  1560,   886, 11179,  1234, 11308, -1096,
   -1096, -1096, -1096, -1096,   129,  1780,  1571,  1573,  1629, -1096,
      86, -1096, -1096, -1096,   967, -1096, -1096, -1096,  1574,  4601,
   -1096, -1096,   269, -1096,  1079,  1357, -1096, -1096, -1096,  1531,
   -1096, -1096,   758,  8570, 11345, -1096,   676, -1096, -1096,  6302,
   -1096, -1096,  1580,  1584,  1585,  1589, -1096, -1096,  1590, -1096,
   -1096, 14130,  1595, 17092,   702,   536, 16371,  1244, 14167,   580,
    1608, 16500,  2807, -1096, -1096, -1096, -1096, 14712,  1578, -1096,
    8607, -1096, -1096, -1096, -1096, -1096, -1096, -1096, 10841,  1603,
    1587, -1096, -1096, -1096, -1096, -1096, -1096, -1096,  1402,  1592,
    1622,   972, -1096, -1096,  1631,   269,  1616,  1618,   275, -1096,
     631,   761,  1640,  1351, -1096,   334, -1096, -1096,   980,   824,
   -1096, -1096,   358,   393,  1544, -1096, -1096,   862, -1096,   868,
    1636, -1096,   631,   631, -1096, -1096, -1096, -1096,  1591,   446,
     966,  1624, -1096, -1096, -1096, -1096, -1096,  1609, -1096,  1617,
     946,  7777,  7906, -1096, -1096, -1096, 14296, -1096, -1096,  1195,
    1538,   176,  3121,  1625, -1096, -1096, -1096,  8736,  8773,  8902,
    8939, -1096, -1096, -1096,  1632,  6431, -1096, -1096, -1096,  7943,
   -1096, -1096,  1621,  1035,  1244, 16031,  1637, -1096, -1096,   727,
     117,   820,  6468,  1626,  1351,  1639, 14798,  1641,  1642,  1647,
    6597,  1655, 14333,   252,  1648, -1096, -1096,   334,  1670,  1651,
   -1096, -1096, -1096, -1096, -1096, -1096, -1096, -1096,  1633, -1096,
   -1096,  1671, -1096, -1096, -1096,   972,   972,   972, -1096, -1096,
     972,  1652, -1096,  1656, -1096, -1096, -1096,  6726, -1096,   870,
    1594,  1371, 14462,    23, -1096, -1096,   266, -1096, -1096, -1096,
   -1096, -1096, -1096,  1660, -1096,  5076, -1096, -1096, -1096, -1096,
    1661,  1665,  1680, -1096,   636,   653,   656,   663,   806,  1667,
    1654, 14499, -1096, -1096,  1351, -1096, 14884, -1096, -1096,  1668,
    1670, 14970,  1594,  6855,  1606,  4191, -1096, -1096,  1673,  1674,
    1657, -1096, -1096,  1675,  1638,  3332, -1096, -1096, -1096,  1676,
    1664,  1662, -1096, -1096, -1096,  1679,   631,  1683,  1594, -1096,
   -1096,   585, -1096, -1096,  1687, -1096, -1096,  1005,  1017, -1096,
   -1096, -1096,  1646, -1096, -1096, -1096, -1096, -1096, -1096, -1096,
    1672, -1096, -1096, -1096, -1096, -1096, 16060,  1688,  1670,  1697,
    1694, -1096, 16189, -1096,  2952, -1096, -1096, -1096, -1096, 15056,
    4058,  1351, -1096,  6984, -1096, -1096, -1096, -1096, -1096,  1709,
   -1096, -1096,  1033, -1096,  1586,   973, -1096,  1700,  1061, -1096,
    1859, 15142,  9068, -1096,  1703, 16218,  1691, -1096,  7113,  1643,
    1702, -1096,  1946,  1707, -1096, -1096,  1104,   585, -1096,   707,
    8072,  1788,  8109,  1711, 15228, 15314,  1727,  1351, -1096,  1712,
    1715,  1704,  1706, -1096,  1710, -1096,  1724, 15400, -1096, -1096,
   -1096, -1096, -1096, -1096, 15486,  1403, 15572,  1644, -1096,   370,
   -1096, 15658, -1096, -1096
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      84,   186,    84,   680,   138,   189,   453,     0,     0,   330,
      26,   234,   135,   136,   137,   176,   177,   184,   185,   187,
     188,     0,   244,   268,     0,     0,     0,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,     0,   678,   679,   681,     0,     0,   115,   109,   205,
      85,     6,   194,     0,    84,   713,   219,   728,    84,     6,
     207,    84,   705,   647,   198,   182,   233,   726,   204,     0,
      84,   714,   220,   199,   200,   331,     0,   201,   196,   183,
     335,     8,   202,   206,   448,   452,   110,   203,     0,     0,
       0,   450,   195,   116,   648,   108,   139,   725,   114,   181,
     197,    84,     0,     0,   711,     0,     0,   218,   715,   727,
     449,   111,   113,   112,    84,   271,   206,   682,    84,    84,
       0,     0,    84,    27,     0,     0,     0,     6,     0,    20,
     245,   246,     0,     0,    20,    84,     0,     0,   340,    84,
      84,     0,     0,    84,   235,     0,    20,    84,    84,   680,
     189,    72,     6,    84,   331,     7,     0,     0,     6,    84,
       0,     0,    84,    84,     0,    82,    83,   193,     6,     0,
      84,     0,   591,   212,     6,    84,    85,   101,     0,   231,
     190,   191,   366,   351,   354,     0,     0,   208,   456,   255,
     242,   696,     0,     9,     0,    84,   455,     0,    23,     0,
     138,   708,   649,   645,     0,   691,   690,    20,     1,     0,
     555,   454,     0,    84,   392,     0,   723,   722,    84,    24,
       0,   698,     0,   699,     0,     6,   697,     6,   733,    23,
       0,     0,     0,   768,   765,    26,   763,   755,     0,   752,
     453,   578,   750,   751,    20,   749,   383,    20,   710,   748,
     617,   753,    20,    20,     0,     0,     0,     0,     0,   577,
      55,    20,     0,    20,     0,   633,   263,   278,   740,   557,
     606,    51,   757,   747,    48,   345,     0,   582,   580,   395,
     581,   192,   758,   397,   157,    42,    22,   746,   745,   756,
     440,   736,   560,   342,   257,   583,   147,   693,     0,   761,
      53,     0,   130,    20,   341,    52,   229,   159,     0,   157,
     333,   433,     0,     0,     0,     0,   432,     0,     0,    14,
       0,   265,     0,     0,   242,     0,    20,   591,     0,   594,
       0,    89,   595,   179,     0,   214,    22,   602,   603,   605,
       0,   773,   477,   491,    84,    84,    20,   492,   592,    37,
      38,    39,   244,     0,   413,   192,   412,   415,    84,   411,
     270,   406,    84,   427,     0,   414,   409,   410,   407,   408,
      84,   102,   133,   145,     0,     0,    20,    20,    20,     0,
     360,   118,   367,   349,   350,     6,   640,    84,   251,   253,
     256,     0,   238,   238,     0,    84,     0,   585,   457,   646,
       0,    20,   152,     0,    84,   683,   580,   725,     6,   689,
       0,   684,    84,    33,   727,     0,   272,     0,    84,   266,
      25,   710,     6,    84,   622,    13,    12,     0,    12,     0,
     734,   710,   755,   693,   764,     6,    20,     0,   557,     0,
       0,     6,   638,   127,   126,     0,     0,   128,   380,   381,
     125,   384,     0,   124,    91,   543,   510,   511,   512,   519,
       0,   517,   522,   523,   524,   520,   521,   540,   539,   526,
     525,   527,     0,   504,   534,   535,   536,   507,   501,   528,
     529,   516,   530,   531,   513,   514,   515,   518,   537,   538,
     532,   533,   508,   500,   509,   541,   542,   170,   498,     0,
     168,   394,    84,   618,     0,   138,   760,   759,   738,   739,
     710,   710,   710,   710,    20,    56,   701,     0,    20,   741,
     710,   775,   776,    20,   474,    20,    20,    20,    20,    20,
      20,    20,    20,   215,    20,    84,    84,   193,   481,     0,
     385,    20,    20,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    20,    20,    20,    20,    20,    20,
       0,    20,    20,    20,    20,    20,    22,    22,   569,   570,
      20,    20,    20,    20,    20,    20,    20,   565,    20,   566,
     737,   267,   437,   431,   429,   434,   430,     0,     0,    15,
       0,     0,     0,     0,    84,   641,   243,     0,     6,     6,
     492,   494,     0,     0,    90,    78,   179,   180,   593,     0,
     770,   769,   174,   771,   774,   174,   179,   550,     0,   553,
       6,   161,     0,   710,   213,    84,    12,     0,   424,   143,
       0,     6,   100,   144,   146,   101,   230,   134,   139,   232,
     362,   363,   117,     0,     6,   280,   123,     0,   226,     2,
       0,     2,    20,   165,   621,   163,   352,   250,    20,     0,
     248,   710,   239,     0,   240,   241,     0,   438,     0,   586,
     706,   458,     0,    20,     0,   686,    20,   644,   729,   730,
     490,   486,    34,   712,    32,   587,     0,    35,    30,   589,
       0,   391,    33,    12,     0,   700,   623,   692,   718,   710,
     716,   710,     0,    84,    33,   766,     0,   318,   289,   290,
     309,   295,   301,   302,   303,   299,   300,   308,   307,   305,
     304,   306,   316,   317,   310,   311,   294,   312,   313,   291,
     292,   293,   296,   297,   298,   314,   315,   319,   320,    20,
       0,   579,    20,   636,     6,     0,   639,     0,     0,     0,
     389,   505,   506,     0,     0,    20,   393,   762,   169,   171,
     168,     0,    20,   624,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   223,    20,   475,   710,    43,    44,
      49,   148,   258,   259,   264,   279,   346,     0,     0,   480,
     482,    84,    84,   387,     0,   396,     0,   398,    54,   441,
     442,   443,   755,   693,   600,     0,   558,   559,   282,     0,
       0,     0,     0,   607,   608,   609,   610,   634,   635,     0,
       0,   445,   601,   446,   236,     0,   676,    84,   447,     0,
       0,     0,     0,     0,    77,     0,    86,    79,     0,     0,
      73,    87,    70,   178,   343,     0,     0,     0,   174,   175,
       0,   329,   325,   772,   328,   596,   179,    84,   548,    84,
     702,   425,    13,    84,   119,   420,   423,     0,   238,    40,
      28,   103,   142,     0,     0,   106,    84,   132,   361,   364,
      20,   228,     3,     0,   225,    20,     0,     0,     0,   252,
     249,   254,   237,   497,     0,   439,    84,     0,   709,     0,
     162,     0,     6,     0,     0,   486,    20,   483,    20,   488,
      36,   590,   588,   556,   490,     6,   546,   544,   589,   720,
       0,   719,   717,    45,   221,   222,   217,   478,     0,     0,
     131,   637,     0,   347,     0,   382,   129,   503,   502,     0,
     167,   616,     0,    20,    20,   613,     0,   614,   619,    20,
     611,   612,     0,     0,     0,     0,   575,   576,     0,   742,
     744,    20,     0,   710,   471,   465,   192,   622,    20,   703,
       0,    85,    20,   211,   670,   664,   672,    84,     0,   695,
      20,   694,   562,   561,   568,   567,   563,   564,    84,     0,
       0,   754,   767,    47,    46,    50,    88,    75,    78,     0,
       0,    98,    71,    68,     0,     0,     0,     0,   402,   401,
       6,     0,   173,     0,   324,   604,   549,   551,   493,     0,
     120,   418,   417,   598,    12,   405,    41,     0,    29,     0,
       0,   140,     6,     6,   227,   122,   121,   164,   166,     0,
       0,     0,   151,   230,   687,   483,   485,     0,    31,     0,
       6,    20,    20,   721,   287,   286,    20,   348,   499,     0,
       0,     0,    84,     0,   643,   615,   620,    20,    20,    20,
      20,   743,   224,   473,     0,    20,   470,   472,   467,    20,
     466,   476,   464,   465,   622,   192,     0,   704,   390,     0,
     755,   383,    20,     0,     0,     0,    84,     0,     0,     0,
      20,     0,    20,     4,     0,   666,   375,   604,   284,     0,
     665,   668,   669,   667,   671,   673,   150,   158,     0,   677,
     444,    79,    74,    81,    80,    98,    98,    98,    95,    96,
      99,     0,   344,     0,   327,   326,   403,    20,   400,     0,
       0,   481,    20,     0,   599,   416,   119,   421,   104,   105,
     141,   107,   365,     0,   428,    84,    84,    84,   547,   545,
       0,     0,    16,   462,     0,     0,     0,     0,   471,     0,
       0,    20,   463,   386,     0,   479,    84,   275,   277,     0,
     274,    84,     0,    84,     0,    20,   372,   373,     0,     0,
       0,     5,    19,     0,     0,    20,   285,   461,    76,     0,
       0,     0,    97,    69,   642,     0,     6,     0,   338,   332,
      84,   119,   597,   417,   598,   216,   584,   484,   489,   288,
     724,    17,   626,   571,   572,   573,   574,   468,   469,    84,
       0,   388,   377,   172,   379,   707,   710,     0,   153,     0,
       0,   357,   710,   355,    84,    84,   356,   374,   376,    84,
      20,     0,   359,    84,    92,    93,    94,   399,   404,    84,
     339,   337,   554,   419,     0,     0,   627,     0,   495,    84,
       6,    84,    20,   156,     0,   710,     0,   378,    84,   630,
       0,   262,   710,     0,   625,   149,   496,     0,   368,     0,
      20,     6,    20,     0,    84,    84,     6,     0,   154,     0,
       0,    84,    84,   321,     0,   323,     0,    84,   631,   632,
     261,   260,   336,   369,    84,     0,    84,   628,   370,     0,
     371,    84,   322,   629
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1096,  1101, -1096,   968, -1096, -1096,  -187,  1439, -1096, -1096,
   -1096,  -102, -1096, -1096, -1096, -1096,  -675,  -617,  -561, -1096,
     613,  -170, -1096,  1228, -1096,    82, -1096, -1096,   762, -1096,
   -1096, -1096, -1096,  1163,   764, -1096, -1096,    31,  1420, -1096,
   -1096, -1096, -1096,   640, -1096,   141, -1096,  1136,   896, -1096,
    -679,  -639,   562,  -167,  1028, -1096,  1031,  -165, -1096, -1096,
    1208,  1400,  -593, -1096, -1096, -1096,   852, -1096,  -811, -1096,
    1572,  -601, -1096,   403,   -93,   296,   840,   898, -1096, -1096,
    1023, -1096, -1096, -1096, -1096,   947,  -313, -1096,  -535, -1096,
     -44,    -4,   225, -1096,     1, -1096,   -48, -1096,  1268,  -147,
   -1096,  -365,  1084, -1096,   912, -1096, -1096,  1787, -1096,  -133,
   -1096, -1096,  1405, -1096,  -267, -1096,   166, -1096, -1096, -1096,
    1144, -1096, -1096,  1282, -1096,  1267, -1096,  -132,    25, -1096,
   -1096,   513,   711,   272,  -325,  -530, -1006,   841, -1096,  -414,
   -1096, -1096,  -571,  -130, -1096, -1096, -1096, -1096, -1096,  -629,
   -1096, -1096,   -67,   497,  1275, -1096,  1434,  1666, -1096,   637,
    -972,  -682,  -346,  1443, -1096, -1096, -1096, -1096, -1096, -1096,
     738, -1096, -1096,   859, -1096, -1096,  1272,   130,   687, -1096,
   -1096, -1096,   805, -1096, -1096, -1096,  -295, -1096,  1833,  1440,
   -1096,  1708,  1172, -1096,   719, -1096, -1096, -1096,  -743, -1096,
    -422,     0,     4, -1096, -1096, -1096,   757, -1096, -1096,   673,
   -1096, -1096, -1096, -1096, -1096, -1096,   716, -1096,  -404, -1096,
    -142, -1096,  -126, -1096, -1096,   -83,  -268, -1096, -1096,  -304,
   -1096,   726, -1096,  -358, -1096, -1096,  -611, -1096,  -140,  -314,
   -1096, -1096, -1096, -1096, -1096,  -952,   729,   909, -1096, -1096,
   -1096, -1096,  -178,  -887, -1096, -1096, -1096, -1096,  1332, -1096,
   -1095, -1096,  2232,   201,  -514, -1096, -1096,  -120, -1096,  -186,
    1189, -1096,  -284,  -107,   -59, -1096,   992,  1445,  1340, -1096,
    -761, -1096, -1096, -1096,  -106, -1096,   425,   -80, -1096,  1650,
   -1096,  1336,  -236, -1096,   953, -1096,  1600, -1096, -1096,  -176,
   -1096,  -101,  1653, -1096, -1096,   -92,  1259, -1096,  -800, -1096
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   883,  1193,   164,   194,    45,   863,    46,  1222,  1194,
     264,   199,   421,   125,  1029,   682,   683,   684,   353,  1027,
     265,    47,   165,   266,    48,   267,   516,   556,   837,  1002,
    1003,    49,   838,   839,   840,   841,   166,   176,    51,   842,
     604,   605,   268,  1129,  1130,  1131,   371,   372,   631,   632,
      52,   380,  1021,   641,   447,   448,   449,   269,    53,   373,
      54,    55,  1009,    56,   634,   635,   270,   945,   793,   205,
     201,  1237,  1274,   271,   405,   622,   899,   653,   654,   758,
     759,   272,   497,  1106,   849,   850,    57,   607,   608,    58,
      59,   538,    60,    61,   828,   974,   182,   170,    63,    64,
     702,    65,   704,   273,   648,   649,   650,    66,    67,    68,
     145,   662,   663,    69,   392,   393,    70,    71,    72,   388,
     389,   390,   391,   274,  1283,   275,    73,    74,   154,    76,
      77,  1178,  1179,  1108,   808,   809,  1109,  1243,   277,   739,
    1276,  1306,   851,    78,    79,   852,    80,    81,  1208,  1209,
    1261,   139,   278,   845,   279,   450,   183,   184,   185,  1252,
    1245,   382,   644,   645,   383,  1111,  1112,   975,   451,   452,
     539,   280,   281,   540,    82,   282,   283,   284,  1010,  1011,
    1012,   362,   865,   866,   867,   363,   364,   195,    83,   140,
     141,   142,   143,   896,   285,    84,    85,    86,   829,    87,
      88,   286,    90,    91,   947,  1080,  1081,   287,  1077,  1078,
     776,   777,   964,    92,   288,   790,   791,   685,   903,   687,
     172,  1082,    93,   289,   498,   617,   761,   619,   620,   347,
      94,   290,   291,   292,   669,   670,   688,   912,   173,   174,
    1144,  1145,   293,   588,   339,   340,   294,   948,   763,   503,
     504,   949,   696,   697,   295,  1266,  1267,  1113,   296,   453,
      95,   950,    96,   298,   976,   977,   978,    98,    99,   118,
     408,   409,   410,   100,   101,   299,   102,   223,   224,   300,
     624,  1088,   103,  1114,   104,   105,   411,   106,   226,   227,
     951,   107,   413,   108,   301,   757,   302,   303,   110,   304,
     501,   111,   127,   128,   112,   113,   613,   614,   615,   305
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      89,    62,    89,   169,   384,   354,   152,   167,   121,   686,
     203,   884,   500,   225,   181,   381,   327,   916,   328,   230,
     606,   655,   132,   600,   740,    75,   133,    75,   356,   926,
     642,    50,   327,    50,   348,   810,   221,   871,   427,  1014,
     429,   308,   357,   359,   854,   361,   819,   168,   820,   365,
      89,   171,   643,   320,   178,   366,   434,   596,    89,   186,
     222,    89,   499,  1141,  1023,   933,   703,   628,   367,   870,
     904,   843,   910,  1170,   368,   136,   375,   618,   911,   438,
    1085,   855,   454,   369,   990,   -11,    75,   508,   509,  1006,
    1246,   235,    50,   -15,   237,   610,   522,   335,     6,   689,
    1246,    89,   197,   423,   610,   432,   119,   198,  1007,   137,
     229,   505,   236,   973,    89,   212,   197,   672,    89,   132,
     341,   229,   -21,   220,   132,   232,    75,   666,   133,  -138,
     376,   577,    50,   377,   579,    89,   310,    -7,   580,    75,
     406,    -7,   248,    75,   602,    50,  1048,    89,   505,    50,
      21,   378,   186,   248,   379,  1246,   138,   -21,   186,  1176,
      75,  1105,  1212,   612,   336,   822,    50,    21,   186,   344,
     129,   507,    75,   424,   186,   830,   679,   132,    50,   532,
     802,   374,   611,   344,   560,    -7,   760,   523,   334,  -696,
     132,   611,   354,    -7,   394,    89,   397,  1173,   423,   334,
     360,    97,  1140,    97,    21,   117,  -138,   379,  1087,  -580,
     798,  -580,   122,    89,   417,   356,   153,   153,    89,   123,
      75,  1162,   524,  1253,   153,  1020,    50,   115,   248,   357,
     359,    -7,   361,   598,   560,   694,   365,   537,    75,   698,
     577,   700,   366,    75,    50,  1118,   846,   579,    89,    50,
    1057,    97,    97,   621,   507,   367,  1191,   794,   532,    97,
    -138,   368,    97,  1192,   309,   847,  -696,   787,   967,  -119,
     369,   398,   124,  -138,   334,   134,   309,   805,  1278,  -580,
    1006,    89,   155,  1182,  1300,   441,   187,  -138,   686,   376,
    -119,   442,   376,   606,   911,   377,   144,   980,   973,  1007,
     686,   910,    97,   606,   904,   934,   998,   911,  1026,   848,
     378,   537,   225,   378,   -18,    97,   610,   225,   132,    97,
    -696,  1015,   587,  1133,   132,   132,   206,   209,   394,   597,
     861,  -696,  1004,  -696,   406,   221,    97,   309,   703,  1304,
     221,   358,   515,   214,   999,   521,  1214,  -696,    97,   387,
       4,   626,   445,   438,     6,    89,   525,   526,   774,   222,
     868,   216,   337,  1231,   222,   146,   379,   905,   210,   135,
    1005,   155,   321,  1004,   441,   689,   157,   692,   918,   336,
     442,   846,   907,   909,   804,   186,   890,   360,   338,   443,
     689,   161,   147,   217,   444,     4,    97,   806,   807,     6,
     847,   276,  -174,   611,   178,   825,    21,   961,   407,    15,
      16,  1322,    89,   186,    97,   148,  1143,   973,   132,    97,
    -552,    89,   220,   132,     4,   892,   175,   220,     6,     4,
     225,    89,   188,     6,  1148,   847,  1149,  -174,   189,   911,
    1279,   445,  -552,   419,   848,   407,   760,   153,  -270,    97,
     962,    21,   854,   221,   191,   354,   309,   532,   640,   640,
     640,   193,   420,  1115,   811,   812,   237,   200,   130,   131,
       6,   939,   241,   157,   406,   157,   309,   222,   356,   848,
      21,   533,    97,   381,   652,    21,  1312,   438,   161,   157,
     161,   337,   357,   359,   406,   361,   196,   973,   246,   365,
     186,   591,   973,  -604,   161,   366,   919,  1020,    15,    16,
      89,    89,    89,    89,   248,  1056,   439,   338,   367,   207,
      89,   153,    21,   155,   368,   592,   441,   407,   358,  1037,
     655,   309,   442,   369,  1033,   532,   132,   307,   208,  1033,
     220,   965,   211,   606,     4,  1169,   934,     4,     6,   307,
       4,     6,   -84,  1235,     6,   576,    97,     7,   250,   741,
     334,   349,   350,   351,   159,   889,    10,   578,    11,   259,
     973,   532,  1020,   378,   928,   385,  1079,   930,   864,  1260,
     381,   431,  1184,   157,     4,   378,   188,   153,     6,  -426,
     162,   905,   973,   445,    89,   927,   595,   153,   161,  1045,
      21,  1050,   407,    21,   918,   157,    21,  1205,   376,   406,
     307,   163,   352,    97,   785,   973,   973,   532,    23,    75,
     161,  1310,    97,    89,   233,    50,   186,   132,   973,   378,
     873,   394,    97,   306,   874,   973,   155,   973,   640,   532,
      21,   956,   973,  1273,   917,   623,   640,   640,  1298,   311,
     360,  1083,  1280,     4,   564,  -119,   532,     6,   640,   532,
     640,    89,  1232,  1223,   576,   136,   532,  1234,   565,   440,
     157,   309,   315,    41,   132,   376,  -119,  1293,   901,   532,
    1224,   186,   378,  1225,   345,   161,  1022,   370,   406,   186,
    1226,   309,   186,   566,  -773,   567,   378,   381,   346,    89,
    1064,    89,   610,    89,   186,  1158,  1159,   316,   706,    21,
     532,    97,    97,    97,    97,   407,     4,   529,   530,   407,
       6,    97,   593,   578,   869,   349,   350,   351,  1075,   307,
     319,   568,   569,   157,  1299,  1277,  1050,   155,  -773,   157,
     425,   378,   407,  1008,   984,   985,   378,     6,   161,   307,
     318,   599,   379,   155,   161,   -12,   425,  1288,   594,   325,
     186,   155,   407,     4,     4,   381,     4,     6,     6,  1083,
       6,   -12,    21,   327,  1017,   328,   327,    89,   348,   326,
    1308,  1309,   158,   159,   159,   330,   768,  1137,   309,   611,
     439,   358,    89,  1317,  1031,    97,  1072,  1076,   155,    21,
    1318,   425,  1320,   900,   307,   378,   309,  1323,   331,   162,
     162,   336,   336,   621,   155,   621,   -12,   862,   342,    21,
      21,     6,    21,   971,    97,   155,   796,    89,   441,  -139,
     163,   163,  1075,  -422,   442,   158,   155,   159,   381,   441,
     583,   157,   385,   443,  1138,   442,   157,   873,   444,   157,
     378,   874,    75,  1053,   443,   387,   161,   640,    50,   444,
     331,   161,    97,   162,   161,    -6,  1142,   584,   157,   153,
       4,   157,   386,    21,     6,  1086,     4,   407,  1008,   345,
       6,   157,     6,   161,   163,   309,   161,   336,   336,   574,
     575,  1160,   686,   346,     4,   445,   161,   438,     6,   395,
      97,   157,    97,     4,    97,   186,   445,     6,   327,   396,
     348,    -6,   681,  -589,   159,   186,   161,  -487,   186,   398,
     336,   681,   537,   159,   439,  1177,    21,   152,  1107,   130,
     131,  -487,    21,  1177,    21,   764,   765,   766,   767,   769,
     162,   191,  1059,   771,   307,   772,  1060,   197,   402,   162,
      21,   155,   198,   109,     4,   109,   407,   230,     6,    21,
     157,   163,   640,    89,   307,   186,    89,   640,  1213,   401,
     163,    89,   915,  -589,   159,   161,  1146,    89,    97,   381,
    1161,     4,   918,   586,   157,     6,  -486,  -138,    89,  -138,
    1154,   157,   157,    97,   554,  -138,   555,   228,  1125,   161,
     162,  1076,   229,   109,   109,   157,   161,   161,   971,  1190,
      21,   109,  1126,    75,   109,  1241,  1127,  -696,  1128,    50,
     161,   163,    15,    16,   186,  1241,   345,   873,    97,   873,
     157,   874,   155,   874,   946,     4,   309,    21,   309,     6,
     906,   537,   157,     4,   381,   161,  1296,     6,   860,  1211,
     186,  -353,   345,   158,   109,   159,   155,   161,   157,   744,
       4,   307,  1117,   159,     6,     4,   908,   109,   192,     6,
     215,   109,   216,   161,   900,  1079,   207,   157,  1230,   307,
    1241,   162,   202,   186,   155,    89,   157,   744,   109,   162,
       4,    21,   161,   415,     6,   234,    89,   418,   309,    21,
     109,   161,   163,   -84,   217,   416,   197,   157,     7,   398,
     163,   229,   349,   350,   351,   123,    21,    10,   197,    11,
     381,    21,   161,   229,   921,  1177,   922,   971,   436,   157,
     218,   197,   153,   640,   640,   502,   198,   153,   153,   873,
    -426,   562,   563,   874,   161,   510,    21,   680,   109,   661,
       4,  -243,   570,   571,     6,    89,  1216,   640,   307,  1284,
     414,   572,   573,   352,    97,   511,   109,    97,   681,    23,
     159,   109,    97,   407,    15,    16,    89,   512,    97,     4,
      75,    89,  -486,     6,   513,   197,    50,   817,   818,    97,
     229,   514,  1270,   426,   520,   428,   162,   414,  1107,   159,
     197,   109,  1047,   228,  1049,  1030,    21,   971,   229,   557,
     558,   559,   971,   527,   446,  1061,   971,   163,   528,   640,
     531,   946,  1287,   534,    41,   162,   971,   541,   570,   571,
     542,  1291,   309,   561,   109,    21,    89,   572,   573,   349,
     350,   351,    89,  1303,   778,   779,   163,  -139,  1311,    89,
       4,   153,   570,   571,     6,   215,     4,   216,   782,   783,
       6,   572,   573,   407,   581,   132,  1199,  1200,  1201,   220,
     186,    89,   309,   157,   582,    89,   120,   585,   589,   414,
     971,   971,    89,   799,   800,   801,    97,   601,   161,   217,
     120,   186,   117,   603,    89,    89,   186,    97,   609,   623,
     629,   309,   971,   625,   633,   636,    21,    89,   109,   307,
     155,   307,    21,     4,    89,   658,    89,     6,   659,   660,
     661,    89,   120,   668,   665,   971,   971,   120,   136,   671,
     673,   158,   676,   159,   439,   677,   690,   699,   971,  1164,
    1165,  1166,  1167,   691,   379,   971,   425,   971,   701,   671,
     742,   153,   971,   746,   414,   747,    97,   751,   748,   162,
     749,   153,     4,   750,  1180,   109,     6,   752,   753,    21,
     756,   307,  1180,   754,   109,   755,   675,    97,   762,   157,
     163,   789,    97,   229,   109,   770,   407,   120,  1074,   775,
     693,   821,   120,   120,   161,   792,   407,   823,   680,   824,
     826,     4,   153,   705,   827,     6,   833,   834,   153,   743,
     836,   844,   745,   856,   857,   404,   153,   876,    21,   681,
     120,   159,   813,   814,   815,   816,   120,   370,   859,   671,
     880,   878,   120,  -486,   881,   882,   120,    97,   885,   888,
     893,   153,   120,    97,   887,   120,   894,   162,   137,   897,
      97,   407,   404,   898,   920,  1238,   404,    21,   120,   929,
     913,   923,   937,   109,   109,   109,   109,   414,   163,   932,
     -84,   414,    97,   109,   177,     7,    97,   938,   180,   349,
     350,   351,   941,    97,    10,   952,    11,   440,   953,   958,
     190,   954,   957,   959,   414,    97,    97,   955,   960,   966,
     968,   979,  -696,   671,   982,   307,   986,  -426,    97,   983,
     987,   981,  -445,   988,   414,    97,  1238,    97,   991,   506,
     989,   992,    97,   993,   995,  1238,   994,   996,   -77,   997,
     352,  1000,  1001,  1016,   404,  1024,    23,   847,  1025,   219,
    1039,  1028,   231,   412,  1289,   307,   505,   109,   155,   155,
    1238,     4,   862,   647,   914,     6,     6,     4,  1035,   313,
     314,     6,  1036,   317,  1180,  1041,   831,   832,   322,   158,
     158,   159,   159,   324,   307,   915,   109,   159,  1042,   329,
     412,   555,   332,   333,   412,  1043,   120,  1046,   858,  -486,
     343,    41,   120,   120,  1051,   355,  1052,   162,   162,   875,
      -6,  1054,   506,   162,  1058,    -6,  1067,    21,    21,   404,
    1068,  1069,   879,    21,   109,  1070,  1089,  1071,   163,   163,
     404,     4,  1073,  1116,   163,     6,   215,  1119,   216,   414,
    1124,     4,  1120,  1123,   914,     6,   215,     4,   216,  1132,
    1134,     6,  1135,  1139,   191,   887,    -6,   120,  1155,  1163,
    1156,    -6,   109,   120,   109,   915,   109,   159,  1157,  1168,
     217,  1171,   412,  1189,  1175,  1183,  1186,  1185,  1181,  -486,
     217,  1187,   120,   532,  1195,  1196,  1198,    21,  1197,  1203,
    1204,   120,  1207,   162,  1215,    -6,   120,    21,  1219,  1220,
    1221,   120,  1233,    21,  1228,  1229,  1239,  1247,  1248,  1249,
    1251,  1250,   122,  1254,   163,  1255,  1257,  1256,   414,  1259,
    1264,  1265,   931,  1269,  1281,  1271,   446,   446,   404,   404,
     404,   404,   404,  1272,  1285,  1212,   404,  1290,   404,  1295,
     109,    -6,   914,  1292,  1297,     4,  1313,   412,  1307,     6,
     680,   446,  1314,     4,   -84,   109,   -84,     6,   412,   404,
    1315,  1316,   886,   915,   -33,   159,  1294,  1321,   590,   784,
    1121,   681,  1122,   159,   616,   219,   835,  -486,   120,   404,
    1202,   877,  1032,  1263,   637,  -486,   403,   936,   627,   935,
     109,   162,   355,   940,  1063,   155,  1038,   925,     4,   162,
     630,    21,     6,   155,  1034,  1013,     4,   126,   664,    21,
       6,   786,   163,   891,   120,  1305,   915,   657,   159,   780,
     163,  1188,  1319,  1110,   158,   219,  1301,   795,   323,   656,
    -486,   651,  1244,  1174,   674,  1084,  1206,   797,  -604,  1147,
     155,   404,   678,     4,   162,   116,   667,     6,   219,   895,
    1172,  1227,  1302,   219,    21,   312,   412,   412,   412,   412,
     412,   158,    21,   159,   412,   163,   412,  1210,  1066,   155,
     781,   519,     4,   163,   155,   902,     6,     4,   695,   404,
    1044,     6,   422,   853,     0,     0,   788,   412,     0,   162,
     158,     0,   159,     0,   404,   158,     0,   159,   435,    21,
       0,     0,     0,     0,   120,   120,     0,   412,   872,     0,
     163,     0,   745,     0,     0,     0,     0,   404,   162,   404,
       0,     0,     0,   162,     0,     0,   109,     0,    21,   109,
       0,     0,   219,    21,   109,   414,     0,     0,     0,   163,
     109,     0,     0,     0,   163,     0,     0,     0,     0,     0,
       0,   109,   120,     0,     0,     0,     0,     0,     0,   120,
       0,     0,     0,     0,     4,   219,   219,   120,     6,   412,
     120,     8,     0,   404,     0,     0,     0,     0,     0,     0,
       0,   157,   120,     0,     0,     0,     0,     0,  1136,     0,
       0,     0,     0,     0,     0,   404,   161,     0,     0,     0,
       0,     0,     0,    12,    13,    14,     0,   412,     0,     0,
    1151,  1152,     0,     0,    15,    16,     0,     0,     0,   543,
      21,     0,   412,     0,   124,   414,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,     0,     0,   120,     0,
       0,     0,     0,     0,     0,   412,     0,   412,   109,   554,
       0,   555,     0,     0,     0,   355,     0,     0,     0,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   446,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,     0,     0,     0,   120,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   412,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   109,     0,
       0,     0,     0,   412,     0,   872,     0,     0,     0,     0,
       0,     0,     0,   924,     0,     0,     0,     0,     0,   109,
       0,     0,     0,     0,   109,     0,     0,     0,   414,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   414,     0,
       0,     0,     0,     0,     0,   120,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   404,     0,   120,  1258,     0,     0,     0,     0,     0,
       0,     0,     0,   120,     0,     0,   120,     0,   120,   109,
       0,     0,     0,     0,     0,   109,     0,     0,     0,     0,
       0,     0,   109,   414,     0,     0,     0,     0,     0,     0,
     120,   969,   972,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   109,     0,     0,     0,   109,     0,
       0,     0,     0,   120,     0,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     109,     0,     0,     0,     0,     0,     0,   109,     0,   109,
     404,     0,     0,     0,   109,     0,     0,   219,     0,  1018,
       0,     0,     0,  1019,     0,     0,   179,     0,     0,     0,
       0,     0,   120,     0,     0,   872,   630,   872,     0,   412,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1040,     0,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,   155,     0,   149,     4,   150,     0,     0,     6,
       0,     0,     8,     9,     0,     0,     0,     0,     0,   156,
       0,   120,   157,   158,     0,   159,   160,     0,     0,     0,
       0,   297,     0,     0,     0,     0,   297,   161,     0,     0,
       0,     0,     0,     0,    12,    13,    14,     0,   297,     0,
       0,   162,     0,    -6,     0,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,    22,   297,   972,   412,     0,
       0,    23,   163,     0,     0,     0,     0,   872,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    -6,
     399,   400,  -710,     0,     0,     0,     0,     0,     0,   297,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    42,    43,    44,
       0,     0,   430,     0,   433,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,   297,     0,     6,   297,
       0,     8,   219,     0,   297,   297,     0,     0,     0,     0,
     404,     0,   297,   297,     0,   297,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,    14,   972,     0,     0,     0,
       0,     0,     0,     0,    15,    16,     0,     0,     0,     0,
      21,     0,     0,   120,   124,   297,     0,     0,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   297,   120,
       0,     0,     0,     0,   120,     0,     0,     0,     0,     0,
       0,   -84,     0,     0,     0,     0,  1217,  1218,   297,     0,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,   972,     0,     0,     0,
       0,   972,     0,  1236,     0,  1242,   638,   639,   297,   297,
     297,   297,     0,     0,     0,  1242,     0,     0,   412,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1262,     0,     0,   297,     0,     0,   179,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1268,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1236,  1275,     0,     0,   297,   972,
    1242,     0,     0,  1236,     0,     0,     0,     0,     0,  1282,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1286,
       0,   972,     0,     0,     0,     0,     0,     0,  1236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   972,   972,     0,     0,     0,     0,
       0,   329,   332,     0,     0,     0,     0,   972,     0,     0,
       0,     0,     0,     0,   972,     0,   972,     0,     0,     0,
       0,   972,     0,     0,     0,     0,   297,     0,     0,     0,
     297,     0,     0,     0,     0,   297,     0,   297,   297,   297,
     297,   297,   297,   297,   297,     0,   297,     0,     0,     0,
       0,     0,     0,   297,   297,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   297,   297,   297,   297,
     297,   297,   803,   297,   297,   297,   297,   297,     0,     0,
       0,     0,   297,   297,   297,   297,   297,   297,   297,     0,
     297,     1,     0,     0,   149,  1090,   150,   238,   239,   240,
       0,   241,     8,     9,     0,     0,     0,   242,   243,   156,
       0,  -283,   157,   244,     0,   245,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1091,     0,     0,
     247,   792,     0,     0,    12,    13,    14,     0,     0,     0,
       0,     0,     0,   248,  1092,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,    22,     0,     0,     0,     0,
       0,    23,   249,     0,   297,     0,     0,     0,     0,     0,
     297,     0,  1093,  1094,     0,     0,     0,  1095,  1096,  1097,
    1098,  1099,  1100,  1101,  1102,   297,     0,   250,   297,   251,
     252,   253,  -710,   254,   255,   256,   257,   258,   259,  1103,
       0,  1104,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    42,    43,    44,
       0,   260,   261,   262,     0,   263,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -84,     0,     0,   -84,
     237,   -84,   238,   239,   240,     0,   241,     8,   -84,     0,
       0,   297,   242,   243,   297,     0,  -155,   -84,   244,     0,
     245,     0,     0,     0,     0,     0,     0,   297,     0,     4,
       0,     0,   246,     6,   297,   247,     8,     0,     0,   -84,
     -84,   -84,     0,     0,     0,     0,     0,   297,   248,     0,
     -84,   -84,   -84,   -84,   -84,   -84,    21,     0,   -20,     0,
     -84,     0,     0,     0,     0,     0,   -84,   249,    12,    13,
      14,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      16,     0,     0,   297,   297,    21,     0,     0,     0,    22,
       0,     0,   250,   -20,   251,   252,   253,   -84,   254,   255,
     256,   257,   258,   259,     0,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,   -84,   -84,   -84,     0,   260,   261,   262,     0,
     263,     0,     0,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,     0,   297,     0,     0,     0,     0,   297,     0,   297,
     297,     0,     0,     0,     0,     0,   437,     0,     0,   237,
       0,   238,   239,   240,     0,   241,     8,     0,   297,     0,
     297,   242,   243,     0,     0,     0,     0,   244,  -552,   245,
       0,     0,   297,     0,     0,     0,     0,     0,     0,     0,
       0,   246,     0,     0,   247,     0,     0,     0,    12,    13,
      14,     0,     0,     0,     0,   297,   297,   248,     0,    15,
      16,   297,     0,     0,     0,    21,     0,   -20,     0,   124,
       0,     0,     0,   297,     0,     0,   249,     0,     0,     0,
     297,     0,     0,     0,   297,     0,     0,     0,     0,     0,
       0,     0,   297,     0,     0,     0,     0,     0,     0,     0,
       0,   250,   -20,   251,   252,   253,   -84,   254,   255,   256,
     257,   258,   259,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,     0,     0,     0,     0,   260,   261,   262,     0,   263,
       0,     0,  1150,     0,     0,     0,     0,     0,     0,     0,
       0,  1153,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   297,   297,     0,     0,     0,   297,     0,
       0,     0,     0,     0,   297,     0,     0,     0,     0,   297,
     297,   297,   297,     0,     0,     0,     0,   297,     0,     0,
       0,   297,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   297,     0,     0,     0,     0,     0,
       0,     0,   297,     0,   297,     0,     1,     0,     0,   149,
     237,   150,   238,   239,   240,     0,   241,     8,     9,     0,
       0,     0,   242,   243,  1240,     0,  -283,   -84,   244,     0,
     245,     0,     0,     0,     0,     0,     0,     0,     0,   297,
       0,     0,   246,     0,   297,   247,     0,     0,     0,    12,
      13,    14,     0,     0,     0,     0,     0,     0,   248,     0,
      15,    16,    17,    18,    19,    20,    21,     0,   -20,     0,
      22,     0,     0,   297,     0,     0,    23,   249,     0,     0,
       0,     0,     0,     0,     0,   297,     0,   297,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   297,     0,     0,
       0,     0,   250,   -20,   251,   252,   253,   -84,   254,   255,
     256,   257,   258,   259,     0,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    42,    43,    44,     0,   260,   261,   262,     0,
     263,     0,     0,     0,     0,     0,   297,     0,     0,     0,
       0,     0,   297,     0,     0,   297,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   297,     0,     0,     0,     0,     0,
     297,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   297,     0,   297,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,     0,  -139,  -139,     0,  -139,  -139,     0,
       0,     0,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,     0,  -139,  -139,     0,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,     0,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,     0,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,     0,  -139,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -139,  -139,  -139,     0,  -139,  -139,  -139,  -139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,     0,     0,     0,     0,  -139,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,     0,  -138,
    -138,     0,  -138,  -138,     0,     0,     0,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
       0,  -138,  -138,     0,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,     0,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,     0,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,     0,  -138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -138,  -138,  -138,     0,  -138,
    -138,  -138,  -138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
       0,     0,     0,     0,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,     0,  -138,  -138,     0,  -138,  -138,     0,
       0,     0,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,     0,  -138,  -138,     0,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,     0,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,     0,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,     0,  -138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -138,  -138,  -138,     0,  -138,  -138,  -138,  -138,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,     0,     0,     0,     0,  -138,
    -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,     0,  -393,
    -393,     0,  -393,  -393,     0,     0,     0,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,
       0,  -393,  -393,     0,  -393,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,     0,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,  -393,     0,  -393,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,     0,  -393,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -393,  -393,  -393,     0,  -393,
    -393,  -393,  -393,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,
       0,     0,     1,     0,  -393,   149,   237,   150,   238,   239,
     240,     0,   241,     8,     9,     0,     0,     0,   242,   243,
    1240,     0,  -283,   -84,   244,     0,   245,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   246,     0,
       0,   247,     0,     0,     0,    12,    13,    14,     0,     0,
       0,     0,     0,     0,   248,     0,    15,    16,    17,    18,
      19,    20,    21,     0,   -20,     0,    22,     0,     0,     0,
       0,     0,    23,   249,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   250,   -20,
     251,   252,   253,   -84,   254,   255,   256,   257,   258,   259,
       0,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,    42,    43,
      44,     0,   260,   261,   262,     1,   263,     0,   149,   237,
     150,   238,   239,   240,     0,   241,     8,     9,     0,     0,
       0,   242,   243,  1240,     0,  -283,   -84,   244,     0,   245,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,     0,     0,   247,     0,     0,     0,    12,    13,
      14,     0,     0,     0,     0,     0,     0,   248,     0,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,    22,
       0,     0,     0,     0,     0,    23,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,     0,   251,   252,   253,   -84,   254,   255,   256,
     257,   258,   259,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,    42,    43,    44,     0,   260,   261,   262,   437,   263,
       0,   237,     0,   238,   239,   240,     0,   241,     8,     0,
       0,     0,     0,   242,   243,     0,     0,     0,     0,   244,
       0,   245,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   246,     0,     0,   247,     0,     0,     0,
      12,    13,    14,     0,     0,     0,     0,     0,     0,   248,
       0,    15,    16,     0,     0,     0,     0,    21,     0,     0,
       0,   124,     0,     0,     0,     0,     0,     0,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   250,     0,   251,   252,   253,  -710,   254,
     255,   256,   257,   258,   259,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,     0,     0,     0,     0,   260,   261,   262,
     437,   263,     0,   237,     0,   238,   239,   240,     0,   241,
       8,     0,     0,     0,     0,   242,   243,     0,     0,     0,
       0,   244,     0,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   246,     0,     0,   247,     0,
       0,     0,    12,    13,    14,     0,     0,     0,     0,     0,
       0,   248,     0,    15,    16,     0,     0,     0,     0,    21,
       0,     0,     0,   124,     0,     0,     0,     0,     0,     0,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   250,     0,   251,   252,   253,
    -710,   254,   255,   256,   257,   258,   259,     0,     0,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,     0,     0,     0,     0,   260,
     261,   262,   437,   263,     0,   237,     0,   238,   239,   240,
       0,   241,     8,     0,   707,     0,     0,   242,   243,     0,
       0,     0,     0,   244,     0,   245,     0,     0,     0,     0,
       0,   708,   709,     0,   710,     0,     0,   246,  1055,   711,
     247,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,     0,     0,   248,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,   722,   723,     0,     0,     0,
       0,     0,   249,     0,     0,     0,     0,     0,     0,     0,
     724,   725,   726,   727,   728,     0,   729,   730,   731,   732,
     733,   734,   735,   736,   737,   738,     0,   250,     0,   251,
     252,   253,  -710,   254,   255,   256,   257,   258,   259,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,   260,   261,   262,  -206,   263,     0,     0,  -206,  -206,
    -206,  -206,  -206,  -206,     0,     0,  -206,  -206,     0,  -206,
    -206,  -206,  -206,  -206,     0,     0,  -206,     0,  -206,  -206,
    -206,     0,  -206,  -206,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -206,     0,  -206,     0,     0,  -206,
       0,  -206,  -206,  -206,     0,     0,     0,     0,  -206,     0,
    -206,     0,  -206,  -206,  -206,  -206,  -206,  -206,  -206,     0,
       0,     0,  -206,     0,     0,     0,     0,     0,  -206,  -206,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -206,  -210,     0,     0,     0,     1,     0,     2,     3,
       4,     5,  -206,  -206,     6,     7,  -206,     8,     9,  -206,
       0,     0,     0,     0,    10,     0,    11,     0,     0,  -206,
    -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,  -206,  -206,  -206,  -206,  -206,  -210,     0,    12,
      13,    14,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
      22,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -210,
    -209,     0,     0,     0,     1,     0,     2,     3,     4,     5,
      25,    26,     6,     7,     0,     8,     9,   -84,     0,     0,
       0,     0,    10,     0,    11,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,     0,    12,    13,    14,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,    22,     0,
       0,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,  -209,     0,
       0,     0,     1,     0,     2,     3,     4,     5,    25,    26,
       6,     7,     0,     8,     9,   -84,     0,     0,     0,     0,
      10,     0,    11,     0,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,     0,     0,    12,    13,    14,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,    22,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -209,  -209,     0,     0,     0,
       1,     0,     2,     3,     4,     5,    25,    26,     6,     7,
       0,     8,     9,   -84,     0,     0,     0,     0,    10,     0,
      11,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,     0,     0,    12,    13,    14,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,    22,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    26,     0,     0,     0,     0,
       0,   -84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,   517,
       0,     0,   237,     0,   238,   239,   240,     0,   241,     8,
       0,   707,     0,     0,   242,   243,     0,     0,     0,     0,
     518,     0,   245,     0,     0,     0,     0,     0,   708,   709,
       0,   710,     0,     0,   246,     0,   711,   247,   712,   713,
     714,   715,   716,   717,   718,   719,   720,   721,     0,     0,
     248,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,   722,   723,     0,     0,     0,     0,     0,   249,
       0,     0,     0,     0,     0,     0,     0,   724,   725,   726,
     727,   728,     0,   729,   730,   731,   732,   733,   734,   735,
     736,   737,   738,     0,   250,     0,   251,   252,   253,  -710,
     254,   255,   256,   257,   258,   259,     0,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,   455,     0,     0,     0,     0,     4,   261,
     262,   456,     6,     0,     0,     8,     0,     0,     0,     0,
     457,   458,     0,   459,     0,     0,   460,     0,   461,     0,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,     0,     0,   473,     0,     0,     0,    12,    13,    14,
       0,   474,     0,     0,   475,   476,     0,     0,    15,    16,
       0,     0,     0,     0,    21,   477,   478,     0,   124,   479,
     480,   481,   482,   483,     0,   484,   485,   486,   487,   488,
     489,   490,   491,     0,   492,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   493,   494,   495,   496,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
       0,     0,   237,   117,   238,   239,   240,     0,   241,     8,
       0,     0,     0,     0,   242,   243,     0,     0,     0,     0,
     244,     0,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,     0,     0,   247,     0,     0,
       0,    12,    13,    14,     0,     0,     0,     0,     0,     0,
     248,     0,    15,    16,     0,     0,     0,     0,    21,     0,
       0,     0,   124,     0,     0,     0,     0,     0,     0,   249,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,     0,   251,   252,   253,  -710,
     254,   255,   256,   257,   258,   259,     0,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,     0,     0,     0,     0,   260,   261,
     262,   237,   263,   238,   239,   240,     0,   241,     8,     0,
       0,     0,     0,   242,   243,     0,     0,     0,     0,   244,
       0,   245,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   246,     0,     0,   247,   378,   646,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   248,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
     647,     0,     0,     0,     0,     0,     0,     0,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   250,     0,   251,   252,   253,  -710,   254,
     255,   256,   257,   258,   259,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,     0,     0,     0,     0,   260,   261,   262,
     237,   263,   238,   239,   240,     0,   241,     8,     0,   707,
       0,     0,   242,   243,     0,     0,     0,     0,   244,     0,
     245,     0,     0,     0,     0,     0,   708,   709,     0,   710,
       0,     0,   246,     0,   711,   247,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,     0,     0,   248,     0,
       0,     0,     0,     0,     0,     0,    21,     0,   -20,     0,
     722,   723,     0,     0,     0,     0,     0,   249,     0,     0,
       0,     0,     0,     0,     0,   724,   725,   726,   727,   728,
       0,   729,   730,   731,   732,   733,   734,   735,   736,   737,
     738,     0,   250,   -20,   251,   252,   253,  -710,   254,   255,
     256,   257,   258,   259,     0,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,   260,   261,   262,   237,
     263,   238,   239,   240,     0,   241,     8,     0,     0,     0,
       0,   242,   243,     0,     0,     0,     0,   244,  -281,   245,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,     0,     0,   247,   378,   237,     0,   238,   239,
     240,     0,   241,     8,     0,     0,     0,   248,   242,   243,
       0,     0,     0,     0,   244,    21,   245,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   249,     0,   246,  -281,
       0,   247,   378,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   248,     0,     0,     0,     0,     0,
       0,   250,    21,   251,   252,   253,  -710,   254,   255,   256,
     257,   258,   259,   249,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,     0,     0,     0,     0,   260,   261,   262,   250,   263,
     251,   252,   253,  -710,   254,   255,   256,   257,   258,   259,
       0,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,     0,     0,
       0,     0,   260,   261,   262,   237,   263,   238,   239,   240,
       0,   241,     8,     0,     0,     0,     0,   242,   243,     0,
       0,     0,     0,   244,  -281,   245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   246,     0,     0,
     247,   378,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   248,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,     0,   251,
     252,   253,  -710,   254,   255,   256,   257,   258,   259,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,   260,   261,   262,   237,   263,   238,   239,   240,     0,
     241,     8,     0,     0,     0,     0,   242,   243,     0,     0,
       0,     0,   244,  -281,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,     0,     0,   247,
     378,   237,     0,   238,   239,   240,     0,   241,     8,     0,
       0,     0,   248,   242,   243,     0,     0,     0,     0,   244,
      21,   245,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   249,     0,   246,     0,     0,   247,   378,    -3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   248,
       0,     0,     0,     0,     0,     0,   250,    21,   251,   252,
     253,  -710,   254,   255,   256,   257,   258,   259,   249,     0,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,     0,     0,     0,     0,
     260,   261,   262,   250,   263,   251,   252,   253,  -710,   254,
     255,   256,   257,   258,   259,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,     0,     0,     0,     0,   260,   261,   262,
     237,   263,   238,   239,   240,     0,   241,   942,     0,     0,
       0,     0,   242,   243,     0,     0,     0,     0,   244,     0,
     245,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,     0,     0,   247,   943,  1065,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   248,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   944,     0,   251,   252,   253,  -710,   254,   255,
     256,   257,   258,   259,     0,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,   260,   261,   262,   237,
     263,   238,   239,   240,     0,   241,     8,     0,     0,     0,
       0,   242,   243,     0,     0,     0,     0,   244,  -281,   245,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,     0,     0,   247,   378,   237,     0,   238,   239,
     240,     0,   241,     8,     0,     0,     0,   248,   242,   243,
       0,     0,  -276,     0,   244,    21,   245,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   249,     0,   246,     0,
       0,   247,   378,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   248,     0,     0,     0,     0,     0,
       0,   250,    21,   251,   252,   253,  -710,   254,   255,   256,
     257,   258,   259,   249,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,     0,     0,     0,     0,   260,   261,   262,   250,   263,
     251,   252,   253,  -710,   254,   255,   256,   257,   258,   259,
       0,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,     0,     0,
       0,     0,   260,   261,   262,   237,   263,   238,   239,   240,
       0,   241,     8,     0,     0,     0,     0,   242,   243,     0,
       0,  -276,     0,   244,     0,   245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   246,     0,     0,
     247,   378,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   248,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,     0,   251,
     252,   253,  -710,   254,   255,   256,   257,   258,   259,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,   260,   261,   262,   237,   263,   238,   239,   240,     0,
     241,     8,     0,     0,     0,     0,   242,   243,     0,     0,
       0,     0,   244,  -281,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,     0,     0,   247,
     378,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   248,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   249,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,     0,   251,   252,
     253,  -710,   254,   255,   256,   257,   258,   259,     0,     0,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,     0,     0,     0,     0,
     260,   261,   262,   237,   263,   238,   239,   240,     0,   241,
       8,     0,     0,     0,     0,   242,   243,     0,     0,     0,
       0,   244,     0,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   246,     0,     0,   247,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   248,     0,     0,     0,     0,     0,     0,     0,    21,
       0,   -20,     0,     0,     0,     0,     0,     0,     0,     0,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   250,   -20,   251,   252,   253,
     -84,   254,   255,   256,   257,   258,   259,     0,     0,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,     0,     0,     0,     0,   260,
     261,   262,   237,   263,   238,   239,   240,     0,   241,     8,
       0,     0,     0,     0,   242,   243,     0,     0,     0,     0,
     244,     0,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,     0,     0,   247,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     248,     0,     0,     0,     0,     0,     0,     0,    21,     0,
     -20,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,   -20,   251,   252,   253,   -84,
     254,   255,   256,   257,   258,   259,     0,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,     0,     0,     0,     0,   260,   261,
     262,   237,   263,   238,   239,   240,     0,   241,     8,     0,
       0,     0,     0,   242,   243,     0,     0,     0,     0,   244,
       0,   245,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   246,     0,     0,   247,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   248,
       0,     0,     0,     0,     0,     0,     0,    21,     0,   -20,
       0,     0,     0,     0,     0,     0,     0,     0,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   250,   -20,   251,   252,   253,   -84,   254,
     255,   256,   257,   258,   259,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,     0,     0,     0,     0,   260,   261,   262,
     237,   263,   238,   239,   240,     0,   241,     8,     0,     0,
       0,     0,   242,   243,     0,     0,     0,     0,   244,     0,
     245,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,     0,     0,   247,   378,   237,     0,   238,
     239,   240,     0,   241,     8,     0,     0,     0,   248,   242,
     243,     0,     0,     0,     0,   244,    21,   245,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,   246,
       0,     0,   247,   378,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   248,     0,     0,     0,     0,
       0,     0,   250,    21,   251,   252,   253,  -710,   254,   255,
     256,   257,   258,   259,   249,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,   260,   261,   262,   250,
     263,   251,   252,   253,  -710,   254,   255,   256,   257,   258,
     259,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,     0,
       0,     0,     0,   260,   261,   262,   237,   263,   238,   239,
     240,     0,   241,     8,     0,     0,     0,     0,   242,   243,
       0,     0,     0,     0,   244,     0,   245,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   246,     0,
       0,   247,   378,   237,     0,   238,   239,   240,     0,   241,
       8,     0,     0,     0,   248,   242,   243,     0,     0,     0,
       0,   244,    21,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,   246,     0,     0,   247,   378,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   248,     0,     0,     0,     0,     0,     0,   250,    21,
     251,   252,   253,  -710,   254,   255,   256,   257,   258,   259,
     249,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,     0,     0,
       0,     0,   260,   261,   262,   250,   263,   251,   252,   253,
    -710,   254,   255,   256,   257,   258,   259,     0,     0,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,     0,     0,     0,     0,   260,
     261,   262,   237,   263,   238,   239,   240,     0,   241,   942,
       0,     0,     0,     0,   242,   243,     0,     0,     0,     0,
     244,     0,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,     0,     0,   247,   943,   237,
       0,   238,   239,   240,     0,   241,     8,     0,     0,     0,
     248,   242,   243,     0,     0,     0,     0,   244,    21,   245,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,   246,     0,     0,   247,   378,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   248,     0,     0,
       0,     0,     0,     0,   944,    21,   251,   252,   253,  -710,
     254,   255,   256,   257,   258,   259,   249,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,     0,     0,     0,     0,   260,   261,
     262,   250,   263,   251,   252,   253,  -710,   254,   255,   256,
     257,   258,   259,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,     0,     0,     0,     0,   260,   261,   262,   237,   263,
     238,   239,   240,     0,   241,     8,     0,     0,     0,     0,
     242,   243,     0,     0,     0,     0,   244,     0,   245,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,     0,     0,   247,   378,   237,     0,   238,   239,   240,
       0,   241,     8,     0,     0,     0,   248,   242,   243,     0,
       0,     0,     0,   244,    21,   245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   249,     0,   246,     0,     0,
     247,   378,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   248,     0,     0,     0,     0,     0,     0,
     250,    21,   251,   252,   253,  -710,   254,   255,   256,   257,
     258,   259,   249,     0,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
       0,     0,     0,     0,   260,   261,   262,   250,   263,   251,
     252,   253,  -710,   254,   255,   256,   257,   258,   259,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,   260,   261,   262,   237,   263,   238,   239,   240,     0,
     241,     8,     0,     0,     0,     0,   242,   243,     0,     0,
       0,     0,   244,     0,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,     0,     0,   247,
     378,   237,     0,   238,   239,   240,     0,   241,     8,     0,
       0,     0,   248,   242,   243,     0,     0,     0,     0,   244,
      21,   245,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   249,     0,   246,  -283,     0,   247,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   248,
       0,     0,     0,     0,     0,     0,   250,    21,   251,   252,
     253,  -710,   254,   255,   256,   257,   258,   259,   249,     0,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,     0,     0,     0,     0,
     260,   261,   262,   250,   263,   251,   252,   253,  -710,   254,
     255,   256,   257,   258,   259,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,     0,     0,     0,     0,   260,   261,   262,
     237,   263,   238,   239,   240,     0,   241,     8,     0,     0,
       0,     0,   242,   243,     0,     0,     0,     0,   244,  -283,
     245,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,     0,     0,   247,     0,   237,     0,   238,
     239,   240,     0,   241,     8,     0,     0,     0,   248,   242,
     243,     0,     0,     0,     0,   244,    21,   245,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,   246,
       0,     0,   247,   378,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   248,     0,     0,     0,     0,
       0,     0,   250,    21,   251,   252,   253,  -710,   254,   255,
     256,   257,   258,   259,   249,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,   260,   261,   262,   250,
     263,   251,   252,   253,  -710,   254,   255,   256,   257,   258,
     259,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,     0,
       0,     0,     0,   260,   261,   262,   237,   263,   238,   239,
     240,     0,   241,     8,     0,     0,     0,     0,   242,   243,
       0,     0,     0,     0,   244,     0,   245,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   246,     0,
       0,   247,     0,   237,     0,   238,   239,   240,     0,   241,
       8,     0,     0,     0,   248,   242,   243,     0,     0,     0,
       0,   244,    21,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,   246,     0,     0,   247,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   248,     0,     0,     0,     0,     0,     0,   250,    21,
     251,   252,   253,  -710,   254,   255,   256,   257,   258,   259,
     249,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,     0,     0,
       0,     0,   260,   261,   262,   250,   263,   251,   252,   253,
    -710,   254,   255,   256,   257,   258,   259,     0,     0,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,     0,     0,     0,     0,   260,
     261,   262,   237,   263,   238,   239,   240,     0,   241,     8,
       0,     0,     0,     0,   242,   243,     0,     0,     0,     0,
     244,     0,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,     0,     0,   247,     0,   237,
       0,   238,   239,   240,     0,   241,     8,     0,     0,     0,
     248,   242,   243,     0,     0,     0,     0,   244,    21,   245,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,   246,     0,     0,   247,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   248,     0,     0,
       0,     0,     0,     0,   250,    21,   251,   252,   253,  -710,
     254,   255,   256,   257,   258,   259,   249,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,     0,     0,     0,     0,   260,   261,
     262,   250,   263,   251,   252,   253,  -710,   254,   255,   256,
     257,   258,   259,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,     0,     0,     0,     0,   260,   261,   262,   237,   263,
     238,   239,   240,     0,   241,     8,     0,     0,     0,     0,
     242,   243,     0,     0,     0,     0,   244,     0,   245,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,     0,     0,   247,     0,   237,     0,   238,   239,   240,
       0,   241,     8,     0,     0,     0,   248,   242,   243,     0,
       0,     0,     0,   244,    21,   245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   249,     0,   246,     0,     0,
     247,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   248,     0,     0,     0,     0,     0,     0,
     250,    21,   251,   252,   253,  -710,   254,   255,   256,   257,
     258,   259,   249,     0,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
       0,     0,     0,     0,   260,   261,   262,   250,   263,   251,
     252,   253,  -710,   254,   255,   256,   257,   258,   259,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,   260,   261,   262,   237,   263,   238,   239,   240,     0,
     241,     8,     0,     0,     0,     0,   242,   243,     0,     0,
       0,     0,   244,     0,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,     0,     0,   247,
       0,   237,     0,   238,   239,   240,     0,   241,     8,     0,
       0,     0,   248,   242,   243,     0,     0,     0,     0,   244,
      21,   245,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   249,     0,   246,     0,     0,   247,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   248,
       0,     0,     0,     0,     0,     0,   250,    21,   251,   252,
     253,  -710,   254,   255,   256,   257,   258,   259,   249,     0,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,     0,     0,     0,     0,
     260,   261,   262,   250,   263,   251,   252,   253,  -710,   254,
     255,   256,   257,   258,   259,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,     0,     0,     0,     0,   260,   261,   262,
     237,   263,   238,   239,   240,     0,   241,     8,     0,     0,
       0,     0,   242,   243,     0,     0,     0,     0,   244,     0,
     245,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,     0,     0,   247,     0,   237,     0,   238,
     239,   240,     0,   241,     8,     0,     0,     0,   248,   242,
     243,     0,     0,     0,     0,   244,    21,   245,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,   246,
       0,     0,   247,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   248,     0,     0,     0,     0,
       0,     0,   250,    21,   251,   252,   253,  -710,   254,   255,
     256,   257,   258,   259,   249,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,   260,   261,   262,   250,
     263,   251,   252,   253,  -710,   254,   255,   256,   257,   258,
     259,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,     0,
       0,     0,     0,   260,   261,   262,   237,   263,   238,   239,
     240,     0,   241,     8,     0,     0,     0,     0,   242,   243,
       0,     0,     0,     0,   244,     0,   245,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   246,     0,
       0,   247,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   248,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   250,     0,
     251,   252,   253,  -710,   254,   255,   256,   257,   258,   259,
       0,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,     0,     0,
       0,     0,   260,   261,   262,   237,   263,   238,   239,   240,
       0,   241,     8,     0,     0,     0,     0,   242,   243,     0,
       0,     0,     0,   244,     0,   245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   246,     0,     0,
     247,     0,     0,     0,    12,    13,    14,     0,     0,     0,
       0,     0,     0,   248,     0,    15,    16,     0,     0,     0,
       0,    21,     0,     0,     0,   124,     0,     0,     0,     0,
    -688,     0,   249,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,     0,   251,
     252,   253,  -710,   254,   255,   256,   257,   258,   259,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,     0,   261,   262,   237,     0,   238,   239,   240,     0,
     241,     8,     0,     0,     0,     0,   242,   243,     0,     0,
       0,     0,   244,     0,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,     0,     0,   247,
       0,     0,     0,    12,    13,    14,     0,     0,     0,     0,
       0,     0,   248,     0,    15,    16,     0,     0,     0,     0,
      21,     0,     0,     0,   124,     0,     0,     0,     0,  -688,
       0,   249,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,     0,   251,   252,
     253,  -710,   254,   255,   256,   257,   258,   259,     0,     0,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,     0,     0,     0,     0,
       0,   261,   262,   237,     0,   238,   239,   240,     0,   241,
       8,     0,     0,     0,     0,   242,   243,     0,     0,     0,
       0,   244,     0,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   246,     0,     0,   247,     0,
       0,     0,    12,    13,    14,     0,     0,     0,     0,     0,
       0,   248,     0,    15,    16,     0,     0,     0,     0,    21,
       0,     0,     0,   124,     0,     0,     0,     0,  -688,     0,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   250,     0,   251,   252,   253,
    -710,   254,   255,   256,   257,   258,   259,     0,     0,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,     0,     0,     0,     0,     0,
     261,   262,   237,     0,   238,   239,   240,     0,   241,     8,
       0,     0,     0,     0,   242,   243,     0,     0,     0,     0,
     244,     0,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,     0,     0,   247,     0,     0,
       0,    12,    13,    14,     0,     0,     0,     0,     0,     0,
     248,     0,    15,    16,     0,     0,     0,     0,    21,     0,
       0,     0,   124,     0,     0,     0,     0,  -688,     0,   249,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,     0,   251,   252,   253,  -710,
     254,   255,   256,   257,   258,   259,     0,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,     0,     0,     0,     0,     0,   261,
     262,   237,     0,   238,   239,   240,     0,   241,     8,     0,
       0,     0,     0,   242,   243,     0,     0,     0,     0,   244,
       0,   245,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   246,     0,     0,   247,     0,     0,     0,
      12,    13,    14,     0,     0,     0,     0,     0,     0,   248,
       0,    15,    16,     0,     0,     0,     0,    21,     0,     0,
       0,   124,     0,     0,     0,     0,  -688,     0,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   250,     0,   251,   252,   253,  -710,   254,
     255,   256,   257,   258,   259,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,     0,     0,     0,     0,     0,   261,   262,
     237,     0,   238,   239,   240,     0,   241,     8,     0,     0,
       0,     0,   242,   243,     0,     0,     0,     0,   244,     0,
     245,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,     0,     0,   247,     0,     0,     0,    12,
      13,    14,     0,     0,     0,     0,     0,     0,   248,     0,
      15,    16,     0,     0,     0,     0,    21,     0,     0,     0,
     124,     0,     0,     0,     0,     0,     0,   249,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   250,     0,   251,   252,   253,  -710,   254,   255,
     256,   257,   258,   259,     0,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,     0,   261,   262,   237,
       0,   238,   239,   240,     0,   241,     8,     0,     0,     0,
       0,   242,   243,     0,     0,     0,     0,   244,     0,   245,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,     0,     0,   247,     0,     0,     0,    12,    13,
      14,     0,     0,     0,     0,     0,     0,   248,     0,    15,
      16,     0,     0,     0,     0,    21,     0,     0,     0,   124,
       0,     0,     0,     0,     0,     0,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,     0,   251,   252,   253,  -710,   254,   255,   256,
     257,   258,   259,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       1,     0,     2,     3,     4,     5,   261,   262,     6,     7,
       0,     8,     9,     0,     0,     0,     0,     0,    10,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,     0,     0,    12,    13,    14,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,    22,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       2,     3,     4,     5,    25,    26,     6,     7,     0,     8,
       9,   -84,     0,     0,     0,     0,    10,     0,    11,     0,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,     0,
       0,    12,    13,    14,     0,     0,   204,     0,     0,     0,
       0,     0,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,    22,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     2,     3,
       4,     5,    25,    26,     6,     7,     0,     8,     9,   -84,
       0,     0,     0,     0,    10,     0,    11,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,  -209,     0,    12,
      13,    14,     4,     0,     0,     0,     6,     0,     0,     8,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
      22,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,     0,     0,     0,     0,     0,     0,
      25,    26,    15,    16,     0,     0,     0,   -84,    21,     0,
       0,     0,    22,     0,     0,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     1,     0,     2,     3,     4,
       5,     0,     0,     6,     7,     0,     8,     9,     0,  -710,
       0,     0,     0,    10,     0,    11,     0,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,     0,   213,     0,     0,    12,    13,
      14,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,    22,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     2,     3,     4,     5,    25,
      26,     6,     7,     0,     8,     9,   -84,     0,     0,     0,
       0,    10,     0,    11,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,     0,    12,    13,    14,     0,
       0,     0,     0,     0,     0,     0,     0,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,    22,     0,     0,
       0,     0,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -209,     0,     0,     0,
       0,     1,     0,     2,     3,     4,     5,    25,    26,     6,
       7,     0,     8,     9,   -84,     0,     0,     0,     0,    10,
       0,    11,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,  -209,     0,    12,    13,    14,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,    22,     0,     0,     0,     0,
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     3,     4,     5,    25,    26,     6,     7,     0,
       8,     9,   -84,     0,     0,     0,     0,    10,     0,    11,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
    -209,     0,    12,    13,    14,     0,     0,     0,     0,     0,
       0,     0,     0,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,    22,     0,     0,     0,     0,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     2,
       3,     4,     5,    25,    26,     6,     7,     0,     8,     9,
     -84,     0,     0,     0,     0,    10,     0,    11,     0,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,  -209,     0,
      12,    13,    14,     0,     0,     0,     0,     0,     0,     0,
       0,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,    22,     0,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     3,     4,
       5,    25,    26,     6,     7,     0,     8,     9,   -84,     0,
       0,     0,     0,    10,     0,    11,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,  -209,     0,    12,    13,
      14,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,    22,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     2,     3,     4,     5,    25,
      26,     6,     7,     0,     8,     9,   -84,     0,     0,     0,
       0,    10,     0,    11,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,     0,    12,    13,    14,     0,
       0,     0,     0,     0,     0,     0,     0,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,    22,     0,     0,
       0,     0,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     2,     3,     4,     5,    25,    26,     6,
       7,     0,     8,     9,   -84,     0,     0,     0,     0,    10,
       0,    11,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     0,     0,    12,    13,    14,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,    22,     0,     0,     0,     0,
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,     0,     0,     0,
       0,     0,   -84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
     237,     0,   238,   239,   240,     0,   241,     8,     0,     0,
       0,     0,   242,   243,     0,     0,     0,     0,   244,     0,
     245,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,  -160,     0,   247,     0,   237,     0,   238,
     239,   240,     0,   241,     8,     0,     0,     0,   248,   242,
     243,     0,     0,     0,     0,   244,    21,   245,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,   246,
    -160,     0,   247,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   248,     0,     0,     0,     0,
       0,     0,   250,    21,   251,   252,   253,  -710,   254,   255,
     256,   257,   258,   259,   249,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,     0,   261,   262,   250,
       0,   251,   252,   253,  -710,   254,   255,   256,   257,   258,
     259,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,     0,
       0,     0,     0,     0,   261,   262,   237,     0,   238,   239,
     240,     0,   241,     8,     0,     0,     0,     0,   242,   243,
       0,     0,     0,     0,   244,     0,   245,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   246,  -160,
       0,   247,     0,   237,     0,   238,   239,   240,     0,   241,
       8,     0,     0,     0,   248,   242,   243,     0,     0,     0,
       0,  1062,    21,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,   246,     0,     0,   247,  -617,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   248,     0,     0,     0,     0,     0,     0,   250,    21,
     251,   252,   253,  -710,   254,   255,   256,   257,   258,   259,
     249,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,     0,     0,
       0,     0,     0,   261,   262,   250,     0,   251,   252,   253,
    -710,   254,   255,   256,   257,   258,   259,     0,     0,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,     0,     0,     0,     0,     0,
     261,   262,   237,     0,   238,   239,   240,     0,   241,     8,
       0,     0,     0,     0,   242,   243,     0,     0,     0,     0,
     244,     0,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,     0,     0,   247,     0,   237,
       0,   238,   239,   240,     0,   241,     8,     0,     0,     0,
     248,   242,   243,     0,     0,     0,     0,   244,    21,   245,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,   246,     0,     0,   247,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   248,     0,     0,
       0,     0,     0,     0,   250,    21,   251,   252,   253,  -710,
     254,   255,   256,   257,   258,   259,   249,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,     0,     0,     0,     0,     0,   261,
     262,   250,     0,   251,   252,   253,  -710,   254,   255,   256,
     257,   258,   259,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,     0,     0,     0,     0,     0,   261,   262,   237,     0,
     238,   239,   240,     0,   241,     8,     0,     0,     0,     0,
     242,   243,     0,     0,     0,     0,   244,     0,   245,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,     0,     0,   247,     0,   237,     0,   238,   239,   240,
       0,   241,     8,     0,     0,     0,   248,   242,   243,     0,
       0,     0,     0,   244,    21,   245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   249,     0,   246,     0,     0,
     247,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   248,     0,     0,     0,     0,     0,     0,
     250,    21,   251,   252,   253,  -710,   254,   255,   256,   257,
     258,   259,   249,     0,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
       0,     0,     0,     0,     0,   261,   262,   250,     0,   251,
     252,   253,  -710,   254,   255,   256,   257,   258,   259,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,     0,   261,   262,   237,     0,   238,   239,   240,     0,
     241,     8,     0,     0,     0,     0,   242,   243,     0,     0,
       0,     0,   244,     0,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,     0,     0,   247,
       0,   237,     0,   238,   239,   240,     0,   241,     8,     0,
       0,     0,   248,   242,   243,     0,     0,     0,     0,   244,
      21,   245,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   249,     0,   246,     0,     0,   247,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   248,
       0,     0,     0,     0,     0,     0,   250,    21,   251,   252,
     253,  -710,   254,   255,   256,   257,   258,   259,   249,     0,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,     0,     0,     0,     0,
       0,   261,   262,   250,     0,   251,   252,   253,  -710,   254,
     255,   256,   257,   258,   259,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,     0,     0,     0,     0,     0,   261,   262,
     237,     0,   238,   239,   240,     0,   241,     8,     0,     0,
       0,     0,   242,   243,     0,     0,     0,     0,   244,     0,
     245,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   773,     0,     0,   247,     0,   237,     0,   238,
     239,   240,     0,   241,     8,     0,     0,     0,   248,   242,
     243,     0,     0,     0,     0,   244,    21,   245,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,   246,
       0,     0,   247,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   248,     0,     0,     0,     0,
       0,     0,   250,    21,   251,   252,   253,  -710,   254,   255,
     256,   257,   258,   259,   249,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,     0,   261,   262,   250,
       0,   251,   252,   253,  -710,   254,   255,   256,   257,   258,
     259,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,     0,
       0,     0,     0,     0,   261,   262,   237,     0,   238,   239,
     240,     0,   241,     8,     0,     0,     0,     0,   242,   243,
       0,     0,     0,     0,   244,     0,   245,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   246,     0,
       0,   247,     0,   237,     0,   238,   239,   240,     0,   241,
       8,     0,     0,     0,   248,   242,   243,     0,     0,     0,
       0,   244,    21,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,   246,     0,     0,   247,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   248,     0,     0,     0,     0,     0,     0,   250,    21,
     251,   252,   253,  -710,   254,   255,   256,   257,   258,   259,
     249,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,     0,     0,
       0,     0,     0,   261,   262,   250,     0,   251,   252,   253,
    -710,   254,   255,   256,   257,   258,   259,     0,     0,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,     0,     0,     0,     0,     0,
     261,   262,   237,     0,   238,   239,   240,     0,   241,     8,
       0,     0,     0,     0,   242,   243,     0,     0,     0,     0,
     244,     0,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,     0,     0,   247,     0,   237,
       0,   238,   239,   240,     0,   241,     8,     0,     0,     0,
     248,   242,   243,     0,     0,     0,     0,   244,    21,   245,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,   246,     0,     0,   247,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   248,     0,     0,
       0,     0,     0,     0,   250,    21,   251,   252,   253,  -710,
     254,   255,   256,   257,   258,   259,   249,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,     0,     0,     0,     0,     0,   261,
     262,   250,     0,   251,   252,   253,  -710,   254,   255,   256,
     257,   258,   259,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,     0,     0,     0,     0,     0,   261,   262,   237,     0,
     238,   239,   240,     0,   241,     8,     0,     0,     0,     0,
     242,   243,     0,     0,     0,     0,   244,     0,   245,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,     0,     0,   247,     0,   237,     0,   238,   239,   240,
       0,   241,     8,     0,     0,     0,   248,   242,   243,     0,
       0,     0,     0,   244,    21,   245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   249,     0,   246,     0,     0,
     247,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   248,     0,     0,     0,     0,     0,     0,
     250,    21,   251,   252,   253,  -710,   254,   255,   256,   257,
     258,   259,   249,     0,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
       0,     0,     0,     0,     0,   261,   262,   250,     0,   251,
     252,   253,  -710,   254,   255,   256,   257,   258,   259,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,     0,   261,   262,   237,     0,   238,   239,   240,     0,
     241,     8,     0,     0,     0,     0,   242,   243,     0,     0,
       0,     0,   244,     0,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,     0,     0,   247,
       0,   237,     0,   238,   239,   240,     0,   241,     8,     0,
       0,     0,   248,   242,   243,     0,     0,     0,     0,   244,
      21,   245,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   249,     0,   246,     0,     0,   247,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   248,
       0,     0,     0,     0,     0,     0,   250,    21,   251,   252,
     253,  -710,   254,   255,   256,   257,   258,   259,   249,     0,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,     0,     0,     0,     0,
       0,   261,   262,   250,     0,   251,   252,   253,  -710,   254,
     255,   256,   257,   258,   259,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,     0,     0,     0,     0,     0,   261,   262,
     237,     0,   238,   239,   240,     0,   241,     8,     0,     0,
       0,     0,   242,   243,     0,     0,     0,     0,   244,     0,
     245,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,     0,     0,   247,     0,   237,     0,   238,
     239,   240,     0,   241,     8,     0,     0,     0,   248,   242,
     243,     0,     0,     0,     0,   244,    21,   245,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,   246,
       0,     0,   247,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   248,     0,     0,     0,     0,
       0,     0,   250,    21,   251,   252,   253,  -710,   254,   255,
     256,   257,   258,   259,   249,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,     0,   261,   262,   250,
       0,   251,   252,   253,  -710,   254,   255,   256,   257,   258,
     259,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,     0,
       0,     0,     0,     0,   261,   262,   237,     0,   238,   239,
     240,     0,   241,     8,     0,     0,     0,     0,   242,   243,
       0,     0,     0,     0,   244,     0,   245,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   246,     0,
       0,   247,     0,   237,     0,   238,   239,   240,     0,   241,
       8,     0,     0,     0,   248,   242,   243,     0,     0,     0,
       0,   244,    21,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,   246,     0,     0,   247,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   248,     0,     0,     0,     0,     0,     0,   250,    21,
     251,   252,   253,  -710,   254,   255,   256,   257,   258,   259,
     249,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,     0,     0,
       0,     0,     0,   261,   262,   250,     0,   251,   252,   253,
    -710,   254,   255,   256,   257,   258,   259,     0,     0,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,     0,     0,     0,     0,     0,
     261,   262,   237,     0,   238,   239,   240,     0,   241,     8,
       0,     0,     0,     0,   242,   243,     0,     0,     0,     0,
     244,     0,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,     0,     0,   247,     0,   237,
       0,   238,   239,   240,     0,   241,     8,     0,     0,     0,
     248,   242,   243,     0,     0,     0,     0,   244,    21,   245,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,   246,     0,     0,   247,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   248,     0,     0,
       0,     0,     0,     0,   250,    21,   251,   252,   253,  -710,
     254,   255,   256,   257,   258,   259,   249,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,     0,     0,     0,     0,     0,   261,
     262,   250,     0,   251,   252,   253,  -710,   254,   255,   256,
     257,   258,   259,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,     0,     0,     0,     0,     0,   261,   262,   237,     0,
     238,   239,   240,     0,   241,     8,     0,     0,     0,     0,
     242,   243,     0,     0,     0,     0,   244,     0,   245,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,     0,     0,   247,     0,   237,     0,   238,   239,   240,
       0,   241,     8,     0,     0,     0,   248,   242,   243,     0,
       0,     0,     0,   244,    21,   245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   249,     0,   246,     0,     0,
     247,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   248,     0,     0,     0,     0,     0,     0,
     250,    21,   251,   252,   253,  -710,   254,   255,   256,   257,
     258,   259,   249,     0,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
       0,     0,     0,     0,     0,   261,   262,   250,     0,   251,
     252,   253,  -710,   254,   255,   256,   257,   258,   259,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,     0,   261,   262,   237,     0,   238,   239,   240,     0,
     241,     8,     0,     0,     0,     0,   242,   243,     0,     0,
       0,     0,   244,     0,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,     0,     0,   247,
       0,   237,     0,   238,   239,   240,     0,   241,     8,     0,
       0,     0,   248,   242,   243,     0,     0,     0,     0,   244,
      21,   245,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   249,     0,   246,     0,     0,   247,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   248,
       0,     0,     0,     0,     0,     0,   250,    21,   251,   252,
     253,  -710,   254,   255,   256,   257,   258,   259,   249,     0,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,     0,     0,     0,     0,
       0,   261,   262,   250,     0,   251,   252,   253,  -710,   254,
     255,   256,   257,   258,   259,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,     0,     0,     0,     0,     0,   261,   262,
     237,     0,   238,   239,   240,     0,   241,     8,     0,     0,
       0,     0,   242,   243,     0,     0,     0,     0,   244,     0,
     245,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,     0,     0,   247,     0,   237,     0,   238,
     239,   240,     0,   241,     8,     0,     0,     0,   248,   242,
     243,     0,     0,     0,     0,   244,    21,   245,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,   246,
       0,     0,   247,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   248,     0,     0,     0,     0,
       0,     0,   250,    21,   251,   252,   253,  -710,   254,   255,
     256,   257,   258,   259,   249,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,     0,   261,   262,   250,
       0,   251,   252,   253,  -710,   254,   255,   256,   257,   258,
     259,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,     0,
       0,     0,     0,     0,   261,   262,   237,     0,   238,   239,
     240,     0,   241,     8,     0,     0,     0,     0,   242,   243,
       0,     0,     0,     0,   244,     0,   245,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   246,     0,
       0,   247,     0,   237,     0,   238,   239,   240,     0,   241,
       8,     0,     0,     0,   248,   242,   243,     0,     0,     0,
       0,   244,    21,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,   246,     0,     0,   247,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   248,     0,     0,     0,     0,     0,     0,   250,    21,
     251,   252,   253,  -710,   254,   255,   256,   257,   258,   259,
     249,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,     0,     0,
       0,     0,     0,   261,   262,   250,     0,   251,   252,   253,
    -710,   254,   255,   256,   257,   258,   259,     0,     0,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,     0,     0,     0,     0,     0,
     261,   262,   237,     0,   238,   239,   240,     0,   241,     8,
       0,     0,     0,     0,   242,   243,     0,     0,     0,     0,
     244,     0,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,     0,     0,   247,     0,   237,
       0,   238,   239,   240,     0,   241,     8,     0,     0,     0,
     248,   242,   243,     0,     0,     0,     0,   244,    21,   245,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,   246,     0,     0,   247,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   248,     0,     0,
       0,     0,     0,     0,   250,    21,   251,   252,   253,  -710,
     254,   255,   256,   257,   258,   259,   249,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,     0,     0,     0,     0,     0,   261,
     262,   250,     0,   251,   252,   253,  -710,   254,   255,   256,
     257,   258,   259,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,     0,     0,     0,     0,     0,   261,   262,   237,     0,
     238,   239,   240,     0,   241,     8,     0,     0,     0,     0,
     242,   243,     0,     0,     0,     0,   244,     0,   245,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,     0,     0,   247,     0,   237,     0,   238,   239,   240,
       0,   241,     8,     0,     0,     0,   248,   242,   243,     0,
       0,     0,     0,   244,    21,   245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   249,     0,   246,     0,     0,
     247,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   248,     0,     0,     0,     0,     0,     0,
     250,    21,   251,   252,   253,  -710,   254,   255,   256,   257,
     258,   259,   249,     0,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
       0,     0,     0,     0,     0,   261,   262,   250,     0,   251,
     252,   253,  -710,   254,   255,   256,   257,   258,   259,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,     0,   261,   262,   237,     0,   238,   239,   240,     0,
     241,     8,     0,     0,     0,     0,   242,   243,     0,     0,
       0,     0,   244,     0,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,     0,     0,   247,
       0,   237,     0,   238,   239,   240,     0,   241,     8,     0,
       0,     0,   248,   242,   243,     0,     0,     0,     0,   244,
      21,   245,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   249,     0,   246,     0,     0,   247,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   248,
       0,     0,     0,     0,     0,     0,   250,    21,   251,   252,
     253,  -710,   254,   255,   256,   257,   258,   259,   249,     0,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,     0,     0,     0,     0,
       0,   261,   262,   250,     0,   251,   252,   253,  -710,   254,
     255,   256,   257,   258,   259,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,     0,     0,     0,     0,     0,   261,   262,
     237,     0,   238,   239,   240,     0,   241,     8,     0,     0,
       0,     0,   242,   243,     0,     0,     0,     0,   244,     0,
     245,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,     0,     0,   247,     0,   237,     0,   238,
     239,   240,     0,   241,     8,     0,     0,     0,   248,   242,
     243,     0,     0,     0,     0,   244,    21,   245,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   249,     0,   246,
       0,     0,   247,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   248,     0,     0,     0,     0,
       0,     0,   250,    21,   251,   252,   253,  -710,   254,   255,
     256,   257,   258,   259,   249,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,     0,   261,   262,   250,
       0,   251,   252,   253,  -710,   254,   255,   256,   257,   258,
     259,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     1,     0,
       0,   149,     4,   150,   261,   262,     6,     0,     0,     8,
       9,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -674,
       0,    12,    13,    14,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,    22,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,   149,
       4,   150,     0,   970,     6,     0,     0,     8,     9,   -84,
       0,     0,     0,     0,    10,     0,     0,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,  -675,     0,    12,
      13,    14,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
      22,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,   149,     4,   150,     0,     0,
       6,   970,     0,     8,     9,     0,     0,   -84,     0,     0,
      10,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    12,    13,    14,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,    22,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,   149,     4,   150,     0,     0,     6,   970,     0,     8,
       9,     0,     0,   -84,     0,     0,    10,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    12,    13,    14,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,    22,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,   149,     4,   150,
       0,     0,     6,   970,     0,     8,     9,     0,     0,   -84,
       0,     0,    10,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    12,    13,    14,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,    22,     0,
       0,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,   149,     4,   150,     0,     0,     6,   970,
       0,     8,     9,     0,     0,   -84,     0,     0,    10,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    12,    13,    14,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,    22,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,   149,
       4,   150,     0,     0,     6,   970,     0,     8,     9,     0,
       0,   -84,     0,     0,    10,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    12,
      13,    14,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
      22,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,   149,     4,   150,     0,     0,
       6,   970,     0,     8,     9,     0,     0,   -84,     0,     0,
      10,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    12,    13,    14,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,    22,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,   149,     4,   150,     0,     0,     6,   970,     0,     8,
       9,     0,     0,   -84,     0,     0,    10,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    12,    13,    14,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,    22,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,   149,     4,   150,
       0,     0,     6,   970,     0,     8,     9,     0,     0,   -84,
       0,     0,    10,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    12,    13,    14,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,    22,     0,
       0,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,   149,     4,   150,     0,     0,     6,   970,
       0,     8,     9,     0,     0,   -84,     0,     0,    10,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    12,    13,    14,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,    22,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,   149,
       4,   150,     0,     0,     6,   970,     0,     8,     9,     0,
       0,   -84,     0,     0,    10,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    12,
      13,    14,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
      22,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,   149,     4,   150,     0,     0,
       6,   970,     0,     8,     9,     0,     0,   -84,     0,     0,
      10,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    12,    13,    14,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,    22,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,   149,     4,   150,     0,     0,     6,   970,     0,     8,
       9,     0,     0,   -84,     0,     0,     0,     0,     0,     0,
     535,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    12,    13,    14,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,    22,     0,     0,     0,   536,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -710,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    42,    43,    44,     1,     0,     0,
     149,     4,   150,     0,     0,     6,     0,     0,     8,     9,
       0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,   149,
       4,   150,     0,   161,     6,     0,     0,     8,     9,     0,
      12,    13,    14,     0,     0,     0,   151,     0,     0,     0,
       0,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,    22,     0,     0,     0,     0,     0,    23,     0,    12,
      13,    14,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
      22,     0,     0,     0,     0,     0,    23,     0,  -710,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    42,    43,    44,     0,   -85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    42,    43,    44,     1,     0,     0,   149,     4,
     150,     0,     0,     6,     0,     0,     8,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   535,     0,     0,
       0,     0,     0,     0,     1,     0,     0,   149,     4,   150,
       0,     0,     6,     0,     0,     8,     9,     0,    12,    13,
      14,     0,     0,     0,     0,   157,     0,     0,     0,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,    22,
     161,     0,     0,     0,     0,    23,     0,    12,    13,    14,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,    22,     0,
       0,     0,     0,     0,    23,     0,  -710,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,    42,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      42,    43,    44,     1,     0,     0,   149,     4,   150,     0,
       0,     6,     0,     0,     8,     9,     0,     0,     0,     0,
       0,     0,     0,     0,   157,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,   149,     4,   150,     0,   161,
       6,     0,     0,     8,     9,     0,    12,    13,    14,     0,
       0,     0,     0,   157,     0,     0,     0,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,    22,   161,     0,
       0,     0,     0,    23,     0,    12,    13,    14,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,    22,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    42,
      43,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,    42,    43,
      44,     1,     0,     0,   149,     4,   150,     0,     0,     6,
       0,     0,     8,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,   149,     4,
     150,     0,     0,     6,     0,     0,     8,     9,     0,     0,
       0,     0,     0,     0,    12,    13,    14,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,    22,     0,     0,    12,    13,
      14,    23,     0,     0,     0,     0,     0,     0,     0,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,    22,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,     0,  -710,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,  -710,    42,    43,    44,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,    42,    43,    44,     1,     0,     0,   149,     4,   150,
       0,     0,     6,     0,     0,     8,     9,     0,     0,     0,
       0,     0,     1,     0,     0,   149,     4,   150,     0,     0,
       6,     0,     0,     8,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,    14,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    16,
      17,    18,    19,    20,    21,    12,    13,    14,    22,     0,
       0,     0,     0,     0,    23,     0,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,    22,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      42,    43,    44,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     4,    42,    43,
      44,     6,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   963,     0,     0,     0,     4,
       0,     0,     0,     6,     0,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,    14,     0,
       0,     0,     4,     0,     0,     0,     6,    15,    16,     8,
       0,     0,     0,    21,     0,     0,     0,   124,    12,    13,
      14,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      16,     0,     0,     0,     0,    21,     0,     0,     0,   124,
       0,    12,    13,    14,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    16,     0,     0,     0,     0,    21,     0,
       0,     0,   124,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       4,     0,     0,     0,     6,     0,     0,     8,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     4,     0,     0,     0,     6,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,    14,     0,     0,     0,     4,     0,     0,     0,     6,
      15,    16,     8,     0,     0,     0,    21,     0,     0,     0,
     124,     0,    12,    13,    14,     0,     0,     0,     0,     0,
       0,     0,     0,    15,    16,     0,     0,     0,     0,    21,
       0,     0,     0,   124,    12,    13,    14,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    16,     0,     0,     0,
       0,    21,     0,     0,     0,   124,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     4,     0,     0,     0,     6,     0,
       0,     8,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     4,     0,     0,     0,
       6,     0,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,    14,     0,     0,     0,     4,
       0,     0,     0,     6,    15,    16,     8,     0,     0,     0,
      21,     0,     0,     0,   124,    12,    13,    14,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    16,     0,     0,
       0,     0,    21,     0,     0,     0,   124,     0,    12,    13,
      14,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      16,     0,     0,     0,     0,    21,     0,     0,     0,   124,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     4,     0,     0,
       0,     6,     0,     0,     8,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       4,     0,     0,     0,     6,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,    14,     0,
       0,     0,     0,     0,     0,     0,     0,    15,    16,     0,
       0,     0,     0,    21,     0,     0,     0,   124,     0,    12,
      13,    14,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    16,     0,     0,     0,     0,    21,     0,     0,     0,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40
};

static const yytype_int16 yycheck[] =
{
       0,     0,     2,    51,   182,   175,    50,    51,     8,   413,
      90,   650,   248,   119,    58,   182,   158,   692,   158,   121,
     333,   379,    22,   327,   438,     0,    22,     2,   175,   704,
     376,     0,   174,     2,   174,   565,   119,   630,   225,   850,
     227,   134,   175,   175,   615,   175,   576,    51,   578,   175,
      50,    51,   377,   146,    54,   175,   232,   324,    58,    59,
     119,    61,   248,  1015,   864,   747,   431,   362,   175,   630,
     681,   606,   689,  1079,   175,     8,   178,   345,   689,   244,
     967,   616,   247,   175,   827,    13,    61,   252,   253,    66,
    1185,     3,    61,    99,     8,    50,   263,   164,    12,   413,
    1195,   101,     8,     3,    50,     8,    72,    13,    85,    42,
      13,     8,    24,   792,   114,   114,     8,   401,   118,   119,
     168,    13,    66,   119,   124,   125,   101,   395,   124,    12,
      23,   298,   101,    26,   301,   135,   135,     8,   303,   114,
     207,    12,    56,   118,   330,   114,   907,   147,     8,   118,
      64,    44,   152,    56,   100,  1250,    89,   101,   158,    42,
     135,   972,   139,   341,   164,   587,   135,    64,   168,    75,
      26,   251,   147,    73,   174,   597,   412,   177,   147,     3,
       8,   177,   137,    75,   286,    56,   500,    66,   102,    72,
     190,   137,   362,    64,   190,   195,   195,  1084,     3,   102,
     175,     0,  1013,     2,    64,   133,    12,   100,   969,     3,
     556,     5,     8,   213,   213,   362,    50,    51,   218,    15,
     195,    45,   101,  1195,    58,   864,   195,     2,    56,   362,
     362,   102,   362,   326,   336,   422,   362,   281,   213,   426,
     407,   428,   362,   218,   213,   988,    23,   414,   248,   218,
     932,    50,    51,   346,   334,   362,     4,   541,     3,    58,
      12,   362,    61,    11,   134,    42,    72,   535,    73,     3,
     362,    12,    68,    12,   102,    26,   146,   561,  1250,    73,
      66,   281,     5,  1094,  1290,     8,    61,    12,   692,    23,
      24,    14,    23,   606,   905,    26,     8,    42,   977,    85,
     704,   918,   101,   616,   915,    28,     3,   918,   869,    86,
      44,   355,   418,    44,    62,   114,    50,   423,   318,   118,
      72,   856,   318,  1005,   324,   325,   101,    64,   324,   325,
     625,    72,     3,    72,   401,   418,   135,   207,   703,  1291,
     423,   175,   260,   118,    41,   263,  1146,    72,   147,     8,
       8,   355,    75,   518,    12,   355,    20,    21,   523,   418,
     627,    15,    28,  1174,   423,    26,   100,   681,   105,    24,
      41,     5,   147,     3,     8,   689,    25,   421,   692,   379,
      14,    23,   686,   687,   560,   385,    45,   362,    54,    23,
     704,    40,    13,    47,    28,     8,   195,   562,   563,    12,
      42,   129,    44,   137,   404,   591,    64,    41,   207,    58,
      59,    41,   412,   413,   213,    99,    23,  1096,   418,   218,
       5,   421,   418,   423,     8,   661,    44,   423,    12,     8,
     536,   431,    12,    12,  1027,    42,  1029,    44,    44,  1050,
    1251,    75,    27,   218,    86,   244,   760,   281,     8,   248,
     775,    64,  1023,   536,     8,   625,   326,     3,   376,   377,
     378,     6,    14,   977,   566,   567,     8,     8,    47,    48,
      12,   755,    14,    25,   541,    25,   346,   536,   625,    86,
      64,    27,   281,   650,    26,    64,  1297,   652,    40,    25,
      40,    28,   625,   625,   561,   625,    12,  1176,    40,   625,
     500,     3,  1181,    40,    40,   625,   693,  1146,    58,    59,
     510,   511,   512,   513,    56,   929,   244,    54,   625,    72,
     520,   355,    64,     5,   625,    27,     8,   326,   362,   887,
     888,   401,    14,   625,   880,     3,   536,   134,     0,   885,
     536,   777,    12,   856,     8,  1075,    28,     8,    12,   146,
       8,    12,     8,  1182,    12,    26,   355,    13,   100,    27,
     102,    17,    18,    19,    28,   658,    22,    26,    24,   111,
    1249,     3,  1211,    44,   739,     3,    40,   742,   626,  1208,
     747,    23,  1096,    25,     8,    44,    12,   421,    12,    45,
      54,   905,  1271,    75,   594,    27,    24,   431,    40,   903,
      64,   915,   401,    64,   918,    25,    64,  1137,    23,   676,
     207,    75,    68,   412,   532,  1294,  1295,     3,    74,   594,
      40,  1296,   421,   623,    24,   594,   626,   627,  1307,    44,
     630,   627,   431,     8,   630,  1314,     5,  1316,   556,     3,
      64,    27,  1321,  1244,   692,    65,   564,   565,  1287,    67,
     625,   965,  1253,     8,    26,     3,     3,    12,   576,     3,
     578,   661,  1176,    27,    26,     8,     3,  1181,    40,   244,
      25,   541,     8,   129,   674,    23,    24,  1278,   674,     3,
      27,   681,    44,    27,    26,    40,   864,    42,   755,   689,
      27,   561,   692,    65,    42,    67,    44,   864,    40,   699,
      24,   701,    50,   703,   704,  1051,  1052,     8,   436,    64,
       3,   510,   511,   512,   513,   514,     8,    69,    70,   518,
      12,   520,     8,    26,    16,    17,    18,    19,    26,   326,
      12,   103,   104,    25,    27,  1249,  1050,     5,    86,    25,
       8,    44,   541,     8,   811,   812,    44,    12,    40,   346,
      23,   326,   100,     5,    40,    23,     8,  1271,    44,    99,
     760,     5,   561,     8,     8,   932,     8,    12,    12,  1083,
      12,    23,    64,   915,   857,   915,   918,   777,   918,    26,
    1294,  1295,    26,    28,    28,    26,   514,    26,   658,   137,
     518,   625,   792,  1307,   874,   594,   961,   964,     5,    64,
    1314,     8,  1316,   673,   401,    44,   676,  1321,    40,    54,
      54,   811,   812,   906,     5,   908,    23,     8,    24,    64,
      64,    12,    64,   792,   623,     5,   554,   827,     8,    12,
      75,    75,    26,    24,    14,    26,     5,    28,  1005,     8,
      24,    25,     3,    23,  1011,    14,    25,   847,    28,    25,
      44,   847,   827,   920,    23,     8,    40,   775,   827,    28,
      40,    40,   661,    54,    40,    56,    42,    24,    25,   703,
       8,    25,    24,    64,    12,   968,     8,   676,     8,    26,
      12,    25,    12,    40,    75,   755,    40,   887,   888,    79,
      80,  1056,  1296,    40,     8,    75,    40,  1062,    12,    26,
     699,    25,   701,     8,   703,   905,    75,    12,  1050,    87,
    1050,   102,    26,    27,    28,   915,    40,    26,   918,    12,
     920,    26,   966,    28,   652,  1092,    64,   971,   972,    47,
      48,    40,    64,  1100,    64,   510,   511,   512,   513,   514,
      54,     8,   942,   518,   541,   520,   942,     8,     8,    54,
      64,     5,    13,     0,     8,     2,   755,  1059,    12,    64,
      25,    75,   880,   963,   561,   965,   966,   885,  1146,    72,
      75,   971,    26,    27,    28,    40,  1024,   977,   777,  1146,
    1060,     8,  1296,    24,    25,    12,    40,    42,   988,    44,
      24,    25,    25,   792,    53,    50,    55,     8,    26,    40,
      54,  1168,    13,    50,    51,    25,    40,    40,   977,  1102,
      64,    58,    40,   988,    61,  1185,    44,    72,    46,   988,
      40,    75,    58,    59,  1024,  1195,    26,  1027,   827,  1029,
      25,  1027,     5,  1029,   762,     8,   906,    64,   908,    12,
      40,  1085,    25,     8,  1211,    40,  1282,    12,   623,  1142,
    1050,    24,    26,    26,   101,    28,     5,    40,    25,     8,
       8,   658,   980,    28,    12,     8,    40,   114,    76,    12,
      13,   118,    15,    40,   944,    40,    72,    25,  1171,   676,
    1250,    54,    90,  1083,     5,  1085,    25,     8,   135,    54,
       8,    64,    40,    26,    12,   127,  1096,    72,   968,    64,
     147,    40,    75,     8,    47,    45,     8,    25,    13,    12,
      75,    13,    17,    18,    19,    15,    64,    22,     8,    24,
    1287,    64,    40,    13,   699,  1292,   701,  1096,    26,    25,
      73,     8,   966,  1051,  1052,    26,    13,   971,   972,  1139,
      45,    83,    84,  1139,    40,    72,    64,     5,   195,    42,
       8,    44,    72,    73,    12,  1155,  1155,  1075,   755,  1265,
     207,    81,    82,    68,   963,    72,   213,   966,    26,    74,
      28,   218,   971,   972,    58,    59,  1176,    72,   977,     8,
    1155,  1181,    40,    12,    72,     8,  1155,   574,   575,   988,
      13,    26,  1236,   225,    26,   227,    54,   244,  1242,    28,
       8,   248,   906,     8,   908,    13,    64,  1176,    13,    75,
      76,    77,  1181,    28,   246,   943,  1185,    75,    51,  1137,
      71,   949,  1270,    78,   129,    54,  1195,    72,    72,    73,
      54,  1275,  1102,    72,   281,    64,  1236,    81,    82,    17,
      18,    19,  1242,  1291,   525,   526,    75,    12,  1296,  1249,
       8,  1085,    72,    73,    12,    13,     8,    15,   529,   530,
      12,    81,    82,  1062,    27,  1265,  1125,  1126,  1127,  1265,
    1270,  1271,  1142,    25,     8,  1275,     8,    67,     9,   326,
    1249,  1250,  1282,   557,   558,   559,  1085,    27,    40,    47,
      22,  1291,   133,    22,  1294,  1295,  1296,  1096,    40,    65,
      45,  1171,  1271,    42,    50,     8,    64,  1307,   355,   906,
       5,   908,    64,     8,  1314,    23,  1316,    12,     3,    45,
      42,  1321,    54,    87,     8,  1294,  1295,    59,     8,    12,
      23,    26,     3,    28,  1062,    73,   105,    23,  1307,  1067,
    1068,  1069,  1070,    45,   100,  1314,     8,  1316,    23,    12,
      27,  1185,  1321,    14,   401,     8,  1155,    27,     3,    54,
       3,  1195,     8,    41,  1092,   412,    12,    41,    40,    64,
       8,   968,  1100,    40,   421,    72,   408,  1176,    44,    25,
      75,    10,  1181,    13,   431,    26,  1185,   119,   963,    26,
     422,     8,   124,   125,    40,    44,  1195,    24,     5,     8,
      24,     8,  1236,   435,    44,    12,    27,     8,  1242,   441,
       8,     8,   444,    27,     3,   207,  1250,     3,    64,    26,
     152,    28,   570,   571,   572,   573,   158,    42,    41,    12,
       3,    27,   164,    40,     8,     3,   168,  1236,     3,    55,
      24,  1275,   174,  1242,    54,   177,    27,    54,    42,    42,
    1249,  1250,   244,    73,    23,  1183,   248,    64,   190,     5,
      27,    24,    41,   510,   511,   512,   513,   514,    75,     8,
       8,   518,  1271,   520,    54,    13,  1275,    41,    58,    17,
      18,    19,    27,  1282,    22,    73,    24,  1062,    73,     8,
      70,    73,    27,    27,   541,  1294,  1295,    73,    27,    27,
      26,    73,    72,    12,    27,  1102,    27,    45,  1307,    41,
      27,    73,    24,    44,   561,  1314,  1244,  1316,    45,   251,
      27,    24,  1321,    27,    24,  1253,    27,    42,    12,     5,
      68,    12,    26,     5,   326,     3,    74,    42,    24,   119,
      65,    16,   122,   207,  1272,  1142,     8,   594,     5,     5,
    1278,     8,     8,    67,     5,    12,    12,     8,    45,   139,
     140,    12,    45,   143,  1292,    17,   598,   599,   148,    26,
      26,    28,    28,   153,  1171,    26,   623,    28,    24,   159,
     244,    55,   162,   163,   248,     8,   318,    27,   620,    40,
     170,   129,   324,   325,    23,   175,    23,    54,    54,   631,
      56,    27,   334,    54,    73,    56,    26,    64,    64,   401,
      26,    26,   644,    64,   661,    26,     8,    27,    75,    75,
     412,     8,    27,    45,    75,    12,    13,    24,    15,   676,
       8,     8,    45,    41,     5,    12,    13,     8,    15,     8,
      24,    12,    24,     3,     8,    54,   102,   379,    24,    24,
      41,   102,   699,   385,   701,    26,   703,    28,    41,    27,
      47,    40,   326,     8,    27,    26,    24,    26,    42,    40,
      47,    24,   404,     3,    26,    24,     5,    64,    45,    27,
      24,   413,    88,    54,    24,    56,   418,    64,    27,    24,
      10,   423,    24,    64,    27,    41,    90,    24,    24,    42,
      62,    26,     8,    27,    75,    41,    27,    45,   755,    26,
      23,    65,   744,    41,     5,    27,   748,   749,   510,   511,
     512,   513,   514,    26,    24,   139,   518,    24,   520,    27,
     777,   102,     5,    42,    27,     8,    24,   401,    27,    12,
       5,   773,    27,     8,    40,   792,    40,    12,   412,   541,
      40,    27,   651,    26,    27,    28,   113,   113,   319,   531,
     998,    26,   998,    28,   344,   345,   603,    40,   500,   561,
    1130,   635,   876,  1211,   374,    40,   204,   749,   358,   748,
     827,    54,   362,   760,   944,     5,   888,   703,     8,    54,
     370,    64,    12,     5,   882,   848,     8,    10,   393,    64,
      12,   534,    75,   659,   536,  1292,    26,   387,    28,   527,
      75,  1100,  1315,   972,    26,   395,    28,   542,   152,   385,
      40,   378,  1185,  1085,   404,   966,  1139,   555,    40,  1024,
       5,   623,   412,     8,    54,     2,   396,    12,   418,   667,
    1083,  1168,    54,   423,    64,   137,   510,   511,   512,   513,
     514,    26,    64,    28,   518,    75,   520,  1141,   949,     5,
     528,   261,     8,    75,     5,   676,    12,     8,   423,   661,
     902,    12,   222,   614,    -1,    -1,   536,   541,    -1,    54,
      26,    -1,    28,    -1,   676,    26,    -1,    28,   235,    64,
      -1,    -1,    -1,    -1,   626,   627,    -1,   561,   630,    -1,
      75,    -1,   934,    -1,    -1,    -1,    -1,   699,    54,   701,
      -1,    -1,    -1,    54,    -1,    -1,   963,    -1,    64,   966,
      -1,    -1,   502,    64,   971,   972,    -1,    -1,    -1,    75,
     977,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,   988,   674,    -1,    -1,    -1,    -1,    -1,    -1,   681,
      -1,    -1,    -1,    -1,     8,   535,   536,   689,    12,   623,
     692,    15,    -1,   755,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   704,    -1,    -1,    -1,    -1,    -1,  1010,    -1,
      -1,    -1,    -1,    -1,    -1,   777,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    -1,   661,    -1,    -1,
    1032,  1033,    -1,    -1,    58,    59,    -1,    -1,    -1,    23,
      64,    -1,   676,    -1,    68,  1062,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,   760,    -1,
      -1,    -1,    -1,    -1,    -1,   699,    -1,   701,  1085,    53,
      -1,    55,    -1,    -1,    -1,   625,    -1,    -1,    -1,  1096,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1091,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,   811,
     812,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   755,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1155,    -1,
      -1,    -1,    -1,   777,    -1,   847,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   703,    -1,    -1,    -1,    -1,    -1,  1176,
      -1,    -1,    -1,    -1,  1181,    -1,    -1,    -1,  1185,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1195,    -1,
      -1,    -1,    -1,    -1,    -1,   887,   888,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   963,    -1,   905,  1206,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   915,    -1,    -1,   918,    -1,   920,  1236,
      -1,    -1,    -1,    -1,    -1,  1242,    -1,    -1,    -1,    -1,
      -1,    -1,  1249,  1250,    -1,    -1,    -1,    -1,    -1,    -1,
     942,   791,   792,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1271,    -1,    -1,    -1,  1275,    -1,
      -1,    -1,    -1,   965,    -1,  1282,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1294,  1295,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1307,    -1,    -1,    -1,    -1,    -1,    -1,  1314,    -1,  1316,
    1062,    -1,    -1,    -1,  1321,    -1,    -1,   857,    -1,   859,
      -1,    -1,    -1,   863,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,  1024,    -1,    -1,  1027,   876,  1029,    -1,   963,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   896,    -1,  1050,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,    -1,     7,     8,     9,    -1,    -1,    12,
      -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    22,
      -1,  1083,    25,    26,    -1,    28,    29,    -1,    -1,    -1,
      -1,   129,    -1,    -1,    -1,    -1,   134,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    -1,   146,    -1,
      -1,    54,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    68,   164,   977,  1062,    -1,
      -1,    74,    75,    -1,    -1,    -1,    -1,  1139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     198,   199,   105,    -1,    -1,    -1,    -1,    -1,    -1,   207,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,   130,   131,   132,
      -1,    -1,   230,    -1,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,    -1,   244,    -1,    12,   247,
      -1,    15,  1062,    -1,   252,   253,    -1,    -1,    -1,    -1,
    1282,    -1,   260,   261,    -1,   263,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,  1096,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      64,    -1,    -1,  1265,    68,   303,    -1,    -1,  1270,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   326,  1291,
      -1,    -1,    -1,    -1,  1296,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,  1156,  1157,   346,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,  1176,    -1,    -1,    -1,
      -1,  1181,    -1,  1183,    -1,  1185,   374,   375,   376,   377,
     378,   379,    -1,    -1,    -1,  1195,    -1,    -1,  1282,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1210,    -1,    -1,   401,    -1,    -1,   404,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1229,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1244,  1245,    -1,    -1,   436,  1249,
    1250,    -1,    -1,  1253,    -1,    -1,    -1,    -1,    -1,  1259,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1269,
      -1,  1271,    -1,    -1,    -1,    -1,    -1,    -1,  1278,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1294,  1295,    -1,    -1,    -1,    -1,
      -1,  1301,  1302,    -1,    -1,    -1,    -1,  1307,    -1,    -1,
      -1,    -1,    -1,    -1,  1314,    -1,  1316,    -1,    -1,    -1,
      -1,  1321,    -1,    -1,    -1,    -1,   514,    -1,    -1,    -1,
     518,    -1,    -1,    -1,    -1,   523,    -1,   525,   526,   527,
     528,   529,   530,   531,   532,    -1,   534,    -1,    -1,    -1,
      -1,    -1,    -1,   541,   542,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   563,   564,   565,    -1,    -1,
      -1,    -1,   570,   571,   572,   573,   574,   575,   576,    -1,
     578,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    16,    -1,    -1,    -1,    20,    21,    22,
      -1,    24,    25,    26,    -1,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      43,    44,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    74,    75,    -1,   652,    -1,    -1,    -1,    -1,    -1,
     658,    -1,    85,    86,    -1,    -1,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,   673,    -1,   100,   676,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,   130,   131,   132,
      -1,   134,   135,   136,    -1,   138,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    -1,
      -1,   739,    20,    21,   742,    -1,    24,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,   755,    -1,     8,
      -1,    -1,    40,    12,   762,    43,    15,    -1,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,   775,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    74,    75,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,   811,   812,    64,    -1,    -1,    -1,    68,
      -1,    -1,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,   130,   131,   132,    -1,   134,   135,   136,    -1,
     138,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,   880,    -1,    -1,    -1,    -1,   885,    -1,   887,
     888,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,     8,
      -1,    10,    11,    12,    -1,    14,    15,    -1,   906,    -1,
     908,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,
      -1,    -1,   920,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    -1,    -1,    -1,   943,   944,    56,    -1,    58,
      59,   949,    -1,    -1,    -1,    64,    -1,    66,    -1,    68,
      -1,    -1,    -1,   961,    -1,    -1,    75,    -1,    -1,    -1,
     968,    -1,    -1,    -1,   972,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   980,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,    -1,   138,
      -1,    -1,  1030,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1039,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1051,  1052,    -1,    -1,    -1,  1056,    -1,
      -1,    -1,    -1,    -1,  1062,    -1,    -1,    -1,    -1,  1067,
    1068,  1069,  1070,    -1,    -1,    -1,    -1,  1075,    -1,    -1,
      -1,  1079,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1092,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1100,    -1,  1102,    -1,     4,    -1,    -1,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    20,    21,    22,    -1,    24,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1137,
      -1,    -1,    40,    -1,  1142,    43,    -1,    -1,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    -1,
      68,    -1,    -1,  1171,    -1,    -1,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1183,    -1,  1185,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1195,    -1,    -1,
      -1,    -1,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,   130,   131,   132,    -1,   134,   135,   136,    -1,
     138,    -1,    -1,    -1,    -1,    -1,  1244,    -1,    -1,    -1,
      -1,    -1,  1250,    -1,    -1,  1253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1272,    -1,    -1,    -1,    -1,    -1,
    1278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1290,    -1,  1292,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    15,    16,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    99,   100,    -1,   102,   103,   104,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    -1,    -1,    -1,    -1,   137,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    -1,    15,    16,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    45,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,   102,
     103,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
      -1,    -1,    -1,    -1,   137,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    15,    16,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    99,   100,    -1,   102,   103,   104,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    -1,    -1,    -1,    -1,   137,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    -1,    15,    16,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    45,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,   100,    -1,   102,
     103,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
      -1,    -1,     4,    -1,   137,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    20,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    43,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    -1,    66,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,   130,   131,
     132,    -1,   134,   135,   136,     4,   138,    -1,     7,     8,
       9,    10,    11,    12,    -1,    14,    15,    16,    -1,    -1,
      -1,    20,    21,    22,    -1,    24,    25,    26,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,   130,   131,   132,    -1,   134,   135,   136,     5,   138,
      -1,     8,    -1,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
       5,   138,    -1,     8,    -1,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,     5,   138,    -1,     8,    -1,    10,    11,    12,
      -1,    14,    15,    -1,     3,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    -1,    -1,    40,    27,    28,
      43,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,   100,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,     0,   138,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    13,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    24,    25,
      26,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    45,
      -1,    47,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,     0,    -1,    -1,    -1,     4,    -1,     6,     7,
       8,     9,    98,    99,    12,    13,   102,    15,    16,   105,
      -1,    -1,    -1,    -1,    22,    -1,    24,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,    45,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
       0,    -1,    -1,    -1,     4,    -1,     6,     7,     8,     9,
      98,    99,    12,    13,    -1,    15,    16,   105,    -1,    -1,
      -1,    -1,    22,    -1,    24,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    -1,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,     0,    -1,
      -1,    -1,     4,    -1,     6,     7,     8,     9,    98,    99,
      12,    13,    -1,    15,    16,   105,    -1,    -1,    -1,    -1,
      22,    -1,    24,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,    -1,    -1,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,     0,    -1,    -1,    -1,
       4,    -1,     6,     7,     8,     9,    98,    99,    12,    13,
      -1,    15,    16,   105,    -1,    -1,    -1,    -1,    22,    -1,
      24,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,     5,
      -1,    -1,     8,    -1,    10,    11,    12,    -1,    14,    15,
      -1,     3,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    -1,    40,    -1,    28,    43,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    -1,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,     3,    -1,    -1,    -1,    -1,     8,   135,
     136,    11,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    -1,    26,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,    49,
      -1,    51,    -1,    -1,    54,    55,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    64,    65,    66,    -1,    68,    69,
      70,    71,    72,    73,    -1,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,     8,   133,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,
      -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,     8,   138,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
       8,   138,    10,    11,    12,    -1,    14,    15,    -1,     3,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    -1,    40,    -1,    28,    43,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,    -1,
      54,    55,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    -1,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,     8,
     138,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    43,    44,     8,    -1,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    56,    20,    21,
      -1,    -1,    -1,    -1,    26,    64,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    40,    41,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    64,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    75,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   100,   138,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,     8,   138,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,     8,   138,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      44,     8,    -1,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    56,    20,    21,    -1,    -1,    -1,    -1,    26,
      64,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    40,    -1,    -1,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    64,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    75,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   100,   138,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
       8,   138,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,     8,
     138,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    43,    44,     8,    -1,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    56,    20,    21,
      -1,    -1,    24,    -1,    26,    64,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    40,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    64,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    75,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   100,   138,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,     8,   138,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,
      -1,    24,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,     8,   138,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    -1,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,     8,   138,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,     8,   138,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,     8,   138,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
       8,   138,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    44,     8,    -1,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    56,    20,
      21,    -1,    -1,    -1,    -1,    26,    64,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    40,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    64,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    75,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   100,
     138,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,     8,   138,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    43,    44,     8,    -1,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    56,    20,    21,    -1,    -1,    -1,
      -1,    26,    64,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    40,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,   100,    64,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      75,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   100,   138,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,     8,   138,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    44,     8,
      -1,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      56,    20,    21,    -1,    -1,    -1,    -1,    26,    64,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    40,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    64,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    75,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   100,   138,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,     8,   138,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    44,     8,    -1,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    56,    20,    21,    -1,
      -1,    -1,    -1,    26,    64,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    40,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    64,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    75,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   100,   138,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,     8,   138,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      44,     8,    -1,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    56,    20,    21,    -1,    -1,    -1,    -1,    26,
      64,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    40,    41,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    64,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    75,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   100,   138,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
       8,   138,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    -1,     8,    -1,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    56,    20,
      21,    -1,    -1,    -1,    -1,    26,    64,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    40,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    64,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    75,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   100,
     138,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,     8,   138,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    43,    -1,     8,    -1,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    56,    20,    21,    -1,    -1,    -1,
      -1,    26,    64,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    40,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,   100,    64,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      75,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   100,   138,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,     8,   138,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,     8,
      -1,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      56,    20,    21,    -1,    -1,    -1,    -1,    26,    64,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    64,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    75,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   100,   138,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,     8,   138,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    -1,     8,    -1,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    56,    20,    21,    -1,
      -1,    -1,    -1,    26,    64,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    40,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    64,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    75,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   100,   138,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,     8,   138,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      -1,     8,    -1,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    56,    20,    21,    -1,    -1,    -1,    -1,    26,
      64,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    64,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    75,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   100,   138,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
       8,   138,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    -1,     8,    -1,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    56,    20,
      21,    -1,    -1,    -1,    -1,    26,    64,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    40,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    64,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    75,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   100,
     138,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,     8,   138,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,     8,   138,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      43,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,     8,    -1,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    -1,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,     8,    -1,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,     8,    -1,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,
      -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,     8,    -1,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
       8,    -1,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,     8,
      -1,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    -1,    26,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    58,
      59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
       4,    -1,     6,     7,     8,     9,   135,   136,    12,    13,
      -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
       6,     7,     8,     9,    98,    99,    12,    13,    -1,    15,
      16,   105,    -1,    -1,    -1,    -1,    22,    -1,    24,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,    -1,
      -1,    47,    48,    49,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,     6,     7,
       8,     9,    98,    99,    12,    13,    -1,    15,    16,   105,
      -1,    -1,    -1,    -1,    22,    -1,    24,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,    45,    -1,    47,
      48,    49,     8,    -1,    -1,    -1,    12,    -1,    -1,    15,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    99,    58,    59,    -1,    -1,    -1,   105,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,     4,    -1,     6,     7,     8,
       9,    -1,    -1,    12,    13,    -1,    15,    16,    -1,   105,
      -1,    -1,    -1,    22,    -1,    24,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    44,    -1,    -1,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,    -1,     6,     7,     8,     9,    98,
      99,    12,    13,    -1,    15,    16,   105,    -1,    -1,    -1,
      -1,    22,    -1,    24,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,    -1,    -1,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,     4,    -1,     6,     7,     8,     9,    98,    99,    12,
      13,    -1,    15,    16,   105,    -1,    -1,    -1,    -1,    22,
      -1,    24,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,    45,    -1,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
      -1,     6,     7,     8,     9,    98,    99,    12,    13,    -1,
      15,    16,   105,    -1,    -1,    -1,    -1,    22,    -1,    24,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
      45,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,     6,
       7,     8,     9,    98,    99,    12,    13,    -1,    15,    16,
     105,    -1,    -1,    -1,    -1,    22,    -1,    24,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,    45,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,    -1,     6,     7,     8,
       9,    98,    99,    12,    13,    -1,    15,    16,   105,    -1,
      -1,    -1,    -1,    22,    -1,    24,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,    45,    -1,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,    -1,     6,     7,     8,     9,    98,
      99,    12,    13,    -1,    15,    16,   105,    -1,    -1,    -1,
      -1,    22,    -1,    24,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,    -1,    -1,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,     6,     7,     8,     9,    98,    99,    12,
      13,    -1,    15,    16,   105,    -1,    -1,    -1,    -1,    22,
      -1,    24,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
       8,    -1,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    -1,     8,    -1,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    56,    20,
      21,    -1,    -1,    -1,    -1,    26,    64,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    40,
      41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    64,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    75,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   100,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,     8,    -1,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    -1,     8,    -1,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    56,    20,    21,    -1,    -1,    -1,
      -1,    26,    64,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    40,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,   100,    64,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      75,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   100,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,     8,    -1,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,     8,
      -1,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      56,    20,    21,    -1,    -1,    -1,    -1,    26,    64,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    64,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    75,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   100,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,     8,    -1,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    -1,     8,    -1,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    56,    20,    21,    -1,
      -1,    -1,    -1,    26,    64,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    40,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    64,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    75,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   100,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,     8,    -1,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      -1,     8,    -1,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    56,    20,    21,    -1,    -1,    -1,    -1,    26,
      64,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    64,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    75,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   100,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
       8,    -1,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    -1,     8,    -1,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    56,    20,
      21,    -1,    -1,    -1,    -1,    26,    64,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    40,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    64,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    75,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   100,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,     8,    -1,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    43,    -1,     8,    -1,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    56,    20,    21,    -1,    -1,    -1,
      -1,    26,    64,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    40,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,   100,    64,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      75,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   100,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,     8,    -1,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,     8,
      -1,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      56,    20,    21,    -1,    -1,    -1,    -1,    26,    64,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    64,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    75,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   100,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,     8,    -1,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    -1,     8,    -1,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    56,    20,    21,    -1,
      -1,    -1,    -1,    26,    64,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    40,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    64,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    75,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   100,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,     8,    -1,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      -1,     8,    -1,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    56,    20,    21,    -1,    -1,    -1,    -1,    26,
      64,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    64,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    75,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   100,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
       8,    -1,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    -1,     8,    -1,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    56,    20,
      21,    -1,    -1,    -1,    -1,    26,    64,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    40,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    64,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    75,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   100,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,     8,    -1,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    43,    -1,     8,    -1,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    56,    20,    21,    -1,    -1,    -1,
      -1,    26,    64,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    40,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,   100,    64,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      75,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   100,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,     8,    -1,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,     8,
      -1,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      56,    20,    21,    -1,    -1,    -1,    -1,    26,    64,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    64,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    75,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   100,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,     8,    -1,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    -1,     8,    -1,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    56,    20,    21,    -1,
      -1,    -1,    -1,    26,    64,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    40,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    64,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    75,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   100,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,     8,    -1,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      -1,     8,    -1,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    56,    20,    21,    -1,    -1,    -1,    -1,    26,
      64,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    64,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    75,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   100,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
       8,    -1,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    -1,     8,    -1,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    56,    20,
      21,    -1,    -1,    -1,    -1,    26,    64,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    40,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    64,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    75,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   100,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,     8,    -1,    10,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    43,    -1,     8,    -1,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    56,    20,    21,    -1,    -1,    -1,
      -1,    26,    64,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    40,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,   100,    64,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      75,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   100,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,     8,    -1,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,     8,
      -1,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      56,    20,    21,    -1,    -1,    -1,    -1,    26,    64,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    64,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    75,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   100,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,     8,    -1,
      10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    -1,     8,    -1,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    56,    20,    21,    -1,
      -1,    -1,    -1,    26,    64,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    40,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    64,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    75,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   100,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,     8,    -1,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      -1,     8,    -1,    10,    11,    12,    -1,    14,    15,    -1,
      -1,    -1,    56,    20,    21,    -1,    -1,    -1,    -1,    26,
      64,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    64,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    75,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   100,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
       8,    -1,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    -1,     8,    -1,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    56,    20,
      21,    -1,    -1,    -1,    -1,    26,    64,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    40,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    64,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    75,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   100,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,     4,    -1,
      -1,     7,     8,     9,   135,   136,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,     7,
       8,     9,    -1,    99,    12,    -1,    -1,    15,    16,   105,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,    45,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    -1,    -1,
      12,    99,    -1,    15,    16,    -1,    -1,   105,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
      -1,     7,     8,     9,    -1,    -1,    12,    99,    -1,    15,
      16,    -1,    -1,   105,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,     9,
      -1,    -1,    12,    99,    -1,    15,    16,    -1,    -1,   105,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    -1,    -1,    12,    99,
      -1,    15,    16,    -1,    -1,   105,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,     7,
       8,     9,    -1,    -1,    12,    99,    -1,    15,    16,    -1,
      -1,   105,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    -1,    -1,
      12,    99,    -1,    15,    16,    -1,    -1,   105,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
      -1,     7,     8,     9,    -1,    -1,    12,    99,    -1,    15,
      16,    -1,    -1,   105,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,     9,
      -1,    -1,    12,    99,    -1,    15,    16,    -1,    -1,   105,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    -1,     7,     8,     9,    -1,    -1,    12,    99,
      -1,    15,    16,    -1,    -1,   105,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,     7,
       8,     9,    -1,    -1,    12,    99,    -1,    15,    16,    -1,
      -1,   105,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    -1,    -1,
      12,    99,    -1,    15,    16,    -1,    -1,   105,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
      -1,     7,     8,     9,    -1,    -1,    12,    99,    -1,    15,
      16,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    72,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,   130,   131,   132,     4,    -1,    -1,
       7,     8,     9,    -1,    -1,    12,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,     7,
       8,     9,    -1,    40,    12,    -1,    -1,    15,    16,    -1,
      47,    48,    49,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    74,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    74,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,   130,   131,   132,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,   130,   131,   132,     4,    -1,    -1,     7,     8,
       9,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,     9,
      -1,    -1,    12,    -1,    -1,    15,    16,    -1,    47,    48,
      49,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    68,
      40,    -1,    -1,    -1,    -1,    74,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    74,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,   130,   131,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
     130,   131,   132,     4,    -1,    -1,     7,     8,     9,    -1,
      -1,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    -1,    40,
      12,    -1,    -1,    15,    16,    -1,    47,    48,    49,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    68,    40,    -1,
      -1,    -1,    -1,    74,    -1,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,   130,
     131,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,   130,   131,
     132,     4,    -1,    -1,     7,     8,     9,    -1,    -1,    12,
      -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,     7,     8,
       9,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    68,    -1,    -1,    47,    48,
      49,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   105,   130,   131,   132,
      -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,   130,   131,   132,     4,    -1,    -1,     7,     8,     9,
      -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,     9,    -1,    -1,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    47,    48,    49,    68,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
     130,   131,   132,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,     8,   130,   131,
     132,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    12,    58,    59,    15,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,
      -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
       8,    -1,    -1,    -1,    12,    -1,    -1,    15,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,     8,    -1,    -1,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    -1,    -1,    -1,     8,    -1,    -1,    -1,    12,
      58,    59,    15,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      68,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    68,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,     8,    -1,    -1,    -1,    12,    -1,
      -1,    15,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,     8,    -1,    -1,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    12,    58,    59,    15,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,     8,    -1,    -1,
      -1,    12,    -1,    -1,    15,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
       8,    -1,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     4,     6,     7,     8,     9,    12,    13,    15,    16,
      22,    24,    47,    48,    49,    58,    59,    60,    61,    62,
      63,    64,    68,    74,    87,    98,    99,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   145,   147,   161,   164,   171,
     177,   178,   190,   198,   200,   201,   203,   226,   229,   230,
     232,   233,   234,   238,   239,   241,   247,   248,   249,   253,
     256,   257,   258,   266,   267,   268,   269,   270,   283,   284,
     286,   287,   314,   328,   335,   336,   337,   339,   340,   341,
     342,   343,   353,   362,   370,   400,   402,   403,   407,   408,
     413,   414,   416,   422,   424,   425,   427,   431,   433,   434,
     438,   441,   444,   445,    44,   232,   328,   133,   409,    72,
     238,   341,     8,    15,    68,   153,   247,   442,   443,    26,
      47,    48,   341,   342,    26,    24,     8,    42,    89,   291,
     329,   330,   331,   332,     8,   250,    26,    13,    99,     7,
       9,    24,   230,   256,   268,     5,    22,    25,    26,    28,
      29,    40,    54,    75,   143,   162,   176,   230,   231,   236,
     237,   341,   360,   378,   379,    44,   177,   178,   341,   402,
     178,   230,   236,   296,   297,   298,   341,   232,    12,    44,
     178,     8,   416,     6,   144,   327,    12,     8,    13,   151,
       8,   210,   416,   427,    52,   209,   232,    72,     0,    64,
     105,    12,   234,    44,   232,    13,    15,    47,    73,   178,
     342,   365,   414,   417,   418,   424,   428,   429,     8,    13,
     151,   178,   341,    24,   143,     3,    24,     8,    10,    11,
      12,    14,    20,    21,    26,    28,    40,    43,    56,    75,
     100,   102,   103,   104,   106,   107,   108,   109,   110,   111,
     134,   135,   136,   138,   150,   160,   163,   165,   182,   197,
     206,   213,   221,   243,   263,   265,   273,   278,   292,   294,
     311,   312,   315,   316,   317,   334,   341,   347,   354,   363,
     371,   372,   373,   382,   386,   394,   398,   402,   403,   415,
     419,   434,   436,   437,   439,   449,     8,   213,   214,   317,
     234,    67,   331,   178,   178,     8,     8,   178,    23,    12,
     214,   232,   178,   297,   178,    99,    26,   360,   378,   178,
      26,    40,   178,   178,   102,   292,   341,    28,    54,   384,
     385,   236,    24,   178,    75,    26,    40,   369,   378,    17,
      18,    19,    68,   158,   161,   178,   239,   249,   256,   267,
     268,   283,   321,   325,   326,   362,   407,   413,   441,   445,
      42,   186,   187,   199,   342,   151,    23,    26,    44,   100,
     191,   193,   301,   304,   392,     3,    24,     8,   259,   260,
     261,   262,   254,   255,   342,    26,    87,   234,    12,   402,
     402,    72,     8,   210,   200,   214,   292,   403,   410,   411,
     412,   426,   431,   432,   434,    26,    45,   234,    72,   232,
      14,   152,   429,     3,    73,     8,   143,   146,   143,   146,
     402,    23,     8,   402,   439,   442,    26,     5,   197,   273,
     426,     8,    14,    23,    28,    75,   143,   194,   195,   196,
     295,   308,   309,   399,   197,     3,    11,    20,    21,    23,
      26,    28,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    43,    51,    54,    55,    65,    66,    69,
      70,    71,    72,    73,    75,    76,    77,    78,    79,    80,
      81,    82,    84,   101,   102,   103,   104,   222,   364,   409,
     432,   440,    26,   389,   390,     8,   238,   427,   197,   197,
      72,    72,    72,    72,    26,   165,   166,     5,    26,   436,
      26,   165,   193,    66,   101,    20,    21,    28,    51,    69,
      70,    71,     3,    27,    78,    26,    72,   230,   231,   310,
     313,    72,    54,    23,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    53,    55,   167,    75,    76,    77,
     151,    72,    83,    84,    26,    40,    65,    67,   103,   104,
      72,    73,    81,    82,    79,    80,    26,   193,    26,   193,
     197,    27,     8,    24,    24,    67,    24,   342,   383,     9,
     147,     3,    27,     8,    44,    24,   254,   342,   214,   426,
     369,    27,   409,    22,   180,   181,   226,   227,   228,    40,
      50,   137,   392,   446,   447,   448,   178,   365,   366,   367,
     368,   214,   215,    65,   420,    42,   231,   178,   326,    45,
     178,   188,   189,    50,   204,   205,     8,   201,   402,   402,
     165,   193,   302,   274,   302,   303,    45,    67,   244,   245,
     246,   303,    26,   217,   218,   373,   296,   178,    23,     3,
      45,    42,   251,   252,   252,     8,   366,   329,    87,   374,
     375,    12,   412,    23,   178,   143,     3,    73,   178,   432,
       5,    26,   155,   156,   157,   357,   358,   359,   376,   379,
     105,    45,   230,   143,   146,   417,   392,   393,   146,    23,
     146,    23,   240,   241,   242,   143,   273,     3,    20,    21,
      23,    28,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    54,    55,    69,    70,    71,    72,    73,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,   279,
     279,    27,    27,   143,     8,   143,    14,     8,     3,     3,
      41,    27,    41,    40,    40,    72,     8,   435,   219,   220,
     379,   366,    44,   388,   426,   426,   426,   426,   273,   426,
      26,   426,   426,    40,   197,    26,   350,   351,   334,   334,
     263,   398,   386,   386,   163,   165,   265,   366,   418,    10,
     355,   356,    44,   208,   412,   294,   273,   316,   302,   371,
     371,   371,     8,   402,   439,   412,   197,   197,   274,   275,
     275,   151,   151,   206,   206,   206,   206,   160,   160,   275,
     275,     8,   340,    24,     8,   409,    24,    44,   234,   338,
     340,   143,   143,    27,     8,   173,     8,   168,   172,   173,
     174,   175,   179,   228,     8,   293,    23,    42,    86,   224,
     225,   282,   285,   446,   282,   228,    27,     3,   143,    41,
     426,   326,     8,   146,   236,   322,   323,   324,   254,    16,
     158,   202,   238,   341,   342,   143,     3,   187,    27,   143,
       3,     8,     3,   141,   191,     3,   141,    54,    55,   214,
      45,   260,   432,    24,    27,   332,   333,    42,    73,   216,
     317,   342,   410,   358,   376,   379,    40,   369,    40,   369,
     157,   376,   377,    27,     5,    26,   156,   236,   379,   146,
      23,   426,   426,    24,   178,   242,   156,    27,   197,     5,
     197,   143,     8,   301,    28,   196,   194,    41,    41,   412,
     220,    27,    15,    44,   100,   207,   273,   344,   387,   391,
     401,   430,    73,    73,    73,    73,    27,    27,     8,    27,
      27,    41,   274,    26,   352,   432,    27,    73,    26,   178,
      99,   177,   178,   190,   235,   307,   404,   405,   406,    73,
      42,    73,    27,    41,   292,   292,    27,    27,    44,    27,
     338,    45,    24,    27,    27,    24,    42,     5,     3,    41,
      12,    26,   169,   170,     3,    41,    66,    85,     8,   202,
     318,   319,   320,   225,   208,   228,     5,   365,   178,   178,
     191,   192,   392,   448,     3,    24,   158,   159,    16,   154,
      13,   427,   188,   302,   244,    45,    45,   373,   217,    65,
     178,    17,    24,     8,   143,   369,    27,   215,   420,   215,
     379,    23,    23,   292,    27,    27,   279,   301,    73,   341,
     342,   273,    26,   216,    24,    45,   387,    26,    26,    26,
      26,    27,   197,    27,   426,    26,   193,   348,   349,    40,
     345,   346,   361,   379,   313,   393,   214,   420,   421,     8,
       8,    40,    57,    85,    86,    90,    91,    92,    93,    94,
      95,    96,    97,   112,   114,   208,   223,   230,   273,   276,
     277,   305,   306,   397,   423,   404,    45,   165,   338,    24,
      45,   168,   174,    41,     8,    26,    40,    44,    46,   183,
     184,   185,     8,   301,    24,    24,   143,    26,   193,     3,
     208,   385,    42,    23,   380,   381,   236,   322,   202,   202,
     402,   143,   143,   402,    24,    24,    41,    41,   302,   302,
     197,   427,    45,    24,   273,   273,   273,   273,    27,   275,
     276,    40,   346,   393,   310,    27,    42,   193,   271,   272,
     273,    42,   208,    26,   404,    26,    24,    24,   272,     8,
     214,     4,    11,   142,   149,    26,    24,    45,     5,   185,
     185,   185,   183,    27,    24,   275,   318,    88,   288,   289,
     356,   214,   139,   392,   448,    24,   234,   178,   178,    27,
      24,    10,   148,    27,    27,    27,    27,   349,    27,    41,
     214,   208,   404,    24,   404,   289,   178,   211,   273,    90,
      22,   161,   178,   277,   299,   300,   400,    24,    24,    42,
      26,    62,   299,   300,    27,    41,    45,    27,   143,    26,
     289,   290,   178,   192,    23,    65,   395,   396,   178,    41,
     230,    27,    26,   211,   212,   178,   280,   404,   300,   208,
     211,     5,   178,   264,   424,    24,   178,   236,   404,   273,
      24,   230,    42,   211,   113,    27,   432,    27,   191,    27,
     276,    28,    54,   236,   385,   271,   281,    27,   404,   404,
     156,   236,   208,    24,    27,    40,    27,   404,   404,   293,
     404,   113,    41,   404
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   140,   141,   141,   142,   142,   143,   143,   144,   144,
     145,   145,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   154,   154,
     155,   155,   155,   156,   156,   157,   157,   158,   158,   158,
     159,   159,   160,   160,   160,   161,   162,   162,   163,   163,
     164,   165,   165,   165,   165,   166,   166,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   168,   169,
     170,   170,   171,   172,   172,   172,   172,   173,   174,   174,
     175,   176,   176,   177,   178,   178,   179,   179,   180,   181,
     181,   182,   183,   183,   183,   183,   184,   184,   185,   185,
     186,   187,   187,   188,   188,   188,   189,   189,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   191,   191,   192,
     192,   193,   193,   193,   194,   194,   195,   195,   196,   196,
     197,   197,   198,   198,   199,   200,   200,   200,   201,   201,
     202,   202,   202,   203,   204,   205,   205,   206,   206,   207,
     208,   209,   210,   211,   211,   212,   212,   213,   213,   214,
     215,   215,   216,   217,   217,   218,   218,   219,   220,   220,
     221,   222,   223,   224,   225,   225,   226,   226,   227,   228,
     228,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     230,   230,   231,   231,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   233,   233,   234,
     234,   235,   236,   236,   237,   238,   239,   240,   241,   241,
     241,   242,   242,   243,   243,   244,   245,   245,   246,   247,
     248,   248,   248,   248,   249,   250,   250,   251,   252,   252,
     253,   254,   255,   255,   256,   256,   256,   257,   258,   258,
     259,   260,   260,   261,   261,   262,   262,   263,   263,   263,
     264,   264,   264,   265,   265,   266,   267,   268,   268,   269,
     269,   270,   270,   270,   271,   271,   272,   272,   273,   273,
     274,   275,   275,   276,   276,   277,   278,   278,   278,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   280,   280,   281,   282,   282,   282,   282,   283,   283,
     284,   284,   285,   286,   287,   287,   288,   289,   290,   290,
     291,   292,   292,   293,   293,   294,   294,   295,   295,   296,
     296,   297,   297,   298,   298,   299,   299,   299,   300,   300,
     301,   301,   302,   302,   303,   303,   304,   304,   305,   305,
     305,   305,   306,   306,   306,   306,   306,   307,   307,   307,
     308,   308,   308,   309,   309,   310,   310,   311,   311,   312,
     313,   314,   314,   315,   315,   316,   316,   317,   317,   318,
     318,   319,   319,   320,   320,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   322,   322,   322,   322,
     323,   323,   324,   324,   325,   325,   326,   326,   327,   328,
     328,   328,   329,   330,   330,   331,   331,   332,   333,   333,
     334,   334,   334,   334,   335,   336,   337,   338,   339,   339,
     339,   340,   340,   341,   341,   341,   341,   341,   341,   342,
     342,   343,   344,   345,   345,   346,   346,   347,   347,   348,
     348,   349,   349,   350,   351,   351,   352,   353,   354,   355,
     355,   356,   356,   357,   357,   357,   358,   358,   359,   359,
     359,   360,   360,   360,   360,   361,   361,   362,   363,   363,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   365,   365,   365,   365,   366,   366,
     367,   367,   368,   368,   369,   370,   370,   371,   371,   371,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   373,   373,   373,
     373,   373,   373,   373,   374,   375,   375,   376,   376,   377,
     377,   378,   378,   379,   379,   379,   379,   380,   381,   381,
     382,   383,   384,   384,   385,   385,   386,   386,   386,   386,
     386,   387,   387,   387,   387,   388,   389,   390,   390,   391,
     391,   392,   393,   393,   394,   395,   396,   396,   397,   397,
     397,   397,   397,   398,   398,   398,   399,   399,   399,   399,
     400,   400,   400,   401,   402,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   404,   404,   404,   404,   404,   404,
     404,   404,   405,   405,   406,   406,   407,   407,   408,   408,
     408,   408,   409,   410,   410,   410,   411,   411,   412,   412,
     413,   413,   414,   415,   415,   415,   416,   417,   417,   418,
     418,   419,   420,   421,   421,   422,   422,   423,   424,   424,
     425,   425,   426,   427,   427,   427,   428,   428,   428,   428,
     428,   428,   429,   429,   430,   431,   431,   431,   431,   432,
     432,   433,   433,   434,   434,   435,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   437,   437,
     437,   437,   437,   437,   438,   439,   439,   439,   439,   439,
     439,   439,   440,   441,   442,   443,   443,   444,   445,   446,
     446,   447,   447,   448,   448,   449,   449
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       1,     3,     1,     0,     1,     1,     2,     1,     1,     1,
       0,     1,     1,     3,     3,     6,     5,     5,     1,     3,
       6,     1,     1,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       0,     1,     2,     1,     3,     2,     4,     1,     0,     1,
       3,     6,     1,     2,     0,     1,     1,     1,     3,     0,
       1,     2,     3,     3,     3,     1,     1,     2,     0,     1,
       2,     0,     1,     2,     4,     4,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     0,
       1,     4,     4,     2,     1,     1,     1,     1,     1,     3,
       1,     4,     5,     3,     2,     1,     1,     1,     1,     1,
       2,     3,     1,     4,     1,     0,     1,     1,     3,     6,
       3,     5,     1,     1,     4,     0,     1,     1,     5,     1,
       0,     1,     1,     1,     3,     1,     3,     2,     0,     1,
       2,     2,     3,     2,     0,     1,     1,     1,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       1,     1,     1,     3,     2,     4,     8,     2,     1,     1,
       1,     2,     2,     3,     5,     2,     1,     3,     2,     3,
       4,     2,     4,     1,     1,     1,     4,     2,     0,     1,
       4,     2,     0,     1,     1,     2,     2,     1,     4,     5,
       2,     1,     3,     1,     3,     0,     1,     1,     3,     3,
       3,     3,     1,     1,     3,     3,     4,     4,     1,     0,
       1,     2,     4,     2,     1,     1,     0,     1,     1,     3,
       1,     0,     1,     0,     1,     2,     5,     5,     7,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     6,     1,     2,     1,     3,     3,     5,     5,
       1,     1,     4,     3,     0,     1,     5,     2,     0,     1,
       1,     1,     1,     1,     3,     1,     3,     3,     4,     2,
       2,     1,     3,     0,     1,     1,     1,     1,     0,     1,
       1,     3,     1,     1,     2,     4,     0,     1,     5,     7,
       8,     8,     2,     2,     3,     1,     3,     4,     5,     4,
       1,     1,     3,     0,     1,     1,     5,     3,     7,     3,
       4,     5,     3,     3,     2,     1,     3,     1,     3,     4,
       2,     1,     1,     2,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     5,
       1,     3,     0,     1,     2,     3,     0,     1,     6,     4,
       4,     4,     2,     2,     3,     0,     1,     3,     0,     1,
       1,     3,     3,     3,     7,     1,     5,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     3,     4,     0,
       1,     8,     3,     2,     1,     0,     1,     5,     7,     3,
       1,     0,     1,     3,     0,     1,     2,     3,     4,     4,
       1,     0,     1,     2,     5,     3,     0,     1,     2,     5,
       1,     2,     2,     5,     3,     4,     5,     5,     2,     5,
       1,     1,     3,     3,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     6,     4,     6,     2,     3,
       1,     3,     0,     1,     7,     2,     5,     1,     3,     3,
       1,     4,     4,     4,     4,     2,     2,     4,     4,     2,
       2,     7,     7,     7,     7,     4,     4,     1,     1,     3,
       1,     1,     1,     1,     5,     0,     1,     1,     2,     0,
       1,     1,     2,     3,     2,     2,     4,     2,     0,     1,
       3,     2,     1,     1,     0,     1,     1,     3,     3,     3,
       3,     1,     1,     1,     1,     3,     3,     0,     1,     1,
       2,     2,     0,     1,     3,     2,     0,     1,     7,     9,
       4,     6,     6,     1,     3,     3,     2,     3,     1,     2,
       3,     4,     8,     2,     4,     2,     3,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       1,     2,     1,     2,     0,     1,     5,     7,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     0,     1,
       2,     2,     5,     1,     4,     4,     1,     1,     1,     1,
       3,     2,     2,     0,     1,     1,     4,     3,     2,     5,
       0,     1,     2,     1,     1,     1,     3,     4,     3,     4,
       4,     5,     1,     1,     4,     1,     1,     1,     1,     2,
       2,     1,     1,     3,     4,     1,     1,     2,     2,     2,
       1,     2,     4,     5,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     1,     1,     1,     1,     2,
       2,     1,     2,     3,     3,     2,     4,     6,     3,     1,
       1,     1,     2,     0,     1,     2,     2
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const yytype_int8 yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const yytype_int8 yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const yytype_int16 yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1197,     0,     0,  1897,     0,     0,     0,     0,
       0,  1921,     0,     0,     0,     0,  1227,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3794,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1923,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3799,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   171,     0,     0,  2055,
       0,  2057,   176,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1899,     0,     0,     0,     0,     0,     0,     0,     0,  3903,
       0,     0,     0,  3319,     0,   185,     0,     0,     0,  2059,
       0,     0,     0,     0,     0,  2908,     0,  3658,     0,  3905,
    3907,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1905,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3132,     0,  1987,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1989,     0,     0,     0,   290,     0,     0,     0,   292,
       0,     0,     0,     0,     0,     0,     0,  3134,     0,  1991,
    1993,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   986,     0,     0,     0,     0,   178,
       0,     0,   395,   181,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   397,     0,
       0,   294,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2797,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   183,     0,     0,     0,  1223,
    2799,  1187,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1225,     0,     0,     0,  2801,  2803,
       0,     0,     0,     0,     0,     0,     0,  1189,     0,     0,
       0,     0,     0,     0,     0,     0,  2910,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1967,     0,     0,
    1971,     0,  1208,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3399,     0,     0,     0,  1210,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2049,     0,     0,     0,  2051,     0,
    3401,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3403,  1212,     0,     0,     0,     0,     0,  1214,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2053,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1216,     0,  3324,     0,     0,     0,     0,
       0,     0,     0,     0,  2061,  1084,     0,     0,     0,     0,
       0,     0,  1086,     0,     0,  3326,  3328,     0,     0,     0,
       0,     0,     0,     0,  1200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3330,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2825,     0,     0,     0,
       0,     0,     0,  2120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1891,     0,     0,  3317,     0,     0,  3397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1893,     0,     0,     0,
       0,     0,     0,  2232,  1175,     0,  3375,  2234,  1177,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2137,     0,     0,     0,     0,     0,     0,     0,  2238,
       0,     0,     0,     0,     0,     0,     0,  2817,     0,  2240,
    1179,  2819,     0,     0,     0,     0,     0,     0,  3801,  1220,
    2242,     0,     0,     0,     0,     0,     0,     0,     0,  1911,
       0,     0,     0,     0,     0,     0,  1979,     0,     0,     0,
    3992,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1981,     0,     0,     0,     0,     0,     0,     0,     0,
    3671,  1983,     0,  2821,     0,     0,  3673,     0,  3897,  1977,
       0,     0,     0,     0,     0,     0,  1985,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1997,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3343,     0,     0,     0,     0,  2863,     0,     0,
       0,  2861,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1314,     0,     0,     0,     0,     0,   399,     0,     0,
       0,     0,     0,     0,  3679,     0,     0,     0,  3681,     0,
    2857,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3683,     0,     0,  2859,     0,     0,     0,     0,
       0,  4888,     0,     0,     0,     0,     0,  2827,     0,  2829,
       0,     0,     0,     0,     0,     0,     0,   984,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3371,     0,     0,
    3685,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3663,     0,  2793,  2795,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   304,     0,     0,     0,   306,
       0,     0,     0,     0,     0,  4484,     0,     0,     0,     0,
       0,     0,  2865,     0,     0,     0,     0,  4486,     0,  2224,
    1229,     0,     0,  3784,     0,   973,     0,     0,     0,   976,
       0,     0,   978,  4886,     0,     0,  1719,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3373,     0,  3786,
    1969,   308,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  4890,     0,  2015,   980,     0,   992,     0,     0,  1895,
    3788,     0,     0,     0,     0,     0,     0,     0,  1218,  2017,
       0,   982,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1953,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  5032,     0,     0,  2115,     0,  2041,
       0,     0,     0,  1958,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2019,     0,     0,     0,     0,  2117,  2021,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3116,
       0,     0,     0,  3118,     0,  1995,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3120,
    3332,     0,     0,  3699,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3122,     0,  1949,     0,  3144,
       0,     0,     0,  1956,     0,  3124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3126,  1960,     0,     0,
    2122,     0,     0,  3146,  2125,     0,  2823,  2127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2129,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2131,     0,     0,     0,
       0,     0,     0,  1181,     0,     0,     0,  1183,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2043,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2150,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2851,     0,     0,     0,     0,     0,  2226,  1185,
       0,     0,     0,  2228,     0,  2230,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2577,
       0,     0,     0,     0,     0,     0,     0,     0,  2867,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2869,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2831,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2837,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2809,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2811,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3148,     0,  3228,  3230,     0,     0,     0,     0,     0,     0,
       0,     0,  3232,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2813,     0,     0,     0,     0,     0,  2815,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1191,  3665,     0,  2872,  1193,  3667,  2874,     0,     0,
       0,  2876,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2878,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1195,  3669,     0,
       0,     0,     0,  2880,     0,     0,     0,     0,     0,     0,
       0,  2139,     0,     0,     0,  2142,     0,     0,  2144,     0,
       0,  2615,     0,     0,  3361,  2618,     0,  3363,  2620,     0,
       0,  3365,     0,     0,  3675,  3677,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3367,     0,     0,     0,     0,
    2146,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2622,     0,     0,     0,     0,     0,     0,  2148,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2624,     0,     0,
       0,     0,     0,  3369,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  5204,     0,     0,     0,  5206,
       0,     0,     0,     0,  5212,     0,  5214,     0,     0,     0,
       0,     0,     0,  5208,     0,     0,  5026,  5450,     0,     0,
       0,  2898,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3353,     0,
       0,  5210,  3355,     0,     0,     0,  5038,     0,     0,     0,
    5040,     0,     0,     0,     0,     0,  3357,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1202,     0,     0,     0,  1204,     0,     0,
       0,     0,     0,     0,  3359,     0,     0,     0,     0,     0,
       0,     0,  5042,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2035,     0,     0,     0,  2037,  4892,     0,     0,
       0,  4894,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1206,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2039,     0,
       0,     0,     0,  4896,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  5028,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1951,
    5030,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   265,     0,     0,   267,     0,     0,     0,   271,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   274,     0,   276,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   278,     0,   280,     0,     0,     0,     0,     0,     0,
       0,   282,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   286,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   288,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2063,     0,     0,     0,  2066,     0,
       0,  2068,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2070,  2072,  2074,     0,     0,     0,     0,
       0,     0,     0,     0,  2076,  2078,     0,     0,     0,     0,
    2080,     0,     0,     0,  2083,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2085,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2087,  2089,  2091,  2093,  2095,  2097,  2099,  2101,  2103,
    2105,  2107,  2109,  2111,  2113,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3489,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3491,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  4496,     0,     0,  4498,
    4500,  4504,     0,     0,  4506,     0,     0,  4509,  4512,     0,
       0,     0,     0,     0,     0,     0,     0,  4514,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2152,
       0,     0,  4516,     0,     0,     0,     0,     0,     0,  4519,
    4521,  4523,     0,     0,     0,     0,     0,     0,     0,     0,
    4525,  4527,  4529,  4531,  4533,  4535,  4537,     0,     0,     0,
    4541,     0,     0,     0,     0,     0,  4543,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2154,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  4545,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  4548,  4551,  4554,
    4557,  4560,  4563,  4566,  4569,  4572,  4575,  4578,  4581,  4584,
    4587,     0,  4590,  4592,  4594,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3702,     0,     0,  3704,
       0,     0,     0,  3707,     0,  3709,  3711,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3713,     0,     0,     0,     0,     0,     0,  3715,  3717,
    3719,     0,     0,     0,     0,     0,     0,     0,     0,  3721,
    3723,     0,     0,     0,     0,  3725,     0,     0,     0,  3728,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3730,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3732,  3734,  3736,  3738,
    3740,  3742,  3744,  3746,  3748,  3750,  3752,  3754,  3756,  3758,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  4314,     0,     0,  4317,
    4320,  4324,  4327,  4329,  4331,     0,  4334,  4336,  4339,     0,
       0,     0,  4342,  4344,     0,     0,     0,  4346,  4348,     0,
    4350,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  4352,     0,     0,  4355,     0,     0,     0,  4357,
    4360,  4363,     0,     0,     0,     0,     0,     0,  4366,     0,
    4368,  4371,  4374,  4377,  4380,  4383,  4386,     0,  4390,     0,
    4392,     0,     0,     0,     0,     0,  4395,  4398,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  4400,  4402,  4404,  4406,  4408,  4410,  4413,  4415,
    4417,  4419,  4421,  4423,     0,     0,     0,  4425,  4428,  4431,
    4434,  4437,  4440,  4443,  4446,  4449,  4452,  4455,  4458,  4461,
    4464,     0,  4467,  4470,  4473,     0,  4476,  4478,  4480,     0,
    4482,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   402,   404,   406,   408,   410,
     412,   414,   416,     0,   418,   420,     0,   422,   424,     0,
       0,     0,   426,   428,   430,   432,   434,   436,   438,   440,
     442,   444,   446,   448,   450,   452,   454,   456,   458,   460,
     462,   464,   466,   468,   470,     0,   472,   474,     0,   476,
     478,   480,   482,   484,   486,   488,   490,   492,   494,     0,
     496,   498,   500,   502,   504,   506,   508,   510,     0,   512,
     514,   516,   518,   520,   522,   524,   526,   528,   530,   532,
     534,   536,   538,   540,   542,   544,   546,     0,   548,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     550,   552,   554,     0,   556,   558,   560,   562,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   564,   566,   568,
     570,   572,   574,   576,   578,   580,   582,   584,   586,   588,
     590,   592,   594,   596,   598,     0,     0,     0,     0,   600,
    1316,  1320,  1324,  1328,  1332,  1336,  1340,  1344,     0,  1348,
    1352,     0,  1356,  1360,     0,     0,     0,  1364,  1368,  1372,
    1376,  1380,  1384,  1388,  1392,  1396,  1400,  1404,  1408,  1412,
    1416,  1420,  1424,  1428,  1432,  1436,  1440,  1444,  1448,  1452,
       0,  1456,  1460,     0,  1464,  1468,  1472,  1476,  1480,  1484,
    1488,  1492,  1496,  1500,     0,  1504,  1508,  1512,  1516,  1520,
    1524,  1528,  1533,     0,  1537,  1541,  1545,  1549,  1553,  1557,
    1562,  1566,  1570,  1574,  1578,  1582,  1586,  1590,  1594,  1598,
    1602,  1606,     0,  1610,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1614,  1618,  1622,     0,  1626,
    1630,  1634,  1638,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1643,  1647,  1651,  1655,  1659,  1663,  1667,  1671,
    1675,  1679,  1683,  1687,  1691,  1695,  1699,  1703,  1707,  1711,
       0,     0,     0,     0,  1715,  2244,  2247,  2250,  2253,  2256,
    2259,  2262,  2265,     0,  2268,  2271,     0,  2274,  2277,     0,
       0,     0,  2280,  2283,  2286,  2289,  2292,  2295,  2298,  2301,
    2304,  2307,  2310,  2313,  2316,  2319,  2322,  2325,  2328,  2331,
    2334,  2337,  2340,  2343,  2346,     0,  2349,  2352,     0,  2355,
    2358,  2361,  2364,  2367,  2370,  2373,  2376,  2379,  2382,     0,
    2385,  2388,  2391,  2394,  2397,  2400,  2403,  2406,     0,  2409,
    2412,  2415,  2418,  2421,  2424,  2428,  2431,  2434,  2437,  2440,
    2443,  2446,  2449,  2452,  2455,  2458,  2461,     0,  2464,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2467,  2470,  2473,     0,  2476,  2479,  2482,  2485,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2488,  2491,  2494,
    2497,  2500,  2503,  2506,  2509,  2512,  2515,  2518,  2521,  2524,
    2527,  2530,  2533,  2536,  2539,     0,     0,     0,     0,  2542,
    2916,  2918,  2920,  2922,  2924,  2926,  2928,  2930,     0,  2932,
    2934,     0,  2936,  2938,     0,     0,     0,  2940,  2942,  2944,
    2946,  2948,  2950,  2952,  2954,  2956,  2958,  2960,  2962,  2964,
    2966,  2968,  2970,  2972,  2974,  2976,  2978,  2980,  2982,  2984,
       0,  2986,  2988,     0,  2990,  2992,  2994,  2996,  2998,  3000,
    3002,  3004,  3006,  3008,     0,  3010,  3012,  3014,  3016,  3018,
    3020,  3022,  3024,     0,  3026,  3028,  3030,  3032,  3034,  3036,
    3038,  3040,  3042,  3044,  3046,  3048,  3050,  3052,  3054,  3056,
    3058,  3060,     0,  3062,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3064,  3066,  3068,     0,  3070,
    3072,  3074,  3076,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3078,  3080,  3082,  3084,  3086,  3088,  3090,  3092,
    3094,  3096,  3098,  3100,  3102,  3104,  3106,  3108,  3110,  3112,
       0,     0,  4674,     0,  3114,  4677,  4680,  4684,  4687,  4689,
    4691,     0,  4694,  4696,  4699,     0,     0,     0,  4702,  4704,
       0,     0,     0,  4706,  4708,     0,  4710,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  4712,     0,
       0,  4715,     0,     0,     0,  4717,  4720,  4723,     0,     0,
       0,     0,     0,     0,  4726,     0,  4728,  4731,  4734,  4737,
    4740,  4743,  4746,     0,  4750,     0,  4752,     0,     0,     0,
       0,     0,  4755,  4758,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  4760,  4762,
    4764,  4766,  4768,  4770,  4773,  4775,  4777,  4779,  4781,  4783,
       0,     0,     0,  4785,  4788,  4791,  4794,  4797,  4800,  4803,
    4806,  4809,  4812,  4815,  4818,  4821,  4824,     0,  4827,  4830,
    4833,     0,  4836,  4838,  4840,  4196,  4842,     0,  4199,  4202,
    4206,     0,     0,  4209,     0,     0,  4212,  4215,     0,     0,
       0,     0,     0,     0,     0,     0,  4218,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  4220,     0,     0,     0,     0,     0,     0,  4223,  4226,
    4229,     0,     0,     0,     0,     0,     0,     0,     0,  4232,
    4235,  4238,  4241,  4244,  4247,  4250,     0,     0,     0,  4254,
       0,     0,     0,     0,     0,  4257,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  4260,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  4263,  4266,  4269,  4272,
    4275,  4278,  4281,  4284,  4287,  4290,  4293,  4296,  4299,  4302,
       0,  4305,  4308,  4311,     0,     0,     0,     0,     0,     0,
       0,  1907,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1909,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2565,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2567,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2833,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2835,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   768,     0,     0,     0,   770,   772,
     774,   776,   778,   780,     0,     0,   782,   784,     0,   786,
     788,   790,   792,   794,     0,     0,   796,     0,   798,   800,
     802,     0,   804,   806,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   808,     0,   810,     0,     0,   812,
       0,   814,   816,   818,     0,     0,     0,     0,   820,     0,
     822,     0,   824,   826,   828,   830,   832,   834,   836,     0,
       0,     0,   838,     0,     0,     0,     0,     0,   840,   842,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   844,     0,     0,     0,     0,   310,     0,   312,   314,
     316,   320,   846,   848,   322,   324,   850,   326,   328,   852,
       0,     0,     0,     0,   330,     0,     0,     0,     0,   854,
     856,   858,   860,   862,   864,   866,   868,   870,   872,   874,
     876,   878,   880,   882,   884,   886,   888,     0,     0,   332,
     334,   336,     0,     0,     0,     0,     0,     0,     0,     0,
     338,   340,   342,   344,   346,   348,   350,     0,     0,     0,
     353,     0,     0,     0,     0,     0,   355,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     3,     5,     7,    11,
       0,   357,    13,    15,     0,    17,    19,   359,     0,     0,
       0,     0,    21,     0,     0,     0,     0,   361,   363,   365,
     367,   369,   371,   373,   375,   377,   379,   381,   383,   385,
     387,     0,   389,   391,   393,     0,     0,    23,    25,    27,
       0,     0,     0,     0,     0,     0,     0,     0,    29,    31,
      33,    35,    37,    39,    41,     0,     0,     0,    44,     0,
       0,     0,     0,     0,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,     0,  1231,     0,     0,  1233,  1235,  1239,     0,    50,
    1241,  1243,     0,  1245,  1247,    52,     0,     0,     0,     0,
    1249,     0,     0,     0,     0,    54,    56,    58,    60,    62,
      64,    66,    68,    70,    72,    74,    76,    78,    80,     0,
      82,    84,    86,     0,     0,  1251,  1253,  1255,     0,     0,
       0,     0,     0,     0,     0,     0,  1257,  1259,  1261,  1263,
    1265,  1267,  1269,     0,     0,     0,  1272,     0,     0,     0,
       0,     0,  1274,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3909,     0,     0,  3911,  3913,  3917,     0,  1276,  3919,  3921,
       0,  3923,  3925,  1278,     0,     0,     0,     0,  3927,     0,
       0,     0,     0,  1280,  1282,  1284,  1286,  1288,  1290,  1292,
    1294,  1296,  1298,  1300,  1302,  1304,  1306,     0,  1308,  1310,
    1312,     0,     0,  3929,  3931,  3933,     0,     0,     0,     0,
       0,     0,     0,     0,  3935,  3937,  3939,  3941,  3943,  3945,
    3947,     0,     0,     0,  3950,     0,     0,     0,     0,     0,
    3952,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3954,     0,     0,     0,     0,
       0,  3956,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3958,  3960,  3962,  3964,  3966,  3968,  3970,  3972,  3974,
    3976,  3978,  3980,  3982,  3984,     0,  3986,  3988,  3990,     0,
       0,     0,  1937,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1939,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1917,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1919,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2561,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2563,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2031,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2033,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1933,     0,     0,     0,     0,     0,     0,     0,     0,  2160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2162,  2164,     0,  2166,
       0,     0,     0,     0,  2168,     0,  2170,  2172,  2174,  2176,
    2178,  2180,  2182,  2184,  2186,  2188,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1935,     0,     0,     0,
    2190,  2192,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2194,  2196,  2198,  2200,  2202,
       0,  2204,  2206,  2208,  2210,  2212,  2214,  2216,  2218,  2220,
    2222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2670,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2674,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2672,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2676,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2702,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2704,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2706,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3339,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2708,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3341,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3385,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3387,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3776,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3803,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3778,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3805,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3885,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3887,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3893,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3895,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  4154,     0,     0,     0,  4157,     0,     0,
    4159,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  4161,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  4163,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    4166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    4168,  4170,  4172,  4174,  4176,  4178,  4180,  4182,  4184,  4186,
    4188,  4190,  4192,  4194,     0,     0,     0,     0,     0,     0,
       0,     0,  4844,     0,     0,     0,  4847,     0,     0,  4849,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  4851,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  4853,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  4856,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  4858,
    4860,  4862,  4864,  4866,  4868,  4870,  4872,  4874,  4876,  4878,
    4880,  4882,  4884,     0,     0,     0,     0,     0,     0,     0,
       0,  4984,     0,     0,     0,  4987,     0,     0,  4989,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  4991,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  4993,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  4996,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  4998,  5000,
    5002,  5004,  5006,  5008,  5010,  5012,  5014,  5016,  5018,  5020,
    5022,  5024,     0,     0,     0,     0,     0,     0,     0,     0,
    1941,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2023,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1943,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2025,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2027,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2642,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2029,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2644,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3128,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3136,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3335,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3687,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3337,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3689,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3691,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3780,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3693,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3782,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    5034,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  5044,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  5036,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  5046,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   988,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   990,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2158,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2607,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2634,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2609,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2636,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3377,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3571,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3379,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3573,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3760,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3764,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3762,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3766,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3768,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3772,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3770,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3774,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  4976,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  4978,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1721,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1723,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2045,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2047,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2626,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2628,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2658,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2660,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2912,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2914,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1973,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1975,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2853,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2855,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,    90,    92,    96,     0,     0,    98,   100,
       0,   102,   104,     0,     0,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,   110,   112,     0,     0,     0,     0,
       0,     0,     0,     0,   114,   116,   118,   120,   122,   124,
     126,     0,     0,     0,   129,     0,     0,     0,     0,     0,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   602,     0,
       0,   604,   606,   610,     0,   133,   612,   614,     0,   616,
     618,   135,     0,     0,     0,     0,   620,     0,     0,     0,
       0,   137,   139,   141,   143,   145,   147,   149,   151,   153,
     155,   157,   159,   161,   163,     0,   165,   167,   169,     0,
       0,   622,   624,   626,     0,     0,     0,     0,     0,     0,
       0,     0,   628,   630,   632,   634,   636,   638,   640,     0,
       0,     0,   643,     0,     0,     0,     0,     0,   645,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   685,     0,     0,   687,
     689,   693,     0,   647,   695,   697,     0,   699,   701,   649,
       0,     0,     0,     0,   703,     0,     0,     0,     0,   651,
     653,   655,   657,   659,   661,   663,   665,   667,   669,   671,
     673,   675,   677,     0,   679,   681,   683,     0,     0,   705,
     707,   709,  2890,     0,     0,     0,  2893,     0,     0,     0,
     711,   713,   715,   717,   719,   721,   723,     0,     0,     0,
     726,     0,     0,     0,     0,     0,   728,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   730,     0,     0,     0,     0,     0,   732,  2895,     0,
       0,     0,     0,     0,     0,     0,     0,   734,   736,   738,
     740,   742,   744,   746,   748,   750,   752,   754,   756,   758,
     760,     0,   762,   764,   766,   890,     0,     0,   892,   894,
     898,     0,     0,   900,   902,     0,   904,   906,     0,     0,
       0,     0,     0,   908,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   910,   912,
     914,     0,     0,     0,     0,     0,     0,     0,     0,   916,
     918,   920,   922,   924,   926,   928,     0,     0,     0,   931,
       0,     0,     0,     0,     0,   933,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   999,     0,  1001,  1003,  1005,  1009,     0,
     935,  1011,  1013,     0,  1015,  1017,   937,     0,     0,     0,
       0,  1019,     0,     0,     0,     0,   939,   941,   943,   945,
     947,   949,   951,   953,   955,   957,   959,   961,   963,   965,
       0,   967,   969,   971,     0,     0,  1021,  1023,  1025,     0,
       0,     0,     0,     0,     0,     0,     0,  1027,  1029,  1031,
    1033,  1035,  1037,  1039,     0,     0,     0,  1042,     0,     0,
       0,     0,     0,  1044,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1725,     0,     0,  1727,  1729,  1733,     0,  1046,  1735,
    1737,     0,  1739,  1741,  1048,     0,     0,     0,     0,  1743,
       0,     0,     0,     0,  1050,  1052,  1054,  1056,  1058,  1060,
    1062,  1064,  1066,  1068,  1070,  1072,  1074,  1076,     0,  1078,
    1080,  1082,     0,     0,  1745,  1747,  1749,     0,     0,     0,
       0,     0,     0,     0,     0,  1751,  1753,  1755,  1757,  1759,
    1761,  1763,     0,     0,     0,  1766,     0,     0,     0,     0,
       0,  1768,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2710,
       0,     0,  2712,  2714,  2718,     0,  1770,  2720,  2722,     0,
    2724,  2726,  1772,     0,     0,     0,     0,  2728,     0,     0,
       0,     0,  1774,  1776,  1778,  1780,  1782,  1784,  1786,  1788,
    1790,  1792,  1794,  1796,  1798,  1800,     0,  1802,  1804,  1806,
       0,     0,  2730,  2732,  2734,     0,     0,     0,     0,     0,
       0,     0,     0,  2736,  2738,  2740,  2742,  2744,  2746,  2748,
       0,     0,     0,  2751,     0,     0,     0,     0,     0,  2753,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3234,     0,     0,
    3236,  3238,  3242,     0,  2755,  3244,  3246,     0,  3248,  3250,
    2757,     0,     0,     0,     0,  3252,     0,     0,     0,     0,
    2759,  2761,  2763,  2765,  2767,  2769,  2771,  2773,  2775,  2777,
    2779,  2781,  2783,  2785,     0,  2787,  2789,  2791,     0,     0,
    3254,  3256,  3258,     0,     0,     0,     0,     0,     0,     0,
       0,  3260,  3262,  3264,  3266,  3268,  3270,  3272,     0,     0,
       0,  3275,     0,     0,     0,     0,     0,  3277,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3575,     0,     0,  3577,  3579,
    3583,     0,  3279,  3585,  3587,     0,  3589,  3591,  3281,     0,
       0,     0,     0,  3593,     0,     0,     0,     0,  3283,  3285,
    3287,  3289,  3291,  3293,  3295,  3297,  3299,  3301,  3303,  3305,
    3307,  3309,     0,  3311,  3313,  3315,     0,     0,  3595,  3597,
    3599,     0,     0,     0,     0,     0,     0,     0,     0,  3601,
    3603,  3605,  3607,  3609,  3611,  3613,     0,     0,     0,  3616,
       0,     0,     0,     0,     0,  3618,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1092,     0,     0,  1094,  1096,  1100,     0,
    3620,  1102,  1104,     0,  1106,  1108,  3622,     0,     0,     0,
       0,  1110,     0,     0,     0,     0,  3624,  3626,  3628,  3630,
    3632,  3634,  3636,  3638,  3640,  3642,  3644,  3646,  3648,  3650,
       0,  3652,  3654,  3656,     0,     0,  1112,  1114,  1116,     0,
       0,     0,     0,     0,     0,     0,     0,  1118,  1120,  1122,
    1124,  1126,  1128,  1130,     0,     0,     0,  1133,     0,     0,
       0,     0,     0,  1135,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1808,     0,     0,  1810,  1812,  1816,     0,  1137,  1818,
    1820,     0,  1822,  1824,  1139,     0,     0,     0,     0,  1826,
       0,     0,     0,     0,  1141,  1143,  1145,  1147,  1149,  1151,
    1153,  1155,  1157,  1159,  1161,  1163,  1165,  1167,     0,  1169,
    1171,  1173,     0,     0,  1828,  1830,  1832,     0,     0,     0,
       0,     0,     0,     0,     0,  1834,  1836,  1838,  1840,  1842,
    1844,  1846,     0,     0,     0,  1849,     0,     0,     0,     0,
       0,  1851,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1853,     0,     0,     0,
       0,     0,  1855,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1857,  1859,  1861,  1863,  1865,  1867,  1869,  1871,
    1873,  1875,  1877,  1879,  1881,  1883,     0,  1885,  1887,  1889,
    1999,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3345,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2001,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3349,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3381,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3351,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3383,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   995,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1088,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   997,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1090,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1913,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1925,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1915,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1927,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1929,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1963,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1931,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1965,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2573,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2579,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2575,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2581,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2583,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2587,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2585,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2589,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2591,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2595,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2593,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2597,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2599,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2603,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2601,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2605,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2611,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2630,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2613,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2632,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2638,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2646,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2640,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2648,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2650,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2654,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2652,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2656,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2662,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2666,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2664,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2668,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2678,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2682,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2680,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2684,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2686,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2690,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2688,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2692,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2694,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2698,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2696,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2700,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2839,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2847,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2841,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2849,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2900,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2904,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2902,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2906,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3389,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3409,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3391,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3411,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3695,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3889,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3697,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3891,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3899,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3994,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3901,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3996,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3150,     0,
       0,  3152,  3154,  3157,     0,     0,  3159,     0,     0,  3161,
    3163,     0,     0,     0,     0,     0,  3165,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3167,  3169,  3171,     0,     0,     0,     0,     0,     0,
       0,     0,  3173,  3175,  3177,  3179,  3181,  3183,  3185,     0,
       0,     0,  3188,     0,     0,     0,     0,     0,  3190,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3493,     0,     0,  3495,
    3497,  3500,     0,     0,  3502,     0,     0,  3504,  3506,  3192,
       0,     0,     0,     0,  3508,     0,     0,     0,     0,  3194,
    3196,  3198,  3200,  3202,  3204,  3206,  3208,  3210,  3212,  3214,
    3216,  3218,  3220,     0,  3222,  3224,  3226,     0,     0,  3510,
    3512,  3514,     0,     0,     0,     0,     0,     0,     0,     0,
    3516,  3518,  3520,  3522,  3524,  3526,  3528,     0,     0,     0,
    3531,     0,     0,     0,     0,     0,  3533,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3807,     0,     0,  3809,  3811,  3814,     0,     0,
    3816,     0,     0,  3818,  3820,     0,     0,  3535,     0,     0,
    3822,     0,     0,     0,     0,     0,     0,  3537,  3539,  3541,
    3543,  3545,  3547,  3549,  3551,  3553,  3555,  3557,  3559,  3561,
    3563,     0,  3565,  3567,  3569,  3824,  3826,  3828,     0,     0,
       0,     0,     0,     0,     0,     0,  3830,  3832,  3834,  3836,
    3838,  3840,  3842,     0,     0,     0,  3845,     0,     0,     0,
       0,     0,  3847,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3998,     0,
       0,  4000,  4002,  4005,     0,     0,  4007,     0,     0,  4009,
    4011,     0,     0,  3849,     0,     0,  4013,     0,     0,     0,
       0,     0,     0,  3851,  3853,  3855,  3857,  3859,  3861,  3863,
    3865,  3867,  3869,  3871,  3873,  3875,  3877,     0,  3879,  3881,
    3883,  4015,  4017,  4019,     0,     0,     0,     0,     0,     0,
       0,     0,  4021,  4023,  4025,  4027,  4029,  4031,  4033,     0,
       0,     0,  4036,     0,     0,     0,     0,     0,  4038,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  4076,     0,     0,  4078,  4080,  4083,
       0,     0,  4085,     0,     0,  4087,  4089,     0,     0,  4040,
       0,     0,  4091,     0,     0,     0,     0,     0,     0,  4042,
    4044,  4046,  4048,  4050,  4052,  4054,  4056,  4058,  4060,  4062,
    4064,  4066,  4068,     0,  4070,  4072,  4074,  4093,  4095,  4097,
       0,     0,     0,     0,     0,     0,     0,     0,  4099,  4101,
    4103,  4105,  4107,  4109,  4111,     0,     0,     0,  4114,     0,
       0,     0,     0,     0,  4116,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    4596,     0,     0,  4598,  4600,  4603,     0,     0,  4605,     0,
       0,  4607,  4609,     0,     0,  4118,     0,     0,  4611,     0,
       0,     0,     0,     0,     0,  4120,  4122,  4124,  4126,  4128,
    4130,  4132,  4134,  4136,  4138,  4140,  4142,  4144,  4146,     0,
    4148,  4150,  4152,  4613,  4615,  4617,     0,     0,     0,     0,
       0,     0,     0,     0,  4619,  4621,  4623,  4625,  4627,  4629,
    4631,     0,     0,     0,  4634,     0,     0,     0,     0,     0,
    4636,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  4898,     0,     0,  4900,
    4902,  4905,     0,     0,  4907,     0,     0,  4909,  4911,     0,
       0,  4638,     0,     0,  4913,     0,     0,     0,     0,     0,
       0,  4640,  4642,  4644,  4646,  4648,  4650,  4652,  4654,  4656,
    4658,  4660,  4662,  4664,  4666,     0,  4668,  4670,  4672,  4915,
    4917,  4919,     0,     0,     0,     0,     0,     0,     0,     0,
    4921,  4923,  4925,  4927,  4929,  4931,  4933,     0,     0,     0,
    4936,     0,     0,     0,     0,     0,  4938,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  5048,     0,     0,  5050,  5052,  5055,     0,     0,
    5057,     0,     0,  5059,  5061,     0,     0,  4940,     0,     0,
    5063,     0,     0,     0,     0,     0,     0,  4942,  4944,  4946,
    4948,  4950,  4952,  4954,  4956,  4958,  4960,  4962,  4964,  4966,
    4968,     0,  4970,  4972,  4974,  5065,  5067,  5069,     0,     0,
       0,     0,     0,     0,     0,     0,  5071,  5073,  5075,  5077,
    5079,  5081,  5083,     0,     0,     0,  5086,     0,     0,     0,
       0,     0,  5088,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  5126,     0,
       0,  5128,  5130,  5133,     0,     0,  5135,     0,     0,  5137,
    5139,     0,     0,  5090,     0,     0,  5141,     0,     0,     0,
       0,     0,     0,  5092,  5094,  5096,  5098,  5100,  5102,  5104,
    5106,  5108,  5110,  5112,  5114,  5116,  5118,     0,  5120,  5122,
    5124,  5143,  5145,  5147,     0,     0,     0,     0,     0,     0,
       0,     0,  5149,  5151,  5153,  5155,  5157,  5159,  5161,     0,
       0,     0,  5164,     0,     0,     0,     0,     0,  5166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  5216,     0,     0,  5218,  5220,  5223,
       0,     0,  5225,     0,     0,  5227,  5229,     0,     0,  5168,
       0,     0,  5231,     0,     0,     0,     0,     0,     0,  5170,
    5172,  5174,  5176,  5178,  5180,  5182,  5184,  5186,  5188,  5190,
    5192,  5194,  5196,     0,  5198,  5200,  5202,  5233,  5235,  5237,
       0,     0,     0,     0,     0,     0,     0,     0,  5239,  5241,
    5243,  5245,  5247,  5249,  5251,     0,     0,     0,  5254,     0,
       0,     0,     0,     0,  5256,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    5294,     0,     0,  5296,  5298,  5301,     0,     0,  5303,     0,
       0,  5305,  5307,     0,     0,  5258,     0,     0,  5309,     0,
       0,     0,     0,     0,     0,  5260,  5262,  5264,  5266,  5268,
    5270,  5272,  5274,  5276,  5278,  5280,  5282,  5284,  5286,     0,
    5288,  5290,  5292,  5311,  5313,  5315,     0,     0,     0,     0,
       0,     0,     0,     0,  5317,  5319,  5321,  5323,  5325,  5327,
    5329,     0,     0,     0,  5332,     0,     0,     0,     0,     0,
    5334,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  5372,     0,     0,  5374,
    5376,  5379,     0,     0,  5381,     0,     0,  5383,  5385,     0,
       0,  5336,     0,     0,  5387,     0,     0,     0,     0,     0,
       0,  5338,  5340,  5342,  5344,  5346,  5348,  5350,  5352,  5354,
    5356,  5358,  5360,  5362,  5364,     0,  5366,  5368,  5370,  5389,
    5391,  5393,     0,     0,     0,     0,     0,     0,     0,     0,
    5395,  5397,  5399,  5401,  5403,  5405,  5407,     0,     0,     0,
    5410,     0,     0,     0,     0,     0,  5412,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  5452,     0,     0,  5454,  5456,  5459,     0,     0,
    5461,     0,     0,  5463,  5465,     0,     0,  5414,     0,     0,
    5467,     0,     0,     0,     0,     0,     0,  5416,  5418,  5420,
    5422,  5424,  5426,  5428,  5430,  5432,  5434,  5436,  5438,  5440,
    5442,     0,  5444,  5446,  5448,  5469,  5471,  5473,     0,     0,
       0,     0,     0,     0,     0,     0,  5475,  5477,  5479,  5481,
    5483,  5485,  5487,     0,     0,     0,  5490,     0,     0,     0,
       0,     0,  5492,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1945,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  5494,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  5496,  5498,  5500,  5502,  5504,  5506,  5508,
    5510,  5512,  5514,  5516,  5518,  5520,  5522,     0,  5524,  5526,
    5528,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1947,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2003,     0,     0,     0,  2006,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2008,     0,
       0,     0,     0,     0,     0,     0,   189,     0,     0,   191,
     193,   196,     0,  2010,   198,     0,     0,   200,   202,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2012,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   204,
     206,   208,     0,     0,     0,     0,     0,     0,     0,     0,
     210,   212,   214,   216,   218,   220,   222,     0,     0,     0,
     225,     0,     0,     0,     0,     0,   227,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   229,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   231,   233,   235,
     237,   239,   241,   243,   245,   247,   249,   251,   253,   255,
     257,     0,   259,   261,   263,     0,     0,     0,     0,  3790,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  4488,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3792,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  4490,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  4492,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  4980,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  4494,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  4982,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   296,     0,     0,     0,   299,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3405,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   301,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3407,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3413,     0,     0,  3415,  3417,  3420,
       0,     0,  3422,     0,     0,  3424,  3426,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2133,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3428,  3430,  3432,
       0,     0,     0,     0,     0,     0,     0,     0,  3434,  3436,
    3438,  3440,  3442,  3444,  3446,     0,     0,     0,  3449,     0,
       0,     0,     0,     0,  3451,     0,     0,     0,     0,     0,
       0,     0,  2135,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3453,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3455,  3457,  3459,  3461,  3463,
    3465,  3467,  3469,  3471,  3473,  3475,  3477,  3479,  3481,     0,
    3483,  3485,  3487,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3140,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2545,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2549,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2547,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2551,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2553,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2557,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2569,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2555,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2559,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2571,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2805,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2843,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2882,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2807,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2845,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2884,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2886,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3393,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2888,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3395,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0,    84,     0,   334,     0,    84,     0,    84,   269,   459,
       0,    84,     0,    84,     0,    10,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,   710,     0,    84,     0,    84,     0,   334,     0,
      14,     0,   710,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,   269,   459,     0,    84,     0,    84,     0,
      10,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,   710,     0,    84,
       0,    84,     0,    14,     0,   710,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,   247,   445,   451,   731,     0,    26,     0,   244,   459,
       0,   244,     0,   244,     0,   268,     0,   435,     0,    85,
       0,    85,     0,    85,   459,     0,    85,     0,    85,     0,
      85,     0,    85,     0,    85,     0,    85,     0,    85,     0,
      85,     0,    85,     0,    85,     0,    85,     0,    85,     0,
      85,     0,    85,   710,     0,    85,     0,    85,     0,   710,
       0,    85,     0,    85,     0,    85,     0,    85,     0,    85,
       0,    85,     0,    85,     0,    85,     0,    85,     0,    85,
       0,    85,     0,    85,     0,    85,     0,    85,     0,    85,
       0,    85,     0,    85,     0,   192,     0,     6,   192,   459,
       0,     6,   192,     0,   192,     0,   192,     0,   192,     0,
     192,     0,     6,   192,   710,     0,   192,     0,   192,     0,
      84,     0,    84,     0,    84,     0,    84,   459,     0,    84,
       0,    84,   710,     0,     6,     0,     6,     0,     6,     0,
      84,     0,   210,     0,    84,     0,    84,   269,   459,     0,
      84,     0,    84,     0,    10,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,   710,     0,    84,     0,    84,     0,    14,     0,   710,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,   647,     0,   331,     0,    22,
     460,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,   732,     0,   732,     0,   732,     0,   732,     0,
     732,     0,    84,     0,    84,     0,    84,   269,   459,     0,
      84,     0,    84,     0,    10,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,   710,     0,    84,     0,    84,     0,    14,     0,   710,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
     269,   459,     0,    84,     0,    84,     0,    10,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,   710,     0,    84,     0,    84,     0,
      14,     0,   710,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,   273,     0,
     273,     0,   273,     0,   273,     0,   273,     0,   273,     0,
     273,     0,   273,     0,   273,     0,   273,     0,   273,     0,
     273,     0,   273,     0,   273,     0,   273,     0,   273,     0,
     273,     0,   273,     0,   273,     0,   273,     0,   273,     0,
     273,     0,   273,     0,   273,     0,   273,     0,   273,     0,
     273,     0,   273,     0,   273,     0,   273,     0,   273,     0,
     273,     0,   273,     0,   273,     0,   273,     0,   273,     0,
     273,     0,   273,     0,   273,     0,   273,     0,   273,     0,
     273,     0,   273,     0,   273,     0,   273,     0,   273,     0,
     273,     0,   273,     0,   273,     0,   273,     0,   273,     0,
     273,     0,   273,     0,   273,     0,   273,     0,   273,     0,
     273,     0,   273,     0,   273,     0,   273,     0,   273,     0,
      84,     0,    84,     0,    84,   269,   459,     0,    84,     0,
      84,     0,    10,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,   710,
       0,    84,     0,    84,     0,    14,     0,   710,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,   459,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    22,     0,   459,     0,   459,     0,
     710,     0,    22,   460,     0,   459,     0,   710,     0,    84,
       0,   209,     0,    84,     0,    84,   269,   459,     0,    84,
       0,    84,     0,    10,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
     710,     0,    84,     0,    84,     0,    14,     0,   710,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,   435,     0,   436,     0,   459,     0,
     710,     0,    84,     0,    84,     0,    84,   269,   459,     0,
      84,     0,    84,     0,    10,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,   710,     0,    84,     0,    84,     0,    14,     0,   710,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,     6,     0,     6,     0,     6,
       0,     6,     0,     6,     0,     6,     0,   193,     0,   193,
       0,     6,     0,     6,     0,     6,     0,    22,   460,     0,
     591,     0,     6,     0,     6,     0,     6,     0,   269,     0,
      84,     0,    84,     0,    84,     0,   459,     0,    22,     0,
     231,   732,     0,   190,     0,   190,     0,    22,     0,   459,
       0,    84,     0,    84,     0,    84,   269,   459,     0,    84,
       0,    84,     0,    10,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
     710,     0,    84,     0,    84,     0,    14,     0,   710,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    23,     0,   247,   696,   731,     0,
     247,   696,   731,     0,   247,   696,   731,     0,   247,   696,
     731,     0,   247,   696,   731,     0,   247,   696,   731,     0,
     247,   696,   731,     0,   247,   696,   731,     0,   247,   696,
     731,     0,   247,   696,   731,     0,   247,   696,   731,     0,
     247,   696,   731,     0,   247,   696,   731,     0,   247,   696,
     731,     0,   247,   696,   731,     0,   247,   696,   731,     0,
     247,   696,   731,     0,   247,   696,   731,     0,   247,   696,
     731,     0,   247,   696,   731,     0,   247,   696,   731,     0,
     247,   696,   731,     0,   247,   696,   731,     0,   247,   696,
     731,     0,   247,   696,   731,     0,   247,   696,   731,     0,
     247,   696,   731,     0,   247,   696,   731,     0,   247,   696,
     731,     0,   247,   696,   731,     0,   247,   696,   731,     0,
     247,   696,   731,     0,   247,   696,   731,     0,   247,   696,
     731,     0,   247,   696,   731,     0,   247,   696,   731,     0,
     247,   696,   731,     0,   247,   696,   731,     0,   247,   696,
     731,     0,   247,   696,   731,     0,   247,   696,   731,     0,
     247,   696,   731,     0,   247,   696,   731,     0,   247,   696,
     731,     0,   247,   696,   731,     0,   247,   696,   731,     0,
     247,   696,   731,     0,   247,   696,   731,     0,   247,   696,
     731,     0,   247,   696,   731,     0,   247,   696,   731,     0,
     247,   696,   731,     0,   247,   696,   731,     0,   152,   247,
     696,   731,     0,   247,   696,   731,     0,   247,   696,   731,
       0,   247,   696,   731,     0,   247,   696,   731,     0,   247,
     696,   731,     0,   247,   696,   731,     0,   152,   247,   696,
     731,     0,   247,   696,   731,     0,   247,   696,   731,     0,
     247,   696,   731,     0,   247,   696,   731,     0,   247,   696,
     731,     0,   247,   696,   731,     0,   247,   696,   731,     0,
     247,   696,   731,     0,   247,   696,   731,     0,   247,   696,
     731,     0,   247,   696,   731,     0,   247,   696,   731,     0,
     247,   696,   731,     0,   247,   696,   731,     0,   247,   696,
     731,     0,   247,   696,   731,     0,   247,   696,   731,     0,
     247,   696,   731,     0,   247,   696,   731,     0,   152,   247,
     696,   731,     0,   247,   696,   731,     0,   247,   696,   731,
       0,   247,   696,   731,     0,   247,   696,   731,     0,   247,
     696,   731,     0,   247,   696,   731,     0,   247,   696,   731,
       0,   247,   696,   731,     0,   247,   696,   731,     0,   247,
     696,   731,     0,   247,   696,   731,     0,   247,   696,   731,
       0,   247,   696,   731,     0,   247,   696,   731,     0,   247,
     696,   731,     0,   247,   696,   731,     0,   247,   696,   731,
       0,   247,   696,   731,     0,   247,   696,   731,     0,   649,
       0,   459,     0,   710,     0,    84,     0,    84,     0,    84,
     269,   459,     0,    84,     0,    84,     0,    10,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,   710,     0,    84,     0,    84,     0,
      14,     0,   710,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,   269,   459,     0,    84,     0,    84,     0,
      10,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,   710,     0,    84,
       0,    84,     0,    14,     0,   710,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,     6,     0,     6,     0,   733,     0,    22,     0,   247,
     445,   451,   731,   755,     0,   755,     0,   459,     0,   710,
       0,     6,     0,   459,     0,   710,     0,   459,     0,   710,
       0,   753,     0,   753,     0,   459,     0,   710,     0,   459,
       0,   710,     0,   459,     0,   710,     0,   459,     0,   710,
       0,   459,     0,   710,     0,   459,     0,   710,     0,   758,
       0,   157,     0,    22,   460,     0,   756,     0,   257,     0,
     693,   732,     0,   459,     0,   710,     0,   459,     0,   459,
       0,   459,     0,   459,     0,   710,     0,   591,     0,   594,
       0,   594,     0,   595,     0,   595,     0,   179,     0,   179,
       0,   179,     0,   179,     0,    22,     0,   491,     0,   459,
       0,   710,     0,   192,   459,     0,   192,     0,   192,     0,
     192,     0,   192,   710,     0,   269,     0,    84,     0,    84,
       0,    84,     0,   459,     0,   710,     0,   459,     0,   710,
       0,   459,     0,   710,     0,     6,     0,     6,     0,     6,
       0,   243,     0,   435,     0,   459,     0,   710,     0,    84,
       0,    84,     0,    84,     0,   685,     0,   685,     0,   685,
       0,   725,     0,    84,   459,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,   710,     0,    84,     0,   710,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    33,     0,    33,   486,     0,
     727,     0,    84,   459,     0,    84,     0,    84,     0,    84,
       0,    84,     0,   459,     0,   710,     0,     6,     0,    84,
     459,     0,    84,     0,    84,     0,    84,     0,    84,     0,
     734,     0,   459,     0,   710,     0,   459,     0,   710,     0,
     557,     0,   557,     0,   557,     0,   557,     0,   557,     0,
     557,     0,   557,     0,   557,     0,   557,     0,   557,     0,
     557,     0,   557,     0,   557,     0,   557,     0,   557,     0,
     557,     0,   557,     0,   557,     0,   557,     0,   557,     0,
     557,     0,   557,     0,   557,     0,   557,     0,   557,     0,
     557,     0,   557,     0,   557,     0,   557,     0,   557,     0,
     557,     0,   557,     0,     6,     0,   501,     0,   500,     0,
     498,     0,   168,     0,   168,     0,   168,     0,   168,     0,
     168,     0,   168,     0,   247,   731,     0,   247,   731,     0,
     247,   731,     0,   247,   731,     0,   247,   731,     0,   247,
     731,     0,   247,   731,     0,   247,   731,     0,   247,   731,
       0,   247,   731,     0,   247,   731,     0,   247,   731,     0,
     247,   731,     0,   247,   731,     0,   247,   731,     0,   247,
     731,     0,   247,   731,     0,   247,   731,     0,   247,   731,
       0,   247,   731,     0,   247,   731,     0,   247,   731,     0,
     247,   731,     0,   247,   731,     0,   247,   731,     0,   247,
     731,     0,   247,   731,     0,   247,   731,     0,   247,   731,
       0,   247,   731,     0,   247,   731,     0,   247,   731,     0,
     247,   731,     0,   247,   731,     0,   247,   731,     0,   247,
     731,     0,   247,   731,     0,   247,   731,     0,   247,   731,
       0,   247,   731,     0,   247,   731,     0,   247,   731,     0,
     247,   731,     0,   247,   731,     0,   247,   731,     0,   247,
     731,     0,   247,   731,     0,   247,   731,     0,   247,   731,
       0,   247,   731,     0,   247,   731,     0,   247,   731,     0,
     247,   731,     0,   247,   731,     0,   247,   731,     0,   247,
     731,     0,   247,   731,     0,   247,   731,     0,   247,   731,
       0,   247,   731,     0,   247,   696,   731,     0,   247,   731,
       0,   247,   731,     0,   247,   731,     0,   247,   731,     0,
     247,   731,     0,   247,   731,     0,   247,   731,     0,   247,
     731,     0,   247,   731,     0,   247,   731,     0,   247,   731,
       0,   247,   731,     0,   247,   731,     0,   247,   731,     0,
     247,   731,     0,   247,   731,     0,   247,   731,     0,   247,
     731,     0,   247,   731,     0,   247,   731,     0,   247,   731,
       0,   247,   731,     0,   247,   731,     0,   247,   731,     0,
     247,   731,     0,   247,   731,     0,   247,   731,     0,   247,
     731,     0,   247,   731,     0,   247,   731,     0,   247,   731,
       0,   247,   731,     0,   247,   731,     0,   247,   731,     0,
     247,   731,     0,   247,   731,     0,   247,   731,     0,   247,
     731,     0,   247,   731,     0,   459,     0,   710,     0,   459,
       0,   710,     0,   459,     0,   710,     0,   459,     0,   710,
       0,   459,     0,   710,     0,   459,     0,   710,     0,   459,
       0,   710,     0,   459,     0,   710,     0,   474,     0,   459,
       0,   710,     0,   459,     0,   710,     0,   459,     0,   710,
       0,   459,     0,   710,     0,   459,     0,   710,     0,   459,
       0,   710,     0,   459,     0,   710,     0,   459,     0,   710,
       0,   459,     0,   710,     0,    84,   459,     0,    84,     0,
      84,     0,    84,     0,    84,     0,   459,     0,   710,     0,
     459,     0,   710,     0,   459,     0,   710,     0,   459,     0,
     710,     0,   459,     0,   710,     0,   459,     0,   710,     0,
     459,     0,   710,     0,   459,     0,   710,     0,   459,     0,
     710,     0,   459,     0,   710,     0,   459,     0,   710,     0,
     459,     0,   710,     0,   459,     0,   710,     0,   459,     0,
     710,     0,   459,     0,   710,     0,   459,     0,   710,     0,
     459,     0,   710,     0,   459,     0,   710,     0,   459,     0,
     710,     0,   459,     0,   710,     0,   459,     0,   710,     0,
      84,     0,    84,     0,    84,   269,   459,     0,    84,     0,
      84,     0,    10,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,   710,
       0,    84,     0,    84,     0,    14,     0,   710,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,   179,     0,   179,     0,   179,     0,   179,
       0,   179,     0,   179,     0,   459,     0,   710,     0,   269,
       0,    84,     0,    84,     0,    84,     0,     6,     0,     6,
       0,     6,     0,   459,     0,   459,     0,   230,     0,   230,
       0,   232,     0,   459,     0,   710,     0,   165,     0,   459,
       0,   710,     0,   459,     0,   710,     0,   459,     0,   710,
       0,   459,     0,   459,     0,   710,     0,   729,     0,   729,
       0,   486,     0,   587,     0,    35,     0,   589,     0,   486,
     589,     0,    33,     0,     6,     0,     6,     0,   486,     0,
       6,     0,   459,     0,   710,     0,   459,     0,   710,     0,
      84,   459,     0,    84,     0,    84,   710,     0,   486,     0,
     459,     0,   710,     0,   459,     0,   710,     0,     6,     0,
       6,     0,   459,     0,   710,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   735,     0,   735,     0,
     735,     0,   735,     0,   735,     0,   168,     0,   168,     0,
     168,     0,   168,     0,   168,     0,   168,     0,   459,     0,
     710,     0,     6,     0,   383,     0,   459,     0,   710,     0,
     459,     0,   710,     0,   258,     0,   259,     0,   480,     0,
      84,     0,    84,     0,    84,   459,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,   710,     0,    84,     0,
      84,     0,   710,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,   755,     0,
     693,     0,   451,     0,    84,     0,    84,     0,    84,   269,
     459,     0,    84,     0,    84,     0,    10,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,   710,     0,    84,     0,    84,     0,    14,
       0,   710,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,   459,     0,   247,
     445,   451,   731,     0,   773,     0,   773,     0,   773,     0,
     773,     0,    22,   460,     0,   459,     0,   710,     0,   459,
       0,   710,     0,   486,     0,   459,     0,   710,     0,   459,
       0,   710,     0,     6,     0,     6,     0,   486,     0,     6,
       0,   589,     0,     6,     0,     6,     0,   486,     0,     6,
       0,   221,     0,     6,     0,   459,     0,   459,     0,   710,
       0,   459,     0,   710,     0,   459,     0,   710,     0,   459,
       0,   710,     0,   459,     0,   710,     0,   471,     0,   465,
       0,   465,     0,   465,     0,   459,     0,   710,     0,   459,
       0,   710,     0,    85,     0,    85,     0,    85,   459,     0,
      85,     0,    85,     0,    85,     0,    85,     0,    85,     0,
      85,     0,    85,     0,    85,     0,    85,     0,    85,     0,
      85,     0,    85,     0,    85,     0,    85,   710,     0,    85,
       0,    85,     0,   710,     0,    85,     0,    85,     0,    85,
       0,    85,     0,    85,     0,    85,     0,    85,     0,    85,
       0,    85,     0,    85,     0,    85,     0,    85,     0,    85,
       0,    85,     0,    85,     0,    85,     0,    85,     0,   459,
       0,   710,     0,    84,     0,    84,     0,    84,   459,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,   710,
       0,    84,     0,    84,     0,   710,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,   459,     0,   710,     0,    84,     0,    84,     0,    84,
     269,   459,     0,    84,     0,    84,     0,    10,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,   710,     0,    84,     0,    84,     0,
      14,     0,   710,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,   247,   445,
     451,   731,     0,   493,     0,     6,     0,     6,     0,     6,
       0,   459,     0,   459,     0,    23,     0,   166,     0,     6,
       0,     6,     0,   486,     0,     6,     0,   459,     0,   710,
       0,   459,     0,   710,     0,   459,     0,   710,     0,    22,
     460,     0,   552,     0,    84,   459,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,   710,     0,    84,     0,
     710,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
     459,     0,   710,     0,   459,     0,   710,     0,   459,     0,
     710,     0,   459,     0,   710,     0,   459,     0,   710,     0,
     459,     0,   710,     0,   465,     0,   465,     0,   465,     0,
     459,     0,   710,     0,   247,   445,   451,   731,     0,   755,
       0,     6,     0,   459,     0,   710,     0,    84,     0,    84,
       0,    84,   459,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,   710,     0,    84,     0,    84,     0,   710,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,   459,     0,   710,     0,   459,
       0,   710,     0,   459,     0,   710,     0,   459,     0,   459,
       0,   710,     0,   773,     0,   773,     0,   773,     0,    84,
       0,    84,     0,    84,   269,   459,     0,    84,     0,    84,
       0,    10,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,   710,     0,
      84,     0,    84,     0,    14,     0,   710,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,   471,     0,   459,     0,   710,     0,    84,     0,
      84,     0,    84,   459,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,   710,     0,    84,     0,    84,     0,
     710,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,   459,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,   710,     0,    84,     0,    84,     0,   710,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,   459,     0,    84,     0,    84,
       0,    84,     0,    84,   710,     0,   710,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,   358,     0,    84,
     358,     0,    84,   358,   459,     0,    84,   358,     0,    84,
     358,     0,    84,   358,     0,    84,   358,     0,   358,     0,
      84,   358,     0,    84,   358,     0,    84,   358,     0,    84,
     358,     0,    84,   358,     0,    84,   358,     0,    84,   358,
       0,    84,   358,     0,    84,   358,     0,    84,   358,     0,
      84,   358,   710,     0,    84,   358,     0,    84,   358,     0,
     358,   710,     0,    84,   358,     0,    84,   358,     0,    84,
     358,     0,    84,   358,     0,    84,   358,     0,    84,   358,
       0,    84,   358,     0,    84,   358,     0,    84,   358,     0,
      84,   358,     0,    84,   358,     0,    84,   358,     0,    84,
     358,     0,    84,   358,     0,    84,   358,     0,    84,   358,
       0,    84,   358,     0,    84,   358,     0,    84,   358,     0,
      84,   358,   459,     0,    84,   358,     0,   358,     0,   358,
       0,    84,   358,     0,   358,     0,    84,   358,     0,    84,
     358,     0,   358,     0,   358,     0,   358,     0,   358,     0,
     358,     0,    84,   358,     0,   358,     0,    84,   358,     0,
      84,   358,     0,    84,   358,     0,   358,     0,    84,   358,
       0,    84,   358,     0,    84,   358,     0,    84,   358,     0,
      84,   358,     0,    84,   358,     0,    84,   358,   710,     0,
     358,     0,    84,   358,     0,    84,   358,     0,   358,     0,
     358,     0,   358,     0,   358,     0,   358,     0,   358,     0,
     358,   710,     0,   358,     0,   358,     0,   358,     0,   358,
       0,   358,     0,   358,     0,    84,   358,     0,    84,   358,
       0,    84,   358,     0,    84,   358,     0,    84,   358,     0,
      84,   358,     0,    84,   358,     0,    84,   358,     0,    84,
     358,     0,    84,   358,     0,    84,   358,     0,    84,   358,
       0,    84,   358,     0,    84,   358,     0,    84,   358,     0,
      84,   358,     0,    84,   358,     0,   358,     0,   358,     0,
     358,     0,   358,     0,   484,     0,   489,     0,   459,     0,
     710,     0,   459,     0,   710,     0,   359,     0,   359,     0,
      84,   359,   459,     0,   359,     0,    84,   359,     0,    84,
     359,     0,   359,     0,   359,     0,    84,   359,     0,   359,
       0,   359,     0,   359,     0,   359,     0,   359,     0,   359,
       0,   359,     0,   359,     0,   359,     0,    84,   359,   710,
       0,   359,     0,   359,     0,   359,   710,     0,    84,   359,
       0,    84,   359,     0,    84,   359,     0,    84,   359,     0,
      84,   359,     0,    84,   359,     0,    84,   359,     0,    84,
     359,     0,    84,   359,     0,    84,   359,     0,    84,   359,
       0,    84,   359,     0,    84,   359,     0,    84,   359,     0,
     359,     0,   359,     0,   359,     0,    84,     0,    84,     0,
      84,   459,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,   710,     0,    84,     0,    84,     0,   710,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,   358,     0,    84,   358,     0,
      84,   358,   459,     0,    84,   358,     0,   358,     0,   358,
       0,    84,   358,     0,   358,     0,    84,   358,     0,    84,
     358,     0,   358,     0,   358,     0,   358,     0,   358,     0,
     358,     0,    84,   358,     0,   358,     0,    84,   358,     0,
      84,   358,     0,    84,   358,     0,   358,     0,    84,   358,
       0,    84,   358,     0,    84,   358,     0,    84,   358,     0,
      84,   358,     0,    84,   358,     0,    84,   358,   710,     0,
     358,     0,    84,   358,     0,    84,   358,     0,   358,     0,
     358,     0,   358,     0,   358,     0,   358,     0,   358,     0,
     358,   710,     0,   358,     0,   358,     0,   358,     0,   358,
       0,   358,     0,   358,     0,    84,   358,     0,    84,   358,
       0,    84,   358,     0,    84,   358,     0,    84,   358,     0,
      84,   358,     0,    84,   358,     0,    84,   358,     0,    84,
     358,     0,    84,   358,     0,    84,   358,     0,    84,   358,
       0,    84,   358,     0,    84,   358,     0,    84,   358,     0,
      84,   358,     0,    84,   358,     0,   358,     0,   358,     0,
     358,     0,   358,     0,    84,   459,     0,    84,     0,    84,
       0,    84,     0,    84,   710,     0,   710,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,   554,     0,   459,     0,
     495,     0,     6,     0,     6,     0,     6,     0,    84,     0,
      84,     0,    84,   459,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,   710,     0,    84,     0,    84,     0,
     710,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,   459,     0,   710,     0,
     459,     0,   710,     0,    84,   459,     0,    84,     0,    84,
       0,    84,     0,    84,   710,     0,   710,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,   630,     0,   459,     0,
     710,     0,   496,     0,   459,     0,   710,     0,     6,     0,
       6,     0,     6,     0,   459,     0,   710,     0,    84,     0,
      84,     0,    84,   459,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,   710,     0,    84,     0,    84,     0,
     710,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,   459,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,   710,     0,    84,     0,    84,     0,   710,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,     6,     0,     6,     0,   486,     0,
       6,     0,   602,     0,   603,     0,    84,     0,    84,     0,
      84,   459,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,   710,     0,    84,     0,    84,     0,   710,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,   459,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
     710,     0,    84,     0,    84,     0,   710,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,   459,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,   710,     0,
      84,     0,    84,     0,   710,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
     628,     0,    84,     0,    84,     0,    84,   459,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    84,
       0,    84,     0,    84,     0,    84,     0,    84,   710,     0,
      84,     0,    84,     0,   710,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0,
      84,     0,    84,     0,    84,     0,    84,     0,    84,     0
};



YYSTYPE yylval;

int yynerrs;
int yychar;

enum { YYENOMEM = -2 };

typedef enum { yyok, yyaccept, yyabort, yyerr, yynomem } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif

/** State numbers. */
typedef int yy_state_t;

/** Rule numbers. */
typedef int yyRuleNum;

/** Item references. */
typedef short yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState
{
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yyval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yy_state_t yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  YYPTRDIFF_T yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  nonterminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yyval;
  } yysemantics;
};

struct yyGLRStateSet
{
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  YYPTRDIFF_T yysize;
  YYPTRDIFF_T yycapacity;
};

struct yySemanticOption
{
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  YYPTRDIFF_T yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

_Noreturn static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

_Noreturn static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

/** Accessing symbol of state YYSTATE.  */
static inline yysymbol_kind_t
yy_accessing_symbol (yy_state_t yystate)
{
  return YY_CAST (yysymbol_kind_t, yystos[yystate]);
}

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "COMMA", "CONSTEXPR",
  "ELLIPSIS", "EXPORT", "EXTERN", "IDENTIFIER", "INLINE", "NOEXCEPT",
  "NOT", "SCOPE", "TEMPLATE", "THIS", "TYPENAME", "VIRTUAL", "PRIVATE",
  "PROTECTED", "PUBLIC", "PLUS", "MINUS", "USING", "EQ", "SEMICOLON",
  "ALIGNAS", "OPEN_PAREN", "CLOSE_PAREN", "AND", "ASM", "MULT_EQ",
  "DIV_EQ", "MOD_EQ", "PLUS_EQ", "MINUS_EQ", "RSHIFT_EQ", "LSHIFT_EQ",
  "AND_EQ", "XOR_EQ", "OR_EQ", "OPEN_SQUARE", "CLOSE_SQUARE", "COLON",
  "CO_AWAIT", "OPEN_BRACE", "CLOSE_BRACE", "BALANCED_TOKEN", "CLASS",
  "STRUCT", "UNION", "FINAL", "SPACESHIP", "CONCEPT", "QUERY", "AND_AND",
  "OR_OR", "OPERATOR", "CO_RETURN", "CONST", "VOLATILE", "FRIEND",
  "TYPEDEF", "CONSTEVAL", "CONSTINIT", "DECLTYPE", "DEREF", "DELETE",
  "DOT", "ENUM", "EQ_EQ", "NOT_EQ", "XOR", "LESS", "GREATER", "EXPLICIT",
  "MULT", "DIV", "MOD", "OR", "LSHIFT", "RSHIFT", "LESS_EQ", "GREATER_EQ",
  "DOT_STAR", "DEREF_STAR", "DEFAULT", "TRY", "MODULE", "CATCH",
  "HEADER_NAME", "WHILE", "DO", "FOR", "BREAK", "CONTINUE", "RETURN",
  "GOTO", "CASE", "IMPORT", "NAMESPACE", "REQUIRES", "NEW", "COMPL",
  "PLUS_PLUS", "MINUS_MINUS", "AUTO", "DYNAMIC_CAST", "STATIC_CAST",
  "REINTERPRET_CAST", "CONST_CAST", "TYPEID", "LITERAL", "IF", "ELSE",
  "SWITCH", "CHAR", "CHAR8_T", "CHAR16_T", "CHAR32_T", "WCHAR_T", "BOOL",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "VOID",
  "STATIC_ASSERT", "STATIC", "THREAD_LOCAL", "MUTABLE", "STRING_LITERAL",
  "THROW", "SIZEOF", "ALIGNOF", "OVERRIDE", "CO_YIELD", "'0'", "$accept",
  "COMMA-opt", "CONSTEXPR-opt", "ELLIPSIS-opt", "EXPORT-opt", "EXTERN-opt",
  "IDENTIFIER-opt", "INLINE-opt", "NOEXCEPT-opt", "NOT-opt", "SCOPE-opt",
  "TEMPLATE-opt", "THIS-opt", "TYPENAME-opt", "VIRTUAL-opt",
  "abstract-declarator", "abstract-declarator-opt",
  "abstract-pack-declarator", "access-specifier", "access-specifier-opt",
  "additive-expression", "alias-declaration", "alignment-specifier",
  "and-expression", "asm-declaration", "assignment-expression",
  "assignment-expression-opt", "assignment-operator", "attribute",
  "attribute-argument-clause", "attribute-argument-clause-opt",
  "attribute-declaration", "attribute-list", "attribute-namespace",
  "attribute-opt", "attribute-scoped-token", "attribute-specifier",
  "attribute-specifier-seq", "attribute-specifier-seq-opt",
  "attribute-token", "attribute-using-prefix",
  "attribute-using-prefix-opt", "await-expression", "balanced-token",
  "balanced-token-seq", "balanced-token-seq-opt", "base-clause",
  "base-clause-opt", "base-specifier", "base-specifier-list",
  "block-declaration", "brace-or-equal-initializer",
  "brace-or-equal-initializer-opt", "braced-init-list", "capture",
  "capture-default", "capture-list", "cast-expression", "class-head",
  "class-head-name", "class-key", "class-name", "class-or-decltype",
  "class-specifier", "class-virt-specifier", "class-virt-specifier-opt",
  "compare-expression", "compound-requirement", "compound-statement",
  "concept-definition", "concept-name", "condition", "condition-opt",
  "conditional-expression", "constant-expression",
  "constant-expression-opt", "constraint-expression",
  "constraint-logical-and-expression", "constraint-logical-or-expression",
  "conversion-declarator", "conversion-declarator-opt",
  "conversion-function-id", "conversion-type-id",
  "coroutine-return-statement", "ctor-initializer", "ctor-initializer-opt",
  "cv-qualifier", "cv-qualifier-seq", "cv-qualifier-seq-opt",
  "decl-specifier", "decl-specifier-seq", "decl-specifier-seq-opt",
  "declaration", "declaration-seq", "declaration-seq-opt",
  "declaration-statement", "declarator", "declarator-id",
  "decltype-specifier", "deduction-guide", "defining-type-id",
  "defining-type-specifier", "defining-type-specifier-seq",
  "delete-expression", "designated-initializer-clause",
  "designated-initializer-list", "designator", "elaborated-enum-specifier",
  "elaborated-type-specifier", "empty-declaration",
  "enclosing-namespace-specifier", "enum-base", "enum-base-opt",
  "enum-head", "enum-head-name", "enum-head-name-opt", "enum-key",
  "enum-name", "enum-specifier", "enumerator", "enumerator-definition",
  "enumerator-list", "enumerator-list-opt", "equality-expression",
  "exception-declaration", "exclusive-or-expression",
  "explicit-instantiation", "explicit-specialization",
  "explicit-specifier", "explicit-specifier-opt", "export-declaration",
  "expr-or-braced-init-list", "expr-or-braced-init-list-opt", "expression",
  "expression-list", "expression-list-opt", "expression-opt",
  "expression-statement", "fold-expression", "fold-operator",
  "for-range-declaration", "for-range-initializer", "function-body",
  "function-definition", "function-specifier", "function-try-block",
  "global-module-fragment", "global-module-fragment-opt", "handler",
  "handler-seq", "handler-seq-opt", "header-name", "id-expression",
  "identifier-list", "inclusive-or-expression", "init-capture",
  "init-declarator", "init-declarator-list", "init-declarator-list-opt",
  "init-statement", "init-statement-opt", "initializer",
  "initializer-clause", "initializer-list", "initializer-opt",
  "iteration-statement", "jump-statement", "labeled-statement",
  "lambda-capture", "lambda-capture-opt", "lambda-declarator",
  "lambda-expression", "lambda-introducer", "lambda-specifiers",
  "linkage-specification", "literal-operator-id", "logical-and-expression",
  "logical-or-expression", "mem-initializer", "mem-initializer-id",
  "mem-initializer-list", "member-declaration", "member-declarator",
  "member-declarator-list", "member-declarator-list-opt",
  "member-specification", "member-specification-opt", "module-declaration",
  "module-import-declaration", "module-name", "module-name-qualifier",
  "module-name-qualifier-opt", "module-partition", "module-partition-opt",
  "multiplicative-expression", "named-namespace-definition",
  "namespace-alias", "namespace-alias-definition", "namespace-body",
  "namespace-definition", "namespace-name", "nested-name-specifier",
  "nested-name-specifier-opt", "nested-namespace-definition",
  "nested-requirement", "new-declarator", "new-declarator-opt",
  "new-expression", "new-initializer", "new-initializer-opt",
  "new-placement", "new-placement-opt", "new-type-id",
  "nodeclspec-function-declaration", "noexcept-expression",
  "noexcept-specifier", "noexcept-specifier-opt",
  "noptr-abstract-declarator", "noptr-abstract-declarator-opt",
  "noptr-abstract-pack-declarator", "noptr-declarator",
  "noptr-new-declarator", "opaque-enum-declaration",
  "operator-function-id", "overloadable-operator", "parameter-declaration",
  "parameter-declaration-clause", "parameter-declaration-list",
  "parameter-declaration-list-opt", "parameters-and-qualifiers",
  "placeholder-type-specifier", "pm-expression", "postfix-expression",
  "primary-expression", "private-module-fragment",
  "private-module-fragment-opt", "ptr-abstract-declarator",
  "ptr-abstract-declarator-opt", "ptr-declarator", "ptr-operator",
  "pure-specifier", "pure-specifier-opt", "qualified-id",
  "qualified-namespace-specifier", "ref-qualifier", "ref-qualifier-opt",
  "relational-expression", "requirement", "requirement-body",
  "requirement-parameter-list", "requirement-parameter-list-opt",
  "requirement-seq", "requires-clause", "requires-clause-opt",
  "requires-expression", "return-type-requirement",
  "return-type-requirement-opt", "selection-statement", "shift-expression",
  "simple-capture", "simple-declaration", "simple-requirement",
  "simple-template-id", "simple-type-specifier", "statement",
  "statement-seq", "statement-seq-opt", "static_assert-declaration",
  "storage-class-specifier", "string-literal", "template-argument",
  "template-argument-list", "template-argument-list-opt",
  "template-declaration", "template-head", "template-id", "template-name",
  "template-parameter", "template-parameter-list", "throw-expression",
  "trailing-return-type", "trailing-return-type-opt", "translation-unit",
  "try-block", "type-constraint", "type-constraint-opt", "type-id",
  "type-name", "type-parameter", "type-parameter-key", "type-requirement",
  "type-specifier", "type-specifier-seq", "typedef-name",
  "typename-specifier", "ud-suffix", "unary-expression", "unary-operator",
  "unnamed-namespace-definition", "unqualified-id",
  "user-defined-string-literal", "using-declaration", "using-declarator",
  "using-declarator-list", "using-directive", "using-enum-declaration",
  "virt-specifier", "virt-specifier-seq", "virt-specifier-seq-opt",
  "yield-expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yysymbol_kind_t
yylhsNonterm (yyRuleNum yyrule)
{
  return YY_CAST (yysymbol_kind_t, yyr1[yyrule]);
}

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YY_FPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_FPRINTF_

# define YY_FPRINTF_(Args)                      \
  do {                                          \
    YYFPRINTF Args;                             \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

# define YY_DPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_DPRINTF_

# define YY_DPRINTF_(Args)                      \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)





/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YY_FPRINTF ((stderr, "%s ", Title));                            \
        yy_symbol_print (stderr, Kind, Value);        \
        YY_FPRINTF ((stderr, "\n"));                                    \
      }                                                                 \
  } while (0)

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule);

# define YY_REDUCE_PRINT(Args)          \
  do {                                  \
    if (yydebug)                        \
      yy_reduce_print Args;             \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

static void yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YY_DPRINTF(Args) do {} while (yyfalse)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_REDUCE_PRINT(Args)

#endif /* !YYDEBUG */



/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yyval = s->yysemantics.yyval;
      else
        /* The effect of using yyval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}


/** If yychar is empty, fetch the next token.  */
static inline yysymbol_kind_t
yygetToken (int *yycharp)
{
  yysymbol_kind_t yytoken;
  if (*yycharp == YYEMPTY)
    {
      YY_DPRINTF ((stderr, "Reading a token\n"));
      *yycharp = yylex ();
    }
  if (*yycharp <= YYEOF)
    {
      *yycharp = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YY_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (*yycharp);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }
  return yytoken;
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT, yynomem for YYNOMEM.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyrule, int yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp, YYPTRDIFF_T yyk,
              YYSTYPE* yyvalp)
{
  const yybool yynormal YY_ATTRIBUTE_UNUSED = yystackp->yysplitPoint == YY_NULLPTR;
  int yylow = 1;
  YY_USE (yyvalp);
  YY_USE (yyk);
  YY_USE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYNOMEM
# define YYNOMEM return yynomem
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, (N), yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yyval;
  /* If yyk == -1, we are running a deferred action on a temporary
     stack.  In that case, YY_REDUCE_PRINT must not play with YYFILL,
     so pretend the stack is "normal". */
  YY_REDUCE_PRINT ((yynormal || yyk == -1, yyvsp, yyk, yyrule));
  switch (yyrule)
    {

#line 8162 "cplusplus.c"

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yylhsNonterm (yyrule), yyvalp, yylocp);

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYNOMEM
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YY_USE (yy0);
  YY_USE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yy_accessing_symbol (yys->yylrState),
                &yys->yysemantics.yyval);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YY_FPRINTF ((stderr, "%s unresolved", yymsg));
          else
            YY_FPRINTF ((stderr, "%s incomplete", yymsg));
          YY_SYMBOL_PRINT ("", yy_accessing_symbol (yys->yylrState), YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yy_state_t yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yy_state_t yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yyn) \
  0

/** The action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline int
yygetLRActions (yy_state_t yystate, yysymbol_kind_t yytoken, const short** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yytoken == YYSYMBOL_YYerror)
    {
      // This is the error token.
      *yyconflicts = yyconfl;
      return 0;
    }
  else if (yyisDefaultedState (yystate)
           || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyconflicts = yyconfl;
      return -yydefact[yystate];
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return yytable[yyindex];
    }
  else
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return 0;
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yy_state_t
yyLRgotoState (yy_state_t yystate, yysymbol_kind_t yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YY_ASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates
    = YY_CAST (yyGLRState**,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yystates[0]));
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds
    = YY_CAST (yybool*,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yylookaheadNeeds[0]));
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  memset (yyset->yylookaheadNeeds,
          0,
          YY_CAST (YYSIZE_T, yyset->yycapacity) * sizeof yyset->yylookaheadNeeds[0]);
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, YYPTRDIFF_T yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yysize)
                         * sizeof yystackp->yynextFree[0]));
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS, YYTOITEMS, YYX, YYTYPE)                   \
  &((YYTOITEMS)                                                         \
    - ((YYFROMITEMS) - YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX))))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  YYPTRDIFF_T yynewSize;
  YYPTRDIFF_T yyn;
  YYPTRDIFF_T yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yynewSize)
                         * sizeof yynewItems[0]));
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*YY_REINTERPRET_CAST (yybool *, yyp0))
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YY_DPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  YYPTRDIFF_T yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            YY_DPRINTF ((stderr, "Removing dead stacks.\n"));
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            YY_DPRINTF ((stderr, "Rename stack %ld -> %ld.\n",
                        YY_CAST (long, yyi), YY_CAST (long, yyj)));
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
            YYPTRDIFF_T yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
                 YYPTRDIFF_T yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YY_ASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if YYDEBUG

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule)
{
  int yynrhs = yyrhsLength (yyrule);
  int yyi;
  YY_FPRINTF ((stderr, "Reducing stack %ld by rule %d (line %d):\n",
               YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YY_FPRINTF ((stderr, "   $%d = ", yyi + 1));
      yy_symbol_print (stderr,
                       yy_accessing_symbol (yyvsp[yyi - yynrhs + 1].yystate.yylrState),
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yyval                       );
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YY_FPRINTF ((stderr, " (unresolved)"));
      YY_FPRINTF ((stderr, "\n"));
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs
        = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yytops.yystates[yyk]);
      YY_ASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp, yyk,
                           yyvalp);
    }
  else
    {
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yyGLRState* yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      int yyi;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyk, yyvalp);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  YYPTRDIFF_T yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yyval;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yyval);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        YY_DPRINTF ((stderr,
                     "Parse on stack %ld rejected by rule %d (line %d).\n",
                     YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
      if (yyflag != yyok)
        return yyflag;
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yyval);
    }
  else
    {
      YYPTRDIFF_T yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yy_state_t yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YY_DPRINTF ((stderr,
                   "Reduced stack %ld by rule %d (line %d); action deferred.  "
                   "Now in state %d.\n",
                   YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule],
                   yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YY_DPRINTF ((stderr, "Merging stack %ld into stack %ld.\n",
                                 YY_CAST (long, yyk), YY_CAST (long, yyi)));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static YYPTRDIFF_T
yysplitStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YY_ASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yycapacity <= yystackp->yytops.yysize)
    {
      YYPTRDIFF_T state_size = YYSIZEOF (yystackp->yytops.yystates[0]);
      YYPTRDIFF_T half_max_capacity = YYSIZE_MAXIMUM / 2 / state_size;
      if (half_max_capacity < yystackp->yytops.yycapacity)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      {
        yyGLRState** yynewStates
          = YY_CAST (yyGLRState**,
                     YYREALLOC (yystackp->yytops.yystates,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewStates[0])));
        if (yynewStates == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yystates = yynewStates;
      }

      {
        yybool* yynewLookaheadNeeds
          = YY_CAST (yybool*,
                     YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewLookaheadNeeds[0])));
        if (yynewLookaheadNeeds == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
      }
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize - 1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       0 < yyn;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yyval = yys0->yysemantics.yyval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yyval = yys1->yysemantics.yyval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YY_ASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, -1, yyvalp);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, empty>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1));
  else
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, tokens %ld .. %ld>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1, YY_CAST (long, yys->yyposn + 1),
                 YY_CAST (long, yyx->yystate->yyposn)));
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YY_FPRINTF ((stderr, "%*s%s <empty>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState))));
          else
            YY_FPRINTF ((stderr, "%*s%s <tokens %ld .. %ld>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState)),
                         YY_CAST (long, yystates[yyi-1]->yyposn + 1),
                         YY_CAST (long, yystates[yyi]->yyposn)));
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YY_USE (yyx0);
  YY_USE (yyx1);

#if YYDEBUG
  YY_FPRINTF ((stderr, "Ambiguity detected.\n"));
  YY_FPRINTF ((stderr, "Option 1,\n"));
  yyreportTree (yyx0, 2);
  YY_FPRINTF ((stderr, "\nOption 2,\n"));
  yyreportTree (yyx1, 2);
  YY_FPRINTF ((stderr, "\n"));
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yyval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YY_ASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yyval);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yyval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yyval_other);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yy_accessing_symbol (yys->yylrState),
                                &yyval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yyval, &yyval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yyval);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yyval = yyval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

/** Called when returning to deterministic operation to clean up the extra
 * stacks. */
static void
yycompressStack (yyGLRStack* yystackp)
{
  /* yyr is the state after the split point.  */
  yyGLRState *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  {
    yyGLRState *yyp, *yyq;
    for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
         yyp != yystackp->yysplitPoint;
         yyr = yyp, yyp = yyq, yyq = yyp->yypred)
      yyp->yypred = yyr;
  }

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk,
                   YYPTRDIFF_T yyposn)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yy_state_t yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YY_DPRINTF ((stderr, "Stack %ld Entering state %d\n",
                   YY_CAST (long, yyk), yystate));

      YY_ASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule]);
          if (yyflag == yyerr)
            {
              YY_DPRINTF ((stderr,
                           "Stack %ld dies "
                           "(predicate failure or explicit user error).\n",
                           YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yysymbol_kind_t yytoken = yygetToken (&yychar);
          const short* yyconflicts;
          const int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;

          for (/* nothing */; *yyconflicts; yyconflicts += 1)
            {
              YYRESULTTAG yyflag;
              YYPTRDIFF_T yynewStack = yysplitStack (yystackp, yyk);
              YY_DPRINTF ((stderr, "Splitting off stack %ld from %ld.\n",
                           YY_CAST (long, yynewStack), YY_CAST (long, yyk)));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts]);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn));
              else if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yynewStack)));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction]);
              if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr,
                               "Stack %ld dies "
                               "(predicate failure or explicit user error).\n",
                               YY_CAST (long, yyk)));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}






static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
  yyerror (YY_("syntax error"));
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yysymbol_kind_t yytoken;
        int yyj;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
            yychar = YYEMPTY;
          }
        yytoken = yygetToken (&yychar);
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  {
    YYPTRDIFF_T yyk;
    for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
      if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
        break;
    if (yyk >= yystackp->yytops.yysize)
      yyFail (yystackp, YY_NULLPTR);
    for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
      yymarkStackDeleted (yystackp, yyk);
    yyremoveDeletes (yystackp);
    yycompressStack (yystackp);
  }

  /* Pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      int yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYSYMBOL_YYerror;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYSYMBOL_YYerror
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              int yyaction = yytable[yyj];
              YY_SYMBOL_PRINT ("Shifting", yy_accessing_symbol (yyaction),
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yyaction,
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, YY_NULLPTR);
}

#define YYCHK1(YYE)                             \
  do {                                          \
    switch (YYE) {                              \
    case yyok:     break;                       \
    case yyabort:  goto yyabortlab;             \
    case yyaccept: goto yyacceptlab;            \
    case yyerr:    goto yyuser_error;           \
    case yynomem:  goto yyexhaustedlab;         \
    default:       goto yybuglab;               \
    }                                           \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  YYPTRDIFF_T yyposn;

  YY_DPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode. */
      while (yytrue)
        {
          yy_state_t yystate = yystack.yytops.yystates[0]->yylrState;
          YY_DPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyRuleNum yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yysymbol_kind_t yytoken = yygetToken (&yychar);
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
              if (*yyconflicts)
                /* Enter nondeterministic mode.  */
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {
                  /* Issue an error message unless the scanner already
                     did. */
                  if (yychar != YYerror)
                    yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      /* Nondeterministic mode. */
      while (yytrue)
        {
          yysymbol_kind_t yytoken_to_shift;
          YYPTRDIFF_T yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              yy_state_t yystate = yystack.yytops.yystates[yys]->yylrState;
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken_to_shift,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YY_DPRINTF ((stderr, "On stack %ld, ", YY_CAST (long, yys)));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YY_DPRINTF ((stderr, "Stack %ld now in state %d\n",
                           YY_CAST (long, yys),
                           yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;

 yybuglab:
  YY_ASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturnlab;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;

 yyreturnlab:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          YYPTRDIFF_T yysize = yystack.yytops.yysize;
          YYPTRDIFF_T yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                    if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
/* Print *YYS and its predecessors. */
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YY_FPRINTF ((stderr, " -> "));
    }
  YY_FPRINTF ((stderr, "%d@%ld", yys->yylrState, YY_CAST (long, yys->yyposn)));
}

/* Print YYS (possibly NULL) and its predecessors. */
static void
yypstates (yyGLRState* yys)
{
  if (yys == YY_NULLPTR)
    YY_FPRINTF ((stderr, "<null>"));
  else
    yy_yypstack (yys);
  YY_FPRINTF ((stderr, "\n"));
}

/* Print the stack #YYK.  */
static void
yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

/* Print all the stacks.  */
static void
yypdumpstack (yyGLRStack* yystackp)
{
#define YYINDEX(YYX)                                                    \
  YY_CAST (long,                                                        \
           ((YYX)                                                       \
            ? YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX)) - yystackp->yyitems \
            : -1))

  yyGLRStackItem* yyp;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YY_FPRINTF ((stderr, "%3ld. ",
                   YY_CAST (long, yyp - yystackp->yyitems)));
      if (*YY_REINTERPRET_CAST (yybool *, yyp))
        {
          YY_ASSERT (yyp->yystate.yyisState);
          YY_ASSERT (yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Res: %d, LR State: %d, posn: %ld, pred: %ld",
                       yyp->yystate.yyresolved, yyp->yystate.yylrState,
                       YY_CAST (long, yyp->yystate.yyposn),
                       YYINDEX (yyp->yystate.yypred)));
          if (! yyp->yystate.yyresolved)
            YY_FPRINTF ((stderr, ", firstVal: %ld",
                         YYINDEX (yyp->yystate.yysemantics.yyfirstVal)));
        }
      else
        {
          YY_ASSERT (!yyp->yystate.yyisState);
          YY_ASSERT (!yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Option. rule: %d, state: %ld, next: %ld",
                       yyp->yyoption.yyrule - 1,
                       YYINDEX (yyp->yyoption.yystate),
                       YYINDEX (yyp->yyoption.yynext)));
        }
      YY_FPRINTF ((stderr, "\n"));
    }

  YY_FPRINTF ((stderr, "Tops:"));
  {
    YYPTRDIFF_T yyi;
    for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
      YY_FPRINTF ((stderr, "%ld: %ld; ", YY_CAST (long, yyi),
                   YYINDEX (yystackp->yytops.yystates[yyi])));
    YY_FPRINTF ((stderr, "\n"));
  }
#undef YYINDEX
}
#endif

#undef yylval
#undef yychar
#undef yynerrs




#line 1544 "cplusplus.y"

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

