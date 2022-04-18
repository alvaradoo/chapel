/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 1

/* Pull parsers.  */
#define YYPULL 0

/* Substitute the type names.  */
#define YYSTYPE         YYCHPL_STYPE
#define YYLTYPE         YYCHPL_LTYPE
/* Substitute the variable and function names.  */
#define yypush_parse    yychpl_push_parse
#define yypstate_new    yychpl_pstate_new
#define yypstate_clear  yychpl_pstate_clear
#define yypstate_delete yychpl_pstate_delete
#define yypstate        yychpl_pstate
#define yylex           yychpl_lex
#define yyerror         yychpl_error
#define yydebug         yychpl_debug
#define yynerrs         yychpl_nerrs


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

#include "bison-chpl-lib.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TIDENT = 3,                     /* TIDENT  */
  YYSYMBOL_TQUERIEDIDENT = 4,              /* TQUERIEDIDENT  */
  YYSYMBOL_INTLITERAL = 5,                 /* INTLITERAL  */
  YYSYMBOL_REALLITERAL = 6,                /* REALLITERAL  */
  YYSYMBOL_IMAGLITERAL = 7,                /* IMAGLITERAL  */
  YYSYMBOL_STRINGLITERAL = 8,              /* STRINGLITERAL  */
  YYSYMBOL_BYTESLITERAL = 9,               /* BYTESLITERAL  */
  YYSYMBOL_CSTRINGLITERAL = 10,            /* CSTRINGLITERAL  */
  YYSYMBOL_EXTERNCODE = 11,                /* EXTERNCODE  */
  YYSYMBOL_TALIGN = 12,                    /* TALIGN  */
  YYSYMBOL_TAS = 13,                       /* TAS  */
  YYSYMBOL_TATOMIC = 14,                   /* TATOMIC  */
  YYSYMBOL_TBEGIN = 15,                    /* TBEGIN  */
  YYSYMBOL_TBREAK = 16,                    /* TBREAK  */
  YYSYMBOL_TBOOL = 17,                     /* TBOOL  */
  YYSYMBOL_TBORROWED = 18,                 /* TBORROWED  */
  YYSYMBOL_TBY = 19,                       /* TBY  */
  YYSYMBOL_TBYTES = 20,                    /* TBYTES  */
  YYSYMBOL_TCATCH = 21,                    /* TCATCH  */
  YYSYMBOL_TCLASS = 22,                    /* TCLASS  */
  YYSYMBOL_TCOBEGIN = 23,                  /* TCOBEGIN  */
  YYSYMBOL_TCOFORALL = 24,                 /* TCOFORALL  */
  YYSYMBOL_TCOMPLEX = 25,                  /* TCOMPLEX  */
  YYSYMBOL_TCONFIG = 26,                   /* TCONFIG  */
  YYSYMBOL_TCONST = 27,                    /* TCONST  */
  YYSYMBOL_TCONTINUE = 28,                 /* TCONTINUE  */
  YYSYMBOL_TDEFER = 29,                    /* TDEFER  */
  YYSYMBOL_TDELETE = 30,                   /* TDELETE  */
  YYSYMBOL_TDEPRECATED = 31,               /* TDEPRECATED  */
  YYSYMBOL_TDMAPPED = 32,                  /* TDMAPPED  */
  YYSYMBOL_TDO = 33,                       /* TDO  */
  YYSYMBOL_TDOMAIN = 34,                   /* TDOMAIN  */
  YYSYMBOL_TELSE = 35,                     /* TELSE  */
  YYSYMBOL_TENUM = 36,                     /* TENUM  */
  YYSYMBOL_TEXCEPT = 37,                   /* TEXCEPT  */
  YYSYMBOL_TEXPORT = 38,                   /* TEXPORT  */
  YYSYMBOL_TEXTERN = 39,                   /* TEXTERN  */
  YYSYMBOL_TFALSE = 40,                    /* TFALSE  */
  YYSYMBOL_TFOR = 41,                      /* TFOR  */
  YYSYMBOL_TFORALL = 42,                   /* TFORALL  */
  YYSYMBOL_TFOREACH = 43,                  /* TFOREACH  */
  YYSYMBOL_TFORWARDING = 44,               /* TFORWARDING  */
  YYSYMBOL_TIF = 45,                       /* TIF  */
  YYSYMBOL_TIMAG = 46,                     /* TIMAG  */
  YYSYMBOL_TIMPORT = 47,                   /* TIMPORT  */
  YYSYMBOL_TIN = 48,                       /* TIN  */
  YYSYMBOL_TINCLUDE = 49,                  /* TINCLUDE  */
  YYSYMBOL_TINDEX = 50,                    /* TINDEX  */
  YYSYMBOL_TINLINE = 51,                   /* TINLINE  */
  YYSYMBOL_TINOUT = 52,                    /* TINOUT  */
  YYSYMBOL_TINT = 53,                      /* TINT  */
  YYSYMBOL_TITER = 54,                     /* TITER  */
  YYSYMBOL_TINITEQUALS = 55,               /* TINITEQUALS  */
  YYSYMBOL_TIMPLEMENTS = 56,               /* TIMPLEMENTS  */
  YYSYMBOL_TINTERFACE = 57,                /* TINTERFACE  */
  YYSYMBOL_TLABEL = 58,                    /* TLABEL  */
  YYSYMBOL_TLAMBDA = 59,                   /* TLAMBDA  */
  YYSYMBOL_TLET = 60,                      /* TLET  */
  YYSYMBOL_TLIFETIME = 61,                 /* TLIFETIME  */
  YYSYMBOL_TLOCAL = 62,                    /* TLOCAL  */
  YYSYMBOL_TLOCALE = 63,                   /* TLOCALE  */
  YYSYMBOL_TMANAGE = 64,                   /* TMANAGE  */
  YYSYMBOL_TMINUSMINUS = 65,               /* TMINUSMINUS  */
  YYSYMBOL_TMODULE = 66,                   /* TMODULE  */
  YYSYMBOL_TNEW = 67,                      /* TNEW  */
  YYSYMBOL_TNIL = 68,                      /* TNIL  */
  YYSYMBOL_TNOINIT = 69,                   /* TNOINIT  */
  YYSYMBOL_TNONE = 70,                     /* TNONE  */
  YYSYMBOL_TNOTHING = 71,                  /* TNOTHING  */
  YYSYMBOL_TON = 72,                       /* TON  */
  YYSYMBOL_TONLY = 73,                     /* TONLY  */
  YYSYMBOL_TOPERATOR = 74,                 /* TOPERATOR  */
  YYSYMBOL_TOTHERWISE = 75,                /* TOTHERWISE  */
  YYSYMBOL_TOUT = 76,                      /* TOUT  */
  YYSYMBOL_TOVERRIDE = 77,                 /* TOVERRIDE  */
  YYSYMBOL_TOWNED = 78,                    /* TOWNED  */
  YYSYMBOL_TPARAM = 79,                    /* TPARAM  */
  YYSYMBOL_TPLUSPLUS = 80,                 /* TPLUSPLUS  */
  YYSYMBOL_TPRAGMA = 81,                   /* TPRAGMA  */
  YYSYMBOL_TPRIMITIVE = 82,                /* TPRIMITIVE  */
  YYSYMBOL_TPRIVATE = 83,                  /* TPRIVATE  */
  YYSYMBOL_TPROC = 84,                     /* TPROC  */
  YYSYMBOL_TPROTOTYPE = 85,                /* TPROTOTYPE  */
  YYSYMBOL_TPUBLIC = 86,                   /* TPUBLIC  */
  YYSYMBOL_TREAL = 87,                     /* TREAL  */
  YYSYMBOL_TRECORD = 88,                   /* TRECORD  */
  YYSYMBOL_TREDUCE = 89,                   /* TREDUCE  */
  YYSYMBOL_TREF = 90,                      /* TREF  */
  YYSYMBOL_TREQUIRE = 91,                  /* TREQUIRE  */
  YYSYMBOL_TRETURN = 92,                   /* TRETURN  */
  YYSYMBOL_TSCAN = 93,                     /* TSCAN  */
  YYSYMBOL_TSELECT = 94,                   /* TSELECT  */
  YYSYMBOL_TSERIAL = 95,                   /* TSERIAL  */
  YYSYMBOL_TSHARED = 96,                   /* TSHARED  */
  YYSYMBOL_TSINGLE = 97,                   /* TSINGLE  */
  YYSYMBOL_TSPARSE = 98,                   /* TSPARSE  */
  YYSYMBOL_TSTRING = 99,                   /* TSTRING  */
  YYSYMBOL_TSUBDOMAIN = 100,               /* TSUBDOMAIN  */
  YYSYMBOL_TSYNC = 101,                    /* TSYNC  */
  YYSYMBOL_TTHEN = 102,                    /* TTHEN  */
  YYSYMBOL_TTHIS = 103,                    /* TTHIS  */
  YYSYMBOL_TTHROW = 104,                   /* TTHROW  */
  YYSYMBOL_TTHROWS = 105,                  /* TTHROWS  */
  YYSYMBOL_TTRUE = 106,                    /* TTRUE  */
  YYSYMBOL_TTRY = 107,                     /* TTRY  */
  YYSYMBOL_TTRYBANG = 108,                 /* TTRYBANG  */
  YYSYMBOL_TTYPE = 109,                    /* TTYPE  */
  YYSYMBOL_TUINT = 110,                    /* TUINT  */
  YYSYMBOL_TUNDERSCORE = 111,              /* TUNDERSCORE  */
  YYSYMBOL_TUNION = 112,                   /* TUNION  */
  YYSYMBOL_TUNMANAGED = 113,               /* TUNMANAGED  */
  YYSYMBOL_TUSE = 114,                     /* TUSE  */
  YYSYMBOL_TVAR = 115,                     /* TVAR  */
  YYSYMBOL_TVOID = 116,                    /* TVOID  */
  YYSYMBOL_TWHEN = 117,                    /* TWHEN  */
  YYSYMBOL_TWHERE = 118,                   /* TWHERE  */
  YYSYMBOL_TWHILE = 119,                   /* TWHILE  */
  YYSYMBOL_TWITH = 120,                    /* TWITH  */
  YYSYMBOL_TYIELD = 121,                   /* TYIELD  */
  YYSYMBOL_TZIP = 122,                     /* TZIP  */
  YYSYMBOL_TALIAS = 123,                   /* TALIAS  */
  YYSYMBOL_TAND = 124,                     /* TAND  */
  YYSYMBOL_TASSIGN = 125,                  /* TASSIGN  */
  YYSYMBOL_TASSIGNBAND = 126,              /* TASSIGNBAND  */
  YYSYMBOL_TASSIGNBOR = 127,               /* TASSIGNBOR  */
  YYSYMBOL_TASSIGNBXOR = 128,              /* TASSIGNBXOR  */
  YYSYMBOL_TASSIGNDIVIDE = 129,            /* TASSIGNDIVIDE  */
  YYSYMBOL_TASSIGNEXP = 130,               /* TASSIGNEXP  */
  YYSYMBOL_TASSIGNLAND = 131,              /* TASSIGNLAND  */
  YYSYMBOL_TASSIGNLOR = 132,               /* TASSIGNLOR  */
  YYSYMBOL_TASSIGNMINUS = 133,             /* TASSIGNMINUS  */
  YYSYMBOL_TASSIGNMOD = 134,               /* TASSIGNMOD  */
  YYSYMBOL_TASSIGNMULTIPLY = 135,          /* TASSIGNMULTIPLY  */
  YYSYMBOL_TASSIGNPLUS = 136,              /* TASSIGNPLUS  */
  YYSYMBOL_TASSIGNREDUCE = 137,            /* TASSIGNREDUCE  */
  YYSYMBOL_TASSIGNSL = 138,                /* TASSIGNSL  */
  YYSYMBOL_TASSIGNSR = 139,                /* TASSIGNSR  */
  YYSYMBOL_TBANG = 140,                    /* TBANG  */
  YYSYMBOL_TBAND = 141,                    /* TBAND  */
  YYSYMBOL_TBNOT = 142,                    /* TBNOT  */
  YYSYMBOL_TBOR = 143,                     /* TBOR  */
  YYSYMBOL_TBXOR = 144,                    /* TBXOR  */
  YYSYMBOL_TCOLON = 145,                   /* TCOLON  */
  YYSYMBOL_TCOMMA = 146,                   /* TCOMMA  */
  YYSYMBOL_TDIVIDE = 147,                  /* TDIVIDE  */
  YYSYMBOL_TDOT = 148,                     /* TDOT  */
  YYSYMBOL_TDOTDOT = 149,                  /* TDOTDOT  */
  YYSYMBOL_TDOTDOTDOT = 150,               /* TDOTDOTDOT  */
  YYSYMBOL_TEQUAL = 151,                   /* TEQUAL  */
  YYSYMBOL_TEXP = 152,                     /* TEXP  */
  YYSYMBOL_TGREATER = 153,                 /* TGREATER  */
  YYSYMBOL_TGREATEREQUAL = 154,            /* TGREATEREQUAL  */
  YYSYMBOL_THASH = 155,                    /* THASH  */
  YYSYMBOL_TIO = 156,                      /* TIO  */
  YYSYMBOL_TLESS = 157,                    /* TLESS  */
  YYSYMBOL_TLESSEQUAL = 158,               /* TLESSEQUAL  */
  YYSYMBOL_TMINUS = 159,                   /* TMINUS  */
  YYSYMBOL_TMOD = 160,                     /* TMOD  */
  YYSYMBOL_TNOTEQUAL = 161,                /* TNOTEQUAL  */
  YYSYMBOL_TOR = 162,                      /* TOR  */
  YYSYMBOL_TPLUS = 163,                    /* TPLUS  */
  YYSYMBOL_TQUESTION = 164,                /* TQUESTION  */
  YYSYMBOL_TSEMI = 165,                    /* TSEMI  */
  YYSYMBOL_TSHIFTLEFT = 166,               /* TSHIFTLEFT  */
  YYSYMBOL_TSHIFTRIGHT = 167,              /* TSHIFTRIGHT  */
  YYSYMBOL_TSTAR = 168,                    /* TSTAR  */
  YYSYMBOL_TSWAP = 169,                    /* TSWAP  */
  YYSYMBOL_TLCBR = 170,                    /* TLCBR  */
  YYSYMBOL_TRCBR = 171,                    /* TRCBR  */
  YYSYMBOL_TLP = 172,                      /* TLP  */
  YYSYMBOL_TRP = 173,                      /* TRP  */
  YYSYMBOL_TLSBR = 174,                    /* TLSBR  */
  YYSYMBOL_TRSBR = 175,                    /* TRSBR  */
  YYSYMBOL_TNOELSE = 176,                  /* TNOELSE  */
  YYSYMBOL_TDOTDOTOPENHIGH = 177,          /* TDOTDOTOPENHIGH  */
  YYSYMBOL_TUPLUS = 178,                   /* TUPLUS  */
  YYSYMBOL_TUMINUS = 179,                  /* TUMINUS  */
  YYSYMBOL_TLNOT = 180,                    /* TLNOT  */
  YYSYMBOL_YYACCEPT = 181,                 /* $accept  */
  YYSYMBOL_program = 182,                  /* program  */
  YYSYMBOL_toplevel_stmt_ls = 183,         /* toplevel_stmt_ls  */
  YYSYMBOL_toplevel_stmt = 184,            /* toplevel_stmt  */
  YYSYMBOL_pragma_ls = 185,                /* pragma_ls  */
  YYSYMBOL_stmt = 186,                     /* stmt  */
  YYSYMBOL_tryable_stmt = 187,             /* tryable_stmt  */
  YYSYMBOL_deprecated_decl_stmt = 188,     /* deprecated_decl_stmt  */
  YYSYMBOL_189_1 = 189,                    /* $@1  */
  YYSYMBOL_190_2 = 190,                    /* $@2  */
  YYSYMBOL_deprecated_decl_base = 191,     /* deprecated_decl_base  */
  YYSYMBOL_module_decl_start = 192,        /* module_decl_start  */
  YYSYMBOL_module_decl_stmt = 193,         /* module_decl_stmt  */
  YYSYMBOL_opt_access_control = 194,       /* opt_access_control  */
  YYSYMBOL_opt_prototype = 195,            /* opt_prototype  */
  YYSYMBOL_include_module_stmt = 196,      /* include_module_stmt  */
  YYSYMBOL_block_stmt_body = 197,          /* block_stmt_body  */
  YYSYMBOL_block_stmt = 198,               /* block_stmt  */
  YYSYMBOL_stmt_ls = 199,                  /* stmt_ls  */
  YYSYMBOL_renames_ls = 200,               /* renames_ls  */
  YYSYMBOL_use_renames_ls = 201,           /* use_renames_ls  */
  YYSYMBOL_opt_only_ls = 202,              /* opt_only_ls  */
  YYSYMBOL_use_stmt = 203,                 /* use_stmt  */
  YYSYMBOL_import_stmt = 204,              /* import_stmt  */
  YYSYMBOL_import_expr = 205,              /* import_expr  */
  YYSYMBOL_import_ls = 206,                /* import_ls  */
  YYSYMBOL_require_stmt = 207,             /* require_stmt  */
  YYSYMBOL_assignment_stmt = 208,          /* assignment_stmt  */
  YYSYMBOL_opt_label_ident = 209,          /* opt_label_ident  */
  YYSYMBOL_ident_fn_def = 210,             /* ident_fn_def  */
  YYSYMBOL_ident_def = 211,                /* ident_def  */
  YYSYMBOL_ident_use = 212,                /* ident_use  */
  YYSYMBOL_internal_type_ident_def = 213,  /* internal_type_ident_def  */
  YYSYMBOL_scalar_type = 214,              /* scalar_type  */
  YYSYMBOL_reserved_type_ident_use = 215,  /* reserved_type_ident_use  */
  YYSYMBOL_do_stmt = 216,                  /* do_stmt  */
  YYSYMBOL_return_stmt = 217,              /* return_stmt  */
  YYSYMBOL_deprecated_class_level_stmt = 218, /* deprecated_class_level_stmt  */
  YYSYMBOL_219_3 = 219,                    /* $@3  */
  YYSYMBOL_220_4 = 220,                    /* $@4  */
  YYSYMBOL_class_level_stmt = 221,         /* class_level_stmt  */
  YYSYMBOL_222_5 = 222,                    /* $@5  */
  YYSYMBOL_223_6 = 223,                    /* $@6  */
  YYSYMBOL_inner_class_level_stmt = 224,   /* inner_class_level_stmt  */
  YYSYMBOL_forwarding_decl_stmt = 225,     /* forwarding_decl_stmt  */
  YYSYMBOL_forwarding_decl_start = 226,    /* forwarding_decl_start  */
  YYSYMBOL_extern_or_export = 227,         /* extern_or_export  */
  YYSYMBOL_extern_export_decl_stmt_start = 228, /* extern_export_decl_stmt_start  */
  YYSYMBOL_extern_export_decl_stmt = 229,  /* extern_export_decl_stmt  */
  YYSYMBOL_230_7 = 230,                    /* $@7  */
  YYSYMBOL_extern_block_stmt = 231,        /* extern_block_stmt  */
  YYSYMBOL_loop_stmt = 232,                /* loop_stmt  */
  YYSYMBOL_zippered_iterator = 233,        /* zippered_iterator  */
  YYSYMBOL_if_stmt = 234,                  /* if_stmt  */
  YYSYMBOL_ifvar = 235,                    /* ifvar  */
  YYSYMBOL_interface_stmt = 236,           /* interface_stmt  */
  YYSYMBOL_ifc_formal_ls = 237,            /* ifc_formal_ls  */
  YYSYMBOL_ifc_formal = 238,               /* ifc_formal  */
  YYSYMBOL_implements_type_ident = 239,    /* implements_type_ident  */
  YYSYMBOL_implements_type_error_ident = 240, /* implements_type_error_ident  */
  YYSYMBOL_implements_stmt = 241,          /* implements_stmt  */
  YYSYMBOL_ifc_constraint = 242,           /* ifc_constraint  */
  YYSYMBOL_try_stmt = 243,                 /* try_stmt  */
  YYSYMBOL_catch_expr_ls = 244,            /* catch_expr_ls  */
  YYSYMBOL_catch_expr = 245,               /* catch_expr  */
  YYSYMBOL_catch_expr_inner = 246,         /* catch_expr_inner  */
  YYSYMBOL_throw_stmt = 247,               /* throw_stmt  */
  YYSYMBOL_select_stmt = 248,              /* select_stmt  */
  YYSYMBOL_when_stmt_ls = 249,             /* when_stmt_ls  */
  YYSYMBOL_when_stmt = 250,                /* when_stmt  */
  YYSYMBOL_manager_expr = 251,             /* manager_expr  */
  YYSYMBOL_manager_expr_ls = 252,          /* manager_expr_ls  */
  YYSYMBOL_manage_stmt = 253,              /* manage_stmt  */
  YYSYMBOL_class_decl_stmt = 254,          /* class_decl_stmt  */
  YYSYMBOL_class_start = 255,              /* class_start  */
  YYSYMBOL_class_tag = 256,                /* class_tag  */
  YYSYMBOL_opt_inherit = 257,              /* opt_inherit  */
  YYSYMBOL_class_level_stmt_ls = 258,      /* class_level_stmt_ls  */
  YYSYMBOL_enum_decl_stmt = 259,           /* enum_decl_stmt  */
  YYSYMBOL_enum_header_lcbr = 260,         /* enum_header_lcbr  */
  YYSYMBOL_enum_ls = 261,                  /* enum_ls  */
  YYSYMBOL_262_8 = 262,                    /* $@8  */
  YYSYMBOL_deprecated_enum_item = 263,     /* deprecated_enum_item  */
  YYSYMBOL_264_9 = 264,                    /* $@9  */
  YYSYMBOL_265_10 = 265,                   /* $@10  */
  YYSYMBOL_enum_item = 266,                /* enum_item  */
  YYSYMBOL_lambda_decl_start = 267,        /* lambda_decl_start  */
  YYSYMBOL_lambda_decl_expr = 268,         /* lambda_decl_expr  */
  YYSYMBOL_269_11 = 269,                   /* $@11  */
  YYSYMBOL_linkage_spec_empty = 270,       /* linkage_spec_empty  */
  YYSYMBOL_linkage_spec = 271,             /* linkage_spec  */
  YYSYMBOL_fn_decl_stmt_complete = 272,    /* fn_decl_stmt_complete  */
  YYSYMBOL_fn_decl_stmt = 273,             /* fn_decl_stmt  */
  YYSYMBOL_274_12 = 274,                   /* $@12  */
  YYSYMBOL_fn_decl_stmt_inner = 275,       /* fn_decl_stmt_inner  */
  YYSYMBOL_fn_decl_stmt_start = 276,       /* fn_decl_stmt_start  */
  YYSYMBOL_fn_decl_receiver_expr = 277,    /* fn_decl_receiver_expr  */
  YYSYMBOL_fn_ident = 278,                 /* fn_ident  */
  YYSYMBOL_op_ident = 279,                 /* op_ident  */
  YYSYMBOL_assignop_ident = 280,           /* assignop_ident  */
  YYSYMBOL_all_op_name = 281,              /* all_op_name  */
  YYSYMBOL_formal_var_arg_expr = 282,      /* formal_var_arg_expr  */
  YYSYMBOL_opt_formal_ls = 283,            /* opt_formal_ls  */
  YYSYMBOL_req_formal_ls = 284,            /* req_formal_ls  */
  YYSYMBOL_formal_ls_inner = 285,          /* formal_ls_inner  */
  YYSYMBOL_formal_ls = 286,                /* formal_ls  */
  YYSYMBOL_formal = 287,                   /* formal  */
  YYSYMBOL_opt_formal_intent_tag = 288,    /* opt_formal_intent_tag  */
  YYSYMBOL_required_intent_tag = 289,      /* required_intent_tag  */
  YYSYMBOL_opt_this_intent_tag = 290,      /* opt_this_intent_tag  */
  YYSYMBOL_proc_iter_or_op = 291,          /* proc_iter_or_op  */
  YYSYMBOL_opt_ret_tag = 292,              /* opt_ret_tag  */
  YYSYMBOL_opt_throws_error = 293,         /* opt_throws_error  */
  YYSYMBOL_opt_function_body_stmt = 294,   /* opt_function_body_stmt  */
  YYSYMBOL_function_body_stmt = 295,       /* function_body_stmt  */
  YYSYMBOL_query_expr = 296,               /* query_expr  */
  YYSYMBOL_opt_lifetime_where = 297,       /* opt_lifetime_where  */
  YYSYMBOL_lifetime_components_expr = 298, /* lifetime_components_expr  */
  YYSYMBOL_lifetime_expr = 299,            /* lifetime_expr  */
  YYSYMBOL_lifetime_ident = 300,           /* lifetime_ident  */
  YYSYMBOL_type_alias_decl_stmt = 301,     /* type_alias_decl_stmt  */
  YYSYMBOL_type_alias_decl_stmt_start = 302, /* type_alias_decl_stmt_start  */
  YYSYMBOL_type_alias_decl_stmt_inner_ls = 303, /* type_alias_decl_stmt_inner_ls  */
  YYSYMBOL_type_alias_decl_stmt_inner = 304, /* type_alias_decl_stmt_inner  */
  YYSYMBOL_opt_init_type = 305,            /* opt_init_type  */
  YYSYMBOL_var_decl_type = 306,            /* var_decl_type  */
  YYSYMBOL_var_decl_stmt = 307,            /* var_decl_stmt  */
  YYSYMBOL_308_13 = 308,                   /* $@13  */
  YYSYMBOL_var_decl_stmt_inner_ls = 309,   /* var_decl_stmt_inner_ls  */
  YYSYMBOL_var_decl_stmt_inner = 310,      /* var_decl_stmt_inner  */
  YYSYMBOL_tuple_var_decl_component = 311, /* tuple_var_decl_component  */
  YYSYMBOL_tuple_var_decl_stmt_inner_ls = 312, /* tuple_var_decl_stmt_inner_ls  */
  YYSYMBOL_opt_init_expr = 313,            /* opt_init_expr  */
  YYSYMBOL_ret_array_type = 314,           /* ret_array_type  */
  YYSYMBOL_opt_ret_type = 315,             /* opt_ret_type  */
  YYSYMBOL_opt_type = 316,                 /* opt_type  */
  YYSYMBOL_array_type = 317,               /* array_type  */
  YYSYMBOL_opt_formal_array_elt_type = 318, /* opt_formal_array_elt_type  */
  YYSYMBOL_formal_array_type = 319,        /* formal_array_type  */
  YYSYMBOL_opt_formal_type = 320,          /* opt_formal_type  */
  YYSYMBOL_expr_ls = 321,                  /* expr_ls  */
  YYSYMBOL_simple_expr_ls = 322,           /* simple_expr_ls  */
  YYSYMBOL_tuple_component = 323,          /* tuple_component  */
  YYSYMBOL_tuple_expr_ls = 324,            /* tuple_expr_ls  */
  YYSYMBOL_opt_actual_ls = 325,            /* opt_actual_ls  */
  YYSYMBOL_actual_ls = 326,                /* actual_ls  */
  YYSYMBOL_actual_expr = 327,              /* actual_expr  */
  YYSYMBOL_ident_expr = 328,               /* ident_expr  */
  YYSYMBOL_type_level_expr = 329,          /* type_level_expr  */
  YYSYMBOL_sub_type_level_expr = 330,      /* sub_type_level_expr  */
  YYSYMBOL_for_expr = 331,                 /* for_expr  */
  YYSYMBOL_cond_expr = 332,                /* cond_expr  */
  YYSYMBOL_nil_expr = 333,                 /* nil_expr  */
  YYSYMBOL_stmt_level_expr = 334,          /* stmt_level_expr  */
  YYSYMBOL_opt_task_intent_ls = 335,       /* opt_task_intent_ls  */
  YYSYMBOL_task_intent_clause = 336,       /* task_intent_clause  */
  YYSYMBOL_task_intent_ls = 337,           /* task_intent_ls  */
  YYSYMBOL_forall_intent_clause = 338,     /* forall_intent_clause  */
  YYSYMBOL_forall_intent_ls = 339,         /* forall_intent_ls  */
  YYSYMBOL_intent_expr = 340,              /* intent_expr  */
  YYSYMBOL_task_var_prefix = 341,          /* task_var_prefix  */
  YYSYMBOL_io_expr = 342,                  /* io_expr  */
  YYSYMBOL_new_maybe_decorated = 343,      /* new_maybe_decorated  */
  YYSYMBOL_new_expr = 344,                 /* new_expr  */
  YYSYMBOL_let_expr = 345,                 /* let_expr  */
  YYSYMBOL_expr = 346,                     /* expr  */
  YYSYMBOL_opt_expr = 347,                 /* opt_expr  */
  YYSYMBOL_opt_try_expr = 348,             /* opt_try_expr  */
  YYSYMBOL_lhs_expr = 349,                 /* lhs_expr  */
  YYSYMBOL_call_base_expr = 350,           /* call_base_expr  */
  YYSYMBOL_call_expr = 351,                /* call_expr  */
  YYSYMBOL_dot_expr = 352,                 /* dot_expr  */
  YYSYMBOL_parenthesized_expr = 353,       /* parenthesized_expr  */
  YYSYMBOL_bool_literal = 354,             /* bool_literal  */
  YYSYMBOL_str_bytes_literal = 355,        /* str_bytes_literal  */
  YYSYMBOL_literal_expr = 356,             /* literal_expr  */
  YYSYMBOL_assoc_expr_ls = 357,            /* assoc_expr_ls  */
  YYSYMBOL_binary_op_expr = 358,           /* binary_op_expr  */
  YYSYMBOL_unary_op_expr = 359,            /* unary_op_expr  */
  YYSYMBOL_reduce_expr = 360,              /* reduce_expr  */
  YYSYMBOL_scan_expr = 361,                /* scan_expr  */
  YYSYMBOL_reduce_scan_op_expr = 362       /* reduce_scan_op_expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 318 "chpl.ypp"

  // include the definition of methods for ParserContext
  #include "ParserContextImpl.h"
  // include helper macros for use in writing productions
  #include "parser-help.h"
  // include implementation of error logging hook
  #include "parser-yyerror.h"

#line 486 "bison-chpl-lib.cpp"

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


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYCHPL_LTYPE_IS_TRIVIAL && YYCHPL_LTYPE_IS_TRIVIAL \
             && defined YYCHPL_STYPE_IS_TRIVIAL && YYCHPL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   20673

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  181
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  182
/* YYNRULES -- Number of rules.  */
#define YYNRULES  720
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1274

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   435


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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180
};

#if YYCHPL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   601,   601,   605,   606,   611,   612,   620,   624,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     655,   656,   657,   658,   667,   676,   699,   706,   714,   715,
     716,   717,   718,   719,   720,   721,   735,   750,   758,   770,
     781,   793,   805,   816,   832,   834,   833,   842,   841,   852,
     853,   857,   877,   892,   907,   923,   924,   926,   931,   932,
     937,   955,   959,   963,   974,   993,   994,   998,  1002,  1006,
    1011,  1015,  1019,  1029,  1034,  1040,  1047,  1052,  1059,  1070,
    1071,  1075,  1079,  1086,  1094,  1103,  1110,  1118,  1130,  1137,
    1141,  1146,  1152,  1161,  1162,  1166,  1175,  1179,  1183,  1187,
    1191,  1195,  1204,  1205,  1209,  1210,  1211,  1212,  1213,  1214,
    1220,  1221,  1222,  1223,  1224,  1225,  1240,  1241,  1252,  1253,
    1254,  1255,  1256,  1257,  1258,  1259,  1260,  1261,  1262,  1263,
    1264,  1265,  1266,  1267,  1268,  1269,  1270,  1274,  1275,  1276,
    1277,  1278,  1279,  1280,  1281,  1282,  1283,  1284,  1285,  1292,
    1293,  1294,  1295,  1299,  1300,  1304,  1311,  1321,  1323,  1322,
    1331,  1330,  1341,  1345,  1351,  1351,  1357,  1357,  1366,  1367,
    1368,  1369,  1370,  1371,  1372,  1376,  1381,  1386,  1391,  1398,
    1406,  1407,  1411,  1420,  1426,  1434,  1453,  1452,  1465,  1472,
    1490,  1503,  1516,  1520,  1524,  1528,  1532,  1536,  1540,  1544,
    1562,  1566,  1570,  1574,  1578,  1582,  1586,  1590,  1594,  1598,
    1602,  1606,  1610,  1614,  1618,  1622,  1626,  1630,  1634,  1638,
    1642,  1646,  1650,  1655,  1663,  1672,  1676,  1680,  1684,  1688,
    1692,  1696,  1700,  1704,  1709,  1714,  1719,  1727,  1742,  1760,
    1762,  1767,  1768,  1773,  1778,  1779,  1780,  1781,  1782,  1783,
    1784,  1785,  1786,  1787,  1788,  1789,  1790,  1802,  1803,  1804,
    1805,  1814,  1815,  1819,  1821,  1823,  1828,  1830,  1832,  1837,
    1841,  1845,  1849,  1856,  1857,  1861,  1865,  1869,  1876,  1889,
    1905,  1913,  1917,  1926,  1927,  1931,  1935,  1940,  1948,  1953,
    1957,  1964,  1965,  1969,  1978,  1983,  1994,  2001,  2002,  2003,
    2007,  2008,  2012,  2016,  2020,  2027,  2044,  2057,  2064,  2069,
    2076,  2075,  2088,  2090,  2089,  2098,  2097,  2108,  2115,  2127,
    2144,  2142,  2169,  2173,  2174,  2176,  2181,  2191,  2188,  2216,
    2224,  2232,  2243,  2254,  2263,  2278,  2279,  2283,  2284,  2285,
    2294,  2295,  2296,  2297,  2298,  2299,  2300,  2301,  2302,  2303,
    2304,  2305,  2306,  2307,  2308,  2309,  2310,  2311,  2312,  2313,
    2314,  2315,  2316,  2317,  2318,  2319,  2323,  2324,  2325,  2326,
    2327,  2328,  2329,  2330,  2331,  2332,  2333,  2334,  2339,  2340,
    2344,  2345,  2346,  2350,  2351,  2355,  2359,  2360,  2364,  2365,
    2369,  2378,  2389,  2399,  2411,  2423,  2431,  2435,  2443,  2444,
    2445,  2446,  2447,  2448,  2449,  2450,  2451,  2455,  2456,  2457,
    2458,  2459,  2460,  2464,  2465,  2466,  2470,  2471,  2472,  2473,
    2474,  2475,  2479,  2480,  2483,  2484,  2488,  2489,  2493,  2498,
    2499,  2501,  2503,  2505,  2510,  2512,  2517,  2519,  2521,  2523,
    2525,  2527,  2529,  2534,  2535,  2539,  2547,  2551,  2556,  2564,
    2568,  2575,  2596,  2597,  2599,  2607,  2608,  2609,  2610,  2611,
    2616,  2615,  2624,  2632,  2636,  2643,  2659,  2676,  2680,  2684,
    2691,  2693,  2695,  2702,  2703,  2704,  2709,  2713,  2717,  2721,
    2725,  2729,  2733,  2740,  2741,  2742,  2743,  2744,  2749,  2750,
    2751,  2752,  2753,  2773,  2777,  2781,  2785,  2792,  2793,  2794,
    2798,  2803,  2811,  2816,  2820,  2827,  2828,  2829,  2830,  2831,
    2837,  2838,  2839,  2840,  2844,  2845,  2849,  2850,  2851,  2855,
    2859,  2866,  2867,  2871,  2876,  2885,  2886,  2887,  2888,  2892,
    2893,  2904,  2906,  2908,  2914,  2915,  2916,  2917,  2918,  2919,
    2921,  2923,  2925,  2927,  2933,  2935,  2938,  2940,  2942,  2944,
    2946,  2948,  2950,  2952,  2955,  2957,  2962,  2971,  2980,  2988,
    3002,  3016,  3030,  3039,  3048,  3056,  3070,  3084,  3098,  3115,
    3124,  3133,  3148,  3166,  3184,  3192,  3193,  3194,  3195,  3196,
    3197,  3198,  3199,  3204,  3205,  3209,  3218,  3219,  3223,  3232,
    3233,  3237,  3252,  3256,  3263,  3264,  3265,  3266,  3267,  3268,
    3272,  3273,  3278,  3280,  3282,  3284,  3286,  3292,  3299,  3311,
    3323,  3336,  3353,  3363,  3364,  3365,  3366,  3367,  3368,  3369,
    3370,  3371,  3372,  3376,  3380,  3385,  3390,  3395,  3401,  3407,
    3439,  3440,  3444,  3445,  3446,  3450,  3451,  3452,  3453,  3462,
    3463,  3466,  3467,  3468,  3472,  3484,  3496,  3503,  3505,  3507,
    3509,  3511,  3517,  3530,  3531,  3535,  3539,  3546,  3547,  3551,
    3552,  3556,  3557,  3558,  3559,  3560,  3561,  3562,  3563,  3567,
    3571,  3575,  3579,  3583,  3592,  3597,  3606,  3607,  3608,  3609,
    3610,  3611,  3612,  3613,  3614,  3615,  3616,  3617,  3618,  3619,
    3620,  3621,  3622,  3623,  3624,  3625,  3626,  3627,  3628,  3632,
    3633,  3634,  3635,  3636,  3637,  3640,  3644,  3648,  3652,  3656,
    3663,  3667,  3671,  3675,  3683,  3684,  3685,  3686,  3687,  3688,
    3689
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYCHPL_DEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TIDENT",
  "TQUERIEDIDENT", "INTLITERAL", "REALLITERAL", "IMAGLITERAL",
  "STRINGLITERAL", "BYTESLITERAL", "CSTRINGLITERAL", "EXTERNCODE",
  "TALIGN", "TAS", "TATOMIC", "TBEGIN", "TBREAK", "TBOOL", "TBORROWED",
  "TBY", "TBYTES", "TCATCH", "TCLASS", "TCOBEGIN", "TCOFORALL", "TCOMPLEX",
  "TCONFIG", "TCONST", "TCONTINUE", "TDEFER", "TDELETE", "TDEPRECATED",
  "TDMAPPED", "TDO", "TDOMAIN", "TELSE", "TENUM", "TEXCEPT", "TEXPORT",
  "TEXTERN", "TFALSE", "TFOR", "TFORALL", "TFOREACH", "TFORWARDING", "TIF",
  "TIMAG", "TIMPORT", "TIN", "TINCLUDE", "TINDEX", "TINLINE", "TINOUT",
  "TINT", "TITER", "TINITEQUALS", "TIMPLEMENTS", "TINTERFACE", "TLABEL",
  "TLAMBDA", "TLET", "TLIFETIME", "TLOCAL", "TLOCALE", "TMANAGE",
  "TMINUSMINUS", "TMODULE", "TNEW", "TNIL", "TNOINIT", "TNONE", "TNOTHING",
  "TON", "TONLY", "TOPERATOR", "TOTHERWISE", "TOUT", "TOVERRIDE", "TOWNED",
  "TPARAM", "TPLUSPLUS", "TPRAGMA", "TPRIMITIVE", "TPRIVATE", "TPROC",
  "TPROTOTYPE", "TPUBLIC", "TREAL", "TRECORD", "TREDUCE", "TREF",
  "TREQUIRE", "TRETURN", "TSCAN", "TSELECT", "TSERIAL", "TSHARED",
  "TSINGLE", "TSPARSE", "TSTRING", "TSUBDOMAIN", "TSYNC", "TTHEN", "TTHIS",
  "TTHROW", "TTHROWS", "TTRUE", "TTRY", "TTRYBANG", "TTYPE", "TUINT",
  "TUNDERSCORE", "TUNION", "TUNMANAGED", "TUSE", "TVAR", "TVOID", "TWHEN",
  "TWHERE", "TWHILE", "TWITH", "TYIELD", "TZIP", "TALIAS", "TAND",
  "TASSIGN", "TASSIGNBAND", "TASSIGNBOR", "TASSIGNBXOR", "TASSIGNDIVIDE",
  "TASSIGNEXP", "TASSIGNLAND", "TASSIGNLOR", "TASSIGNMINUS", "TASSIGNMOD",
  "TASSIGNMULTIPLY", "TASSIGNPLUS", "TASSIGNREDUCE", "TASSIGNSL",
  "TASSIGNSR", "TBANG", "TBAND", "TBNOT", "TBOR", "TBXOR", "TCOLON",
  "TCOMMA", "TDIVIDE", "TDOT", "TDOTDOT", "TDOTDOTDOT", "TEQUAL", "TEXP",
  "TGREATER", "TGREATEREQUAL", "THASH", "TIO", "TLESS", "TLESSEQUAL",
  "TMINUS", "TMOD", "TNOTEQUAL", "TOR", "TPLUS", "TQUESTION", "TSEMI",
  "TSHIFTLEFT", "TSHIFTRIGHT", "TSTAR", "TSWAP", "TLCBR", "TRCBR", "TLP",
  "TRP", "TLSBR", "TRSBR", "TNOELSE", "TDOTDOTOPENHIGH", "TUPLUS",
  "TUMINUS", "TLNOT", "$accept", "program", "toplevel_stmt_ls",
  "toplevel_stmt", "pragma_ls", "stmt", "tryable_stmt",
  "deprecated_decl_stmt", "$@1", "$@2", "deprecated_decl_base",
  "module_decl_start", "module_decl_stmt", "opt_access_control",
  "opt_prototype", "include_module_stmt", "block_stmt_body", "block_stmt",
  "stmt_ls", "renames_ls", "use_renames_ls", "opt_only_ls", "use_stmt",
  "import_stmt", "import_expr", "import_ls", "require_stmt",
  "assignment_stmt", "opt_label_ident", "ident_fn_def", "ident_def",
  "ident_use", "internal_type_ident_def", "scalar_type",
  "reserved_type_ident_use", "do_stmt", "return_stmt",
  "deprecated_class_level_stmt", "$@3", "$@4", "class_level_stmt", "$@5",
  "$@6", "inner_class_level_stmt", "forwarding_decl_stmt",
  "forwarding_decl_start", "extern_or_export",
  "extern_export_decl_stmt_start", "extern_export_decl_stmt", "$@7",
  "extern_block_stmt", "loop_stmt", "zippered_iterator", "if_stmt",
  "ifvar", "interface_stmt", "ifc_formal_ls", "ifc_formal",
  "implements_type_ident", "implements_type_error_ident",
  "implements_stmt", "ifc_constraint", "try_stmt", "catch_expr_ls",
  "catch_expr", "catch_expr_inner", "throw_stmt", "select_stmt",
  "when_stmt_ls", "when_stmt", "manager_expr", "manager_expr_ls",
  "manage_stmt", "class_decl_stmt", "class_start", "class_tag",
  "opt_inherit", "class_level_stmt_ls", "enum_decl_stmt",
  "enum_header_lcbr", "enum_ls", "$@8", "deprecated_enum_item", "$@9",
  "$@10", "enum_item", "lambda_decl_start", "lambda_decl_expr", "$@11",
  "linkage_spec_empty", "linkage_spec", "fn_decl_stmt_complete",
  "fn_decl_stmt", "$@12", "fn_decl_stmt_inner", "fn_decl_stmt_start",
  "fn_decl_receiver_expr", "fn_ident", "op_ident", "assignop_ident",
  "all_op_name", "formal_var_arg_expr", "opt_formal_ls", "req_formal_ls",
  "formal_ls_inner", "formal_ls", "formal", "opt_formal_intent_tag",
  "required_intent_tag", "opt_this_intent_tag", "proc_iter_or_op",
  "opt_ret_tag", "opt_throws_error", "opt_function_body_stmt",
  "function_body_stmt", "query_expr", "opt_lifetime_where",
  "lifetime_components_expr", "lifetime_expr", "lifetime_ident",
  "type_alias_decl_stmt", "type_alias_decl_stmt_start",
  "type_alias_decl_stmt_inner_ls", "type_alias_decl_stmt_inner",
  "opt_init_type", "var_decl_type", "var_decl_stmt", "$@13",
  "var_decl_stmt_inner_ls", "var_decl_stmt_inner",
  "tuple_var_decl_component", "tuple_var_decl_stmt_inner_ls",
  "opt_init_expr", "ret_array_type", "opt_ret_type", "opt_type",
  "array_type", "opt_formal_array_elt_type", "formal_array_type",
  "opt_formal_type", "expr_ls", "simple_expr_ls", "tuple_component",
  "tuple_expr_ls", "opt_actual_ls", "actual_ls", "actual_expr",
  "ident_expr", "type_level_expr", "sub_type_level_expr", "for_expr",
  "cond_expr", "nil_expr", "stmt_level_expr", "opt_task_intent_ls",
  "task_intent_clause", "task_intent_ls", "forall_intent_clause",
  "forall_intent_ls", "intent_expr", "task_var_prefix", "io_expr",
  "new_maybe_decorated", "new_expr", "let_expr", "expr", "opt_expr",
  "opt_try_expr", "lhs_expr", "call_base_expr", "call_expr", "dot_expr",
  "parenthesized_expr", "bool_literal", "str_bytes_literal",
  "literal_expr", "assoc_expr_ls", "binary_op_expr", "unary_op_expr",
  "reduce_expr", "scan_expr", "reduce_scan_op_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-1147)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-721)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1147,   130,  3921, -1147,    14,   212, -1147, -1147, -1147, -1147,
   -1147, -1147,  5321,   160,   255,   272, 14972,   275, 20383,   160,
   12112,   285,   250,   292,   255,  5321, 12112,   354,  5321,   246,
   20470, -1147,   129,   394,  8982, 10374, 10374, -1147,  9155,   420,
     196,   307, -1147,   426, 20470, 20470, 20470, -1147,  2103, 10547,
     450, 12112, 12112,   259, -1147,   458,   461, 12112, -1147, 14972,
   -1147, 12112,   551,   396,   525,   542,   518, 20557, -1147, 10722,
    8461, 12112, 10547, 14972, 12112,   532,   527,   465,  5321,   582,
   12112,   593,  7417,  7417, -1147,   619, -1147, 14972, -1147,   620,
    9155, 12112, -1147, 12112, -1147, 12112, -1147, -1147, 14489, 12112,
   -1147, 12112, -1147, -1147, -1147,  4271,  7592,  9330, 12112, -1147,
    5146, -1147, -1147, -1147, -1147,   471, -1147,   225, -1147, -1147,
   -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147,
   -1147,  7765, -1147, 10895, -1147, -1147, -1147, -1147, -1147,   624,
   -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147,   499, 20470,
   -1147, 20108,   516,   373, -1147,    49, -1147, -1147,   336,   428,
   -1147, 20470,  2103, -1147,   526, -1147,   528, -1147, -1147,   531,
     539,   552, 12112,   546,   562, 19719,  1840,   -62,   568,   571,
   -1147, -1147,   320, -1147, -1147, -1147, -1147, -1147,   177, -1147,
   -1147, 19719,   558,  5321, -1147, -1147,   580, 12112, -1147, -1147,
   12112, 12112, 12112, 20470, -1147, 12112, 10722, 10722,   691,   395,
   -1147, -1147, -1147, -1147,   -23,   442, -1147, -1147,   578, 16685,
   -1147,   233, -1147,   586, -1147,   -33, 19719, -1147,  2372,   637,
    8636, -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147,
   -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147,
   -1147, -1147, -1147, -1147, -1147,   595, -1147, -1147, -1147, 20470,
     591,    32, 16291,    37, 16202,    37, 16251, 20470, 20470,   -22,
   15442, -1147, -1147,   675,  8636,   597,   537,  5321,  1187,    81,
     111, -1147,  5321, -1147, -1147, 16725, -1147,    40, 17234,   198,
   -1147,   598,   608, -1147, 16725,   -23,   198, -1147,  8636,  3356,
    3356, -1147, -1147,   274, 19719, 12112, 12112, -1147, 19719,   602,
   17341, -1147, 16725,   -23, 19719,   610,  8636, -1147, 19719, 17386,
   -1147, -1147, -1147, -1147,   -23,    32, 16725, 17426,   636,   636,
    1689,   198,   198,   186, -1147, -1147,  4446,   -35, -1147, 12112,
   -1147,   -74,   -42, -1147,   -30,     7, 17578,    73,  1689,   775,
   -1147,  4621, 12112, -1147, 12112,   719, -1147, -1147,  2996,   162,
     499, 19719,   234, 20470, 10722,   616, -1147,   627,   779,   666,
     118, -1147, -1147,   453,   336, -1147, -1147, -1147, -1147,   705,
   -1147, -1147, -1147,    47,   709, -1147, -1147, -1147, 14321,   677,
     296, -1147,   339,   540, -1147, 12112,   652, 12112, 12112, 12112,
   10374, 10374, 12112,   572, 12112, 12112, 12112, 12112, 12112,   134,
   14489, 12112, 12112, 12112, 12112, 12112, 12112, 12112, 12112, 12112,
   12112, 12112, 12112, 12112, 12112, 12112, 12112,   734, -1147, -1147,
   -1147, -1147, -1147,  9503,  9503, -1147, -1147, -1147, -1147,  9503,
   -1147, -1147,  9503,  9503,  8636,  8636, 10374, 10374,  8288, -1147,
   -1147, 16765, 16917, 17618,   632,    21, 20470,  4796, -1147, 10374,
      32,  2103, -1147, 12112, -1147,  2372, -1147, 20470,   696, -1147,
   -1147,   675, 12112,   682, -1147,   635,   664, -1147, -1147, -1147,
     771, 10722, -1147,  5496, 10374, -1147,   651, -1147,    32,  5671,
   10374, -1147,    32, -1147,    32, 10374, -1147,    32,   700,   702,
    5321,   793,  5321, -1147,   796, 12112,   766,   661,  8636, 20470,
   -1147, -1147, -1147,  1187, -1147, -1147,   132, -1147, 12285,   710,
   12112,  2103, -1147, -1147, 12112, -1147, 20195, 12112, 12112, -1147,
     663, -1147, -1147, 10722, -1147, 19719, 19719, -1147,    53, -1147,
    8636,   665, -1147,   818,   818, -1147, -1147, -1147, -1147, -1147,
   -1147,  9678, -1147, 17658,  7940, -1147,  8115, -1147,  5321,   667,
   10374,  9853,  4096,   669, 12112, 11068, -1147, -1147,   202, -1147,
    4971, -1147,   408, 17810,   412, 16443, 20470,  7244,  7244, -1147,
     499,   670,   233, -1147,   338,   695,  1439, -1147, -1147, 20470,
   12112,   121, -1147,    66, -1147, -1147, -1147, -1147, -1147, -1147,
     544,   699,   673, -1147,  2584, -1147,    55, -1147, -1147, 12458,
     744, -1147,   678,    18, -1147,   703, -1147,   704,   706,   715,
     708,   711, -1147,   713,   717,   714,   716,   718,   173,   725,
     720,   722, -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147,
   -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147,
   -1147, -1147, -1147, -1147, -1147, 12112, -1147,   727,   732,   728,
     678, -1147,   678, -1147, 12631, -1147, 20470, -1147, -1147, 17850,
   19871, 19871,   609, -1147,   609, -1147,   609, 18722,   929,  1718,
    1735,   -23,   636, -1147,   590, -1147, -1147, -1147, -1147, -1147,
    1689, 16582,   609,  1015,  1015, 19871,  1015,  1015,   649,   636,
   16582, 19947,   649,   198,   198,   636,  1689,   712,   723,   724,
     726,   730,   731,   707,   698, -1147,   609, -1147,   609,    87,
   -1147, -1147, -1147,   187, -1147,  1319, 19795,   351, 12804, 10374,
   12977, 10374, 12112,  8636, 10374, 15254,   721,   160, 17895, -1147,
     430, 19719, -1147, 18002,  8636, -1147,  8636, 12112,   207,  9155,
   19719,    43, 16957,  8288, -1147,  9155, 19719,    41, 16488, -1147,
   -1147,    37, 16533, -1147, 12112, 12112,   843,  5321,   844, 18047,
    5321, 16997, 20470, -1147,   208, -1147,   218, -1147,   224,  1187,
      81,   -10,    15, 12112, 12112,  7071, -1147, -1147,   439,  8809,
   -1147, 19719, -1147, -1147, -1147, 20470, 18087, 18239, -1147, -1147,
   19719,   733,   164,   735, -1147,  1591, -1147, -1147, -1147, -1147,
   -1147, -1147, -1147, -1147,  5321,   -29, 17149, -1147, -1147, 19719,
    5321, 19719, -1147, 18280, -1147, -1147, 12112, -1147,    60,  3447,
   12112, -1147, 11241,  7244,  7244, -1147, 12112,   431, 12112,   467,
     565, 12112, 10026,   573,   435, -1147, -1147, -1147, 18321,   736,
     738,   729, -1147,  2103, -1147,  8636,   739,  2000, 20470, -1147,
   19719, 20296, -1147, -1147, 20470,   588, -1147,  1187,   742,    24,
    3686, -1147, -1147,   179, -1147,    24,   453, -1147, 18439, -1147,
   15359, -1147, -1147, -1147,   436, -1147,   741,   737, -1147, -1147,
   -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147,  8288, -1147,
   -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147,
   -1147,    83, 10374, 10374, 12112,   848, 18480, 12112,   850, 18521,
     273,   740, 18639,  8636,    32,    32, -1147, -1147, -1147, -1147,
   -1147, 16725, -1147, 15518,  5846, -1147,  6021, -1147,   279, -1147,
   15594,  6196, -1147,    32,  6371, -1147,    32, -1147,    32, -1147,
      32, 19719, 19719,  5321, -1147,  5321, 12112, -1147,  5321,   849,
     751,   755, 20470,   578, -1147, -1147,   710,   746,    74, -1147,
   -1147, -1147,   753,   754, -1147,  6546, 10722, -1147, -1147, -1147,
   20470, -1147,   745,   578, -1147,  6721,   748,  6896,   752, -1147,
   12112, -1147, -1147,  7244, -1147, 18680,    78, 17189,   457,   763,
    7244, -1147, 12112, -1147, -1147,  2755,   482,   283, -1147,   884,
   -1147, -1147, -1147, 16221, -1147, -1147, -1147, -1147,   742, -1147,
     295, 11416,   175,   141, 12112, -1147,   756, 14188,    86, -1147,
     757, -1147,   758,   767,   678,   678, -1147, -1147, -1147,   710,
     302,   308, 18798, 13150, 13323, 18874, 13496, 13669, -1147, 13842,
   14015,   311, -1147, -1147, -1147,  5321,  9155, 19719,  9155, 19719,
    8288, -1147,  5321,  9155, 19719, -1147,  9155, 19719, -1147, -1147,
   -1147, -1147, -1147, 19719,   862,  5321, -1147, -1147, -1147, -1147,
   -1147, -1147, 10374, 15113,  8636,  8636,  5321, -1147,    85,   760,
   12112, -1147,  9155, -1147, 19719,  5321,  9155, -1147, 19719,  5321,
   19719,   176, 11589,  7244,  7244,  7244,  7244, -1147, -1147, -1147,
   18959, 19719,  3209, -1147, -1147,   769, -1147, 16460, -1147,   175,
     742, 10201, -1147, -1147, -1147,   324, 10722, -1147, -1147, -1147,
     138, -1147,   -26, -1147,   548, 19035,   -15, -1147, -1147,   191,
   14659,   159, -1147, -1147, -1147, -1147, 12112, 12112, 12112, 12112,
   12112, 12112, 12112, 12112, -1147, 18047, 15670, 15746, -1147, 18047,
   15822, 15898,  5321, -1147, 19111, -1147,   585,   762,   764,   637,
   -1147,   578, 19719, 15974, -1147, 16050, -1147, -1147, -1147, 19719,
     483,   773,   485,   774, 12112, -1147, -1147, 16460, -1147, -1147,
   -1147,   175, 11764,    90, -1147, 19719, -1147, 12112,   141,   138,
     138,   138,   138,   138,   138,   141, -1147, -1147, -1147, -1147,
     214, -1147, -1147, -1147, 19187, 19263, 19339, 19415, 19491, 19567,
    5321,  5321,  5321,  5321, -1147, 14015,   772,   777, -1147,  5321,
    5321, -1147, -1147, -1147, -1147, 19719, -1147, -1147, -1147, -1147,
   -1147, -1147,   438, 10374, 14800, 19719, -1147, -1147, -1147, -1147,
   -1147, -1147, -1147,   800, 12112, 12112, 12112, 12112, 12112, 12112,
   18047, 18047, 18047, 18047,   895, -1147, -1147, 18047, 18047, 19643,
   -1147, -1147, 11939, -1147
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     0,     0,     1,     0,   116,   663,   664,   665,   659,
     660,   666,     0,   583,   102,   137,   552,   144,   554,   583,
       0,   143,   460,   458,   102,     0,     0,    47,     0,   261,
     138,   181,   180,   657,     0,     0,     0,   179,     0,   142,
      55,   262,   324,   139,     0,     0,     0,   319,     0,     0,
     146,     0,     0,   602,   574,   667,   147,     0,   325,   546,
     455,     0,     0,     0,   166,   164,   141,   555,   457,     0,
       0,     0,     0,   550,     0,     0,   145,     0,     0,   117,
       0,   658,     0,     0,   446,   140,   299,   548,   459,   148,
       0,     0,   716,     0,   718,     0,   719,   720,   629,     0,
     717,   714,   533,   162,   715,     0,     0,     0,     0,     4,
       0,     5,     9,    10,    44,     0,    49,    58,    11,    64,
      12,    13,    14,    15,    28,   529,   530,    21,    50,   163,
     173,     0,   182,   630,   174,    16,    30,    29,    18,     0,
     256,    17,   621,    20,    34,    31,    32,   172,   300,     0,
     170,     0,     0,   618,   323,     0,   168,   326,   416,   407,
     171,     0,     0,   169,   635,   614,   531,   615,   536,   534,
       0,     0,     0,   619,   620,     0,   535,     0,   636,   637,
     638,   661,   662,   613,   538,   537,   616,   617,     0,    27,
      22,   544,     0,     0,   584,   103,     0,     0,   554,   138,
       0,     0,     0,     0,   555,     0,     0,     0,     0,   618,
     635,   534,   619,   620,   553,   535,   636,   637,     0,   583,
     447,     0,   456,     0,    19,     0,   514,    45,   322,     0,
     521,   110,   118,   130,   124,   123,   132,   113,   122,   133,
     119,   134,   111,   135,   128,   121,   129,   127,   125,   126,
     112,   114,   120,   131,   136,     0,   115,   188,   448,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    56,    58,   521,     0,     0,     0,     0,     0,
       0,   463,     0,   154,    39,     0,   291,     0,   290,   701,
     606,   603,   604,   605,     0,   547,   702,     7,   521,   322,
     322,   428,   511,     0,   510,     0,     0,   155,   634,     0,
       0,    42,     0,   551,   539,     0,   521,    43,   545,     0,
     269,   273,   270,   273,   549,     0,     0,     0,   703,   705,
     627,   700,   699,     0,    61,    65,     0,     0,   516,     0,
     518,     0,     0,   517,     0,     0,   510,     0,   628,     0,
       6,     0,     0,    59,     0,     0,   460,   178,     0,   659,
     300,   631,   186,     0,     0,     0,   296,     0,   315,   317,
       0,   308,   312,   396,   416,   414,   415,   413,   334,   417,
     420,   419,   421,     0,   411,   408,   409,   412,     0,   452,
       0,   449,     0,   532,    33,     0,   607,     0,     0,     0,
       0,     0,     0,   704,     0,     0,     0,     0,     0,     0,
     626,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   366,   373,   374,
     375,   370,   372,     0,     0,   368,   371,   369,   367,     0,
     377,   376,     0,     0,   521,   521,     0,     0,     0,    35,
      23,     0,     0,     0,     0,     0,     0,     0,    36,     0,
       0,     0,    24,     0,    37,   322,   297,     0,   180,   298,
      48,    58,     0,   529,   527,     0,   522,   523,   528,   307,
       0,     0,   198,     0,     0,   197,     0,   206,     0,     0,
       0,   204,     0,   214,     0,     0,   212,     0,     0,     0,
       0,   230,     0,   366,   226,     0,     0,     0,     0,     0,
     240,    25,   467,     0,   468,   470,     0,   492,     0,   473,
       0,     0,   153,    38,     0,   293,     0,     0,     0,    40,
       0,   167,   165,     0,    95,   632,   633,   156,     0,    41,
       0,     0,   280,   271,   272,   191,   190,    26,    63,    62,
      66,     0,   668,     0,     0,   653,     0,   655,     0,     0,
       0,     0,     0,     0,     0,     0,   672,     8,     0,    52,
       0,    93,     0,    89,     0,    73,     0,     0,    79,   175,
     300,     0,     0,   185,   267,   301,     0,   306,   313,     0,
       0,   310,   305,   403,   398,   399,   400,   404,   405,   406,
     396,   389,     0,   386,     0,   397,     0,   418,   487,     0,
     422,   410,   383,   104,   361,   118,   359,   124,   123,   107,
     122,   119,   364,   134,   105,   135,   121,   125,   106,   108,
     120,   136,   358,   340,   343,   341,   342,   365,   353,   344,
     357,   349,   347,   360,   363,   348,   346,   351,   356,   345,
     350,   354,   355,   352,   362,     0,   337,     0,   109,     0,
     383,   338,   383,   335,     0,   451,     0,   445,   462,   582,
     696,   695,   698,   707,   706,   711,   710,   692,   689,   690,
     691,   623,   679,   116,     0,   649,   650,   117,   648,   647,
     624,   683,   694,   688,   686,   697,   687,   685,   677,   682,
     684,   693,   676,   680,   681,   678,   625,     0,     0,     0,
       0,     0,     0,     0,     0,   709,   708,   713,   712,   594,
     595,   597,   599,     0,   586,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   670,   267,   583,   583,   194,
       0,   515,    46,     0,     0,   541,     0,     0,     0,     0,
     558,     0,     0,     0,   207,     0,   564,     0,     0,   205,
     215,     0,     0,   213,     0,     0,   229,     0,   225,     0,
       0,     0,     0,   540,     0,   243,     0,   241,     0,   471,
       0,   151,   152,   150,   149,     0,   491,   490,   614,     0,
     465,   612,   464,   292,   289,     0,     0,     0,   646,   513,
     512,     0,     0,     0,   542,     0,   274,   669,   622,   654,
     519,   656,   520,   222,     0,     0,     0,   671,   220,   568,
       0,   674,   673,     0,    54,    53,     0,    88,     0,     0,
       0,    81,     0,     0,    79,    51,   358,   340,   343,   341,
     342,   351,   350,   352,     0,   378,   379,    68,    67,    80,
       0,     0,   302,     0,   264,     0,     0,   322,     0,   316,
     318,     0,   401,   402,     0,   396,   385,     0,   505,   429,
       0,   486,   485,   614,   423,   429,   396,   333,     0,   339,
       0,   329,   330,   454,   614,   450,     0,     0,   101,    99,
     100,    98,    97,    96,   644,   645,   596,   598,     0,   585,
     137,   144,   143,   142,   139,   146,   147,   141,   145,   140,
     148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   461,   189,   525,   526,
     524,     0,   224,     0,     0,   196,     0,   195,     0,   589,
       0,     0,   202,     0,     0,   200,     0,   210,     0,   208,
       0,   238,   237,     0,   232,     0,     0,   228,     0,   234,
       0,   266,     0,     0,   469,   472,   473,     0,     0,   474,
     475,   288,     0,     0,   282,     0,     0,   281,   284,   543,
       0,   275,   278,     0,   223,     0,     0,     0,     0,   221,
       0,    94,    91,     0,    90,    76,    75,    74,     0,     0,
       0,   176,     0,   177,   302,   322,     0,     0,   295,   160,
     166,   164,   294,   322,   303,   157,   314,   311,   505,   387,
       0,     0,   473,     0,     0,   320,     0,   477,     0,   327,
       0,   336,   104,   106,   383,   383,   651,   652,   587,   473,
     635,   635,     0,     0,     0,     0,     0,     0,   266,     0,
       0,     0,   193,   192,   199,     0,     0,   557,     0,   556,
       0,   588,     0,     0,   563,   203,     0,   562,   201,   211,
     209,   231,   227,   573,   233,     0,    60,   263,   242,   239,
     466,   496,     0,   670,   521,   521,     0,   286,     0,     0,
       0,   276,     0,   218,   570,     0,     0,   216,   569,     0,
     675,     0,     0,     0,    79,     0,    79,    82,    85,    71,
      70,    69,   322,   183,   187,   268,   158,   322,   304,   473,
     505,     0,   508,   507,   509,   614,   380,   392,   390,   443,
       0,   444,   431,   434,     0,   430,     0,   482,   480,   614,
     670,     0,   384,   331,   332,   591,     0,     0,     0,     0,
       0,     0,     0,     0,   268,   561,     0,     0,   590,   567,
       0,     0,     0,   236,     0,   494,   614,     0,     0,   287,
     285,     0,   279,     0,   219,     0,   217,    92,    78,    77,
       0,     0,     0,     0,     0,   184,   265,   322,   161,   393,
     391,   473,   497,     0,   382,   381,   442,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   426,   427,   321,   481,
     614,   424,   328,   425,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   235,     0,   608,   609,   277,     0,
       0,    84,    87,    83,    86,    72,   159,   395,   394,   499,
     500,   502,   614,     0,   670,   433,   435,   436,   439,   440,
     441,   437,   438,   432,     0,     0,     0,     0,     0,     0,
     560,   559,   566,   565,   614,   610,   611,   572,   571,     0,
     501,   503,   497,   504
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1147, -1147, -1147,     0,  -346,  2467,   523, -1147, -1147, -1147,
    -196, -1147, -1147,   -27,   633, -1147,  -683,  2718,   596,  -570,
   -1147,  -803, -1147, -1147,   116, -1147, -1147, -1147,   885, -1147,
    3052,  -210,  -382, -1147,  -593,   201,  -590,   -64, -1147, -1147,
    -822, -1147, -1147,   372, -1147, -1147, -1147, -1147, -1147, -1147,
   -1147, -1147,   140, -1147,   858, -1147, -1147,   -11,  2402, -1147,
   -1147, -1147, -1147,   634, -1147,   -25, -1147, -1147, -1147, -1147,
     441, -1147, -1147, -1147,  -100, -1147,  -326,  -799, -1147, -1147,
   -1147, -1147,    89, -1147, -1147,  -559, -1147,   835, -1147, -1147,
   -1147, -1147,   604, -1147, -1147, -1147, -1147,    80,  -378,  -165,
    -791,  -874,  -618, -1147, -1147,    91,   103,   369, -1147, -1147,
   -1147,   600, -1147, -1147,  -171,   109,    96,  -233,  -222,  -517,
   -1147, -1147, -1147,   316, -1147,  -206,   846, -1147,  -159,   462,
     205,  -496,  -915,  -918, -1147,  -577,  -646, -1146, -1095,  -951,
     -57, -1147,   101, -1147,  -273,  -480,  -504,   497,  -466, -1147,
   -1147, -1147,  1005, -1147,     2, -1147, -1147,  -164, -1147,  -734,
   -1147, -1147, -1147,  1302,  1338,   -12, -1147,   -65,  1541, -1147,
    1903,  2105, -1147, -1147, -1147, -1147, -1147, -1147, -1147, -1147,
   -1147,  -439
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,   335,   110,   768,   112,   113,   465,   228,
     114,   115,   116,   117,   355,   118,   119,   120,   336,   849,
     574,   850,   121,   122,   571,   572,   123,   124,   196,   656,
     279,   125,   256,   126,   786,   284,   127,  1014,  1187,  1117,
     128,   300,   299,   129,   130,   131,   132,   133,   134,   582,
     135,   136,   921,   137,   269,   138,   776,   777,   208,   140,
     141,   142,   143,   543,   806,   983,   144,   145,   802,   978,
     286,   287,   146,   147,   148,   149,   365,   857,   150,   151,
     370,   861,   371,   858,   589,   372,   152,   209,  1136,   154,
     155,   156,   157,  1141,   158,   159,   659,   660,   845,   846,
     847,  1127,   877,   374,   601,   602,   603,   604,   605,   388,
     378,   383,   875,  1212,  1208,   474,  1025,  1132,  1133,  1134,
     160,   161,   390,   391,   665,   162,   163,   221,   280,   281,
     515,   516,   790,   872,   610,   519,   787,  1240,  1124,  1022,
     337,   225,   341,   342,   475,   476,   477,   210,   165,   166,
     167,   168,   211,   170,   193,   194,   723,   488,   938,   724,
     725,   171,   172,   212,   213,   175,   362,   478,   215,   177,
     216,   217,   180,   181,   182,   183,   347,   184,   185,   186,
     187,   188
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     191,   507,   109,   392,   214,   309,   658,   844,   219,   727,
     661,   443,   303,   273,   226,   461,   871,   778,   883,   939,
     473,   218,   262,   264,   266,   530,   270,   600,   774,   869,
     859,   999,   470,   360,   581,  1015,   803,   285,   994,   288,
     289,   343,   881,   541,   882,   294,  -261,   295,   608,   296,
     345,  1080,   788,  1005,   801,   560,   517,   304,   308,   310,
     312,   313,   314,   683,   473,   282,   318,  1119,   319,   734,
     282,  -262,   554,   282,   941,   324,   934,    70,   326,   327,
     500,   328,   517,   329,   517,  1023,   330,   331,   473,   332,
     486,   486,  1197,   304,   308,   346,   348,  1241,  1270,   555,
     492,   494,   497,   375,   556,   505,   473,  1128,  -483,  1138,
     444,   551,   445,   463,   862,  1103,  -488,   403,   282,   358,
    1198,   361,  1082,   376,  1145,   409,  1273,   486,  -283,  -488,
       3,   557,   464,   377,   734,   896,   552,   683,  1243,  -483,
     257,  1129,  1024,   873,  1129,   558,   985,  -488,   457,  1271,
     455,  1104,  -483,   561,   684,   457,   863,   486,  -110,   520,
     396,   486,   230,   687,  1038,  -483,  -116,   561,   685,  1191,
    -283,   713,   714,  -488,   261,   263,   265,   897,   302,   189,
     559,   563,   562,  1015,   466,   191,   524,   274,   451,   452,
     453,  1015,   609,   318,   304,   346,   735,   686,   884,   689,
     518,   471,   457,   966,  1190,  1112,  -488,   457,  -488,  1109,
     457,   457,  -483,   457,   302,   340,   302,  -483,   308,   565,
     561,   460,  1209,   662,  -283,  -488,   518,  -488,   518,  -488,
     399,   533,   561,  1130,   473,   473,   561,   687,   258,   975,
    -484,  1131,   930,   688,  1131,  1189,  -488,   344,   566,  1083,
     469,    70,  -476,   920,   851,   457,  -488,   521,   195,   580,
      23,  1140,   308,   998,   591,  1244,   446,  -309,  -244,   742,
     447,  -484,   352,   311,    86,  -478,  1238,   290,   779,   271,
     192,   976,   272,  -476,  -484,    42,   308,   400,  -322,   592,
    1015,   401,  -309,   535,   536,  1188,  -476,  -484,   473,  1016,
     789,  1181,   740,  1183,   308,   780,  -478,   585,  -322,  -476,
     353,    58,    60,  -112,   727,   302,   302,  1237,  -322,  -478,
     795,  -117,  1000,    68,  1211,  1126,  1158,   553,  -245,   457,
     473,  -251,  -478,   898,  1039,   977,   550,   291,   403,   354,
     573,  -250,   575,   407,  -484,   408,   409,  1177,    88,  -484,
     412,   189,   304,   533,   746,   292,  -476,   548,   419,   220,
     899,  -476,   227,   379,   962,  1236,   425,   189,   708,   709,
     779,  1020,   293,   824,   710,  1007,   853,   711,   712,  -478,
     932,   961,   222,   669,  -478,   670,   671,   672,   674,   676,
     677,   963,   678,   679,   680,   681,   682,   964,   690,   691,
     692,   693,   694,   695,   696,   697,   698,   699,   700,   701,
     702,   703,   704,   705,   706,   380,  1143,  1144,   230,   746,
     533,   308,   308,  1101,   748,  1060,   381,   308,  1122,   746,
     308,   308,   308,   308,   716,   718,   726,  1165,   471,   534,
     913,   779,   666,  1051,   447,   382,  1048,   738,  -593,  -506,
    -259,   741,  1061,  1206,  -592,   384,  1115,   746,  1206,   727,
     743,   667,   482,   485,   487,   491,   493,   496,  1120,   304,
    -506,   750,   752,   302,  -506,  -593,  -249,   756,   758,   274,
     593,  -592,  -246,   762,  1154,   521,   523,  -489,   525,   343,
     769,   343,  -643,   771,  -643,   529,   308,  -506,   658,   164,
    -489,   594,   661,   854,   668,   595,  -253,   385,   791,   164,
     855,  1013,   288,   539,  -257,   796,   797,  -254,   386,   600,
    -718,   800,   164,   473,  -718,   164,   545,   546,   308,   596,
     600,  -489,   597,  1180,    62,  1182,   473,   387,  -579,   800,
     673,   675,   308,   598,   308,  -642,  1207,  -642,   816,   800,
     819,  1207,   821,   823,   826,  1125,  -719,  -489,   830,   297,
    -719,  1139,   599,  -498,  -489,   848,   848,  -642,   298,  -642,
     550,   593,   -57,   827,  -248,   164,   521,   831,   860,   164,
     164,  1000,  -453,  -252,  -498,  -489,   715,   717,  -498,   -56,
     302,   -57,   594,   943,   946,   926,   595,   948,   950,   737,
    1001,  -453,   164,  1000,  -489,   320,   322,   164,   -56,  -489,
     -57,  -498,  -489,  1196,  -639,   593,  -639,  1166,   992,   689,
     596,   727,  1107,   597,   751,   349,  -388,   -56,   521,  1000,
     757,  1000,   315,  -493,   598,   761,   594,   316,  -258,   -57,
     595,   351,   799,   878,   364,   473,  -493,  1114,  1231,  -260,
    1233,   986,   988,   599,  -720,   810,   -56,   812,  -720,  1013,
     799,   739,  -715,   340,   596,   340,  -715,   597,   399,    62,
     799,   531,   532,  1199,  1210,  -247,  -255,  -493,   598,   929,
     363,   399,  1247,  1248,  1249,  1250,  1251,  1252,   373,   754,
     164,  -576,   393,   759,  1006,   760,  -575,   599,   763,  1200,
     815,  1201,  1202,  -493,   394,  1203,  1204,   457,   395,   509,
    -493,  -580,  -641,   473,  -641,  1035,   750,   916,   756,   919,
     769,   308,   922,   819,   970,   400,  1242,  -581,   968,   401,
     448,  -493,   308,  -578,   308,   931,  -577,   933,   400,   924,
     925,   726,   401,   940,  -640,   450,  -640,   456,   457,   403,
    -493,   462,   951,   952,   407,  -493,   472,   409,  -493,  1264,
     353,   412,   886,   481,   887,   479,  1013,   537,   505,   508,
     527,   314,   318,   346,   164,   505,   403,   308,  1242,   164,
     528,   407,   540,   567,   409,   576,   586,   588,   412,   403,
     404,   590,   405,   406,   407,   607,   408,   409,   587,   611,
     409,   412,   664,   707,   733,   258,  1242,   744,   745,   419,
     746,  1167,  1168,  1028,   573,   423,   424,   425,   995,   747,
     997,   848,   848,   753,   328,   764,   329,   765,   767,   331,
     332,   770,   772,   164,   773,   789,   798,   153,   804,   805,
     852,   533,   814,   308,   820,   865,   866,   153,   164,   874,
     876,  -137,  -144,   928,  -143,  -113,  -142,  -111,   346,  -139,
     153,  -146,  -147,   153,  -141,  -114,  -145,   879,  -140,   915,
    -148,   918,  -115,   895,   473,   473,   880,   888,   953,   955,
     894,  1043,  1000,  1046,  1075,   663,   726,  1021,   889,   890,
    1090,   891,  1116,   923,   302,   892,   893,  1162,  -110,  1004,
     674,   716,  1042,  1003,   974,  1045,   506,  -112,   979,   223,
    1008,   308,  1037,   153,  1036,  1049,  1076,   153,   153,  1088,
    1077,  1081,  1057,  1095,  1059,  1084,  1085,  1099,  1108,  1064,
    1142,  1137,  1067,  1171,  1186,  1226,  1265,  1227,  1232,  1234,
     153,  1266,   991,  -495,  1073,   153,  1198,   570,   325,  1118,
    1017,  1078,   935,   937,   164,  1089,  -495,   544,   942,   945,
    1034,   399,   947,   949,   304,   793,   583,  1030,  1019,   864,
    1213,  1029,  1253,  1094,   606,  1098,  1246,   357,  1100,   302,
     164,   848,   885,   792,   965,     0,   164,  -495,  1110,     0,
    1111,   505,   505,     0,     0,   505,   505,   164,     0,   164,
       0,     0,     0,     0,     0,     0,     0,   169,   505,     0,
     505,     0,  1135,  -495,     0,     0,     0,   169,   400,     0,
    -495,     0,   401,     0,     0,     0,     0,     0,   153,     0,
     169,  1057,  1059,   169,  1064,  1067,     0,  1094,  1098,     0,
       0,  -495,     0,  1155,  1156,     0,  1157,   399,   726,     0,
    1159,  1160,   673,   715,  1161,   164,     0,     0,     0,   164,
    -495,     0,     0,     0,  1193,  -495,     0,   164,  -495,   403,
    1164,   819,   308,   308,   407,     0,   408,   409,  1172,     0,
    1173,   412,     0,   169,  1175,   302,     0,   169,   169,   419,
    1179,   848,   848,   848,   848,   423,   424,   425,     0,     0,
       0,     0,     0,     0,   400,     0,     0,     0,   401,   346,
     169,     0,   153,     0,  1195,   169,     0,   153,     0,     0,
       0,     0,     0,     0,     0,  1052,  1053,     0,   819,     0,
    1123,     0,  1054,     0,  1155,  1214,  1215,  1159,  1216,  1217,
    1218,  1219,     0,     0,  1065,     0,     0,  1068,     0,  1069,
       0,  1070,     0,     0,     0,   403,   404,     0,   405,   406,
     407,     0,   408,   409,   410,     0,     0,   412,     0,     0,
       0,   153,  1235,     0,   418,   419,     0,     0,   422,     0,
       0,   423,   424,   425,     0,  1245,   153,     0,     0,     0,
     231,     0,   426,     0,     0,     0,     0,     0,   169,     0,
       0,     0,     0,     0,   232,   233,     0,   234,  1260,  1261,
    1262,  1263,   235,  1098,     0,     0,     0,  1267,  1268,     0,
       0,   236,   911,     0,     0,     0,     0,   237,     0,     0,
     302,  1269,   819,   238,     0,  1194,     0,   239,     0,     0,
     240,     0,  1260,  1261,  1262,  1263,  1267,  1268,     0,     0,
     241,     0,     0,     0,     0,     0,     0,   242,   243,     0,
    1098,     0,     0,     0,   164,   244,     0,   164,     0,     0,
       0,     0,     0,     0,   245,     0,     0,     0,     0,     0,
       0,     0,   169,   246,   247,     0,   248,   169,   249,  1170,
     250,     0,   153,   251,     0,     0,     0,   252,   512,     0,
     253,  1239,     0,   254,   173,     0,     0,     0,     0,     0,
       0,   164,     0,     0,   173,     0,     0,   164,   153,     0,
       0,     0,   683,     0,   153,     0,     0,   173,     0,     0,
     173,     0,     0,     0,     0,   153,   900,   153,     0,   901,
     174,   169,     0,     0,   902,     0,     0,     0,     0,     0,
     174,     0,     0,  1239,     0,   199,   169,     0,     0,   513,
       0,     0,     0,   174,     0,   903,   174,     0,     0,     0,
       0,     0,   904,     0,     0,     0,     0,     0,     0,     0,
     173,  1239,   905,     0,   173,   173,     0,     0,     0,     0,
     906,     0,     0,   153,     0,     0,     0,   153,     0,     0,
       0,     0,     0,     0,     0,   153,   907,   173,     0,  1040,
    1041,     0,   173,     0,     0,     0,   174,     0,   908,     0,
     174,   174,   687,     0,     0,     0,     0,     0,     0,   909,
       0,   164,     0,   164,     0,   910,     0,     0,   164,     0,
     856,   164,     0,   174,     0,     0,     0,     0,   174,     0,
     164,     0,   164,     0,     0,   164,     0,     0,     0,     0,
       0,  -302,   169,     0,     0,  -302,  -302,     0,     0,     0,
    -302,     0,   164,     0,     0,  -302,     0,  -302,  -302,     0,
       0,     0,   164,  -302,   164,     0,     0,     0,   169,     0,
    -302,     0,     0,  -302,   169,   173,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,     0,   169,     0,     0,
       0,     0,     0,  -302,     0,     0,  -302,     0,  -302,     0,
    -302,     0,  -302,  -302,     0,  -302,     0,  -302,     0,  -302,
       0,   174,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   176,     0,     0,     0,     0,  -302,     0,
       0,  -302,   164,   176,  -302,     0,     0,     0,     0,   164,
       0,     0,     0,   169,     0,     0,   176,   169,     0,   176,
       0,     0,   164,     0,     0,   169,     0,     0,     0,   173,
       0,     0,     0,   164,   173,     0,     0,     0,     0,     0,
       0,     0,   164,     0,   231,     0,   164,     0,     0,     0,
       0,     0,   153,     0,  -302,   153,     0,     0,   232,   233,
    -302,   234,     0,     0,     0,   174,   235,     0,     0,   176,
     174,     0,     0,   176,   176,   236,     0,     0,     0,     0,
       0,   237,     0,     0,     0,     0,     0,   238,   173,     0,
       0,   239,     0,     0,   240,     0,   176,     0,     0,   153,
       0,   176,     0,   173,   241,   153,     0,     0,     0,   164,
       0,   242,   243,     0,     0,     0,     0,     0,     0,   244,
       0,     0,     0,     0,   174,     0,     0,     0,   245,     0,
       0,     0,     0,     0,     0,     0,     0,   246,   247,   174,
     248,     0,   249,     0,   250,     0,     0,   251,     0,     0,
       0,   252,     0,     0,   253,     0,     0,   254,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   164,   164,   164,
     164,   399,     0,     0,     0,     0,   164,   164,     0,     0,
       0,     0,     0,     0,   176,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     399,     0,     0,     0,     0,     0,     0,     0,     0,   173,
       0,   457,     0,   980,     0,     0,     0,   399,     0,   153,
       0,   153,   169,     0,     0,   169,   153,     0,   400,   153,
       0,     0,   401,     0,     0,   173,     0,     0,   153,     0,
     153,   173,     0,   153,     0,   174,     0,     0,     0,     0,
       0,     0,   173,     0,   173,     0,     0,   400,     0,     0,
     153,   401,     0,     0,     0,     0,     0,     0,   176,   169,
     153,   174,   153,   176,   400,   169,     0,   174,   401,   403,
     404,     0,   405,   406,   407,     0,   408,   409,   174,     0,
     174,   412,     0,     0,     0,     0,     0,     0,   418,   419,
       0,     0,   422,     0,     0,   423,   424,   425,   403,   404,
     173,     0,   406,   407,   173,   408,   409,     0,     0,     0,
     412,     0,   173,     0,     0,   403,   404,   176,   419,     0,
     407,     0,   408,   409,   423,   424,   425,   412,     0,     0,
     153,     0,   176,     0,     0,   419,   174,   153,     0,     0,
     174,   423,   424,   425,     0,   178,     0,     0,   174,     0,
     153,     0,     0,     0,     0,   178,     0,     0,     0,     0,
       0,   153,     0,     0,     0,     0,     0,     0,   178,     0,
     153,   178,     0,     0,   153,     0,     0,     0,     0,   169,
       0,   169,     0,     0,     0,     0,   169,     0,     0,   169,
       0,     0,     0,     0,     0,     0,     0,     0,   169,     0,
     169,     0,     0,   169,     0,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     169,   178,     0,     0,     0,   178,   178,     0,     0,     0,
     169,     0,   169,     0,     0,     0,  -600,   153,   176,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,   442,
       0,     0,  -639,   178,  -639,     0,     0,     0,     0,     0,
       0,     0,   466,     0,   176,     0,    22,    23,     0,     0,
     176,  1009,     0,     0,     0,     0,   467,     0,    31,   468,
       0,   176,     0,   176,    37,     0,     0,     0,     0,     0,
       0,    42,     0,     0,     0,   153,   153,   153,   153,     0,
     169,     0,     0,     0,   153,   153,     0,   169,     0,   173,
       0,     0,   173,     0,     0,     0,     0,    58,     0,    60,
     169,    62,     0,  1010,     0,     0,  1011,     0,   469,     0,
      68,   169,     0,     0,     0,     0,   178,     0,     0,   176,
     169,     0,     0,   176,   169,   174,   231,   179,   174,    84,
       0,   176,    86,     0,     0,    88,   173,   179,     0,     0,
     232,   233,   173,   234,     0,     0,     0,     0,   235,     0,
     179,     0,     0,   179,     0,     0,     0,   236,     0,     0,
       0,     0,     0,   237,     0,     0,     0,     0,     0,   238,
       0,     0,   174,   239,     0,     0,   240,     0,   174,     0,
       0,     0,     0,     0,     0,   103,   241,   169,     0,     0,
       0,  1012,     0,   242,   243,     0,     0,     0,     0,     0,
     178,   244,     0,   179,     0,   178,     0,   179,   179,     0,
     245,     0,     0,     0,     0,     0,     0,     0,     0,   246,
     247,     0,   248,     0,   249,     0,   250,     0,     0,   251,
     179,     0,     0,   252,     0,   179,   253,     0,     0,   254,
       0,     0,     0,     0,     0,   169,   169,   169,   169,     0,
       0,     0,     0,     0,   169,   169,   173,     0,   173,   178,
       0,     0,     0,   173,     0,     0,   173,     0,     0,     0,
       0,     0,     0,     0,   178,   173,     0,   173,     0,     0,
     173,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   174,     0,   174,   278,     0,   173,     0,   174,
       0,     0,   174,     0,     0,     0,     0,   173,     0,   173,
       0,   174,     0,   174,     0,     0,   174,     0,   179,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,     0,
       0,   176,     0,   174,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   174,     0,   174,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   176,     0,   173,     0,     0,
     178,   176,     0,     0,   173,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   173,     0,     0,
       0,     0,   179,     0,     0,     0,   178,   179,   173,     0,
       0,     0,   178,   174,   466,     0,     0,   173,    22,    23,
     174,   173,     0,   178,   139,   178,     0,     0,   467,     0,
      31,   468,     0,   174,   139,     0,    37,     0,     0,     0,
       0,     0,     0,    42,   174,     0,     0,   139,     0,     0,
     139,     0,     0,   174,     0,     0,     0,   174,   -55,     0,
       0,   179,     0,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,     0,     0,    64,   179,   -55,    65,     0,
     469,   178,    68,     0,   173,   178,     0,     0,     0,   111,
       0,     0,     0,   178,     0,   176,     0,   176,     0,   190,
     139,    84,   176,     0,    86,   176,     0,    88,     0,     0,
       0,     0,   224,     0,   176,   229,   176,     0,     0,   176,
     174,     0,     0,     0,     0,     0,     0,   139,     0,     0,
       0,     0,   139,     0,     0,     0,   176,     0,     0,     0,
       0,     0,   173,   173,   173,   173,   176,     0,   176,     0,
       0,   173,   173,     0,     0,     0,     0,   103,     0,     0,
       0,     0,     0,     0,     0,   317,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   174,   174,
     174,   174,   179,     0,     0,     0,     0,   174,   174,     0,
       0,     0,   111,     0,     0,     0,     0,   350,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   231,   179,     0,
       0,     0,     0,     0,   179,   139,   176,     0,     0,     0,
       0,   232,   233,   176,   234,   179,     0,   179,     0,   235,
       0,     0,     0,     0,     0,     0,   176,     0,   236,     0,
       0,     0,     0,     0,   237,     0,     0,   176,     0,     0,
     238,     0,     0,     0,   239,     0,   176,   240,     0,     0,
     176,     0,     0,     0,     0,     0,     0,   241,     0,     0,
       0,     0,     0,     0,   242,   243,     0,     0,     0,     0,
     449,     0,   244,   179,     0,     0,     0,   179,     0,     0,
     178,   245,     0,   178,     0,   179,     0,     0,     0,   139,
     246,   247,     0,   248,   139,   249,     0,   250,     0,     0,
     251,     0,     0,     0,   252,     0,     0,   253,     0,     0,
     254,     0,     0,   176,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   178,     0,     0,
       0,     0,     0,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   139,     0,
       0,     0,     0,     0,   511,     0,     0,     0,     0,   522,
       0,     0,     0,   139,     0,     0,   867,     0,     0,     0,
       0,   176,   176,   176,   176,     0,     0,   283,     0,     0,
     176,   176,     0,     0,     0,     0,     0,   466,     0,     0,
       0,    22,    23,     0,     0,     0,  1009,     0,     0,     0,
     283,   467,     0,    31,   468,     0,     0,     0,     0,    37,
     321,   323,     0,   111,     0,     0,    42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,    60,     0,    62,   178,  1010,   178,
       0,  1011,     0,   469,   178,    68,     0,   178,     0,     0,
       0,     0,     0,     0,     0,     0,   178,     0,   178,   139,
       0,   178,     0,     0,    84,     0,     0,    86,     0,     0,
      88,     0,   179,     0,     0,   179,     0,     0,   178,     0,
       0,     0,     0,     0,     0,   139,     0,     0,   178,     0,
     178,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   139,     0,   139,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   179,
     103,     0,     0,     0,   111,   179,  1113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   458,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     522,     0,     0,     0,     0,     0,   522,     0,   178,     0,
     139,     0,     0,     0,   139,   178,     0,   766,     0,     0,
       0,     0,   139,     0,     0,     0,     0,     0,   178,   283,
     283,   283,   283,   283,   283,     0,     0,   501,   504,   178,
       0,     0,     0,     0,   510,     0,     0,     0,   178,     0,
       0,     0,   178,   283,     0,   283,     0,     0,   397,     0,
       0,     0,   283,     0,     0,   398,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   813,     0,     0,   399,   818,
     283,     0,     0,   577,     0,     0,     0,   111,     0,   179,
       0,   179,     0,   283,   283,     0,   179,     0,     0,   179,
       0,     0,     0,     0,     0,     0,     0,     0,   179,     0,
     179,     0,     0,   179,     0,   178,     0,     0,     0,   578,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,     0,   255,     0,     0,   400,     0,     0,     0,   401,
     179,     0,   179,     0,     0,     0,   275,   276,   277,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     402,     0,     0,   178,   178,   178,   178,     0,     0,     0,
       0,     0,   178,   178,     0,     0,   403,   404,     0,   405,
     406,   407,     0,   408,   409,   410,     0,   411,   412,   413,
     414,   415,     0,   416,   417,   418,   419,   420,   421,   422,
     179,   579,   423,   424,   425,     0,     0,   179,     0,   139,
       0,     0,   139,   426,     0,     0,     0,     0,   283,     0,
     179,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   179,     0,     0,     0,     0,     0,     0,     0,     0,
     179,   366,     0,   369,   179,     0,   283,     0,     0,     0,
     283,     0,   283,   389,     0,   283,   139,     0,     0,     0,
       0,     0,   139,     0,     0,     0,     0,     0,     0,     0,
       0,   466,     0,     0,   954,    22,    23,   957,     0,     0,
    1009,     0,     0,     0,     0,   467,     0,    31,   468,     0,
       0,     0,     0,    37,     0,   454,     0,     0,     0,     0,
      42,     0,     0,     0,     0,     0,     0,   179,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   984,     0,     0,     0,     0,    58,   989,    60,     0,
      62,     0,  1010,     0,     0,  1011,     0,   469,     0,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   480,     0,     0,     0,     0,     0,     0,    84,   498,
     499,    86,     0,     0,    88,   179,   179,   179,   179,     0,
     514,     0,     0,     0,   179,   179,   139,     0,   139,     0,
       0,     0,     0,   139,     0,     0,   139,     0,     0,     0,
       0,     0,     0,     0,     0,   139,     0,   139,     0,     0,
     139,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,     0,     0,   139,   466,     0,
    1185,     0,    22,    23,     0,     0,     0,   139,     0,   139,
       0,     0,   467,     0,    31,   468,     0,     0,     0,     0,
      37,   522,     0,   522,     0,     0,     0,    42,   522,     0,
       0,   522,     0,     0,     0,   584,     0,     0,     0,     0,
    1071,     0,  1072,     0,     0,  1074,     0,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,     0,     0,     0,
     657,     0,  1087,     0,   469,     0,    68,     0,     0,     0,
     683,     0,  1093,     0,  1097,     0,     0,   139,     0,   614,
       0,     0,     0,     0,   139,    84,   616,   684,    86,   283,
     283,    88,     0,     0,     0,   283,   283,   139,     0,   283,
     283,   685,     0,     0,     0,     0,     0,     0,   139,   959,
       0,     0,     0,     0,     0,     0,     0,   139,     0,     0,
       0,   139,   622,     0,     0,     0,     0,     0,   736,     0,
     686,     0,     0,     0,     0,     0,     0,     0,     0,   255,
       0,     0,     0,   981,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1163,     0,     0,     0,     0,     0,     0,     0,
     687,     0,     0,  1169,     0,     0,   688,     0,     0,     0,
       0,   775,  1174,     0,   139,   514,  1176,     0,     0,     0,
       0,     0,   503,   428,   429,   430,   431,   432,   794,     0,
     435,   436,   437,   438,     0,   440,   441,   632,   633,   634,
     635,   636,   637,     0,   638,     0,     0,     0,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   649,     0,
     650,     0,     0,   651,   652,   653,   654,   993,     0,     0,
       0,     0,   139,   139,   139,   139,     0,     0,   835,  1224,
       0,   139,   139,     0,     0,     0,     0,     0,     0,     0,
       0,   369,   283,   283,     0,     0,     0,     0,     0,   283,
       0,   504,     0,     0,     0,     0,   868,     0,   504,     0,
       0,   283,     0,     0,   283,     0,   283,     0,   283,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1079,     0,     0,     0,     0,     0,  1026,     0,     5,
     301,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     197,  1091,     0,    15,    16,     0,    17,     0,   198,     0,
       0,    21,     0,     0,     0,     0,     0,     0,   389,     0,
      29,     0,   199,     0,     0,     0,    33,   200,   201,     0,
       0,   202,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,   203,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,   204,     0,     0,     0,     0,     0,
       0,     0,    73,    74,    75,    76,    77,   205,     0,    79,
       0,     0,    81,     0,     0,     0,    85,     0,     0,    87,
       0,     0,    89,     0,     0,     0,   283,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   960,     0,    93,    94,    95,    96,
      97,   514,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,   971,   100,   101,
     102,     0,     0,     0,   104,     0,   206,   982,   106,     0,
     207,  1027,     0,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   504,   504,     0,     0,   504,   504,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1228,
       0,   504,     0,   504,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,     0,     0,   369,     0,     0,  1018,     0,     0,   514,
       0,    -2,     4,     0,     5,     0,     6,     7,     8,     9,
      10,    11,   657,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   -55,     0,
      40,    41,    42,     0,    43,  -322,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -55,    53,    54,
       0,    55,    56,    57,     0,  -322,     0,     0,    58,    59,
      60,    61,    62,    63,    64,  -322,   -55,    65,    66,    67,
       0,    68,    69,    70,   775,    71,    72,    73,    74,    75,
      76,    77,    78,     0,    79,    80,     0,    81,    82,    83,
      84,    85,   982,    86,    87,   -55,    88,    89,     0,     0,
      90,     0,    91,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,   100,   101,   102,   103,     0,     0,   104,
       0,   105,     0,   106,     0,   107,     0,     4,   108,     5,
       0,     6,     7,     8,     9,    10,    11,     0,  -670,     0,
      12,    13,    14,    15,    16,  -670,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,  -670,    28,
      29,  -670,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,   -55,     0,    40,    41,    42,     0,    43,
    -322,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -55,    53,    54,     0,    55,    56,    57,     0,
    -322,     0,     0,    58,    59,    60,    61,     0,    63,    64,
    -322,   -55,    65,    66,    67,  -670,    68,    69,    70,  -670,
      71,    72,    73,    74,    75,    76,    77,    78,     0,    79,
      80,     0,    81,    82,    83,    84,    85,     0,    86,    87,
     -55,    88,    89,     0,     0,    90,     0,    91,     0,     0,
    -670,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -670,  -670,    95,  -670,
    -670,  -670,  -670,  -670,  -670,  -670,     0,  -670,  -670,  -670,
    -670,  -670,     0,  -670,  -670,  -670,  -670,  -670,  -670,  -670,
    -670,   103,  -670,  -670,  -670,     0,   105,  -670,   106,     0,
     107,     0,   333,  -670,     5,   301,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   -55,     0,
      40,    41,    42,     0,    43,  -322,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -55,    53,    54,
       0,    55,    56,    57,     0,  -322,     0,     0,    58,    59,
      60,    61,    62,    63,    64,  -322,   -55,    65,    66,    67,
       0,    68,    69,    70,     0,    71,    72,    73,    74,    75,
      76,    77,    78,     0,    79,    80,     0,    81,    82,    83,
      84,    85,     0,    86,    87,   -55,    88,    89,     0,     0,
      90,     0,    91,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,   100,   101,   102,   103,     0,     0,   104,
       0,   105,   334,   106,     0,   107,     0,     4,   108,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,   -55,     0,    40,    41,    42,     0,    43,
    -322,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -55,    53,    54,     0,    55,    56,    57,     0,
    -322,     0,     0,    58,    59,    60,    61,    62,    63,    64,
    -322,   -55,    65,    66,    67,     0,    68,    69,    70,     0,
      71,    72,    73,    74,    75,    76,    77,    78,     0,    79,
      80,     0,    81,    82,    83,    84,    85,     0,    86,    87,
     -55,    88,    89,     0,     0,    90,     0,    91,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,   100,   101,
     102,   103,     0,     0,   104,     0,   105,   549,   106,     0,
     107,     0,   568,   108,     5,     0,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   -55,     0,
      40,    41,    42,     0,    43,  -322,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -55,    53,    54,
       0,    55,    56,    57,     0,  -322,     0,     0,    58,    59,
      60,    61,    62,    63,    64,  -322,   -55,    65,    66,    67,
       0,    68,    69,    70,     0,    71,    72,    73,    74,    75,
      76,    77,    78,     0,    79,    80,     0,    81,    82,    83,
      84,    85,     0,    86,    87,   -55,    88,    89,     0,     0,
      90,     0,    91,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,   100,   101,   102,   103,     0,     0,   104,
       0,   105,   569,   106,     0,   107,     0,   333,   108,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,   -55,     0,    40,    41,    42,     0,    43,
    -322,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -55,    53,    54,     0,    55,    56,    57,     0,
    -322,     0,     0,    58,    59,    60,    61,    62,    63,    64,
    -322,   -55,    65,    66,    67,     0,    68,    69,    70,     0,
      71,    72,    73,    74,    75,    76,    77,    78,     0,    79,
      80,     0,    81,    82,    83,    84,    85,     0,    86,    87,
     -55,    88,    89,     0,     0,    90,     0,    91,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,   100,   101,
     102,   103,     0,     0,   104,     0,   105,   334,   106,     0,
     107,     0,     4,   108,     5,     0,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   -55,     0,
      40,    41,    42,     0,    43,  -322,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -55,    53,    54,
       0,    55,    56,    57,     0,  -322,     0,     0,    58,    59,
      60,    61,    62,    63,    64,  -322,   -55,    65,    66,    67,
       0,    68,    69,    70,     0,    71,    72,    73,    74,    75,
      76,    77,    78,     0,    79,    80,     0,    81,    82,    83,
      84,    85,     0,    86,    87,   -55,    88,    89,     0,     0,
      90,     0,    91,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,   100,   101,   102,   103,     0,     0,   104,
       0,   105,   825,   106,     0,   107,     0,     4,   108,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,   -55,     0,    40,    41,    42,     0,    43,
    -322,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -55,    53,    54,     0,    55,    56,    57,     0,
    -322,     0,     0,    58,    59,    60,    61,   349,    63,    64,
    -322,   -55,    65,    66,    67,     0,    68,    69,    70,     0,
      71,    72,    73,    74,    75,    76,    77,    78,     0,    79,
      80,     0,    81,    82,    83,    84,    85,     0,    86,    87,
     -55,    88,    89,     0,     0,    90,     0,    91,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,   100,   101,
     102,   103,     0,     0,   104,     0,   105,     0,   106,     0,
     107,     0,     4,   108,     5,     0,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   -55,     0,
      40,    41,    42,     0,    43,  -322,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -55,    53,    54,
       0,    55,    56,    57,     0,  -322,     0,     0,    58,    59,
      60,    61,     0,    63,    64,  -322,   -55,    65,    66,    67,
       0,    68,    69,    70,     0,    71,    72,    73,    74,    75,
      76,    77,    78,     0,    79,    80,     0,    81,    82,    83,
      84,    85,     0,    86,    87,   -55,    88,    89,     0,     0,
      90,     0,    91,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,   100,   101,   102,   103,     0,     0,   104,
       0,   105,     0,   106,     0,   107,     0,     4,   108,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,   749,    39,   -55,     0,    40,    41,    42,     0,    43,
    -322,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -55,    53,    54,     0,    55,    56,    57,     0,
    -322,     0,     0,    58,    59,    60,    61,     0,    63,    64,
    -322,   -55,    65,    66,    67,     0,    68,    69,    70,     0,
      71,    72,    73,    74,    75,    76,    77,    78,     0,    79,
      80,     0,    81,    82,    83,    84,    85,     0,    86,    87,
     -55,    88,    89,     0,     0,    90,     0,    91,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,   100,   101,
     102,   103,     0,     0,   104,     0,   105,     0,   106,     0,
     107,     0,     4,   108,     5,     0,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,   755,    39,   -55,     0,
      40,    41,    42,     0,    43,  -322,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -55,    53,    54,
       0,    55,    56,    57,     0,  -322,     0,     0,    58,    59,
      60,    61,     0,    63,    64,  -322,   -55,    65,    66,    67,
       0,    68,    69,    70,     0,    71,    72,    73,    74,    75,
      76,    77,    78,     0,    79,    80,     0,    81,    82,    83,
      84,    85,     0,    86,    87,   -55,    88,    89,     0,     0,
      90,     0,    91,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,   100,   101,   102,   103,     0,     0,   104,
       0,   105,     0,   106,     0,   107,     0,     4,   108,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,  1056,    39,   -55,     0,    40,    41,    42,     0,    43,
    -322,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -55,    53,    54,     0,    55,    56,    57,     0,
    -322,     0,     0,    58,    59,    60,    61,     0,    63,    64,
    -322,   -55,    65,    66,    67,     0,    68,    69,    70,     0,
      71,    72,    73,    74,    75,    76,    77,    78,     0,    79,
      80,     0,    81,    82,    83,    84,    85,     0,    86,    87,
     -55,    88,    89,     0,     0,    90,     0,    91,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,   100,   101,
     102,   103,     0,     0,   104,     0,   105,     0,   106,     0,
     107,     0,     4,   108,     5,     0,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,  1058,    39,   -55,     0,
      40,    41,    42,     0,    43,  -322,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -55,    53,    54,
       0,    55,    56,    57,     0,  -322,     0,     0,    58,    59,
      60,    61,     0,    63,    64,  -322,   -55,    65,    66,    67,
       0,    68,    69,    70,     0,    71,    72,    73,    74,    75,
      76,    77,    78,     0,    79,    80,     0,    81,    82,    83,
      84,    85,     0,    86,    87,   -55,    88,    89,     0,     0,
      90,     0,    91,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,   100,   101,   102,   103,     0,     0,   104,
       0,   105,     0,   106,     0,   107,     0,     4,   108,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,  1063,    39,   -55,     0,    40,    41,    42,     0,    43,
    -322,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -55,    53,    54,     0,    55,    56,    57,     0,
    -322,     0,     0,    58,    59,    60,    61,     0,    63,    64,
    -322,   -55,    65,    66,    67,     0,    68,    69,    70,     0,
      71,    72,    73,    74,    75,    76,    77,    78,     0,    79,
      80,     0,    81,    82,    83,    84,    85,     0,    86,    87,
     -55,    88,    89,     0,     0,    90,     0,    91,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,   100,   101,
     102,   103,     0,     0,   104,     0,   105,     0,   106,     0,
     107,     0,     4,   108,     5,     0,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,  1066,    39,   -55,     0,
      40,    41,    42,     0,    43,  -322,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -55,    53,    54,
       0,    55,    56,    57,     0,  -322,     0,     0,    58,    59,
      60,    61,     0,    63,    64,  -322,   -55,    65,    66,    67,
       0,    68,    69,    70,     0,    71,    72,    73,    74,    75,
      76,    77,    78,     0,    79,    80,     0,    81,    82,    83,
      84,    85,     0,    86,    87,   -55,    88,    89,     0,     0,
      90,     0,    91,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,   100,   101,   102,   103,     0,     0,   104,
       0,   105,     0,   106,     0,   107,     0,     4,   108,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,  1086,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,   -55,     0,    40,    41,    42,     0,    43,
    -322,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -55,    53,    54,     0,    55,    56,    57,     0,
    -322,     0,     0,    58,    59,    60,    61,     0,    63,    64,
    -322,   -55,    65,    66,    67,     0,    68,    69,    70,     0,
      71,    72,    73,    74,    75,    76,    77,    78,     0,    79,
      80,     0,    81,    82,    83,    84,    85,     0,    86,    87,
     -55,    88,    89,     0,     0,    90,     0,    91,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,   100,   101,
     102,   103,     0,     0,   104,     0,   105,     0,   106,     0,
     107,     0,     4,   108,     5,     0,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,     0,    30,     0,    31,
      32,    33,    34,    35,    36,    37,  1092,    39,   -55,     0,
      40,    41,    42,     0,    43,  -322,     0,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,   -55,    53,    54,
       0,    55,    56,    57,     0,  -322,     0,     0,    58,    59,
      60,    61,     0,    63,    64,  -322,   -55,    65,    66,    67,
       0,    68,    69,    70,     0,    71,    72,    73,    74,    75,
      76,    77,    78,     0,    79,    80,     0,    81,    82,    83,
      84,    85,     0,    86,    87,   -55,    88,    89,     0,     0,
      90,     0,    91,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,   100,   101,   102,   103,     0,     0,   104,
       0,   105,     0,   106,     0,   107,     0,     4,   108,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,  1096,    39,   -55,     0,    40,    41,    42,     0,    43,
    -322,     0,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,   -55,    53,    54,     0,    55,    56,    57,     0,
    -322,     0,     0,    58,    59,    60,    61,     0,    63,    64,
    -322,   -55,    65,    66,    67,     0,    68,    69,    70,     0,
      71,    72,    73,    74,    75,    76,    77,    78,     0,    79,
      80,     0,    81,    82,    83,    84,    85,     0,    86,    87,
     -55,    88,    89,     0,     0,    90,     0,    91,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,   100,   101,
     102,   103,     0,     0,   104,     0,   105,     0,   106,     0,
     107,     0,   967,   108,     5,   301,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   197,     0,     0,    15,    16,
       0,    17,     0,   198,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   199,     0,     0,
       0,    33,   200,   201,     0,     0,   202,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,   203,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,   204,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,   205,     0,    79,     0,     0,    81,     0,     0,
       0,    85,     0,     0,    87,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,   100,   101,   102,     0,     0,     0,   104,
       0,   206,     0,   106,     0,   207,     0,     5,   108,     6,
       7,     8,     9,    10,    11,     0,   614,     0,   197,     0,
       0,    15,    16,   616,    17,     0,   198,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
     199,     0,     0,     0,    33,   200,   201,     0,     0,   202,
      39,     0,     0,     0,    41,     0,     0,    43,     0,   622,
     203,     0,     0,    47,    48,     0,     0,    50,     0,    52,
       0,    53,    54,     0,    55,    56,     0,     0,     0,     0,
       0,     0,    59,     0,    61,     0,    63,     0,     0,     0,
       0,    66,   204,     0,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    77,   205,     0,    79,     0,     0,
      81,     0,     0,     0,    85,     0,     0,    87,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,    92,   503,
     428,   429,   430,   431,   432,     0,     0,   435,   436,   437,
     438,     0,   440,   441,   836,   837,   838,   839,   840,   637,
       0,   638,     0,    98,     0,   639,   640,   641,   642,   643,
     644,   645,   646,   841,   648,   649,   100,   842,   102,     0,
     651,   652,   843,   654,   206,     0,   106,     0,   207,     0,
       5,   108,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   197,    13,     0,    15,    16,     0,    17,     0,   198,
      19,    20,    21,     0,     0,     0,     0,    26,     0,     0,
      28,    29,     0,   199,     0,     0,     0,    33,    34,    35,
      36,     0,    38,    39,     0,     0,     0,    41,     0,     0,
      43,     0,     0,   203,     0,     0,    47,    48,     0,    49,
      50,    51,    52,     0,    53,    54,     0,    55,    56,    57,
       0,     0,     0,     0,     0,    59,     0,    61,     0,    63,
       0,     0,     0,     0,    66,   204,     0,     0,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,    78,     0,
      79,    80,     0,    81,     0,     0,     0,    85,     0,     0,
      87,     0,     0,    89,     0,     0,    90,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,    94,    95,
      96,    97,     0,     0,     0,     0,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    99,     0,     0,   100,
     101,   102,     0,     0,     0,   104,     0,   105,     0,   106,
       0,   107,     0,     0,   108,     5,   301,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   197,     0,     0,    15,
      16,     0,    17,     0,   198,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,   199,     0,
       0,     0,    33,   200,   201,     0,     0,   202,    39,     0,
       0,     0,    41,     0,     0,    43,     0,     0,   203,     0,
       0,    47,    48,     0,     0,    50,     0,    52,     0,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,     0,    61,     0,    63,     0,     0,     0,     0,    66,
     204,     0,     0,     0,     0,     0,     0,     0,    73,    74,
      75,    76,    77,   205,     0,    79,     0,     0,    81,   305,
     306,     0,    85,   338,     0,    87,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,    94,    95,    96,    97,     0,     0,     0,
       0,    98,   339,     0,     0,     0,     0,     0,     0,     0,
       0,    99,     0,     0,   100,   101,   102,     0,     0,     0,
     104,     0,   206,     0,   106,     0,   207,     0,     5,   108,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   197,
       0,     0,    15,    16,     0,    17,     0,   198,     0,     0,
      21,   356,    23,     0,     0,     0,     0,     0,     0,    29,
       0,   199,     0,     0,     0,    33,   200,   201,     0,     0,
     202,    39,     0,     0,     0,    41,     0,     0,    43,     0,
       0,   203,     0,     0,    47,    48,     0,     0,    50,     0,
      52,     0,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    59,    60,    61,     0,    63,     0,     0,
       0,     0,    66,   204,     0,    68,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,   205,     0,    79,     0,
       0,    81,     0,     0,     0,    85,     0,     0,    87,     0,
      88,    89,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    94,    95,    96,    97,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   100,   101,   102,
       0,     0,     0,   104,     0,   206,     0,   106,     0,   207,
       0,     0,   108,     5,   301,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   197,     0,     0,    15,    16,     0,
      17,     0,   198,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,   199,     0,     0,     0,
      33,   200,   201,     0,     0,   202,    39,     0,     0,     0,
      41,     0,     0,    43,     0,     0,   203,     0,     0,    47,
      48,     0,     0,    50,     0,    52,     0,    53,    54,     0,
      55,    56,     0,     0,     0,     0,     0,     0,    59,     0,
      61,     0,    63,     0,     0,     0,     0,    66,   204,     0,
       0,     0,     0,     0,     0,     0,    73,    74,    75,    76,
      77,   205,     0,    79,     0,     0,    81,   305,   306,     0,
      85,   338,     0,    87,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,    94,    95,    96,    97,     0,     0,     0,     0,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
       0,     0,   100,   101,   102,     0,     0,     0,   104,     0,
     206,     0,   106,   809,   207,     0,     0,   108,     5,   301,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   197,
       0,     0,    15,    16,     0,    17,     0,   198,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,   199,     0,     0,     0,    33,   200,   201,     0,     0,
     202,    39,     0,     0,     0,    41,     0,     0,    43,     0,
       0,   203,     0,     0,    47,    48,     0,     0,    50,     0,
      52,     0,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    59,     0,    61,     0,    63,     0,     0,
       0,     0,    66,   204,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,   205,     0,    79,     0,
       0,    81,   305,   306,     0,    85,   338,     0,    87,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    94,    95,    96,    97,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   100,   101,   102,
       0,     0,     0,   104,     0,   206,     0,   106,   811,   207,
       0,     5,   108,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   197,     0,     0,    15,    16,     0,    17,     0,
     198,     0,     0,    21,     0,   719,     0,     0,     0,     0,
       0,     0,    29,     0,   199,     0,     0,     0,    33,   200,
     201,     0,     0,   202,    39,     0,   720,     0,    41,     0,
       0,    43,     0,     0,   203,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,   204,     0,   721,     0,
       0,     0,     0,     0,    73,    74,    75,    76,    77,   205,
       0,    79,     0,     0,    81,     0,     0,     0,    85,     0,
       0,    87,     0,   722,    89,     0,     0,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,    97,     0,     0,     0,     0,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,     0,     0,
     100,   101,   102,     0,     0,     0,   104,     0,   206,     0,
     106,     0,   207,     0,     5,   108,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   197,     0,     0,    15,    16,
       0,    17,     0,   198,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   199,     0,     0,
       0,    33,   200,   201,     0,     0,   202,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,   203,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,   204,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,   205,     0,    79,     0,     0,    81,   305,   306,
       0,    85,     0,     0,    87,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,   100,   101,   102,   307,     0,     0,   104,
       0,   206,     0,   106,     0,   207,     0,     0,   108,     5,
     301,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     197,     0,     0,    15,    16,     0,    17,     0,   198,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   199,     0,     0,     0,    33,   200,   201,     0,
       0,   202,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,   203,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,   204,     0,     0,     0,     0,     0,
       0,     0,    73,    74,    75,    76,    77,   205,     0,    79,
       0,     0,    81,   305,   306,     0,    85,     0,     0,    87,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,   100,   101,
     102,     0,     0,     0,   104,     0,   206,     0,   106,     0,
     207,     0,     5,   108,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   197,     0,     0,    15,    16,     0,    17,
       0,   198,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   199,     0,     0,     0,    33,
     200,   201,     0,     0,   202,    39,     0,     0,     0,    41,
       0,     0,    43,     0,     0,   203,     0,     0,    47,    48,
       0,     0,    50,     0,    52,     0,    53,    54,   969,    55,
      56,     0,     0,     0,     0,     0,     0,    59,     0,    61,
       0,    63,     0,     0,     0,     0,    66,   204,     0,     0,
       0,     0,     0,     0,     0,    73,    74,    75,    76,    77,
     205,     0,    79,     0,     0,    81,   305,   306,     0,    85,
       0,     0,    87,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      94,    95,    96,    97,     0,     0,     0,     0,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,     0,
       0,   100,   101,   102,     0,     0,     0,   104,     0,   206,
       0,   106,     0,   207,     0,     5,   108,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   197,     0,     0,    15,
      16,     0,    17,     0,   198,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,   199,     0,
       0,     0,    33,   200,   201,     0,     0,   202,    39,     0,
       0,     0,    41,     0,     0,    43,     0,     0,   203,     0,
       0,    47,    48,     0,     0,    50,     0,    52,     0,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,   259,    61,     0,    63,     0,     0,     0,     0,    66,
     204,     0,     0,     0,     0,     0,     0,     0,    73,    74,
      75,    76,    77,   205,     0,    79,     0,     0,    81,     0,
       0,     0,    85,     0,     0,    87,     0,     0,    89,     0,
       0,     0,     0,     0,   260,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,    94,    95,    96,    97,     0,     0,     0,
       0,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    99,     0,     0,   100,   101,   102,     0,     0,     0,
     104,     0,   206,     0,   106,     0,   207,     0,     5,   108,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   197,
       0,     0,    15,    16,     0,    17,     0,   198,     0,     0,
      21,     0,   267,     0,     0,     0,     0,     0,     0,    29,
       0,   199,     0,     0,     0,    33,   200,   201,     0,     0,
     202,    39,     0,     0,     0,    41,     0,     0,    43,     0,
       0,   203,     0,     0,    47,    48,     0,     0,    50,     0,
      52,     0,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    59,     0,    61,     0,    63,     0,     0,
       0,     0,    66,   204,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,   205,     0,    79,     0,
       0,    81,     0,     0,     0,    85,     0,     0,    87,     0,
     268,    89,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    94,    95,    96,    97,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   100,   101,   102,
       0,     0,     0,   104,     0,   206,     0,   106,     0,   207,
       0,     0,   108,     5,   301,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   197,     0,     0,    15,    16,     0,
      17,     0,   198,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,   199,     0,     0,     0,
      33,   200,   201,     0,     0,   202,    39,     0,     0,     0,
      41,     0,     0,    43,     0,     0,   203,     0,     0,    47,
      48,     0,     0,    50,     0,    52,     0,    53,    54,     0,
      55,    56,     0,     0,     0,     0,     0,     0,    59,     0,
      61,     0,    63,     0,     0,     0,     0,    66,   204,     0,
       0,     0,     0,     0,     0,     0,    73,    74,    75,    76,
      77,   205,     0,    79,     0,     0,    81,     0,     0,     0,
      85,     0,     0,    87,     0,     0,    89,     0,     0,     0,
       0,     0,   260,     0,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,    94,    95,    96,    97,     0,     0,     0,     0,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
       0,     0,   100,   101,   102,     0,     0,     0,   104,     0,
     206,     0,   106,     0,   207,     0,     5,   108,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   197,     0,     0,
      15,    16,     0,    17,     0,   198,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   199,
       0,     0,     0,    33,   200,   201,     0,     0,   202,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   203,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,   204,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,   205,     0,    79,     0,     0,    81,
     305,   306,     0,    85,     0,     0,    87,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,    94,    95,    96,    97,     0,     0,
       0,     0,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,     0,     0,   100,   101,   102,     0,     0,
       0,   104,     0,   206,     0,   106,     0,   207,     0,     0,
     108,     5,   301,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   197,     0,     0,    15,    16,     0,    17,     0,
     198,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   199,     0,     0,     0,    33,   200,
     201,     0,     0,   202,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   203,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,   204,     0,     0,     0,
       0,     0,     0,     0,    73,    74,    75,    76,    77,   205,
       0,    79,     0,     0,    81,     0,     0,     0,    85,     0,
       0,    87,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,    97,     0,     0,     0,     0,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,     0,     0,
     100,   101,   102,     0,     0,     0,   104,     0,   206,   807,
     106,     0,   207,     0,     0,   108,     5,   301,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   197,     0,     0,
      15,    16,     0,    17,     0,   198,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   199,
       0,     0,     0,    33,   200,   201,     0,     0,   202,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   203,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,   204,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,   205,     0,    79,     0,     0,    81,
       0,     0,     0,    85,     0,     0,    87,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,    94,    95,    96,    97,     0,     0,
       0,     0,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,     0,     0,   100,   101,   102,     0,     0,
       0,   104,     0,   206,     0,   106,     0,   207,   817,     5,
     108,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     197,     0,     0,    15,    16,     0,    17,     0,   198,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   199,     0,     0,     0,    33,   200,   201,     0,
       0,   202,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,   203,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,   204,  -714,     0,     0,     0,  -714,
       0,     0,    73,    74,    75,    76,    77,   205,     0,    79,
       0,     0,    81,     0,     0,     0,    85,     0,     0,    87,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,   100,   101,
     102,     0,     0,     0,   104,     0,   206,     0,   106,     0,
     207,     0,     0,   108,     5,   301,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   197,     0,     0,    15,    16,
       0,    17,     0,   198,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   199,     0,     0,
       0,    33,   200,   201,     0,     0,   202,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,   203,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,   204,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,   205,     0,    79,     0,     0,    81,     0,     0,
       0,    85,     0,     0,    87,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,   100,   101,   102,     0,     0,     0,   104,
       0,   206,     0,   106,     0,   207,  1192,     5,   108,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   197,     0,
       0,    15,    16,     0,    17,     0,   198,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
     199,     0,     0,     0,    33,   200,   201,     0,     0,   202,
      39,     0,     0,     0,    41,     0,     0,    43,     0,     0,
     203,     0,     0,    47,    48,     0,     0,    50,     0,    52,
       0,    53,    54,     0,    55,    56,     0,     0,     0,     0,
       0,     0,    59,     0,    61,     0,    63,     0,     0,     0,
       0,    66,   204,     0,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    77,   205,     0,    79,     0,     0,
      81,     0,     0,     0,    85,     0,     0,    87,     0,     0,
      89,     0,     0,     0,     0,     0,   260,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,    94,    95,    96,    97,     0,
       0,     0,     0,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,     0,     0,   100,   101,   102,     0,
       0,     0,   104,     0,   206,     0,   106,     0,   207,     0,
       5,   108,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   197,     0,     0,    15,    16,     0,    17,     0,   198,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
     282,    29,     0,   199,     0,     0,     0,    33,   200,   201,
       0,     0,   202,    39,     0,     0,     0,    41,     0,     0,
      43,     0,     0,   203,     0,     0,    47,    48,     0,     0,
      50,     0,    52,     0,    53,    54,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    59,     0,    61,     0,    63,
       0,     0,     0,     0,    66,   204,     0,     0,     0,     0,
       0,     0,     0,    73,    74,    75,    76,    77,   205,     0,
      79,     0,     0,    81,     0,     0,     0,    85,     0,     0,
      87,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,    94,    95,
      96,    97,     0,     0,     0,     0,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    99,     0,     0,   100,
     101,   102,     0,     0,     0,   104,     0,   105,     0,   106,
       0,   207,     0,     0,   108,     5,   301,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   197,     0,     0,    15,
      16,     0,    17,     0,   198,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,   199,     0,
       0,     0,    33,   200,   201,     0,     0,   202,    39,     0,
       0,     0,    41,     0,     0,    43,     0,     0,   203,     0,
       0,    47,    48,     0,     0,    50,     0,    52,     0,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,     0,    61,     0,    63,     0,     0,     0,     0,    66,
     204,     0,     0,     0,     0,     0,     0,     0,    73,    74,
      75,    76,    77,   205,     0,    79,     0,     0,    81,     0,
       0,     0,    85,     0,     0,    87,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,    94,    95,    96,    97,     0,     0,     0,
       0,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    99,     0,     0,   100,   101,   102,     0,     0,     0,
     104,     0,   206,     0,   106,     0,   207,     0,     5,   108,
       6,     7,     8,   359,    10,    11,     0,     0,     0,   197,
       0,     0,    15,    16,     0,    17,     0,    18,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,   199,     0,     0,     0,    33,   200,   201,     0,     0,
     202,    39,     0,     0,     0,    41,     0,     0,    43,     0,
       0,   203,     0,     0,    47,    48,     0,     0,    50,     0,
      52,     0,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    59,     0,    61,     0,    63,     0,     0,
       0,     0,    66,    67,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,   205,     0,    79,     0,
       0,    81,     0,     0,     0,    85,     0,    86,    87,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    94,    95,    96,    97,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   100,   101,   102,
       0,     0,     0,   104,     0,   206,     0,   106,     0,   207,
       0,     5,   108,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   197,     0,     0,    15,    16,     0,    17,     0,
     198,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   199,     0,     0,     0,    33,   200,
     201,     0,     0,   202,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   203,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,   204,     0,     0,     0,
       0,     0,     0,     0,    73,    74,    75,    76,    77,   205,
       0,    79,     0,     0,    81,     0,     0,     0,    85,     0,
       0,    87,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,    97,     0,     0,     0,     0,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,     0,     0,
     100,   101,   102,     0,     0,     0,   104,     0,   206,     0,
     106,     0,   207,   822,     5,   108,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   197,     0,     0,    15,    16,
       0,    17,     0,   198,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   199,     0,     0,
       0,    33,   200,   201,     0,     0,   202,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,   203,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,   204,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,   205,     0,    79,     0,     0,    81,     0,     0,
       0,    85,   996,     0,    87,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,   100,   101,   102,     0,     0,     0,   104,
       0,   206,     0,   106,     0,   207,     0,     0,   108,     5,
     301,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     197,     0,     0,    15,    16,     0,    17,     0,   198,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
     781,     0,   199,     0,     0,     0,    33,   200,   201,     0,
       0,   202,    39,     0,     0,     0,   782,     0,     0,    43,
       0,     0,   203,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,   204,     0,     0,     0,     0,     0,
       0,     0,    73,   783,    75,    76,    77,   784,     0,    79,
       0,     0,    81,     0,     0,     0,    85,     0,     0,    87,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,   100,   101,
     102,     0,     0,     0,   104,     0,   206,     0,   106,     0,
    1121,     0,     5,   108,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   197,     0,     0,    15,    16,     0,    17,
       0,   198,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   199,     0,     0,     0,    33,
     200,   201,     0,     0,   202,    39,     0,     0,     0,    41,
       0,     0,    43,     0,     0,   203,     0,     0,    47,    48,
       0,     0,    50,     0,    52,     0,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,    59,     0,    61,
       0,    63,     0,     0,     0,     0,    66,   204,     0,     0,
       0,     0,     0,     0,     0,    73,    74,    75,    76,    77,
     205,     0,    79,     0,     0,    81,     0,     0,     0,    85,
    1178,     0,    87,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      94,    95,    96,    97,     0,     0,     0,     0,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,     0,
       0,   100,   101,   102,     0,     0,     0,   104,     0,   206,
       0,   106,     0,   207,     0,     0,   108,     5,   301,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   197,     0,
       0,    15,    16,     0,    17,     0,   198,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
     199,     0,     0,     0,    33,   200,   201,     0,     0,   202,
      39,     0,     0,     0,    41,     0,     0,    43,     0,     0,
     203,     0,     0,    47,    48,     0,     0,    50,     0,    52,
       0,    53,    54,     0,    55,    56,     0,     0,     0,     0,
       0,     0,    59,     0,    61,     0,    63,     0,     0,     0,
       0,    66,   204,     0,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    77,   205,     0,    79,     0,     0,
      81,     0,     0,     0,    85,     0,     0,    87,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,    94,    95,    96,    97,     0,
       0,     0,     0,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,     0,     0,   100,   101,   102,     0,
       0,     0,   104,     0,   206,     0,   106,     0,  1121,     0,
       0,   108,     5,   301,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   197,     0,     0,    15,    16,     0,    17,
       0,   198,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   199,     0,     0,     0,    33,
     200,   201,     0,     0,  1153,    39,     0,     0,     0,    41,
       0,     0,    43,     0,     0,   203,     0,     0,    47,    48,
       0,     0,    50,     0,    52,     0,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,    59,     0,    61,
       0,    63,     0,     0,     0,     0,    66,   204,     0,     0,
       0,     0,     0,     0,     0,    73,    74,    75,    76,    77,
     205,     0,    79,     0,     0,    81,     0,     0,     0,    85,
       0,     0,    87,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      94,    95,    96,    97,     0,     0,     0,     0,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,     0,
       0,   100,   101,   102,     0,     0,     0,   104,     0,   206,
       0,   106,     0,   207,     0,     5,   108,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   197,     0,     0,    15,
      16,     0,    17,     0,   198,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,   199,     0,
       0,     0,    33,   200,   201,     0,     0,   202,    39,     0,
       0,     0,    41,     0,     0,    43,     0,     0,   203,     0,
       0,    47,    48,     0,     0,    50,     0,    52,     0,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,     0,    61,     0,    63,     0,     0,     0,     0,    66,
     204,     0,     0,     0,     0,     0,     0,     0,    73,    74,
      75,    76,    77,   205,     0,    79,     0,     0,    81,     0,
       0,     0,    85,     0,     0,    87,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,    94,    95,    96,    97,     0,     0,     0,
       0,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    99,     0,     0,   100,   101,   102,     0,     0,     0,
     104,     0,   206,     0,   106,     0,   207,     0,     5,   108,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   197,
       0,     0,    15,    16,     0,    17,     0,   198,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,   781,
       0,   199,     0,     0,     0,    33,   200,   201,     0,     0,
     202,    39,     0,     0,     0,   782,     0,     0,    43,     0,
       0,   203,     0,     0,    47,    48,     0,     0,    50,     0,
      52,     0,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    59,     0,    61,     0,    63,     0,     0,
       0,     0,    66,   204,     0,     0,     0,     0,     0,     0,
       0,    73,   783,    75,    76,    77,   784,     0,    79,     0,
       0,    81,     0,     0,     0,    85,     0,     0,    87,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    94,    95,    96,    97,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   100,   101,   102,
       0,     0,     0,   104,     0,   206,     0,   106,     0,   785,
       0,     5,   108,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   197,     0,     0,    15,    16,     0,    17,     0,
     198,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,   781,     0,   199,     0,     0,     0,    33,   200,
     201,     0,     0,   202,    39,     0,     0,     0,   782,     0,
       0,    43,     0,     0,   203,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,   204,     0,     0,     0,
       0,     0,     0,     0,    73,   783,    75,    76,    77,   784,
       0,    79,     0,     0,    81,     0,     0,     0,    85,     0,
       0,    87,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,    97,     0,     0,     0,     0,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,     0,     0,
     100,   101,   102,     0,     0,     0,   104,     0,   206,     0,
     106,     0,   870,     0,     5,   108,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   197,     0,     0,    15,    16,
       0,    17,     0,   198,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,   199,     0,     0,
       0,    33,   200,   201,     0,     0,   202,    39,     0,     0,
       0,    41,     0,     0,    43,     0,     0,   203,     0,     0,
      47,    48,     0,     0,    50,     0,    52,     0,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    59,
       0,    61,     0,    63,     0,     0,     0,     0,    66,   204,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,   205,     0,    79,     0,     0,    81,     0,     0,
       0,    85,     0,     0,    87,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,   100,   101,   102,     0,     0,     0,   104,
       0,   206,     0,   106,     0,   785,     0,     5,   108,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   197,     0,
       0,    15,    16,     0,    17,     0,   198,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
     199,     0,     0,     0,    33,   200,   201,     0,     0,   914,
      39,     0,     0,     0,    41,     0,     0,    43,     0,     0,
     203,     0,     0,    47,    48,     0,     0,    50,     0,    52,
       0,    53,    54,     0,    55,    56,     0,     0,     0,     0,
       0,     0,    59,     0,    61,     0,    63,     0,     0,     0,
       0,    66,   204,     0,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    77,   205,     0,    79,     0,     0,
      81,     0,     0,     0,    85,     0,     0,    87,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,    94,    95,    96,    97,     0,
       0,     0,     0,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,     0,     0,   100,   101,   102,     0,
       0,     0,   104,     0,   206,     0,   106,     0,   207,     0,
       5,   108,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   197,     0,     0,    15,    16,     0,    17,     0,   198,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,   199,     0,     0,     0,    33,   200,   201,
       0,     0,   917,    39,     0,     0,     0,    41,     0,     0,
      43,     0,     0,   203,     0,     0,    47,    48,     0,     0,
      50,     0,    52,     0,    53,    54,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    59,     0,    61,     0,    63,
       0,     0,     0,     0,    66,   204,     0,     0,     0,     0,
       0,     0,     0,    73,    74,    75,    76,    77,   205,     0,
      79,     0,     0,    81,     0,     0,     0,    85,     0,     0,
      87,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,    94,    95,
      96,    97,     0,     0,     0,     0,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    99,     0,     0,   100,
     101,   102,     0,     0,     0,   104,     0,   206,     0,   106,
       0,   207,     0,     5,   108,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   197,     0,     0,    15,    16,     0,
      17,     0,   198,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,   199,     0,     0,     0,
      33,   200,   201,     0,     0,  1147,    39,     0,     0,     0,
      41,     0,     0,    43,     0,     0,   203,     0,     0,    47,
      48,     0,     0,    50,     0,    52,     0,    53,    54,     0,
      55,    56,     0,     0,     0,     0,     0,     0,    59,     0,
      61,     0,    63,     0,     0,     0,     0,    66,   204,     0,
       0,     0,     0,     0,     0,     0,    73,    74,    75,    76,
      77,   205,     0,    79,     0,     0,    81,     0,     0,     0,
      85,     0,     0,    87,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,    94,    95,    96,    97,     0,     0,     0,     0,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
       0,     0,   100,   101,   102,     0,     0,     0,   104,     0,
     206,     0,   106,     0,   207,     0,     5,   108,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   197,     0,     0,
      15,    16,     0,    17,     0,   198,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,   199,
       0,     0,     0,    33,   200,   201,     0,     0,  1148,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   203,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,   204,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,   205,     0,    79,     0,     0,    81,
       0,     0,     0,    85,     0,     0,    87,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,    94,    95,    96,    97,     0,     0,
       0,     0,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,     0,     0,   100,   101,   102,     0,     0,
       0,   104,     0,   206,     0,   106,     0,   207,     0,     5,
     108,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     197,     0,     0,    15,    16,     0,    17,     0,   198,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,   199,     0,     0,     0,    33,   200,   201,     0,
       0,  1150,    39,     0,     0,     0,    41,     0,     0,    43,
       0,     0,   203,     0,     0,    47,    48,     0,     0,    50,
       0,    52,     0,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    59,     0,    61,     0,    63,     0,
       0,     0,     0,    66,   204,     0,     0,     0,     0,     0,
       0,     0,    73,    74,    75,    76,    77,   205,     0,    79,
       0,     0,    81,     0,     0,     0,    85,     0,     0,    87,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,   100,   101,
     102,     0,     0,     0,   104,     0,   206,     0,   106,     0,
     207,     0,     5,   108,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   197,     0,     0,    15,    16,     0,    17,
       0,   198,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   199,     0,     0,     0,    33,
     200,   201,     0,     0,  1151,    39,     0,     0,     0,    41,
       0,     0,    43,     0,     0,   203,     0,     0,    47,    48,
       0,     0,    50,     0,    52,     0,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,    59,     0,    61,
       0,    63,     0,     0,     0,     0,    66,   204,     0,     0,
       0,     0,     0,     0,     0,    73,    74,    75,    76,    77,
     205,     0,    79,     0,     0,    81,     0,     0,     0,    85,
       0,     0,    87,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      94,    95,    96,    97,     0,     0,     0,     0,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,     0,
       0,   100,   101,   102,     0,     0,     0,   104,     0,   206,
       0,   106,     0,   207,     0,     5,   108,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   197,     0,     0,    15,
      16,     0,    17,     0,   198,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,   199,     0,
       0,     0,    33,   200,   201,     0,     0,  1152,    39,     0,
       0,     0,    41,     0,     0,    43,     0,     0,   203,     0,
       0,    47,    48,     0,     0,    50,     0,    52,     0,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,     0,    61,     0,    63,     0,     0,     0,     0,    66,
     204,     0,     0,     0,     0,     0,     0,     0,    73,    74,
      75,    76,    77,   205,     0,    79,     0,     0,    81,     0,
       0,     0,    85,     0,     0,    87,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,    94,    95,    96,    97,     0,     0,     0,
       0,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    99,     0,     0,   100,   101,   102,     0,     0,     0,
     104,     0,   206,     0,   106,     0,   207,     0,     5,   108,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   197,
       0,     0,    15,    16,     0,    17,     0,   198,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,   199,     0,     0,     0,    33,   200,   201,     0,     0,
    1153,    39,     0,     0,     0,    41,     0,     0,    43,     0,
       0,   203,     0,     0,    47,    48,     0,     0,    50,     0,
      52,     0,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    59,     0,    61,     0,    63,     0,     0,
       0,     0,    66,   204,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,   205,     0,    79,     0,
       0,    81,     0,     0,     0,    85,     0,     0,    87,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    94,    95,    96,    97,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   100,   101,   102,
       0,     0,     0,   104,     0,   206,     0,   106,     0,   207,
       0,     5,   108,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   197,     0,     0,    15,    16,     0,    17,     0,
     198,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,   199,     0,     0,     0,    33,   200,
     201,     0,     0,   202,    39,     0,     0,     0,    41,     0,
       0,    43,     0,     0,   203,     0,     0,    47,    48,     0,
       0,    50,     0,    52,     0,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    59,     0,    61,     0,
      63,     0,     0,     0,     0,    66,   204,     0,     0,     0,
       0,     0,     0,     0,    73,    74,    75,    76,    77,   205,
       0,    79,     0,     0,    81,     0,     0,     0,    85,     0,
       0,    87,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   612,     0,   613,     0,     0,     0,    93,    94,
      95,    96,    97,   614,     0,     0,     0,    98,   615,   233,
     616,   617,     0,     0,     0,     0,   618,    99,     0,     0,
     100,   101,   102,     0,     0,   236,   104,   199,     0,     0,
     106,   619,   870,     0,     0,   108,     0,   620,     0,     0,
       0,   239,     0,     0,   621,     0,   622,     0,     0,     0,
       0,     0,     0,     0,   623,     0,     0,     0,     0,     0,
       0,   624,   625,     0,     0,     0,     0,     0,     0,   244,
       0,     0,     0,     0,     0,     0,     0,     0,   626,     0,
       0,     0,     0,     0,     0,     0,     0,   246,   247,     0,
     627,     0,   249,     0,   628,     0,     0,   629,     0,     0,
       0,   630,     0,     0,   253,     0,     0,   631,     0,     0,
       0,     0,     0,     0,     0,     0,   503,   428,   429,   430,
     431,   432,     0,     0,   435,   436,   437,   438,     0,   440,
     441,   632,   633,   634,   635,   636,   637,     0,   638,     0,
       0,     0,   639,   640,   641,   642,   643,   644,   645,   646,
     647,   648,   649,     0,   650,     0,     0,   651,   652,   653,
     654,     0,     5,   655,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   197,     0,     0,    15,    16,     0,    17,
       0,   198,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   199,     0,     0,     0,    33,
     200,   201,     0,     0,   202,    39,     0,     0,     0,    41,
       0,     0,    43,     0,     0,   203,     0,     0,    47,    48,
       0,     0,    50,     0,    52,     0,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,    59,     0,    61,
       0,    63,     0,     0,     0,     0,    66,   204,     0,     0,
       0,     0,     0,     0,     0,    73,    74,    75,    76,    77,
     205,     0,    79,     0,     0,    81,     0,     0,     0,    85,
       0,     0,    87,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      94,    95,    96,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,   101,   102,     0,     0,     0,   104,     0,   206,
       0,   106,     5,   207,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   197,     0,     0,    15,    16,     0,    17,
       0,   198,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   199,     0,     0,     0,    33,
     200,   201,     0,     0,   202,    39,     0,     0,     0,    41,
       0,     0,    43,     0,     0,   203,     0,     0,    47,    48,
    -479,     0,    50,     0,    52,     0,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,    59,     0,    61,
       0,    63,     0,     0,     0,     0,    66,   204,     0,     0,
       0,  -479,     0,     0,     0,    73,    74,    75,    76,    77,
     205,     0,    79,     0,  -479,    81,     0,     0,     0,    85,
       0,     0,    87,     0,     0,    89,     0,  -479,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,     0,     5,   301,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   197,     0,     0,    15,    16,     0,
      17,     0,   198,   102,  -479,    21,     0,     0,     0,  -479,
       0,   106,     0,   870,    29,     0,   199,     0,     0,     0,
      33,   200,   201,     0,     0,   202,    39,     0,     0,     0,
      41,     0,     0,    43,     0,     0,   203,     0,     0,    47,
      48,     0,     0,    50,     0,    52,     0,    53,    54,     0,
      55,    56,     0,     0,     0,     0,     0,     0,    59,     0,
      61,     0,    63,     0,     0,     0,     0,    66,   204,     0,
       0,     0,     0,     0,     0,     0,    73,    74,    75,    76,
      77,   205,     0,    79,     0,     0,    81,     0,     0,     0,
      85,     0,     0,    87,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,  -497,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,     0,     0,     0,  -497,     0,     0,     0,
    -497,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,     0,     0,     0,     0,     0,
     206,     0,   106,  -497,  1121,     5,     0,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   197,     0,     0,    15,
      16,     0,    17,     0,   198,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,   199,     0,
       0,     0,    33,   200,   201,     0,     0,   202,    39,     0,
       0,     0,    41,     0,     0,    43,     0,     0,   203,     0,
       0,    47,    48,     0,     0,    50,     0,    52,     0,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      59,     0,    61,     0,    63,     0,     0,     0,     0,    66,
     204,     0,     0,     0,     0,     0,     0,     0,    73,    74,
      75,    76,    77,   205,     0,    79,     0,     0,    81,     0,
       0,     0,    85,     0,     0,    87,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,     0,    95,     0,     5,     0,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   197,     0,     0,
      15,    16,     0,    17,     0,   198,   102,     0,    21,     0,
       0,     0,   206,     0,   106,     0,   207,    29,     0,   199,
       0,     0,     0,    33,   200,   201,     0,     0,   202,    39,
       0,     0,     0,    41,     0,     0,    43,     0,     0,   203,
       0,     0,    47,    48,     0,     0,    50,     0,    52,     0,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    59,     0,    61,     0,    63,     0,     0,     0,     0,
      66,   204,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,   205,     0,    79,     0,     0,    81,
       0,     0,     0,    85,     0,     0,    87,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,     0,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   197,     0,
       0,    15,    16,     0,    17,     0,   198,   102,     0,    21,
       0,     0,     0,   206,     0,   106,     0,   785,    29,     0,
     199,     0,     0,     0,    33,   200,   201,     0,     0,   202,
      39,     0,     0,     0,    41,     0,     0,    43,     0,     0,
     203,     0,     0,    47,    48,     0,     0,    50,     0,    52,
       0,    53,    54,     0,    55,    56,     0,     0,     0,     0,
       0,     0,    59,     0,    61,     0,    63,     0,     0,     0,
       0,    66,   204,     0,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    77,   205,     0,    79,     0,     0,
      81,     0,  1032,     0,    85,     0,     0,    87,     0,     0,
      89,   614,     0,     0,     0,     0,   232,   233,   616,   234,
       0,     0,     0,     0,   235,     0,     0,     0,     0,     0,
       0,     0,     0,   236,     0,     0,    95,     0,     0,   619,
       0,     0,     0,     0,     0,   238,     0,     0,     0,   239,
       0,     0,   240,     0,   622,     0,     0,     0,     0,     0,
       0,     0,   241,     0,     0,     0,   106,     0,   207,   624,
     243,     0,     0,     0,     0,     0,     0,   244,     0,     0,
       0,     0,     0,     0,     0,     0,   245,     0,     0,     0,
       0,     0,     0,     0,   397,   246,   247,     0,   248,     0,
     249,   398,  1033,     0,     0,   629,     0,     0,     0,   252,
       0,     0,   253,     0,   399,   254,     0,     0,     0,     0,
       0,     0,     0,     0,   503,   428,   429,   430,   431,   432,
       0,     0,   435,   436,   437,   438,     0,   440,   441,   632,
     633,   634,   635,   636,   637,     0,   638,     0,     0,     0,
     639,   640,   641,   642,   643,   644,   645,   646,   647,   648,
     649,     0,   650,     0,     0,   651,   652,   653,   654,     0,
     397,   400,     0,     0,     0,   401,     0,   398,     0,     0,
       0,     0,     0,     0,   502,     0,     0,     0,     0,     0,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   402,   503,   428,   429,
     430,   431,   432,     0,     0,   435,   436,   437,   438,     0,
     440,   441,   403,   404,     0,   405,   406,   407,     0,   408,
     409,   410,     0,   411,   412,   413,   414,   415,     0,   416,
     417,   418,   419,   420,   421,   422,   397,   400,   423,   424,
     425,   401,   457,   398,     0,     0,     0,     0,     0,   426,
    1055,     0,     0,     0,     0,     0,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   402,   503,   428,   429,   430,   431,   432,     0,
       0,   435,   436,   437,   438,     0,   440,   441,   403,   404,
       0,   405,   406,   407,     0,   408,   409,   410,     0,   411,
     412,   413,   414,   415,     0,   416,   417,   418,   419,   420,
     421,   422,   397,   400,   423,   424,   425,   401,   457,   398,
       0,     0,     0,     0,     0,   426,  1062,     0,     0,     0,
       0,     0,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   402,   503,
     428,   429,   430,   431,   432,     0,     0,   435,   436,   437,
     438,     0,   440,   441,   403,   404,     0,   405,   406,   407,
       0,   408,   409,   410,     0,   411,   412,   413,   414,   415,
       0,   416,   417,   418,   419,   420,   421,   422,   397,   400,
     423,   424,   425,   401,   457,   398,     0,     0,     0,     0,
       0,   426,  1220,     0,     0,     0,     0,     0,   399,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   402,   503,   428,   429,   430,   431,
     432,     0,     0,   435,   436,   437,   438,     0,   440,   441,
     403,   404,     0,   405,   406,   407,     0,   408,   409,   410,
       0,   411,   412,   413,   414,   415,     0,   416,   417,   418,
     419,   420,   421,   422,   397,   400,   423,   424,   425,   401,
     457,   398,     0,     0,     0,     0,     0,   426,  1221,     0,
       0,     0,     0,     0,   399,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     402,   503,   428,   429,   430,   431,   432,     0,     0,   435,
     436,   437,   438,     0,   440,   441,   403,   404,     0,   405,
     406,   407,     0,   408,   409,   410,     0,   411,   412,   413,
     414,   415,     0,   416,   417,   418,   419,   420,   421,   422,
     397,   400,   423,   424,   425,   401,   457,   398,     0,     0,
       0,     0,     0,   426,  1222,     0,     0,     0,     0,     0,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   402,   503,   428,   429,
     430,   431,   432,     0,     0,   435,   436,   437,   438,     0,
     440,   441,   403,   404,     0,   405,   406,   407,     0,   408,
     409,   410,     0,   411,   412,   413,   414,   415,     0,   416,
     417,   418,   419,   420,   421,   422,   397,   400,   423,   424,
     425,   401,   457,   398,     0,     0,     0,     0,     0,   426,
    1223,     0,     0,     0,     0,     0,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   402,   503,   428,   429,   430,   431,   432,     0,
       0,   435,   436,   437,   438,     0,   440,   441,   403,   404,
       0,   405,   406,   407,     0,   408,   409,   410,     0,   411,
     412,   413,   414,   415,     0,   416,   417,   418,   419,   420,
     421,   422,   397,   400,   423,   424,   425,   401,   457,   398,
       0,     0,     0,     0,     0,   426,  1229,     0,     0,     0,
       0,     0,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   402,   503,
     428,   429,   430,   431,   432,     0,     0,   435,   436,   437,
     438,     0,   440,   441,   403,   404,     0,   405,   406,   407,
       0,   408,   409,   410,     0,   411,   412,   413,   414,   415,
       0,   416,   417,   418,   419,   420,   421,   422,     0,   400,
     423,   424,   425,   401,   457,     0,     0,     0,     0,     0,
       0,   426,  1230,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   402,   503,   428,   429,   430,   431,
     432,     0,     0,   435,   436,   437,   438,     0,   440,   441,
     403,   404,     0,   405,   406,   407,     0,   408,   409,   410,
       0,   411,   412,   413,   414,   415,     0,   416,   417,   418,
     419,   420,   421,   422,   397,     0,   423,   424,   425,     0,
     457,   398,     0,     0,     0,     0,     0,   426,     0,     0,
       0,     0,     0,     0,   399,   489,     0,     0,     0,     0,
       0,     0,     0,   466,     0,     0,     0,    22,    23,     0,
     490,     0,  1009,     0,     0,     0,     0,   467,     0,    31,
     468,     0,     0,   397,     0,    37,     0,     0,     0,     0,
     398,     0,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   399,   282,     0,     0,     0,     0,     0,
       0,   400,     0,     0,     0,   401,     0,     0,    58,   495,
      60,     0,   349,   397,  1010,     0,     0,  1011,     0,   469,
     398,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   486,   399,   483,     0,   402,     0,     0,     0,
      84,     0,     0,    86,     0,     0,    88,     0,     0,   484,
     400,     0,   403,   404,   401,   405,   406,   407,     0,   408,
     409,   410,     0,   411,   412,   413,   414,   415,     0,   416,
     417,   418,   419,   420,   421,   422,     0,     0,   423,   424,
     425,   486,   457,     0,     0,   402,     0,     0,     0,   426,
     400,     0,     0,     0,   401,     0,   103,     0,     0,     0,
       0,   403,   404,     0,   405,   406,   407,     0,   408,   409,
     410,     0,   411,   412,   413,   414,   415,     0,   416,   417,
     418,   419,   420,   421,   422,   402,     0,   423,   424,   425,
       0,   457,     0,     0,     0,     0,     0,     0,   426,     0,
       0,   403,   404,     0,   405,   406,   407,     0,   408,   409,
     410,     0,   411,   412,   413,   414,   415,     0,   416,   417,
     418,   419,   420,   421,   422,   397,   832,   423,   424,   425,
       0,   457,   398,     0,     0,     0,     0,     0,   426,     0,
       0,     0,     0,     0,     0,   399,     0,     0,     0,     0,
     833,     0,   466,     0,     0,     0,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,   467,     0,    31,   468,
     397,     0,     0,     0,    37,     0,     0,   398,     0,     0,
       0,    42,     0,     0,     0,     0,   834,     0,     0,     0,
     399,   944,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   400,     0,     0,     0,   401,    58,     0,    60,
       0,     0,     0,  1010,     0,   397,  1011,     0,   469,     0,
      68,     0,   398,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   399,   282,   402,     0,    84,
       0,     0,    86,     0,     0,    88,     0,   400,     0,     0,
       0,   401,     0,   403,   404,     0,   405,   406,   407,     0,
     408,   409,   410,     0,   411,   412,   413,   414,   415,     0,
     416,   417,   418,   419,   420,   421,   422,     0,   486,   423,
     424,   425,   402,     0,   399,     0,     0,     0,     0,     0,
     426,     0,   400,     0,     0,   103,   401,     0,   403,   404,
       0,   405,   406,   407,     0,   408,   409,   410,     0,   411,
     412,   413,   414,   415,     0,   416,   417,   418,   419,   420,
     421,   422,     0,   486,   423,   424,   425,   402,   457,     0,
       0,     0,     0,     0,     0,   426,     0,     0,     0,     0,
       0,   400,     0,   403,   404,   401,   405,   406,   407,     0,
     408,   409,   410,     0,   411,   412,   413,   414,   415,     0,
     416,   417,   418,   419,   420,   421,   422,   397,     0,   423,
     424,   425,     0,   457,   398,     0,     0,     0,     0,     0,
     426,     0,     0,     0,     0,     0,     0,   399,     0,     0,
       0,     0,   403,   404,     0,   405,   406,   407,     0,   408,
     409,   410,     0,   459,   412,   413,   414,   397,     0,   416,
     417,   418,   419,     0,   398,   422,     0,     0,   423,   424,
     425,     0,     0,     0,     0,     0,     0,   399,   282,   426,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   400,     0,     0,   397,   401,     0,
       0,     0,     0,     0,   398,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   399,   728,     0,
       0,     0,     0,     0,     0,   192,     0,     0,     0,   402,
       0,     0,     0,   729,   400,     0,     0,     0,   401,     0,
       0,     0,     0,     0,     0,   403,   404,     0,   405,   406,
     407,     0,   408,   409,   410,     0,   411,   412,   413,   414,
     415,     0,   416,   417,   418,   419,   420,   421,   422,   402,
       0,   423,   424,   425,   400,     0,     0,     0,   401,     0,
       0,     0,   426,     0,     0,   403,   404,     0,   405,   406,
     407,     0,   408,   409,   410,     0,   411,   412,   413,   414,
     415,     0,   416,   417,   418,   419,   420,   421,   422,   402,
       0,   423,   424,   425,     0,   457,     0,     0,     0,     0,
       0,     0,   426,     0,     0,   403,   404,     0,   405,   406,
     407,     0,   408,   409,   410,     0,   411,   412,   413,   414,
     415,     0,   416,   417,   418,   419,   420,   421,   422,   397,
       0,   423,   424,   425,     0,     0,   398,     0,     0,     0,
       0,     0,   426,     0,     0,     0,     0,     0,     0,   399,
     730,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   731,     0,     0,     0,   397,
       0,     0,     0,     0,     0,     0,   398,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   399,
     936,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   400,     0,     0,   397,
     401,     0,     0,     0,     0,     0,   398,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   399,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   402,     0,     0,     0,     0,   400,     0,     0,     0,
     401,     0,     0,     0,     0,     0,     0,   403,   404,     0,
     405,   406,   407,     0,   408,   409,   410,     0,   411,   412,
     413,   414,   415,     0,   416,   417,   418,   419,   420,   421,
     422,   402,     0,   423,   424,   425,   400,     0,     0,     0,
     401,     0,     0,     0,   426,     0,     0,   403,   404,   958,
     405,   406,   407,     0,   408,   409,   410,     0,   411,   412,
     413,   414,   415,     0,   416,   417,   418,   419,   420,   421,
     422,   402,     0,   423,   424,   425,     0,   457,     0,     0,
       0,     0,     0,     0,   426,     0,     0,   403,   404,     0,
     405,   406,   407,     0,   408,   409,   410,     0,   411,   412,
     413,   414,   415,     0,   416,   417,   418,   419,   420,   421,
     422,   397,     0,   423,   424,   425,     0,   457,   398,     0,
       0,     0,     0,     0,   426,     0,     0,     0,     0,     0,
       0,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   397,     0,     0,     0,     0,     0,     0,   398,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   399,     0,     0,     0,     0,  1105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   400,     0,
       0,     0,   401,     0,     0,     0,   397,   526,     0,     0,
       0,     0,     0,   398,     0,     0,     0,     0,     0,     0,
       0,     0,  1106,     0,     0,     0,   399,     0,     0,   486,
       0,     0,     0,   402,     0,     0,     0,     0,   400,     0,
       0,     0,   401,     0,     0,     0,     0,     0,     0,   403,
     404,     0,   405,   406,   407,     0,   408,   409,   410,     0,
     411,   412,   413,   414,   415,     0,   416,   417,   418,   419,
     420,   421,   422,   402,     0,   423,   424,   425,     0,     0,
       0,     0,     0,   400,   987,     0,   426,   401,     0,   403,
     404,     0,   405,   406,   407,     0,   408,   409,   410,     0,
     411,   412,   413,   414,   415,     0,   416,   417,   418,   419,
     420,   421,   422,   397,     0,   423,   424,   425,   402,     0,
     398,     0,     0,     0,     0,     0,   426,     0,     0,     0,
       0,     0,     0,   399,   403,   404,     0,   405,   406,   407,
       0,   408,   409,   410,     0,   411,   412,   413,   414,   415,
       0,   416,   417,   418,   419,   420,   421,   422,   397,     0,
     423,   424,   425,     0,     0,   398,     0,     0,     0,     0,
       0,   426,     0,     0,     0,     0,     0,     0,   399,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     400,     0,     0,     0,   401,     0,     0,     0,   397,     0,
       0,     0,     0,     0,     0,   398,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   399,     0,
       0,     0,     0,     0,     0,   402,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   400,     0,     0,     0,   401,
       0,   403,   404,     0,   405,   406,   407,     0,   408,   409,
     410,     0,   411,   412,   413,   414,   415,     0,   416,   417,
     418,   419,   420,   421,   422,     0,     0,   423,   424,   425,
     402,   538,     0,     0,     0,   400,     0,     0,   426,   401,
       0,     0,     0,     0,     0,     0,   403,   404,     0,   405,
     406,   407,     0,   408,   409,   410,     0,   411,   412,   413,
     414,   415,     0,   416,   417,   418,   419,   420,   421,   422,
     402,   542,   423,   424,   425,     0,     0,     0,     0,     0,
       0,     0,     0,   426,     0,     0,   403,   404,     0,   405,
     406,   407,     0,   408,   409,   410,     0,   411,   412,   413,
     414,   415,     0,   416,   417,   418,   419,   420,   421,   422,
     397,   547,   423,   424,   425,     0,     0,   398,     0,     0,
       0,     0,     0,   426,     0,     0,     0,     0,     0,     0,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     397,     0,     0,     0,     0,     0,     0,   398,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   400,     0,     0,
     397,   401,     0,     0,     0,     0,     0,   398,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   564,   402,     0,     0,     0,     0,   400,     0,     0,
       0,   401,     0,     0,     0,     0,     0,     0,   403,   404,
     732,   405,   406,   407,     0,   408,   409,   410,     0,   411,
     412,   413,   414,   415,     0,   416,   417,   418,   419,   420,
     421,   422,   402,     0,   423,   424,   425,   400,     0,     0,
       0,   401,     0,     0,     0,   426,     0,     0,   403,   404,
       0,   405,   406,   407,     0,   408,   409,   410,     0,   411,
     412,   413,   414,   415,     0,   416,   417,   418,   419,   420,
     421,   422,   402,     0,   423,   424,   425,     0,     0,     0,
       0,     0,     0,     0,     0,   426,     0,     0,   403,   404,
       0,   405,   406,   407,     0,   408,   409,   410,     0,   411,
     412,   413,   414,   415,     0,   416,   417,   418,   419,   420,
     421,   422,   397,   828,   423,   424,   425,     0,     0,   398,
       0,   808,     0,     0,     0,   426,     0,     0,     0,     0,
       0,     0,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   397,     0,     0,     0,     0,     0,     0,   398,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   400,
       0,     0,     0,   401,     0,     0,     0,   397,     0,     0,
       0,     0,     0,     0,   398,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   399,     0,     0,
       0,     0,     0,     0,   402,     0,     0,     0,     0,   400,
       0,     0,     0,   401,     0,     0,     0,     0,     0,     0,
     403,   404,     0,   405,   406,   407,     0,   408,   829,   410,
       0,   411,   412,   413,   414,   415,     0,   416,   417,   418,
     419,   420,   421,   422,   402,     0,   423,   424,   425,     0,
       0,     0,     0,     0,   400,     0,     0,   426,   401,     0,
     403,   404,     0,   405,   406,   407,     0,   408,   409,   410,
       0,   411,   412,   413,   414,   415,  -601,   416,   417,   418,
     419,   420,   421,   422,   397,   192,   423,   424,   425,   402,
       0,   398,     0,     0,     0,     0,     0,   426,     0,     0,
       0,     0,     0,     0,   399,   403,   404,     0,   405,   406,
     407,     0,   408,   409,   410,     0,   411,   412,   413,   414,
     415,     0,   416,   417,   418,   419,   420,   421,   422,   397,
       0,   423,   424,   425,     0,     0,   398,     0,     0,     0,
       0,     0,   426,     0,     0,     0,     0,     0,     0,   399,
       0,     0,   956,     0,     0,     0,     0,     0,     0,     0,
       0,   400,     0,     0,     0,   401,     0,     0,     0,   397,
       0,     0,     0,     0,     0,     0,   398,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   399,
       0,     0,     0,     0,     0,     0,   402,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   400,     0,     0,     0,
     401,     0,   403,   404,     0,   405,   406,   407,     0,   408,
     409,   410,     0,   411,   412,   413,   414,   415,     0,   416,
     417,   418,   419,   420,   421,   422,     0,   927,   423,   424,
     425,   402,     0,     0,     0,     0,   400,     0,     0,   426,
     401,     0,     0,     0,     0,     0,     0,   403,   404,     0,
     405,   406,   407,     0,   408,   409,   410,     0,   411,   412,
     413,   414,   415,     0,   416,   417,   418,   419,   420,   421,
     422,   402,     0,   423,   424,   425,     0,     0,     0,     0,
       0,     0,     0,     0,   426,     0,     0,   403,   404,     0,
     405,   406,   407,     0,   408,   409,   410,     0,   411,   412,
     413,   414,   415,     0,   416,   417,   418,   419,   420,   421,
     422,   397,     0,   423,   424,   425,     0,     0,   398,     0,
     972,     0,     0,     0,   426,     0,     0,     0,     0,     0,
       0,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   397,     0,     0,     0,     0,     0,     0,   398,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   400,     0,
       0,     0,   401,   397,  1002,     0,     0,     0,     0,     0,
     398,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   402,     0,     0,     0,     0,     0,   400,
       0,     0,     0,   401,     0,     0,     0,     0,     0,   403,
     404,     0,   405,   406,   407,     0,   408,   409,   410,     0,
     411,   412,   413,   414,   415,     0,   416,   417,   418,   419,
     420,   421,   422,   990,   402,   423,   424,   425,     0,     0,
     400,     0,   973,     0,   401,     0,   426,     0,     0,     0,
     403,   404,     0,   405,   406,   407,     0,   408,   409,   410,
       0,   411,   412,   413,   414,   415,     0,   416,   417,   418,
     419,   420,   421,   422,     0,   402,   423,   424,   425,     0,
       0,   397,     0,     0,     0,     0,     0,   426,   398,     0,
       0,   403,   404,     0,   405,   406,   407,     0,   408,   409,
     410,   399,   411,   412,   413,   414,   415,     0,   416,   417,
     418,   419,   420,   421,   422,     0,     0,   423,   424,   425,
       0,     0,   397,     0,     0,     0,     0,     0,   426,   398,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   399,  1044,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   400,     0,
       0,     0,   401,   397,     0,     0,     0,     0,     0,     0,
     398,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   399,  1047,     0,     0,     0,     0,     0,
       0,     0,     0,   402,     0,     0,     0,     0,     0,   400,
       0,     0,     0,   401,     0,     0,     0,     0,     0,   403,
     404,     0,   405,   406,   407,     0,   408,   409,   410,     0,
     411,   412,   413,   414,   415,     0,   416,   417,   418,   419,
     420,   421,   422,     0,   402,   423,   424,   425,     0,     0,
     400,     0,  1031,     0,   401,     0,   426,     0,     0,     0,
     403,   404,     0,   405,   406,   407,     0,   408,   409,   410,
       0,   411,   412,   413,   414,   415,     0,   416,   417,   418,
     419,   420,   421,   422,     0,   402,   423,   424,   425,     0,
       0,   397,     0,     0,     0,     0,     0,   426,   398,     0,
       0,   403,   404,     0,   405,   406,   407,     0,   408,   409,
     410,   399,   411,   412,   413,   414,   415,     0,   416,   417,
     418,   419,   420,   421,   422,     0,     0,   423,   424,   425,
       0,     0,   397,  1102,     0,     0,     0,     0,   426,   398,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   400,     0,
       0,     0,   401,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   399,     0,     0,     0,     0,     0,
       0,     0,     0,   402,     0,     0,     0,     0,     0,   400,
       0,     0,     0,   401,     0,     0,     0,     0,     0,   403,
     404,     0,   405,   406,   407,     0,   408,   409,   410,     0,
     411,   412,   413,   414,   415,     0,   416,   417,   418,   419,
     420,   421,   422,     0,   402,   423,   424,   425,     0,     0,
     397,   400,     0,     0,  1050,   401,   426,   398,     0,     0,
     403,   404,     0,   405,   406,   407,     0,   408,   409,   410,
     399,   411,   412,   413,   414,   415,     0,   416,   417,   418,
     419,   420,   421,   422,     0,     0,   423,   424,   425,     0,
       0,     0,     0,     0,     0,     0,     0,   426,     0,     0,
       0,     0,   403,   404,     0,   405,   406,   407,     0,   408,
     409,   410,     0,   411,   412,   413,   414,     0,     0,   416,
     417,   418,   419,   420,     0,   422,   397,   400,   423,   424,
     425,   401,     0,   398,     0,     0,     0,     0,     0,   426,
    1146,     0,     0,     0,     0,     0,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   402,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   403,   404,
       0,   405,   406,   407,     0,   408,   409,   410,     0,   411,
     412,   413,   414,   415,     0,   416,   417,   418,   419,   420,
     421,   422,     0,   400,   423,   424,   425,   401,     0,     0,
       0,   397,  1184,     0,     0,   426,  1149,     0,   398,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   399,     0,     0,     0,     0,     0,     0,   402,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   403,   404,     0,   405,   406,   407,
       0,   408,   409,   410,     0,   411,   412,   413,   414,   415,
       0,   416,   417,   418,   419,   420,   421,   422,     0,     0,
     423,   424,   425,     0,     0,     0,     0,   397,   400,     0,
       0,   426,   401,     0,   398,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   402,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1205,     0,     0,   403,
     404,     0,   405,   406,   407,     0,   408,   409,   410,     0,
     411,   412,   413,   414,   415,     0,   416,   417,   418,   419,
     420,   421,   422,   397,   400,   423,   424,   425,   401,     0,
     398,     0,     0,     0,     0,     0,   426,     0,     0,     0,
       0,     0,     0,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   402,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   403,   404,     0,   405,   406,
     407,     0,   408,   409,   410,     0,   411,   412,   413,   414,
     415,     0,   416,   417,   418,   419,   420,   421,   422,   397,
     400,   423,   424,   425,   401,     0,   398,     0,     0,     0,
       0,     0,   426,     0,     0,     0,     0,     0,     0,   399,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   402,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   403,   404,     0,   405,   406,   407,     0,   408,   409,
     410,     0,   411,   412,   413,   414,   415,     0,   416,   417,
     418,   419,   420,   421,   422,   397,   400,   423,   424,   425,
     401,     0,   398,     0,     0,     0,  1225,     0,   426,  1254,
       0,     0,     0,     0,     0,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   402,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   403,   404,     0,
     405,   406,   407,     0,   408,   409,   410,     0,   411,   412,
     413,   414,   415,     0,   416,   417,   418,   419,   420,   421,
     422,   397,   400,   423,   424,   425,   401,     0,   398,     0,
       0,     0,     0,     0,   426,  1255,     0,     0,     0,     0,
       0,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   402,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   403,   404,     0,   405,   406,   407,     0,
     408,   409,   410,     0,   411,   412,   413,   414,   415,     0,
     416,   417,   418,   419,   420,   421,   422,   397,   400,   423,
     424,   425,   401,     0,   398,     0,     0,     0,     0,     0,
     426,  1256,     0,     0,     0,     0,     0,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   402,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   403,
     404,     0,   405,   406,   407,     0,   408,   409,   410,     0,
     411,   412,   413,   414,   415,     0,   416,   417,   418,   419,
     420,   421,   422,   397,   400,   423,   424,   425,   401,     0,
     398,     0,     0,     0,     0,     0,   426,  1257,     0,     0,
       0,     0,     0,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   402,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   403,   404,     0,   405,   406,
     407,     0,   408,   409,   410,     0,   411,   412,   413,   414,
     415,     0,   416,   417,   418,   419,   420,   421,   422,   397,
     400,   423,   424,   425,   401,     0,   398,     0,     0,     0,
       0,     0,   426,  1258,     0,     0,     0,     0,     0,   399,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   402,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   403,   404,     0,   405,   406,   407,     0,   408,   409,
     410,     0,   411,   412,   413,   414,   415,     0,   416,   417,
     418,   419,   420,   421,   422,   397,   400,   423,   424,   425,
     401,     0,   398,     0,     0,     0,     0,     0,   426,  1259,
       0,     0,     0,     0,     0,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   402,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   403,   404,     0,
     405,   406,   407,     0,   408,   409,   410,     0,   411,   412,
     413,   414,   415,     0,   416,   417,   418,   419,   420,   421,
     422,   397,   400,   423,   424,   425,   401,     0,   398,     0,
       0,     0,     0,     0,   426,     0,     0,     0,     0,     0,
       0,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   402,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   403,   404,     0,   405,   406,   407,     0,
     408,   409,   410,     0,   411,   412,   413,   414,   415,     0,
     416,   417,   418,   419,   420,   421,   422,   397,   400,   423,
     424,   425,   401,     0,   398,     0,     0,     0,  1272,     0,
     426,     0,     0,     0,     0,     0,     0,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   402,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   403,
     404,     0,   405,   406,   407,     0,   408,   409,   410,     0,
     411,   412,   413,   414,   415,     0,   416,   417,   418,   419,
     420,   421,   422,     0,   912,   423,   424,   425,   401,     0,
       0,     0,     0,     0,     0,     0,   426,     0,     0,     0,
       0,     0,     0,   399,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   402,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   403,   404,     0,   405,   406,
     407,     0,   408,   409,   410,     0,   411,   412,   413,   414,
     415,     0,   416,   417,   418,   419,   420,   421,   422,     0,
     400,   423,   424,   425,   401,     0,     0,     0,     0,     0,
       0,     0,   426,     0,     0,     0,     0,     0,     0,   399,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   402,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   403,   404,     0,   405,   406,   407,     0,   408,   409,
     410,     0,   411,   412,   413,   414,     0,     0,   416,   417,
     418,   419,   420,   421,   422,     0,   400,   423,   424,   425,
     401,     0,     0,     0,     0,     0,     0,     0,   426,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   402,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   403,   404,     0,
     405,   406,   407,     0,   408,   409,   410,     0,   411,   412,
     413,   414,     0,     0,   416,   417,   418,   419,   420,   367,
     422,   231,     0,   423,   424,   425,     0,     0,     0,     0,
       0,     0,     0,     0,   426,   232,   233,     0,   234,     0,
       0,     0,     0,   235,     0,     0,     0,     0,     0,   368,
       0,     0,   236,     0,     0,     0,     0,     0,   237,     0,
       0,     0,     0,     0,   238,     0,     0,     0,   239,     0,
       0,   240,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   241,     0,     0,     0,     0,     0,     0,   242,   243,
       0,     0,     0,     0,     0,     0,   244,     0,     0,     0,
       0,     0,     0,     0,     0,   245,     0,     0,   231,     0,
       0,     0,     0,     0,   246,   247,     0,   248,     0,   249,
       0,   250,   232,   233,   251,   234,     0,     0,   252,     0,
     235,   253,    23,     0,   254,     0,     0,     0,     0,   236,
       0,     0,     0,     0,     0,   237,     0,     0,     0,     0,
       0,   238,     0,     0,     0,   239,     0,     0,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   241,     0,
       0,     0,     0,     0,     0,   242,   243,     0,     0,     0,
       0,     0,     0,   244,    60,     0,     0,     0,     0,     0,
       0,     0,   245,     0,     0,    68,     0,     0,     0,     0,
       0,   246,   247,     0,   248,     0,   249,     0,   250,   231,
       0,   251,     0,     0,     0,   252,     0,     0,   253,     0,
      88,   254,     0,   232,   233,     0,   234,     0,     0,     0,
       0,   235,     0,     0,     0,     0,     0,   368,     0,     0,
     236,     0,     0,     0,     0,     0,   237,     0,     0,     0,
       0,     0,   238,     0,     0,     0,   239,     0,     0,   240,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   241,
       0,     0,     0,     0,     0,     0,   242,   243,     0,     0,
       0,     0,     0,     0,   244,     0,     0,     0,     0,     0,
       0,     0,     0,   245,     0,     0,  -297,     0,     0,     0,
       0,     0,   246,   247,     0,   248,     0,   249,     0,   250,
    -297,  -297,   251,  -297,     0,     0,   252,     0,  -297,   253,
       0,     0,   254,     0,     0,     0,     0,  -297,     0,     0,
       0,     0,     0,  -297,     0,     0,     0,     0,     0,  -297,
       0,     0,     0,  -297,     0,     0,  -297,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -297,     0,     0,     0,
       0,     0,     0,  -297,  -297,     0,     0,     0,     0,     0,
       0,  -297,     0,     0,     0,     0,     0,     0,     0,     0,
    -297,     0,     0,   231,     0,     0,     0,     0,     0,  -297,
    -297,     0,  -297,     0,  -297,     0,  -297,   232,   233,  -297,
     234,     0,     0,  -297,     0,   235,  -297,     0,     0,  -297,
       0,     0,     0,     0,   236,     0,     0,     0,     0,     0,
     237,     0,     0,     0,     0,     0,   238,     0,     0,     0,
     239,     0,     0,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   241,     0,     0,     0,     0,     0,     0,
     242,   243,     0,     0,     0,     0,     0,     0,   244,     0,
       0,     0,     0,     0,     0,     0,     0,   245,     0,     0,
    -298,     0,     0,     0,     0,     0,   246,   247,     0,   248,
       0,   249,     0,   250,  -298,  -298,   251,  -298,     0,     0,
     252,     0,  -298,   253,     0,     0,   254,     0,     0,     0,
       0,  -298,     0,     0,     0,     0,     0,  -298,     0,     0,
       0,     0,     0,  -298,     0,     0,     0,  -298,     0,     0,
    -298,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -298,     0,     0,     0,     0,     0,     0,  -298,  -298,     0,
       0,     0,     0,     0,     0,  -298,     0,     0,     0,     0,
       0,     0,     0,     0,  -298,     0,     0,     0,     0,     0,
       0,     0,     0,  -298,  -298,     0,  -298,     0,  -298,     0,
    -298,     0,     0,  -298,     0,     0,     0,  -298,     0,     0,
    -298,     0,     0,  -298
};

static const yytype_int16 yycheck[] =
{
      12,   274,     2,   162,    16,    70,   388,   577,    20,   448,
     388,   176,    69,    40,    26,   221,   609,   513,   664,   753,
     230,    19,    34,    35,    36,   298,    38,   373,   508,   606,
     589,   834,   228,   133,   360,   857,   540,    49,   829,    51,
      52,   106,   660,   316,   662,    57,    56,    59,     1,    61,
     107,   966,   518,   852,     1,    48,     1,    69,    70,    71,
      72,    73,    74,     3,   274,    33,    78,  1018,    80,    48,
      33,    56,   146,    33,    33,    87,    33,    92,    90,    91,
     102,    93,     1,    95,     1,    61,    98,    99,   298,   101,
     120,   120,   118,   105,   106,   107,   108,  1192,  1244,   173,
     264,   265,   266,    54,   146,   270,   316,  1022,    61,  1027,
     172,   146,   174,   146,    48,    37,    61,   140,    33,   131,
     146,   133,    48,    74,  1039,   148,  1272,   120,    75,    48,
       0,   173,   165,    84,    48,    48,   171,     3,    48,    92,
      11,     3,   118,   609,     3,   175,   175,    92,   170,  1244,
     207,    73,   105,   146,    20,   170,    90,   120,   140,    48,
     172,   120,   172,   103,   898,   118,   148,   146,    34,  1120,
     117,   444,   445,   118,    34,    35,    36,    90,    69,   165,
     344,   345,   175,  1005,    22,   197,   146,   172,   200,   201,
     202,  1013,   145,   205,   206,   207,   175,    63,   664,   409,
     145,   228,   170,   780,  1119,  1004,   125,   170,   125,  1000,
     170,   170,   165,   170,   105,   106,   107,   170,   230,   146,
     146,   219,  1140,   388,   171,   170,   145,   146,   145,   146,
      32,   146,   146,    92,   444,   445,   146,   103,   109,    75,
      61,   103,   746,   109,   103,  1119,   165,   107,   175,   175,
      88,    92,    61,   733,   580,   170,   173,   146,     3,   359,
      27,   175,   274,   833,   146,   175,    89,   146,    56,   465,
      93,    92,    47,    72,   112,    61,  1191,    18,   146,    83,
     120,   117,    86,    92,   105,    51,   298,    89,    54,   171,
    1112,    93,   171,   305,   306,  1117,   105,   118,   508,   858,
     125,  1104,   461,  1106,   316,   173,    92,   364,    74,   118,
      85,    77,    79,   140,   753,   206,   207,  1191,    84,   105,
     526,   148,   146,    90,   165,   150,  1060,   339,    56,   170,
     540,    56,   118,   146,   911,   171,   336,    78,   140,   114,
     352,    56,   354,   145,   165,   147,   148,   171,   115,   170,
     152,   165,   364,   146,   146,    96,   165,   171,   160,   109,
     173,   170,     8,    27,   146,  1187,   168,   165,   433,   434,
     146,   867,   113,   171,   439,   855,   582,   442,   443,   165,
     173,   173,    90,   395,   170,   397,   398,   399,   400,   401,
     402,   173,   404,   405,   406,   407,   408,   173,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,    79,  1034,  1035,   172,   146,
     146,   433,   434,   993,   481,   146,    90,   439,  1021,   146,
     442,   443,   444,   445,   446,   447,   448,  1083,   465,   165,
      89,   146,   146,   923,    93,   109,   173,   459,   146,   125,
      56,   463,   173,  1136,   146,    27,   173,   146,  1141,   898,
     472,   165,   261,   262,   263,   264,   265,   266,   173,   481,
     146,   483,   484,   364,   150,   173,    56,   489,   490,   172,
      27,   173,    56,   495,   173,   146,   285,    48,   287,   554,
     502,   556,   172,   505,   174,   294,   508,   173,   880,     2,
      61,    48,   880,   165,   165,    52,    56,    79,   520,    12,
     172,   857,   524,   312,    56,   527,   528,    56,    90,   865,
      89,   533,    25,   733,    93,    28,   325,   326,   540,    76,
     876,    92,    79,  1103,    81,  1105,   746,   109,   165,   551,
     400,   401,   554,    90,   556,   172,  1136,   174,   560,   561,
     562,  1141,   564,   565,   146,  1021,    89,   118,   146,     8,
      93,  1027,   109,   125,   125,   577,   578,   172,   172,   174,
     570,    27,    47,   165,    56,    78,   146,   165,   590,    82,
      83,   146,   146,    56,   146,   146,   446,   447,   150,    47,
     481,    66,    48,   757,   758,   165,    52,   761,   762,   459,
     165,   165,   105,   146,   165,    82,    83,   110,    66,   170,
      85,   173,   173,  1130,   172,    27,   174,  1083,   828,   829,
      76,  1060,   165,    79,   484,    81,   173,    85,   146,   146,
     490,   146,   100,    48,    90,   495,    48,   172,    56,   114,
      52,   170,   533,   655,   145,   855,    61,   165,   165,    56,
     165,   815,   816,   109,    89,   554,   114,   556,    93,  1005,
     551,   460,    89,   554,    76,   556,    93,    79,    32,    81,
     561,   299,   300,   125,  1140,    56,    56,    92,    90,   744,
      56,    32,  1199,  1200,  1201,  1202,  1203,  1204,   172,   488,
     193,   165,   164,   492,   853,   494,   165,   109,   497,   151,
     560,   153,   154,   118,   165,   157,   158,   170,   156,   172,
     125,   165,   172,   923,   174,   880,   728,   729,   730,   731,
     732,   733,   734,   735,   789,    89,  1192,   165,   785,    93,
     172,   146,   744,   165,   746,   747,   165,   749,    89,   737,
     738,   753,    93,   755,   172,   165,   174,    56,   170,   140,
     165,   165,   764,   765,   145,   170,   119,   148,   173,  1225,
      85,   152,   172,   172,   174,   170,  1112,   165,   933,   172,
     172,   783,   784,   785,   277,   940,   140,   789,  1244,   282,
     172,   145,   172,     8,   148,    66,   170,     8,   152,   140,
     141,   125,   143,   144,   145,    90,   147,   148,   171,    90,
     148,   152,   125,    69,   172,   109,  1272,   125,   173,   160,
     146,  1084,  1085,   870,   826,   166,   167,   168,   830,    48,
     832,   833,   834,   172,   836,   125,   838,   125,    35,   841,
     842,    35,    66,   336,   173,   125,   173,     2,   173,    21,
     170,   146,   175,   855,   175,   146,   173,    12,   351,   105,
     172,   148,   148,   744,   148,   140,   148,   140,   870,   148,
      25,   148,   148,    28,   148,   140,   148,   140,   148,   729,
     148,   731,   140,   175,  1084,  1085,   148,   165,    35,    35,
     173,    33,   146,    33,    35,   388,   898,   145,   165,   165,
     145,   165,     8,   172,   785,   165,   165,    35,   140,   170,
     912,   913,   914,   165,   171,   917,   273,   140,   173,    24,
     171,   923,   175,    78,   173,   175,   165,    82,    83,   976,
     165,   175,   934,   175,   936,   172,   172,   175,   165,   941,
     173,   175,   944,   173,   165,   173,   164,   173,   165,   165,
     105,   164,   826,    48,   956,   110,   146,   351,    90,  1013,
     861,   962,   751,   752,   457,   980,    61,   323,   757,   758,
     880,    32,   761,   762,   976,   524,   362,   876,   865,   600,
    1141,   875,  1205,   985,   374,   987,  1198,   131,   990,   870,
     483,   993,   666,   521,   779,    -1,   489,    92,  1000,    -1,
    1002,  1156,  1157,    -1,    -1,  1160,  1161,   500,    -1,   502,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     2,  1173,    -1,
    1175,    -1,  1024,   118,    -1,    -1,    -1,    12,    89,    -1,
     125,    -1,    93,    -1,    -1,    -1,    -1,    -1,   193,    -1,
      25,  1043,  1044,    28,  1046,  1047,    -1,  1049,  1050,    -1,
      -1,   146,    -1,  1055,  1056,    -1,  1058,    32,  1060,    -1,
    1062,  1063,   912,   913,  1066,   558,    -1,    -1,    -1,   562,
     165,    -1,    -1,    -1,  1121,   170,    -1,   570,   173,   140,
    1082,  1083,  1084,  1085,   145,    -1,   147,   148,  1090,    -1,
    1092,   152,    -1,    78,  1096,   976,    -1,    82,    83,   160,
    1102,  1103,  1104,  1105,  1106,   166,   167,   168,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    93,  1121,
     105,    -1,   277,    -1,  1126,   110,    -1,   282,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   924,   925,    -1,  1140,    -1,
    1021,    -1,   931,    -1,  1146,  1147,  1148,  1149,  1150,  1151,
    1152,  1153,    -1,    -1,   943,    -1,    -1,   946,    -1,   948,
      -1,   950,    -1,    -1,    -1,   140,   141,    -1,   143,   144,
     145,    -1,   147,   148,   149,    -1,    -1,   152,    -1,    -1,
      -1,   336,  1184,    -1,   159,   160,    -1,    -1,   163,    -1,
      -1,   166,   167,   168,    -1,  1197,   351,    -1,    -1,    -1,
       3,    -1,   177,    -1,    -1,    -1,    -1,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    20,  1220,  1221,
    1222,  1223,    25,  1225,    -1,    -1,    -1,  1229,  1230,    -1,
      -1,    34,   725,    -1,    -1,    -1,    -1,    40,    -1,    -1,
    1121,  1243,  1244,    46,    -1,  1126,    -1,    50,    -1,    -1,
      53,    -1,  1254,  1255,  1256,  1257,  1258,  1259,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,
    1272,    -1,    -1,    -1,   767,    78,    -1,   770,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   277,    96,    97,    -1,    99,   282,   101,  1088,
     103,    -1,   457,   106,    -1,    -1,    -1,   110,   111,    -1,
     113,  1192,    -1,   116,     2,    -1,    -1,    -1,    -1,    -1,
      -1,   814,    -1,    -1,    12,    -1,    -1,   820,   483,    -1,
      -1,    -1,     3,    -1,   489,    -1,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,   500,    17,   502,    -1,    20,
       2,   336,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    -1,  1244,    -1,    36,   351,    -1,    -1,   172,
      -1,    -1,    -1,    25,    -1,    46,    28,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,  1272,    63,    -1,    82,    83,    -1,    -1,    -1,    -1,
      71,    -1,    -1,   558,    -1,    -1,    -1,   562,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   570,    87,   105,    -1,   912,
     913,    -1,   110,    -1,    -1,    -1,    78,    -1,    99,    -1,
      82,    83,   103,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,   934,    -1,   936,    -1,   116,    -1,    -1,   941,    -1,
       1,   944,    -1,   105,    -1,    -1,    -1,    -1,   110,    -1,
     953,    -1,   955,    -1,    -1,   958,    -1,    -1,    -1,    -1,
      -1,    22,   457,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    -1,   975,    -1,    -1,    36,    -1,    38,    39,    -1,
      -1,    -1,   985,    44,   987,    -1,    -1,    -1,   483,    -1,
      51,    -1,    -1,    54,   489,   193,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   500,    -1,   502,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    83,    84,    -1,    86,    -1,    88,    -1,    90,
      -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     2,    -1,    -1,    -1,    -1,   109,    -1,
      -1,   112,  1055,    12,   115,    -1,    -1,    -1,    -1,  1062,
      -1,    -1,    -1,   558,    -1,    -1,    25,   562,    -1,    28,
      -1,    -1,  1075,    -1,    -1,   570,    -1,    -1,    -1,   277,
      -1,    -1,    -1,  1086,   282,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1095,    -1,     3,    -1,  1099,    -1,    -1,    -1,
      -1,    -1,   767,    -1,   165,   770,    -1,    -1,    17,    18,
     171,    20,    -1,    -1,    -1,   277,    25,    -1,    -1,    78,
     282,    -1,    -1,    82,    83,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    46,   336,    -1,
      -1,    50,    -1,    -1,    53,    -1,   105,    -1,    -1,   814,
      -1,   110,    -1,   351,    63,   820,    -1,    -1,    -1,  1162,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,   336,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,   351,
      99,    -1,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1220,  1221,  1222,
    1223,    32,    -1,    -1,    -1,    -1,  1229,  1230,    -1,    -1,
      -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   457,
      -1,   170,    -1,   172,    -1,    -1,    -1,    32,    -1,   934,
      -1,   936,   767,    -1,    -1,   770,   941,    -1,    89,   944,
      -1,    -1,    93,    -1,    -1,   483,    -1,    -1,   953,    -1,
     955,   489,    -1,   958,    -1,   457,    -1,    -1,    -1,    -1,
      -1,    -1,   500,    -1,   502,    -1,    -1,    89,    -1,    -1,
     975,    93,    -1,    -1,    -1,    -1,    -1,    -1,   277,   814,
     985,   483,   987,   282,    89,   820,    -1,   489,    93,   140,
     141,    -1,   143,   144,   145,    -1,   147,   148,   500,    -1,
     502,   152,    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,
      -1,    -1,   163,    -1,    -1,   166,   167,   168,   140,   141,
     558,    -1,   144,   145,   562,   147,   148,    -1,    -1,    -1,
     152,    -1,   570,    -1,    -1,   140,   141,   336,   160,    -1,
     145,    -1,   147,   148,   166,   167,   168,   152,    -1,    -1,
    1055,    -1,   351,    -1,    -1,   160,   558,  1062,    -1,    -1,
     562,   166,   167,   168,    -1,     2,    -1,    -1,   570,    -1,
    1075,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,  1086,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
    1095,    28,    -1,    -1,  1099,    -1,    -1,    -1,    -1,   934,
      -1,   936,    -1,    -1,    -1,    -1,   941,    -1,    -1,   944,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   953,    -1,
     955,    -1,    -1,   958,    -1,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     975,    78,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,
     985,    -1,   987,    -1,    -1,    -1,   156,  1162,   457,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   169,
      -1,    -1,   172,   110,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,   483,    -1,    26,    27,    -1,    -1,
     489,    31,    -1,    -1,    -1,    -1,    36,    -1,    38,    39,
      -1,   500,    -1,   502,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,  1220,  1221,  1222,  1223,    -1,
    1055,    -1,    -1,    -1,  1229,  1230,    -1,  1062,    -1,   767,
      -1,    -1,   770,    -1,    -1,    -1,    -1,    77,    -1,    79,
    1075,    81,    -1,    83,    -1,    -1,    86,    -1,    88,    -1,
      90,  1086,    -1,    -1,    -1,    -1,   193,    -1,    -1,   558,
    1095,    -1,    -1,   562,  1099,   767,     3,     2,   770,   109,
      -1,   570,   112,    -1,    -1,   115,   814,    12,    -1,    -1,
      17,    18,   820,    20,    -1,    -1,    -1,    -1,    25,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,   814,    50,    -1,    -1,    53,    -1,   820,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    63,  1162,    -1,    -1,
      -1,   171,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
     277,    78,    -1,    78,    -1,   282,    -1,    82,    83,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,   106,
     105,    -1,    -1,   110,    -1,   110,   113,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,  1220,  1221,  1222,  1223,    -1,
      -1,    -1,    -1,    -1,  1229,  1230,   934,    -1,   936,   336,
      -1,    -1,    -1,   941,    -1,    -1,   944,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   351,   953,    -1,   955,    -1,    -1,
     958,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   934,    -1,   936,   172,    -1,   975,    -1,   941,
      -1,    -1,   944,    -1,    -1,    -1,    -1,   985,    -1,   987,
      -1,   953,    -1,   955,    -1,    -1,   958,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   767,    -1,
      -1,   770,    -1,   975,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   985,    -1,   987,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   814,    -1,  1055,    -1,    -1,
     457,   820,    -1,    -1,  1062,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1075,    -1,    -1,
      -1,    -1,   277,    -1,    -1,    -1,   483,   282,  1086,    -1,
      -1,    -1,   489,  1055,    22,    -1,    -1,  1095,    26,    27,
    1062,  1099,    -1,   500,     2,   502,    -1,    -1,    36,    -1,
      38,    39,    -1,  1075,    12,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    51,  1086,    -1,    -1,    25,    -1,    -1,
      28,    -1,    -1,  1095,    -1,    -1,    -1,  1099,    66,    -1,
      -1,   336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    -1,    -1,    83,   351,    85,    86,    -1,
      88,   558,    90,    -1,  1162,   562,    -1,    -1,    -1,     2,
      -1,    -1,    -1,   570,    -1,   934,    -1,   936,    -1,    12,
      78,   109,   941,    -1,   112,   944,    -1,   115,    -1,    -1,
      -1,    -1,    25,    -1,   953,    28,   955,    -1,    -1,   958,
    1162,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,   975,    -1,    -1,    -1,
      -1,    -1,  1220,  1221,  1222,  1223,   985,    -1,   987,    -1,
      -1,  1229,  1230,    -1,    -1,    -1,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1220,  1221,
    1222,  1223,   457,    -1,    -1,    -1,    -1,  1229,  1230,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   483,    -1,
      -1,    -1,    -1,    -1,   489,   193,  1055,    -1,    -1,    -1,
      -1,    17,    18,  1062,    20,   500,    -1,   502,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,  1075,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,  1086,    -1,    -1,
      46,    -1,    -1,    -1,    50,    -1,  1095,    53,    -1,    -1,
    1099,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
     193,    -1,    78,   558,    -1,    -1,    -1,   562,    -1,    -1,
     767,    87,    -1,   770,    -1,   570,    -1,    -1,    -1,   277,
      96,    97,    -1,    99,   282,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,  1162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   814,    -1,    -1,
      -1,    -1,    -1,   820,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,
      -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,   282,
      -1,    -1,    -1,   351,    -1,    -1,   172,    -1,    -1,    -1,
      -1,  1220,  1221,  1222,  1223,    -1,    -1,    49,    -1,    -1,
    1229,  1230,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      72,    36,    -1,    38,    39,    -1,    -1,    -1,    -1,    44,
      82,    83,    -1,   336,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,   934,    83,   936,
      -1,    86,    -1,    88,   941,    90,    -1,   944,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   953,    -1,   955,   457,
      -1,   958,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,
     115,    -1,   767,    -1,    -1,   770,    -1,    -1,   975,    -1,
      -1,    -1,    -1,    -1,    -1,   483,    -1,    -1,   985,    -1,
     987,   489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   500,    -1,   502,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   814,
     165,    -1,    -1,    -1,   457,   820,   171,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   218,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     483,    -1,    -1,    -1,    -1,    -1,   489,    -1,  1055,    -1,
     558,    -1,    -1,    -1,   562,  1062,    -1,   500,    -1,    -1,
      -1,    -1,   570,    -1,    -1,    -1,    -1,    -1,  1075,   261,
     262,   263,   264,   265,   266,    -1,    -1,   269,   270,  1086,
      -1,    -1,    -1,    -1,   276,    -1,    -1,    -1,  1095,    -1,
      -1,    -1,  1099,   285,    -1,   287,    -1,    -1,    12,    -1,
      -1,    -1,   294,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   558,    -1,    -1,    32,   562,
     312,    -1,    -1,    37,    -1,    -1,    -1,   570,    -1,   934,
      -1,   936,    -1,   325,   326,    -1,   941,    -1,    -1,   944,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   953,    -1,
     955,    -1,    -1,   958,    -1,  1162,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     975,    -1,    30,    -1,    -1,    89,    -1,    -1,    -1,    93,
     985,    -1,   987,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,    -1,    -1,  1220,  1221,  1222,  1223,    -1,    -1,    -1,
      -1,    -1,  1229,  1230,    -1,    -1,   140,   141,    -1,   143,
     144,   145,    -1,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,    -1,   157,   158,   159,   160,   161,   162,   163,
    1055,   165,   166,   167,   168,    -1,    -1,  1062,    -1,   767,
      -1,    -1,   770,   177,    -1,    -1,    -1,    -1,   460,    -1,
    1075,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1086,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1095,   149,    -1,   151,  1099,    -1,   488,    -1,    -1,    -1,
     492,    -1,   494,   161,    -1,   497,   814,    -1,    -1,    -1,
      -1,    -1,   820,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    -1,   767,    26,    27,   770,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    36,    -1,    38,    39,    -1,
      -1,    -1,    -1,    44,    -1,   203,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,  1162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   814,    -1,    -1,    -1,    -1,    77,   820,    79,    -1,
      81,    -1,    83,    -1,    -1,    86,    -1,    88,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   259,    -1,    -1,    -1,    -1,    -1,    -1,   109,   267,
     268,   112,    -1,    -1,   115,  1220,  1221,  1222,  1223,    -1,
     278,    -1,    -1,    -1,  1229,  1230,   934,    -1,   936,    -1,
      -1,    -1,    -1,   941,    -1,    -1,   944,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   953,    -1,   955,    -1,    -1,
     958,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,    -1,   975,    22,    -1,
     171,    -1,    26,    27,    -1,    -1,    -1,   985,    -1,   987,
      -1,    -1,    36,    -1,    38,    39,    -1,    -1,    -1,    -1,
      44,   934,    -1,   936,    -1,    -1,    -1,    51,   941,    -1,
      -1,   944,    -1,    -1,    -1,   363,    -1,    -1,    -1,    -1,
     953,    -1,   955,    -1,    -1,   958,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
     388,    -1,   975,    -1,    88,    -1,    90,    -1,    -1,    -1,
       3,    -1,   985,    -1,   987,    -1,    -1,  1055,    -1,    12,
      -1,    -1,    -1,    -1,  1062,   109,    19,    20,   112,   751,
     752,   115,    -1,    -1,    -1,   757,   758,  1075,    -1,   761,
     762,    34,    -1,    -1,    -1,    -1,    -1,    -1,  1086,   771,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1095,    -1,    -1,
      -1,  1099,    55,    -1,    -1,    -1,    -1,    -1,   456,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   467,
      -1,    -1,    -1,   805,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1075,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,  1086,    -1,    -1,   109,    -1,    -1,    -1,
      -1,   509,  1095,    -1,  1162,   513,  1099,    -1,    -1,    -1,
      -1,    -1,   125,   126,   127,   128,   129,   130,   526,    -1,
     133,   134,   135,   136,    -1,   138,   139,   140,   141,   142,
     143,   144,   145,    -1,   147,    -1,    -1,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,    -1,
     163,    -1,    -1,   166,   167,   168,   169,   170,    -1,    -1,
      -1,    -1,  1220,  1221,  1222,  1223,    -1,    -1,   576,  1162,
      -1,  1229,  1230,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   589,   924,   925,    -1,    -1,    -1,    -1,    -1,   931,
      -1,   933,    -1,    -1,    -1,    -1,   604,    -1,   940,    -1,
      -1,   943,    -1,    -1,   946,    -1,   948,    -1,   950,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   963,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,   983,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,   666,    -1,
      34,    -1,    36,    -1,    -1,    -1,    40,    41,    42,    -1,
      -1,    45,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,
      -1,    -1,    56,    -1,    -1,    59,    60,    -1,    -1,    63,
      -1,    65,    -1,    67,    68,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,    -1,
      -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,  1088,    -1,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   772,    -1,   140,   141,   142,   143,
     144,   779,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,   795,   162,   163,
     164,    -1,    -1,    -1,   168,    -1,   170,   805,   172,    -1,
     174,   175,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1156,  1157,    -1,    -1,  1160,  1161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1171,
      -1,  1173,    -1,  1175,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     858,    -1,    -1,   861,    -1,    -1,   864,    -1,    -1,   867,
      -1,     0,     1,    -1,     3,    -1,     5,     6,     7,     8,
       9,    10,   880,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    -1,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    -1,    53,    54,    -1,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    -1,    74,    -1,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,   962,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,   103,   104,    -1,   106,   107,   108,
     109,   110,   980,   112,   113,   114,   115,   116,    -1,    -1,
     119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,   174,    -1,     1,   177,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    -1,    53,
      54,    -1,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    -1,
      74,    -1,    -1,    77,    78,    79,    80,    -1,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,    -1,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,    -1,   170,   171,   172,    -1,
     174,    -1,     1,   177,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    -1,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    -1,    53,    54,    -1,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    -1,    74,    -1,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,   103,   104,    -1,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,   115,   116,    -1,    -1,
     119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,   168,
      -1,   170,   171,   172,    -1,   174,    -1,     1,   177,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    -1,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    -1,    53,
      54,    -1,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    -1,
      74,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,
     164,   165,    -1,    -1,   168,    -1,   170,   171,   172,    -1,
     174,    -1,     1,   177,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    -1,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    -1,    53,    54,    -1,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    -1,    74,    -1,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,   103,   104,    -1,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,   115,   116,    -1,    -1,
     119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,   168,
      -1,   170,   171,   172,    -1,   174,    -1,     1,   177,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    -1,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    -1,    53,
      54,    -1,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    -1,
      74,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,
     164,   165,    -1,    -1,   168,    -1,   170,   171,   172,    -1,
     174,    -1,     1,   177,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    -1,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    -1,    53,    54,    -1,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    -1,    74,    -1,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,   103,   104,    -1,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,   115,   116,    -1,    -1,
     119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,   168,
      -1,   170,   171,   172,    -1,   174,    -1,     1,   177,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    -1,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    -1,    53,
      54,    -1,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    -1,
      74,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,
     164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,
     174,    -1,     1,   177,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    -1,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    -1,    53,    54,    -1,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    -1,    74,    -1,    -1,    77,    78,
      79,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,   103,   104,    -1,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,   115,   116,    -1,    -1,
     119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,   174,    -1,     1,   177,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    -1,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    -1,    53,
      54,    -1,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    -1,
      74,    -1,    -1,    77,    78,    79,    80,    -1,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,
     164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,
     174,    -1,     1,   177,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    -1,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    -1,    53,    54,    -1,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    -1,    74,    -1,    -1,    77,    78,
      79,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,   103,   104,    -1,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,   115,   116,    -1,    -1,
     119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,   174,    -1,     1,   177,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    -1,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    -1,    53,
      54,    -1,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    -1,
      74,    -1,    -1,    77,    78,    79,    80,    -1,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,
     164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,
     174,    -1,     1,   177,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    -1,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    -1,    53,    54,    -1,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    -1,    74,    -1,    -1,    77,    78,
      79,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,   103,   104,    -1,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,   115,   116,    -1,    -1,
     119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,   174,    -1,     1,   177,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    -1,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    -1,    53,
      54,    -1,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    -1,
      74,    -1,    -1,    77,    78,    79,    80,    -1,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,
     164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,
     174,    -1,     1,   177,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    -1,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    -1,    53,    54,    -1,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    -1,    74,    -1,    -1,    77,    78,
      79,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,   103,   104,    -1,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,   115,   116,    -1,    -1,
     119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,   174,    -1,     1,   177,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    -1,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    -1,    53,
      54,    -1,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    -1,
      74,    -1,    -1,    77,    78,    79,    80,    -1,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,
     164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,
     174,    -1,     1,   177,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    -1,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    -1,    53,    54,    -1,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    -1,    74,    -1,    -1,    77,    78,
      79,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,   103,   104,    -1,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,   115,   116,    -1,    -1,
     119,    -1,   121,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,   174,    -1,     1,   177,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    -1,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    -1,    53,
      54,    -1,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    -1,
      74,    -1,    -1,    77,    78,    79,    80,    -1,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,   103,
     104,    -1,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,   115,   116,    -1,    -1,   119,    -1,   121,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,
     164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,
     174,    -1,     1,   177,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,    -1,
      -1,    40,    41,    42,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,    -1,
      59,    60,    -1,    -1,    63,    -1,    65,    -1,    67,    68,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,   174,    -1,     3,   177,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    -1,
      -1,    17,    18,    19,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      36,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,    45,
      46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    55,
      56,    -1,    -1,    59,    60,    -1,    -1,    63,    -1,    65,
      -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    80,    -1,    82,    -1,    -1,    -1,
      -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,
     126,   127,   128,   129,   130,    -1,    -1,   133,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,   143,   144,   145,
      -1,   147,    -1,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    -1,
     166,   167,   168,   169,   170,    -1,   172,    -1,   174,    -1,
       3,   177,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    -1,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    34,    -1,    36,    -1,    -1,    -1,    40,    41,    42,
      43,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,    62,
      63,    64,    65,    -1,    67,    68,    -1,    70,    71,    72,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,
      -1,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,   119,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,
     143,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,
      -1,    -1,    40,    41,    42,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,
      -1,    59,    60,    -1,    -1,    63,    -1,    65,    -1,    67,
      68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,   107,
     108,    -1,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,     3,   177,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    36,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    56,    -1,    -1,    59,    60,    -1,    -1,    63,    -1,
      65,    -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    -1,    82,    -1,    -1,
      -1,    -1,    87,    88,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    -1,   103,    -1,
      -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
     115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,
      -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,
      -1,    -1,   177,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    36,    -1,    -1,    -1,
      40,    41,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    -1,    -1,    53,    -1,    -1,    56,    -1,    -1,    59,
      60,    -1,    -1,    63,    -1,    65,    -1,    67,    68,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      80,    -1,    82,    -1,    -1,    -1,    -1,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    -1,   103,    -1,    -1,   106,   107,   108,    -1,
     110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,    -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,
     170,    -1,   172,   173,   174,    -1,    -1,   177,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    36,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    56,    -1,    -1,    59,    60,    -1,    -1,    63,    -1,
      65,    -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    80,    -1,    82,    -1,    -1,
      -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    -1,   103,    -1,
      -1,   106,   107,   108,    -1,   110,   111,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,
      -1,    -1,    -1,   168,    -1,   170,    -1,   172,   173,   174,
      -1,     3,   177,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    36,    -1,    -1,    -1,    40,    41,
      42,    -1,    -1,    45,    46,    -1,    48,    -1,    50,    -1,
      -1,    53,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,
      -1,    63,    -1,    65,    -1,    67,    68,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,
      82,    -1,    -1,    -1,    -1,    87,    88,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,
      -1,   113,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,
     142,   143,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,
     162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,
     172,    -1,   174,    -1,     3,   177,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,    -1,
      -1,    40,    41,    42,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,    -1,
      59,    60,    -1,    -1,    63,    -1,    65,    -1,    67,    68,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    -1,   103,    -1,    -1,   106,   107,   108,
      -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,   174,    -1,    -1,   177,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    36,    -1,    -1,    -1,    40,    41,    42,    -1,
      -1,    45,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,
      -1,    -1,    56,    -1,    -1,    59,    60,    -1,    -1,    63,
      -1,    65,    -1,    67,    68,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,    -1,
      -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,    -1,   103,
      -1,    -1,   106,   107,   108,    -1,   110,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,
     164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,
     174,    -1,     3,   177,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    36,    -1,    -1,    -1,    40,
      41,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    -1,    -1,    59,    60,
      -1,    -1,    63,    -1,    65,    -1,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,
      -1,    82,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,   107,   108,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,     3,   177,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,
      -1,    -1,    40,    41,    42,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,
      -1,    59,    60,    -1,    -1,    63,    -1,    65,    -1,    67,
      68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    -1,    82,    -1,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,   122,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,     3,   177,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    36,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    56,    -1,    -1,    59,    60,    -1,    -1,    63,    -1,
      65,    -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    80,    -1,    82,    -1,    -1,
      -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    -1,   103,    -1,
      -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
     115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,
      -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,
      -1,    -1,   177,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    36,    -1,    -1,    -1,
      40,    41,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    -1,    -1,    53,    -1,    -1,    56,    -1,    -1,    59,
      60,    -1,    -1,    63,    -1,    65,    -1,    67,    68,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      80,    -1,    82,    -1,    -1,    -1,    -1,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,
     110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,   122,    -1,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,    -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,
     170,    -1,   172,    -1,   174,    -1,     3,   177,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      -1,    -1,    -1,    40,    41,    42,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,
      -1,    -1,    59,    60,    -1,    -1,    63,    -1,    65,    -1,
      67,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    80,    -1,    82,    -1,    -1,    -1,    -1,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,    -1,   103,    -1,    -1,   106,
     107,   108,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,
      -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,    -1,
     177,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    36,    -1,    -1,    -1,    40,    41,
      42,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,
      -1,    63,    -1,    65,    -1,    67,    68,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,
      82,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,
     142,   143,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,
     162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,   171,
     172,    -1,   174,    -1,    -1,   177,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      -1,    -1,    -1,    40,    41,    42,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,
      -1,    -1,    59,    60,    -1,    -1,    63,    -1,    65,    -1,
      67,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    80,    -1,    82,    -1,    -1,    -1,    -1,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,    -1,   103,    -1,    -1,   106,
      -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,
      -1,   168,    -1,   170,    -1,   172,    -1,   174,   175,     3,
     177,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    36,    -1,    -1,    -1,    40,    41,    42,    -1,
      -1,    45,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,
      -1,    -1,    56,    -1,    -1,    59,    60,    -1,    -1,    63,
      -1,    65,    -1,    67,    68,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,    -1,
      -1,    -1,    -1,    87,    88,    89,    -1,    -1,    -1,    93,
      -1,    -1,    96,    97,    98,    99,   100,   101,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,
     164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,
     174,    -1,    -1,   177,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,    -1,
      -1,    40,    41,    42,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,    -1,
      59,    60,    -1,    -1,    63,    -1,    65,    -1,    67,    68,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,   174,   175,     3,   177,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      36,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,    45,
      46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      56,    -1,    -1,    59,    60,    -1,    -1,    63,    -1,    65,
      -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    80,    -1,    82,    -1,    -1,    -1,
      -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,   122,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
       3,   177,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    36,    -1,    -1,    -1,    40,    41,    42,
      -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,    -1,
      63,    -1,    65,    -1,    67,    68,    -1,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,
      -1,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,
     143,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,    -1,   177,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,
      -1,    -1,    40,    41,    42,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,
      -1,    59,    60,    -1,    -1,    63,    -1,    65,    -1,    67,
      68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,     3,   177,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    36,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    56,    -1,    -1,    59,    60,    -1,    -1,    63,    -1,
      65,    -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    80,    -1,    82,    -1,    -1,
      -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    -1,   103,    -1,
      -1,   106,    -1,    -1,    -1,   110,    -1,   112,   113,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,
      -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,
      -1,     3,   177,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    36,    -1,    -1,    -1,    40,    41,
      42,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,
      -1,    63,    -1,    65,    -1,    67,    68,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,
      82,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,
     142,   143,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,
     162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,
     172,    -1,   174,   175,     3,   177,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,    -1,
      -1,    40,    41,    42,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,    -1,
      59,    60,    -1,    -1,    63,    -1,    65,    -1,    67,    68,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,   110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,   174,    -1,    -1,   177,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    36,    -1,    -1,    -1,    40,    41,    42,    -1,
      -1,    45,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,
      -1,    -1,    56,    -1,    -1,    59,    60,    -1,    -1,    63,
      -1,    65,    -1,    67,    68,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,    -1,
      -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,
     164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,
     174,    -1,     3,   177,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    36,    -1,    -1,    -1,    40,
      41,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    -1,    -1,    59,    60,
      -1,    -1,    63,    -1,    65,    -1,    67,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,
      -1,    82,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
     111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,    -1,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      36,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,    45,
      46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      56,    -1,    -1,    59,    60,    -1,    -1,    63,    -1,    65,
      -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    80,    -1,    82,    -1,    -1,    -1,
      -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,   177,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    36,    -1,    -1,    -1,    40,
      41,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    -1,    -1,    59,    60,
      -1,    -1,    63,    -1,    65,    -1,    67,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,
      -1,    82,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,     3,   177,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,
      -1,    -1,    40,    41,    42,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,
      -1,    59,    60,    -1,    -1,    63,    -1,    65,    -1,    67,
      68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,     3,   177,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    36,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    56,    -1,    -1,    59,    60,    -1,    -1,    63,    -1,
      65,    -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    80,    -1,    82,    -1,    -1,
      -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    -1,   103,    -1,
      -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,
      -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,
      -1,     3,   177,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    36,    -1,    -1,    -1,    40,    41,
      42,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,
      -1,    63,    -1,    65,    -1,    67,    68,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,
      82,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,
     142,   143,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,
     162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,
     172,    -1,   174,    -1,     3,   177,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,    -1,
      -1,    40,    41,    42,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,    -1,
      59,    60,    -1,    -1,    63,    -1,    65,    -1,    67,    68,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,   168,
      -1,   170,    -1,   172,    -1,   174,    -1,     3,   177,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      36,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,    45,
      46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      56,    -1,    -1,    59,    60,    -1,    -1,    63,    -1,    65,
      -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    80,    -1,    82,    -1,    -1,    -1,
      -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,
       3,   177,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    36,    -1,    -1,    -1,    40,    41,    42,
      -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,    -1,
      63,    -1,    65,    -1,    67,    68,    -1,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,
      -1,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,
     143,   144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,
      -1,   174,    -1,     3,   177,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    36,    -1,    -1,    -1,
      40,    41,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    -1,    -1,    53,    -1,    -1,    56,    -1,    -1,    59,
      60,    -1,    -1,    63,    -1,    65,    -1,    67,    68,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      80,    -1,    82,    -1,    -1,    -1,    -1,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,
     110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,   141,   142,   143,   144,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,    -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,
     170,    -1,   172,    -1,   174,    -1,     3,   177,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      -1,    -1,    -1,    40,    41,    42,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,
      -1,    -1,    59,    60,    -1,    -1,    63,    -1,    65,    -1,
      67,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    80,    -1,    82,    -1,    -1,    -1,    -1,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,    -1,   103,    -1,    -1,   106,
      -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,   141,   142,   143,   144,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,
      -1,   168,    -1,   170,    -1,   172,    -1,   174,    -1,     3,
     177,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    36,    -1,    -1,    -1,    40,    41,    42,    -1,
      -1,    45,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,
      -1,    -1,    56,    -1,    -1,    59,    60,    -1,    -1,    63,
      -1,    65,    -1,    67,    68,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,    -1,
      -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,
     164,    -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,
     174,    -1,     3,   177,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    36,    -1,    -1,    -1,    40,
      41,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    -1,    -1,    59,    60,
      -1,    -1,    63,    -1,    65,    -1,    67,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,
      -1,    82,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,    -1,   174,    -1,     3,   177,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,
      -1,    -1,    40,    41,    42,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,
      -1,    59,    60,    -1,    -1,    63,    -1,    65,    -1,    67,
      68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,   170,    -1,   172,    -1,   174,    -1,     3,   177,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    36,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    56,    -1,    -1,    59,    60,    -1,    -1,    63,    -1,
      65,    -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    80,    -1,    82,    -1,    -1,
      -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,    -1,   103,    -1,
      -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,   162,   163,   164,
      -1,    -1,    -1,   168,    -1,   170,    -1,   172,    -1,   174,
      -1,     3,   177,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    36,    -1,    -1,    -1,    40,    41,
      42,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,
      -1,    63,    -1,    65,    -1,    67,    68,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,
      82,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,    -1,    -1,    -1,   140,   141,
     142,   143,   144,    12,    -1,    -1,    -1,   149,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,   159,    -1,    -1,
     162,   163,   164,    -1,    -1,    34,   168,    36,    -1,    -1,
     172,    40,   174,    -1,    -1,   177,    -1,    46,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    -1,
      99,    -1,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,   128,
     129,   130,    -1,    -1,   133,   134,   135,   136,    -1,   138,
     139,   140,   141,   142,   143,   144,   145,    -1,   147,    -1,
      -1,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,    -1,   163,    -1,    -1,   166,   167,   168,
     169,    -1,     3,   172,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    36,    -1,    -1,    -1,    40,
      41,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    -1,    -1,    59,    60,
      -1,    -1,    63,    -1,    65,    -1,    67,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,
      -1,    82,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,    -1,   163,   164,    -1,    -1,    -1,   168,    -1,   170,
      -1,   172,     3,   174,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    36,    -1,    -1,    -1,    40,
      41,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    -1,    -1,    59,    60,
      61,    -1,    63,    -1,    65,    -1,    67,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,
      -1,    82,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,   105,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    -1,   116,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,   164,   165,    25,    -1,    -1,    -1,   170,
      -1,   172,    -1,   174,    34,    -1,    36,    -1,    -1,    -1,
      40,    41,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    -1,    -1,    53,    -1,    -1,    56,    -1,    -1,    59,
      60,    -1,    -1,    63,    -1,    65,    -1,    67,    68,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      80,    -1,    82,    -1,    -1,    -1,    -1,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,
     110,    -1,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,    -1,   146,    -1,    -1,    -1,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,
     170,    -1,   172,   173,   174,     3,    -1,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,
      -1,    -1,    40,    41,    42,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,
      -1,    59,    60,    -1,    -1,    63,    -1,    65,    -1,    67,
      68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,    -1,   142,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,   164,    -1,    25,    -1,
      -1,    -1,   170,    -1,   172,    -1,   174,    34,    -1,    36,
      -1,    -1,    -1,    40,    41,    42,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,
      -1,    -1,    59,    60,    -1,    -1,    63,    -1,    65,    -1,
      67,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    80,    -1,    82,    -1,    -1,    -1,    -1,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,    -1,   103,    -1,    -1,   106,
      -1,    -1,    -1,   110,    -1,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,   164,    -1,    25,
      -1,    -1,    -1,   170,    -1,   172,    -1,   174,    34,    -1,
      36,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,    45,
      46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      56,    -1,    -1,    59,    60,    -1,    -1,    63,    -1,    65,
      -1,    67,    68,    -1,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    80,    -1,    82,    -1,    -1,    -1,
      -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,     3,    -1,   110,    -1,    -1,   113,    -1,    -1,
     116,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,   142,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,   172,    -1,   174,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    96,    97,    -1,    99,    -1,
     101,    19,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
      -1,    -1,   113,    -1,    32,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,   127,   128,   129,   130,
      -1,    -1,   133,   134,   135,   136,    -1,   138,   139,   140,
     141,   142,   143,   144,   145,    -1,   147,    -1,    -1,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,    -1,   163,    -1,    -1,   166,   167,   168,   169,    -1,
      12,    89,    -1,    -1,    -1,    93,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,    -1,    -1,   133,   134,   135,   136,    -1,
     138,   139,   140,   141,    -1,   143,   144,   145,    -1,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,   162,   163,    12,    89,   166,   167,
     168,    93,   170,    19,    -1,    -1,    -1,    -1,    -1,   177,
     102,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,   125,   126,   127,   128,   129,   130,    -1,
      -1,   133,   134,   135,   136,    -1,   138,   139,   140,   141,
      -1,   143,   144,   145,    -1,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
     162,   163,    12,    89,   166,   167,   168,    93,   170,    19,
      -1,    -1,    -1,    -1,    -1,   177,   102,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,
     126,   127,   128,   129,   130,    -1,    -1,   133,   134,   135,
     136,    -1,   138,   139,   140,   141,    -1,   143,   144,   145,
      -1,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,   162,   163,    12,    89,
     166,   167,   168,    93,   170,    19,    -1,    -1,    -1,    -1,
      -1,   177,   102,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,   129,
     130,    -1,    -1,   133,   134,   135,   136,    -1,   138,   139,
     140,   141,    -1,   143,   144,   145,    -1,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,   163,    12,    89,   166,   167,   168,    93,
     170,    19,    -1,    -1,    -1,    -1,    -1,   177,   102,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,   130,    -1,    -1,   133,
     134,   135,   136,    -1,   138,   139,   140,   141,    -1,   143,
     144,   145,    -1,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,    -1,   157,   158,   159,   160,   161,   162,   163,
      12,    89,   166,   167,   168,    93,   170,    19,    -1,    -1,
      -1,    -1,    -1,   177,   102,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,    -1,    -1,   133,   134,   135,   136,    -1,
     138,   139,   140,   141,    -1,   143,   144,   145,    -1,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,   162,   163,    12,    89,   166,   167,
     168,    93,   170,    19,    -1,    -1,    -1,    -1,    -1,   177,
     102,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,   125,   126,   127,   128,   129,   130,    -1,
      -1,   133,   134,   135,   136,    -1,   138,   139,   140,   141,
      -1,   143,   144,   145,    -1,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
     162,   163,    12,    89,   166,   167,   168,    93,   170,    19,
      -1,    -1,    -1,    -1,    -1,   177,   102,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,
     126,   127,   128,   129,   130,    -1,    -1,   133,   134,   135,
     136,    -1,   138,   139,   140,   141,    -1,   143,   144,   145,
      -1,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,   162,   163,    -1,    89,
     166,   167,   168,    93,   170,    -1,    -1,    -1,    -1,    -1,
      -1,   177,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,   129,
     130,    -1,    -1,   133,   134,   135,   136,    -1,   138,   139,
     140,   141,    -1,   143,   144,   145,    -1,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,   163,    12,    -1,   166,   167,   168,    -1,
     170,    19,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,
      48,    -1,    31,    -1,    -1,    -1,    -1,    36,    -1,    38,
      39,    -1,    -1,    12,    -1,    44,    -1,    -1,    -1,    -1,
      19,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    93,    -1,    -1,    77,    48,
      79,    -1,    81,    12,    83,    -1,    -1,    86,    -1,    88,
      19,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,    32,    33,    -1,   124,    -1,    -1,    -1,
     109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    48,
      89,    -1,   140,   141,    93,   143,   144,   145,    -1,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,   162,   163,    -1,    -1,   166,   167,
     168,   120,   170,    -1,    -1,   124,    -1,    -1,    -1,   177,
      89,    -1,    -1,    -1,    93,    -1,   165,    -1,    -1,    -1,
      -1,   140,   141,    -1,   143,   144,   145,    -1,   147,   148,
     149,    -1,   151,   152,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,   162,   163,   124,    -1,   166,   167,   168,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,
      -1,   140,   141,    -1,   143,   144,   145,    -1,   147,   148,
     149,    -1,   151,   152,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,   162,   163,    12,    13,   166,   167,   168,
      -1,   170,    19,    -1,    -1,    -1,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      37,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,    39,
      12,    -1,    -1,    -1,    44,    -1,    -1,    19,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    93,    77,    -1,    79,
      -1,    -1,    -1,    83,    -1,    12,    86,    -1,    88,    -1,
      90,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,   124,    -1,   109,
      -1,    -1,   112,    -1,    -1,   115,    -1,    89,    -1,    -1,
      -1,    93,    -1,   140,   141,    -1,   143,   144,   145,    -1,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,   162,   163,    -1,   120,   166,
     167,   168,   124,    -1,    32,    -1,    -1,    -1,    -1,    -1,
     177,    -1,    89,    -1,    -1,   165,    93,    -1,   140,   141,
      -1,   143,   144,   145,    -1,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
     162,   163,    -1,   120,   166,   167,   168,   124,   170,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    89,    -1,   140,   141,    93,   143,   144,   145,    -1,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,   162,   163,    12,    -1,   166,
     167,   168,    -1,   170,    19,    -1,    -1,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,   140,   141,    -1,   143,   144,   145,    -1,   147,
     148,   149,    -1,    48,   152,   153,   154,    12,    -1,   157,
     158,   159,   160,    -1,    19,   163,    -1,    -1,   166,   167,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,   177,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    12,    93,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    48,    89,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,    -1,   143,   144,
     145,    -1,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,    -1,   157,   158,   159,   160,   161,   162,   163,   124,
      -1,   166,   167,   168,    89,    -1,    -1,    -1,    93,    -1,
      -1,    -1,   177,    -1,    -1,   140,   141,    -1,   143,   144,
     145,    -1,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,    -1,   157,   158,   159,   160,   161,   162,   163,   124,
      -1,   166,   167,   168,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,   140,   141,    -1,   143,   144,
     145,    -1,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,    -1,   157,   158,   159,   160,   161,   162,   163,    12,
      -1,   166,   167,   168,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    12,
      93,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,
     143,   144,   145,    -1,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,   162,
     163,   124,    -1,   166,   167,   168,    89,    -1,    -1,    -1,
      93,    -1,    -1,    -1,   177,    -1,    -1,   140,   141,   102,
     143,   144,   145,    -1,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,   162,
     163,   124,    -1,   166,   167,   168,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,   177,    -1,    -1,   140,   141,    -1,
     143,   144,   145,    -1,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,   162,
     163,    12,    -1,   166,   167,   168,    -1,   170,    19,    -1,
      -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    32,    -1,    -1,   120,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,    -1,   143,   144,   145,    -1,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,   162,   163,   124,    -1,   166,   167,   168,    -1,    -1,
      -1,    -1,    -1,    89,   175,    -1,   177,    93,    -1,   140,
     141,    -1,   143,   144,   145,    -1,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,   162,   163,    12,    -1,   166,   167,   168,   124,    -1,
      19,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    32,   140,   141,    -1,   143,   144,   145,
      -1,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,   162,   163,    12,    -1,
     166,   167,   168,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    93,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    93,
      -1,   140,   141,    -1,   143,   144,   145,    -1,   147,   148,
     149,    -1,   151,   152,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,   162,   163,    -1,    -1,   166,   167,   168,
     124,   170,    -1,    -1,    -1,    89,    -1,    -1,   177,    93,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,   143,
     144,   145,    -1,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,    -1,   157,   158,   159,   160,   161,   162,   163,
     124,   165,   166,   167,   168,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   177,    -1,    -1,   140,   141,    -1,   143,
     144,   145,    -1,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,    -1,   157,   158,   159,   160,   161,   162,   163,
      12,   165,   166,   167,   168,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      12,    93,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,   124,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,
     102,   143,   144,   145,    -1,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
     162,   163,   124,    -1,   166,   167,   168,    89,    -1,    -1,
      -1,    93,    -1,    -1,    -1,   177,    -1,    -1,   140,   141,
      -1,   143,   144,   145,    -1,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
     162,   163,   124,    -1,   166,   167,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,   140,   141,
      -1,   143,   144,   145,    -1,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
     162,   163,    12,    13,   166,   167,   168,    -1,    -1,    19,
      -1,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,
     140,   141,    -1,   143,   144,   145,    -1,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,   163,   124,    -1,   166,   167,   168,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,   177,    93,    -1,
     140,   141,    -1,   143,   144,   145,    -1,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,    12,   120,   166,   167,   168,   124,
      -1,    19,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    32,   140,   141,    -1,   143,   144,
     145,    -1,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,    -1,   157,   158,   159,   160,   161,   162,   163,    12,
      -1,   166,   167,   168,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    93,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      93,    -1,   140,   141,    -1,   143,   144,   145,    -1,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,   162,   163,    -1,   165,   166,   167,
     168,   124,    -1,    -1,    -1,    -1,    89,    -1,    -1,   177,
      93,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,
     143,   144,   145,    -1,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,   162,
     163,   124,    -1,   166,   167,   168,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   177,    -1,    -1,   140,   141,    -1,
     143,   144,   145,    -1,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,   162,
     163,    12,    -1,   166,   167,   168,    -1,    -1,    19,    -1,
     173,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    93,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,   140,
     141,    -1,   143,   144,   145,    -1,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,   162,   163,   123,   124,   166,   167,   168,    -1,    -1,
      89,    -1,   173,    -1,    93,    -1,   177,    -1,    -1,    -1,
     140,   141,    -1,   143,   144,   145,    -1,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,   163,    -1,   124,   166,   167,   168,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   177,    19,    -1,
      -1,   140,   141,    -1,   143,   144,   145,    -1,   147,   148,
     149,    32,   151,   152,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,   162,   163,    -1,    -1,   166,   167,   168,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,   177,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    93,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,   140,
     141,    -1,   143,   144,   145,    -1,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,   162,   163,    -1,   124,   166,   167,   168,    -1,    -1,
      89,    -1,   173,    -1,    93,    -1,   177,    -1,    -1,    -1,
     140,   141,    -1,   143,   144,   145,    -1,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,   163,    -1,   124,   166,   167,   168,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   177,    19,    -1,
      -1,   140,   141,    -1,   143,   144,   145,    -1,   147,   148,
     149,    32,   151,   152,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,   162,   163,    -1,    -1,   166,   167,   168,
      -1,    -1,    12,    13,    -1,    -1,    -1,    -1,   177,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,   140,
     141,    -1,   143,   144,   145,    -1,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,   162,   163,    -1,   124,   166,   167,   168,    -1,    -1,
      12,    89,    -1,    -1,   175,    93,   177,    19,    -1,    -1,
     140,   141,    -1,   143,   144,   145,    -1,   147,   148,   149,
      32,   151,   152,   153,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,   163,    -1,    -1,   166,   167,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,
      -1,    -1,   140,   141,    -1,   143,   144,   145,    -1,   147,
     148,   149,    -1,   151,   152,   153,   154,    -1,    -1,   157,
     158,   159,   160,   161,    -1,   163,    12,    89,   166,   167,
     168,    93,    -1,    19,    -1,    -1,    -1,    -1,    -1,   177,
     102,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,
      -1,   143,   144,   145,    -1,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,    -1,   157,   158,   159,   160,   161,
     162,   163,    -1,    89,   166,   167,   168,    93,    -1,    -1,
      -1,    12,    13,    -1,    -1,   177,   102,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,    -1,   143,   144,   145,
      -1,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
      -1,   157,   158,   159,   160,   161,   162,   163,    -1,    -1,
     166,   167,   168,    -1,    -1,    -1,    -1,    12,    89,    -1,
      -1,   177,    93,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,   140,
     141,    -1,   143,   144,   145,    -1,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,   162,   163,    12,    89,   166,   167,   168,    93,    -1,
      19,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,    -1,   143,   144,
     145,    -1,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,    -1,   157,   158,   159,   160,   161,   162,   163,    12,
      89,   166,   167,   168,    93,    -1,    19,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,    -1,   143,   144,   145,    -1,   147,   148,
     149,    -1,   151,   152,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,   162,   163,    12,    89,   166,   167,   168,
      93,    -1,    19,    -1,    -1,    -1,   175,    -1,   177,   102,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,
     143,   144,   145,    -1,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,   162,
     163,    12,    89,   166,   167,   168,    93,    -1,    19,    -1,
      -1,    -1,    -1,    -1,   177,   102,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,   141,    -1,   143,   144,   145,    -1,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,   162,   163,    12,    89,   166,
     167,   168,    93,    -1,    19,    -1,    -1,    -1,    -1,    -1,
     177,   102,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,    -1,   143,   144,   145,    -1,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,   162,   163,    12,    89,   166,   167,   168,    93,    -1,
      19,    -1,    -1,    -1,    -1,    -1,   177,   102,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,    -1,   143,   144,
     145,    -1,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,    -1,   157,   158,   159,   160,   161,   162,   163,    12,
      89,   166,   167,   168,    93,    -1,    19,    -1,    -1,    -1,
      -1,    -1,   177,   102,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,    -1,   143,   144,   145,    -1,   147,   148,
     149,    -1,   151,   152,   153,   154,   155,    -1,   157,   158,
     159,   160,   161,   162,   163,    12,    89,   166,   167,   168,
      93,    -1,    19,    -1,    -1,    -1,    -1,    -1,   177,   102,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,
     143,   144,   145,    -1,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,    -1,   157,   158,   159,   160,   161,   162,
     163,    12,    89,   166,   167,   168,    93,    -1,    19,    -1,
      -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,   141,    -1,   143,   144,   145,    -1,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,    -1,
     157,   158,   159,   160,   161,   162,   163,    12,    89,   166,
     167,   168,    93,    -1,    19,    -1,    -1,    -1,   175,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,    -1,   143,   144,   145,    -1,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,    -1,   157,   158,   159,   160,
     161,   162,   163,    -1,    89,   166,   167,   168,    93,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,    -1,   143,   144,
     145,    -1,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,    -1,   157,   158,   159,   160,   161,   162,   163,    -1,
      89,   166,   167,   168,    93,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,    -1,   143,   144,   145,    -1,   147,   148,
     149,    -1,   151,   152,   153,   154,    -1,    -1,   157,   158,
     159,   160,   161,   162,   163,    -1,    89,   166,   167,   168,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,
     143,   144,   145,    -1,   147,   148,   149,    -1,   151,   152,
     153,   154,    -1,    -1,   157,   158,   159,   160,   161,     1,
     163,     3,    -1,   166,   167,   168,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   177,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    99,    -1,   101,
      -1,   103,    17,    18,   106,    20,    -1,    -1,   110,    -1,
      25,   113,    27,    -1,   116,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    96,    97,    -1,    99,    -1,   101,    -1,   103,     3,
      -1,   106,    -1,    -1,    -1,   110,    -1,    -1,   113,    -1,
     115,   116,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    96,    97,    -1,    99,    -1,   101,    -1,   103,
      17,    18,   106,    20,    -1,    -1,   110,    -1,    25,   113,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    96,
      97,    -1,    99,    -1,   101,    -1,   103,    17,    18,   106,
      20,    -1,    -1,   110,    -1,    25,   113,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    96,    97,    -1,    99,
      -1,   101,    -1,   103,    17,    18,   106,    20,    -1,    -1,
     110,    -1,    25,   113,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    -1,    99,    -1,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,   110,    -1,    -1,
     113,    -1,    -1,   116
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   182,   183,     0,     1,     3,     5,     6,     7,     8,
       9,    10,    14,    15,    16,    17,    18,    20,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    33,    34,
      36,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      49,    50,    51,    53,    56,    57,    58,    59,    60,    62,
      63,    64,    65,    67,    68,    70,    71,    72,    77,    78,
      79,    80,    81,    82,    83,    86,    87,    88,    90,    91,
      92,    94,    95,    96,    97,    98,    99,   100,   101,   103,
     104,   106,   107,   108,   109,   110,   112,   113,   115,   116,
     119,   121,   124,   140,   141,   142,   143,   144,   149,   159,
     162,   163,   164,   165,   168,   170,   172,   174,   177,   184,
     185,   186,   187,   188,   191,   192,   193,   194,   196,   197,
     198,   203,   204,   207,   208,   212,   214,   217,   221,   224,
     225,   226,   227,   228,   229,   231,   232,   234,   236,   239,
     240,   241,   242,   243,   247,   248,   253,   254,   255,   256,
     259,   260,   267,   268,   270,   271,   272,   273,   275,   276,
     301,   302,   306,   307,   328,   329,   330,   331,   332,   333,
     334,   342,   343,   344,   345,   346,   349,   350,   351,   352,
     353,   354,   355,   356,   358,   359,   360,   361,   362,   165,
     186,   346,   120,   335,   336,     3,   209,    14,    22,    36,
      41,    42,    45,    56,    88,   101,   170,   174,   239,   268,
     328,   333,   344,   345,   346,   349,   351,   352,   335,   346,
     109,   308,    90,   209,   186,   322,   346,     8,   190,   186,
     172,     3,    17,    18,    20,    25,    34,    40,    46,    50,
      53,    63,    70,    71,    78,    87,    96,    97,    99,   101,
     103,   106,   110,   113,   116,   211,   213,    11,   109,    79,
     122,   233,   346,   233,   346,   233,   346,    27,   115,   235,
     346,    83,    86,   194,   172,   211,   211,   211,   172,   211,
     309,   310,    33,   198,   216,   346,   251,   252,   346,   346,
      18,    78,    96,   113,   346,   346,   346,     8,   172,   223,
     222,     4,   296,   321,   346,   107,   108,   165,   346,   348,
     346,   216,   346,   346,   346,   100,   172,   186,   346,   346,
     187,   198,   187,   198,   346,   235,   346,   346,   346,   346,
     346,   346,   346,     1,   171,   184,   199,   321,   111,   150,
     296,   323,   324,   348,   233,   321,   346,   357,   346,    81,
     186,   170,    47,    85,   114,   195,    26,   307,   346,     8,
     255,   346,   347,    56,   145,   257,   211,     1,    31,   211,
     261,   263,   266,   172,   284,    54,    74,    84,   291,    27,
      79,    90,   109,   292,    27,    79,    90,   109,   290,   211,
     303,   304,   309,   164,   165,   156,   346,    12,    19,    32,
      89,    93,   124,   140,   141,   143,   144,   145,   147,   148,
     149,   151,   152,   153,   154,   155,   157,   158,   159,   160,
     161,   162,   163,   166,   167,   168,   177,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   169,   280,   172,   174,    89,    93,   172,   186,
     165,   346,   346,   346,   211,   321,    56,   170,   198,    48,
     335,   306,   165,   146,   165,   189,    22,    36,    39,    88,
     191,   194,   119,   212,   296,   325,   326,   327,   348,   170,
     211,   172,   216,    33,    48,   216,   120,   216,   338,    33,
      48,   216,   338,   216,   338,    48,   216,   338,   211,   211,
     102,   198,   102,   125,   198,   280,   195,   325,   172,   172,
     198,   186,   111,   172,   211,   311,   312,     1,   145,   316,
      48,   146,   186,   216,   146,   216,    13,   172,   172,   216,
     325,   224,   224,   146,   165,   346,   346,   165,   170,   216,
     172,   325,   165,   244,   244,   216,   216,   165,   171,   171,
     184,   146,   171,   346,   146,   173,   146,   173,   175,   338,
      48,   146,   175,   338,   123,   146,   175,     8,     1,   171,
     199,   205,   206,   346,   201,   346,    66,    37,    73,   165,
     255,   257,   230,   273,   211,   321,   170,   171,     8,   265,
     125,   146,   171,    27,    48,    52,    76,    79,    90,   109,
     185,   285,   286,   287,   288,   289,   292,    90,     1,   145,
     315,    90,     1,     3,    12,    17,    19,    20,    25,    40,
      46,    53,    55,    63,    70,    71,    87,    99,   103,   106,
     110,   116,   140,   141,   142,   143,   144,   145,   147,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     163,   166,   167,   168,   169,   172,   210,   211,   213,   277,
     278,   279,   280,   328,   125,   305,   146,   165,   165,   346,
     346,   346,   346,   233,   346,   233,   346,   346,   346,   346,
     346,   346,   346,     3,    20,    34,    63,   103,   109,   212,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,    69,   348,   348,
     348,   348,   348,   325,   325,   233,   346,   233,   346,    27,
      48,    90,   115,   337,   340,   341,   346,   362,    33,    48,
      33,    48,   102,   172,    48,   175,   211,   233,   346,   216,
     309,   346,   191,   346,   125,   173,   146,    48,   321,    45,
     346,   233,   346,   172,   216,    45,   346,   233,   346,   216,
     216,   233,   346,   216,   125,   125,   186,    35,   186,   346,
      35,   346,    66,   173,   326,   211,   237,   238,   312,   146,
     173,    34,    50,    97,   101,   174,   215,   317,   329,   125,
     313,   346,   310,   251,   211,   306,   346,   346,   173,   296,
     346,     1,   249,   327,   173,    21,   245,   171,   173,   173,
     323,   173,   323,   186,   175,   233,   346,   175,   186,   346,
     175,   346,   175,   346,   171,   171,   146,   165,    13,   148,
     146,   165,    13,    37,    73,   211,   140,   141,   142,   143,
     144,   159,   163,   168,   200,   279,   280,   281,   346,   200,
     202,   257,   170,   306,   165,   172,     1,   258,   264,   266,
     346,   262,    48,    90,   288,   146,   173,   172,   211,   316,
     174,   215,   314,   329,   105,   293,   172,   283,   346,   140,
     148,   283,   283,   317,   329,   304,   172,   174,   165,   165,
     165,   165,   165,   165,   173,   175,    48,    90,   146,   173,
      17,    20,    25,    46,    53,    63,    71,    87,    99,   110,
     116,   328,    89,    89,    45,   233,   346,    45,   233,   346,
     326,   233,   346,   172,   335,   335,   165,   165,   296,   348,
     327,   346,   173,   346,    33,   216,    33,   216,   339,   340,
     346,    33,   216,   338,    33,   216,   338,   216,   338,   216,
     338,   346,   346,    35,   186,    35,    35,   186,   102,   198,
     211,   173,   146,   173,   173,   311,   316,     1,   321,    69,
     348,   211,   173,   173,   171,    75,   117,   171,   250,   173,
     172,   198,   211,   246,   186,   175,   338,   175,   338,   186,
     123,   205,   212,   170,   281,   346,   111,   346,   200,   202,
     146,   165,    13,   165,   170,   258,   309,   326,   171,    31,
      83,    86,   171,   185,   218,   221,   266,   263,   211,   287,
     312,   145,   320,    61,   118,   297,     1,   175,   321,   297,
     286,   173,     3,   103,   278,   280,   173,   175,   340,   316,
     328,   328,   346,    33,    33,   346,    33,    33,   173,   175,
     175,   326,   216,   216,   216,   102,    45,   346,    45,   346,
     146,   173,   102,    45,   346,   216,    45,   346,   216,   216,
     216,   186,   186,   346,   186,    35,   165,   165,   238,   198,
     313,   175,    48,   175,   172,   172,    33,   186,   321,   246,
     145,   198,    45,   186,   346,   175,    45,   186,   346,   175,
     346,   200,    13,    37,    73,    37,    73,   165,   165,   281,
     346,   346,   258,   171,   165,   173,     8,   220,   218,   320,
     173,   174,   215,   296,   319,   329,   150,   282,   313,     3,
      92,   103,   298,   299,   300,   346,   269,   175,   314,   329,
     175,   274,   173,   283,   283,   313,   102,    45,    45,   102,
      45,    45,    45,    45,   173,   346,   346,   346,   340,   346,
     346,   346,    35,   186,   346,   317,   329,   325,   325,   186,
     216,   173,   346,   346,   186,   346,   186,   171,   111,   346,
     200,   202,   200,   202,    13,   171,   165,   219,   221,   282,
     313,   320,   175,   321,   296,   346,   300,   118,   146,   125,
     151,   153,   154,   157,   158,    61,   197,   217,   295,   314,
     329,   165,   294,   295,   346,   346,   346,   346,   346,   346,
     102,   102,   102,   102,   186,   175,   173,   173,   198,   102,
     102,   165,   165,   165,   165,   346,   221,   282,   313,   296,
     318,   319,   329,    48,   175,   346,   299,   300,   300,   300,
     300,   300,   300,   298,   102,   102,   102,   102,   102,   102,
     346,   346,   346,   346,   329,   164,   164,   346,   346,   346,
     318,   319,   175,   318
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   181,   182,   183,   183,   184,   184,   185,   185,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   188,   189,   188,   190,   188,   191,
     191,   192,   193,   193,   193,   194,   194,   194,   195,   195,
     196,   197,   197,   197,   198,   199,   199,   200,   200,   200,
     200,   200,   200,   201,   201,   201,   201,   201,   201,   202,
     202,   203,   203,   203,   203,   203,   203,   203,   204,   205,
     205,   205,   205,   206,   206,   207,   208,   208,   208,   208,
     208,   208,   209,   209,   210,   210,   210,   210,   210,   210,
     211,   211,   211,   211,   211,   211,   212,   212,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   215,
     215,   215,   215,   216,   216,   217,   217,   218,   219,   218,
     220,   218,   221,   221,   222,   221,   223,   221,   224,   224,
     224,   224,   224,   224,   224,   225,   225,   225,   225,   226,
     227,   227,   228,   229,   229,   229,   230,   229,   231,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   233,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   235,   235,   236,
     236,   237,   237,   238,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   240,   240,   240,
     240,   240,   240,   241,   241,   241,   242,   242,   242,   243,
     243,   243,   243,   244,   244,   245,   245,   245,   246,   246,
     247,   248,   248,   249,   249,   250,   250,   250,   251,   251,
     251,   252,   252,   253,   254,   254,   255,   256,   256,   256,
     257,   257,   258,   258,   258,   259,   259,   260,   261,   261,
     262,   261,   263,   264,   263,   265,   263,   266,   266,   267,
     269,   268,   270,   271,   271,   271,   272,   274,   273,   275,
     275,   275,   275,   275,   276,   277,   277,   278,   278,   278,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   281,   281,
     282,   282,   282,   283,   283,   284,   285,   285,   286,   286,
     287,   287,   287,   287,   287,   287,   288,   288,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   290,   290,   290,
     290,   290,   290,   291,   291,   291,   292,   292,   292,   292,
     292,   292,   293,   293,   294,   294,   295,   295,   296,   297,
     297,   297,   297,   297,   298,   298,   299,   299,   299,   299,
     299,   299,   299,   300,   300,   301,   302,   302,   302,   303,
     303,   304,   305,   305,   305,   306,   306,   306,   306,   306,
     308,   307,   307,   309,   309,   310,   310,   311,   311,   311,
     312,   312,   312,   313,   313,   313,   314,   314,   314,   314,
     314,   314,   314,   315,   315,   315,   315,   315,   316,   316,
     316,   316,   316,   317,   317,   317,   317,   318,   318,   318,
     319,   319,   319,   319,   319,   320,   320,   320,   320,   320,
     321,   321,   321,   321,   322,   322,   323,   323,   323,   324,
     324,   325,   325,   326,   326,   327,   327,   327,   327,   328,
     328,   329,   329,   329,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   332,   333,   334,   334,   334,   334,   334,
     334,   334,   334,   335,   335,   336,   337,   337,   338,   339,
     339,   340,   340,   340,   341,   341,   341,   341,   341,   341,
     342,   342,   343,   343,   343,   343,   343,   344,   344,   344,
     344,   344,   345,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     347,   347,   348,   348,   348,   349,   349,   349,   349,   350,
     350,   350,   350,   350,   351,   351,   351,   352,   352,   352,
     352,   352,   352,   353,   353,   353,   353,   354,   354,   355,
     355,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   357,   357,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   359,
     359,   359,   359,   359,   359,   359,   360,   360,   360,   360,
     361,   361,   361,   361,   362,   362,   362,   362,   362,   362,
     362
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     2,     3,     3,     3,     3,     2,     1,     1,
       1,     1,     1,     2,     1,     3,     3,     3,     3,     2,
       3,     3,     2,     2,     1,     0,     4,     0,     3,     1,
       1,     4,     3,     4,     4,     0,     1,     1,     0,     1,
       6,     2,     3,     3,     1,     1,     2,     1,     1,     3,
       3,     3,     5,     1,     3,     3,     3,     5,     5,     0,
       1,     4,     6,     8,     8,     6,     8,     8,     4,     1,
       3,     3,     5,     1,     3,     3,     4,     4,     4,     4,
       4,     4,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     3,     1,     0,     4,
       0,     3,     1,     1,     0,     3,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     5,     2,     1,
       1,     1,     1,     6,     7,     3,     0,     6,     2,     5,
       3,     3,     6,     6,     4,     5,     5,     3,     3,     6,
       5,     6,     5,     6,     3,     4,     3,     4,     5,     6,
       5,     6,     3,     4,     3,     4,     6,     7,     6,     7,
       4,     5,     4,     5,     4,     4,     3,     6,     5,     4,
       3,     6,     5,     6,     5,     8,     7,     4,     4,     6,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     4,     7,     5,     3,     6,     2,
       2,     3,     3,     0,     2,     2,     3,     5,     1,     3,
       3,     5,     5,     0,     2,     3,     2,     3,     4,     3,
       1,     1,     3,     3,     5,     5,     2,     1,     1,     1,
       0,     2,     0,     2,     3,     3,     3,     3,     1,     2,
       0,     4,     1,     0,     4,     0,     3,     1,     3,     1,
       0,     7,     0,     1,     1,     1,     1,     0,     7,     4,
       4,     6,     6,     4,     2,     1,     3,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     0,     3,     3,     1,     3,     0,     1,
       4,     5,     4,     5,     6,     6,     0,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     0,     1,     2,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     0,
       2,     2,     4,     4,     1,     3,     3,     3,     3,     3,
       3,     3,     2,     1,     1,     3,     1,     2,     2,     1,
       3,     2,     0,     2,     2,     1,     2,     1,     1,     1,
       0,     5,     3,     1,     3,     3,     5,     1,     1,     3,
       1,     2,     3,     0,     2,     2,     3,     2,     4,     3,
       3,     4,     3,     0,     2,     2,     2,     1,     0,     2,
       2,     2,     1,     4,     4,     6,     3,     0,     1,     1,
       3,     4,     3,     4,     6,     0,     2,     2,     2,     2,
       1,     1,     3,     3,     1,     3,     1,     1,     1,     3,
       3,     0,     1,     1,     3,     3,     3,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       4,     4,     4,     5,     2,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     6,     6,     4,     9,
       9,     7,     6,     6,     4,     9,     9,     7,     4,     6,
       6,     9,     9,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     1,     4,     1,     3,     4,     1,
       3,     4,     3,     3,     1,     1,     2,     1,     2,     1,
       1,     3,     1,     2,     2,     2,     2,     2,     8,     8,
       9,     9,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     3,     3,     2,     2,     2,     1,
       0,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     4,     4,     4,     3,     3,     3,
       3,     5,     5,     3,     4,     3,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     4,     3,     4,     3,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYCHPL_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYCHPL_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYCHPL_error or YYCHPL_UNDEF. */
#define YYERRCODE YYCHPL_UNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYCHPL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYCHPL_LTYPE_IS_TRIVIAL && YYCHPL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, context); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (context);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, context);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, ParserContext* context)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, context); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYCHPL_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYCHPL_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif
/* Parser data structure.  */
struct yypstate
  {
    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;
    /* Whether this instance has not started parsing yet.
     * If 2, it corresponds to a finished parsing.  */
    int yynew;
  };






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ParserContext* context)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (context);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}





#define yychpl_nerrs yyps->yychpl_nerrs
#define yystate yyps->yystate
#define yyerrstatus yyps->yyerrstatus
#define yyssa yyps->yyssa
#define yyss yyps->yyss
#define yyssp yyps->yyssp
#define yyvsa yyps->yyvsa
#define yyvs yyps->yyvs
#define yyvsp yyps->yyvsp
#define yylsa yyps->yylsa
#define yyls yyps->yyls
#define yylsp yyps->yylsp
#define yystacksize yyps->yystacksize

/* Initialize the parser data structure.  */
static void
yypstate_clear (yypstate *yyps)
{
  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

  /* Initialize the state stack, in case yypcontext_expected_tokens is
     called before the first call to yyparse. */
  *yyssp = 0;
  yyps->yynew = 1;
}

/* Initialize the parser data structure.  */
yypstate *
yypstate_new (void)
{
  yypstate *yyps;
  yyps = YY_CAST (yypstate *, YYMALLOC (sizeof *yyps));
  if (!yyps)
    return YY_NULLPTR;
  yystacksize = YYINITDEPTH;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yypstate_clear (yyps);
  return yyps;
}

void
yypstate_delete (yypstate *yyps)
{
  if (yyps)
    {
#ifndef yyoverflow
      /* If the stack was reallocated but the parse did not complete, then the
         stack still needs to be freed.  */
      if (yyss != yyssa)
        YYSTACK_FREE (yyss);
#endif
      YYFREE (yyps);
    }
}



/*---------------.
| yypush_parse.  |
`---------------*/

int
yypush_parse (yypstate *yyps,
              int yypushed_char, YYSTYPE const *yypushed_val, YYLTYPE *yypushed_loc, ParserContext* context)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYCHPL_LTYPE_IS_TRIVIAL && YYCHPL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  switch (yyps->yynew)
    {
    case 0:
      yyn = yypact[yystate];
      goto yyread_pushed_token;

    case 2:
      yypstate_clear (yyps);
      break;

    default:
      break;
    }

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYCHPL_EMPTY; /* Cause a token to be read.  */

  yylsp[0] = *yypushed_loc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYCHPL_EMPTY)
    {
      if (!yyps->yynew)
        {
          YYDPRINTF ((stderr, "Return for a new token:\n"));
          yyresult = YYPUSH_MORE;
          goto yypushreturn;
        }
      yyps->yynew = 0;
yyread_pushed_token:
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yypushed_char;
      if (yypushed_val)
        yylval = *yypushed_val;
      if (yypushed_loc)
        yylloc = *yypushed_loc;
    }

  if (yychar <= YYCHPL_EOF)
    {
      yychar = YYCHPL_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYCHPL_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYCHPL_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYCHPL_EMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: toplevel_stmt_ls  */
#line 601 "chpl.ypp"
                                      { context->topLevelStatements = (yyvsp[0].exprList); }
#line 6488 "bison-chpl-lib.cpp"
    break;

  case 3: /* toplevel_stmt_ls: %empty  */
#line 605 "chpl.ypp"
                                      { (yyval.exprList) = context->makeList(); }
#line 6494 "bison-chpl-lib.cpp"
    break;

  case 4: /* toplevel_stmt_ls: toplevel_stmt_ls toplevel_stmt  */
#line 606 "chpl.ypp"
                                      { (yyval.exprList) = context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt)); }
#line 6500 "bison-chpl-lib.cpp"
    break;

  case 6: /* toplevel_stmt: pragma_ls stmt  */
#line 613 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildPragmaStmt((yylsp[0]), (yyvsp[0].commentsAndStmt));
  }
#line 6508 "bison-chpl-lib.cpp"
    break;

  case 7: /* pragma_ls: TPRAGMA STRINGLITERAL  */
#line 621 "chpl.ypp"
  {
    context->notePragma((yyloc), (yyvsp[0].expr));
  }
#line 6516 "bison-chpl-lib.cpp"
    break;

  case 8: /* pragma_ls: pragma_ls TPRAGMA STRINGLITERAL  */
#line 625 "chpl.ypp"
  {
    auto loc = context->makeSpannedLocation((yylsp[-1]), (yylsp[0]));
    context->notePragma(loc, (yyvsp[0].expr));
  }
#line 6525 "bison-chpl-lib.cpp"
    break;

  case 10: /* stmt: deprecated_decl_stmt  */
#line 633 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6531 "bison-chpl-lib.cpp"
    break;

  case 11: /* stmt: include_module_stmt  */
#line 634 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6537 "bison-chpl-lib.cpp"
    break;

  case 12: /* stmt: block_stmt  */
#line 635 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6543 "bison-chpl-lib.cpp"
    break;

  case 13: /* stmt: use_stmt  */
#line 636 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6549 "bison-chpl-lib.cpp"
    break;

  case 14: /* stmt: import_stmt  */
#line 637 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6555 "bison-chpl-lib.cpp"
    break;

  case 15: /* stmt: require_stmt  */
#line 638 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6561 "bison-chpl-lib.cpp"
    break;

  case 16: /* stmt: extern_block_stmt  */
#line 639 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6567 "bison-chpl-lib.cpp"
    break;

  case 17: /* stmt: implements_stmt  */
#line 640 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6573 "bison-chpl-lib.cpp"
    break;

  case 18: /* stmt: interface_stmt  */
#line 641 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6579 "bison-chpl-lib.cpp"
    break;

  case 19: /* stmt: TDEFER stmt  */
#line 643 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-1]),
                               false, (yylsp[-1]), (yyvsp[0].commentsAndStmt));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Defer::build(BUILDER, LOC((yyloc)), blockStyle,
                             std::move(stmts));
    CommentsAndStmt ret = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(ret);
  }
#line 6596 "bison-chpl-lib.cpp"
    break;

  case 20: /* stmt: try_stmt  */
#line 655 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyloc), (yyvsp[0].commentsAndStmt)); }
#line 6602 "bison-chpl-lib.cpp"
    break;

  case 21: /* stmt: return_stmt  */
#line 656 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6608 "bison-chpl-lib.cpp"
    break;

  case 22: /* stmt: TATOMIC stmt  */
#line 657 "chpl.ypp"
                            { (yyval.commentsAndStmt) = TODOSTMT((yyloc)); }
#line 6614 "bison-chpl-lib.cpp"
    break;

  case 23: /* stmt: TBREAK opt_label_ident TSEMI  */
#line 659 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto ident = !(yyvsp[-1].uniqueStr).isEmpty() ? Identifier::build(BUILDER, LOC((yylsp[-1])), (yyvsp[-1].uniqueStr))
                               : nullptr;
    auto node = Break::build(BUILDER, LOC((yyloc)), std::move(ident));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6627 "bison-chpl-lib.cpp"
    break;

  case 24: /* stmt: TCONTINUE opt_label_ident TSEMI  */
#line 668 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto ident = !(yyvsp[-1].uniqueStr).isEmpty() ? Identifier::build(BUILDER, LOC((yylsp[-1])), (yyvsp[-1].uniqueStr))
                               : nullptr;
    auto node = Continue::build(BUILDER, LOC((yyloc)), std::move(ident));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6640 "bison-chpl-lib.cpp"
    break;

  case 25: /* stmt: TLABEL ident_def stmt  */
#line 677 "chpl.ypp"
  {
    if ((yyvsp[0].commentsAndStmt).stmt && ((yyvsp[0].commentsAndStmt).stmt->isFor() || (yyvsp[0].commentsAndStmt).stmt->isWhile() || (yyvsp[0].commentsAndStmt).stmt->isDoWhile())) {
      auto exprLst = context->makeList((yyvsp[0].commentsAndStmt));
      auto comments = context->gatherCommentsFromList(exprLst, (yylsp[-2]));
      auto astLst = context->consumeList(exprLst);
      Loop* loop = nullptr;
      for (auto& ast : astLst) {
        if (ast->isLoop()) {
          loop = ast.release()->toLoop();
          break;
        }
      }
      assert(loop);
      auto node = Label::build(BUILDER, LOC((yyloc)), (yyvsp[-1].uniqueStr), toOwned(loop));
      (yyval.commentsAndStmt) = { .comments=comments, .stmt=node.release() };
    } else {
      const char* msg = "can only label for-, while-do- "
                        "and do-while-statements";
      auto err = context->raiseError((yyloc), msg);
      (yyval.commentsAndStmt) = context->finishStmt(err);
    }
  }
#line 6667 "bison-chpl-lib.cpp"
    break;

  case 26: /* stmt: TYIELD expr TSEMI  */
#line 700 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Yield::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6678 "bison-chpl-lib.cpp"
    break;

  case 27: /* stmt: error TSEMI  */
#line 707 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = STMT((yyloc), ErroneousExpression::build(BUILDER, LOC((yylsp[-1]))));
    context->resetDeclState();
  }
#line 6687 "bison-chpl-lib.cpp"
    break;

  case 28: /* tryable_stmt: assignment_stmt  */
#line 714 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6693 "bison-chpl-lib.cpp"
    break;

  case 29: /* tryable_stmt: if_stmt  */
#line 715 "chpl.ypp"
                            { (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt); }
#line 6699 "bison-chpl-lib.cpp"
    break;

  case 30: /* tryable_stmt: loop_stmt  */
#line 716 "chpl.ypp"
                            { (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt); }
#line 6705 "bison-chpl-lib.cpp"
    break;

  case 31: /* tryable_stmt: select_stmt  */
#line 717 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6711 "bison-chpl-lib.cpp"
    break;

  case 32: /* tryable_stmt: manage_stmt  */
#line 718 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6717 "bison-chpl-lib.cpp"
    break;

  case 33: /* tryable_stmt: stmt_level_expr TSEMI  */
#line 719 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt(STMT((yyloc),(yyvsp[-1].expr))); }
#line 6723 "bison-chpl-lib.cpp"
    break;

  case 34: /* tryable_stmt: throw_stmt  */
#line 720 "chpl.ypp"
                            { (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt)); }
#line 6729 "bison-chpl-lib.cpp"
    break;

  case 35: /* tryable_stmt: TBEGIN opt_task_intent_ls stmt  */
#line 722 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    YYLTYPE locBodyAnchor = context->makeLocationAtLast((yylsp[-1]));
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]),
                               false, locBodyAnchor, (yyvsp[0].commentsAndStmt));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Begin::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].withClause)), blockStyle,
                             std::move(stmts));
    CommentsAndStmt ret = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(ret);
  }
#line 6747 "bison-chpl-lib.cpp"
    break;

  case 36: /* tryable_stmt: TCOBEGIN opt_task_intent_ls block_stmt  */
#line 736 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    YYLTYPE locBodyAnchor = context->makeLocationAtLast((yylsp[-1]));
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]),
                               false, locBodyAnchor, (yyvsp[0].commentsAndStmt));
    assert(blockStyle == BlockStyle::EXPLICIT);
    auto taskBodies = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Cobegin::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].withClause)),
                               std::move(taskBodies));
    CommentsAndStmt ret = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(ret);
  }
#line 6766 "bison-chpl-lib.cpp"
    break;

  case 37: /* tryable_stmt: TDELETE simple_expr_ls TSEMI  */
#line 751 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = Delete::build(BUILDER, LOC((yyloc)), std::move(exprs));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6778 "bison-chpl-lib.cpp"
    break;

  case 38: /* tryable_stmt: TLOCAL expr do_stmt  */
#line 759 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Local::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)), blockStyle,
                             std::move(stmts));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6794 "bison-chpl-lib.cpp"
    break;

  case 39: /* tryable_stmt: TLOCAL do_stmt  */
#line 771 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-1]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Local::build(BUILDER, LOC((yyloc)), blockStyle, std::move(stmts));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6809 "bison-chpl-lib.cpp"
    break;

  case 40: /* tryable_stmt: TON expr do_stmt  */
#line 782 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = On::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)), blockStyle,
                          std::move(stmts));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6825 "bison-chpl-lib.cpp"
    break;

  case 41: /* tryable_stmt: TSERIAL expr do_stmt  */
#line 794 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Serial::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)), blockStyle,
                              std::move(stmts));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6841 "bison-chpl-lib.cpp"
    break;

  case 42: /* tryable_stmt: TSERIAL do_stmt  */
#line 806 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-1]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Serial::build(BUILDER, LOC((yyloc)), blockStyle, std::move(stmts));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 6856 "bison-chpl-lib.cpp"
    break;

  case 43: /* tryable_stmt: TSYNC stmt  */
#line 817 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-1]),
                               false, (yylsp[-1]), (yyvsp[0].commentsAndStmt));
    auto stmts = context->consumeAndFlattenTopLevelBlocks(exprLst);
    auto node = Sync::build(BUILDER, LOC((yyloc)), blockStyle,
                            std::move(stmts));
    CommentsAndStmt ret = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(ret);
  }
#line 6873 "bison-chpl-lib.cpp"
    break;

  case 45: /* $@1: %empty  */
#line 834 "chpl.ypp"
  {
    context->noteDeprecation((yyloc), (yyvsp[0].expr));
  }
#line 6881 "bison-chpl-lib.cpp"
    break;

  case 46: /* deprecated_decl_stmt: TDEPRECATED STRINGLITERAL $@1 deprecated_decl_base  */
#line 838 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt);
  }
#line 6889 "bison-chpl-lib.cpp"
    break;

  case 47: /* $@2: %empty  */
#line 842 "chpl.ypp"
  {
    context->noteDeprecation((yyloc), nullptr);
  }
#line 6897 "bison-chpl-lib.cpp"
    break;

  case 48: /* deprecated_decl_stmt: TDEPRECATED $@2 deprecated_decl_base  */
#line 846 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt);
  }
#line 6905 "bison-chpl-lib.cpp"
    break;

  case 51: /* module_decl_start: opt_access_control opt_prototype TMODULE ident_def  */
#line 858 "chpl.ypp"
    {
      // take into account location of public/private, if any
      auto loc = context->declStartLoc((yylsp[-1]));

      ModuleParts parts = {
        .comments=context->gatherComments(loc),
        .attributes=context->buildAttributes((yyloc)).release(),
        .visibility=(yyvsp[-3].visibilityTag),
        .kind=(yyvsp[-2].moduleKind),
        .name=(yyvsp[0].uniqueStr)
      };

      (yyval.moduleParts) = parts;
      context->resetDeclState();
      context->clearComments();
    }
#line 6926 "bison-chpl-lib.cpp"
    break;

  case 52: /* module_decl_stmt: module_decl_start TLCBR TRCBR  */
#line 878 "chpl.ypp"
    {
      context->clearCommentsBefore((yylsp[-1]));

      ModuleParts parts = (yyvsp[-2].moduleParts);
      ParserExprList* body = context->makeList();
      context->appendList(body, context->gatherComments((yylsp[0])));
      auto mod = Module::build(BUILDER, LOC((yylsp[-2])), toOwned(parts.attributes),
                               parts.visibility,
                               parts.name,
                               parts.kind,
                               context->consumeList(body));
      CommentsAndStmt cs = {parts.comments, mod.release()};
      (yyval.commentsAndStmt) = cs;
    }
#line 6945 "bison-chpl-lib.cpp"
    break;

  case 53: /* module_decl_stmt: module_decl_start TLCBR stmt_ls TRCBR  */
#line 893 "chpl.ypp"
    {
      context->clearCommentsBefore((yylsp[-2]));

      ModuleParts parts = (yyvsp[-3].moduleParts);
      ParserExprList* body = (yyvsp[-1].exprList);
      context->appendList(body, context->gatherComments((yylsp[0])));
      auto mod = Module::build(BUILDER, LOC((yylsp[-3])), toOwned(parts.attributes),
                               parts.visibility,
                               parts.name,
                               parts.kind,
                               context->consumeList(body));
      CommentsAndStmt cs = {parts.comments, mod.release()};
      (yyval.commentsAndStmt) = cs;
    }
#line 6964 "bison-chpl-lib.cpp"
    break;

  case 54: /* module_decl_stmt: module_decl_start TLCBR error TRCBR  */
#line 908 "chpl.ypp"
    {
      ModuleParts parts = (yyvsp[-3].moduleParts);
      auto err = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
      ParserExprList* body = context->makeList(std::move(err));
      auto mod = Module::build(BUILDER, LOC((yylsp[-3])), toOwned(parts.attributes),
                               parts.visibility,
                               parts.name,
                               parts.kind,
                               context->consumeList(body));
      CommentsAndStmt cs = {parts.comments, mod.release()};
      (yyval.commentsAndStmt) = cs;
    }
#line 6981 "bison-chpl-lib.cpp"
    break;

  case 55: /* opt_access_control: %empty  */
#line 923 "chpl.ypp"
           { (yyval.visibilityTag) = context->noteVisibility(Decl::DEFAULT_VISIBILITY); }
#line 6987 "bison-chpl-lib.cpp"
    break;

  case 56: /* opt_access_control: TPUBLIC  */
#line 924 "chpl.ypp"
           { context->noteDeclStartLoc((yylsp[0]));
             (yyval.visibilityTag) = context->noteVisibility(Decl::PUBLIC); }
#line 6994 "bison-chpl-lib.cpp"
    break;

  case 57: /* opt_access_control: TPRIVATE  */
#line 926 "chpl.ypp"
           { context->noteDeclStartLoc((yylsp[0]));
             (yyval.visibilityTag) = context->noteVisibility(Decl::PRIVATE); }
#line 7001 "bison-chpl-lib.cpp"
    break;

  case 58: /* opt_prototype: %empty  */
#line 931 "chpl.ypp"
             { (yyval.moduleKind) = Module::DEFAULT_MODULE_KIND; }
#line 7007 "bison-chpl-lib.cpp"
    break;

  case 59: /* opt_prototype: TPROTOTYPE  */
#line 932 "chpl.ypp"
             { context->noteDeclStartLoc((yylsp[0]));
               (yyval.moduleKind) = Module::PROTOTYPE;  }
#line 7014 "bison-chpl-lib.cpp"
    break;

  case 60: /* include_module_stmt: TINCLUDE opt_access_control opt_prototype TMODULE ident_def TSEMI  */
#line 938 "chpl.ypp"
  {
    auto node = Include::build(BUILDER, LOC((yyloc)), context->visibility, (yyvsp[-3].moduleKind), (yyvsp[-1].uniqueStr));
    (yyval.commentsAndStmt) = STMT((yyloc), node.release());
    context->visibility = Decl::DEFAULT_VISIBILITY;
  }
#line 7024 "bison-chpl-lib.cpp"
    break;

  case 61: /* block_stmt_body: TLCBR TRCBR  */
#line 956 "chpl.ypp"
  {
    (yyval.exprList) = context->blockToParserExprList((yylsp[-1]), (yylsp[0]), nullptr);
  }
#line 7032 "bison-chpl-lib.cpp"
    break;

  case 62: /* block_stmt_body: TLCBR stmt_ls TRCBR  */
#line 960 "chpl.ypp"
  {
    (yyval.exprList) = context->blockToParserExprList((yylsp[-2]), (yylsp[0]), (yyvsp[-1].exprList));
  }
#line 7040 "bison-chpl-lib.cpp"
    break;

  case 63: /* block_stmt_body: TLCBR error TRCBR  */
#line 964 "chpl.ypp"
  {
    context->clearComments();
    // create a list of stmts that just has an ErroneousExpr
    auto errorExpr = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
    ParserExprList* lst = context->makeList(errorExpr.release());
    (yyval.exprList) = lst;
  }
#line 7052 "bison-chpl-lib.cpp"
    break;

  case 64: /* block_stmt: block_stmt_body  */
#line 975 "chpl.ypp"
  {
    // comments from before the opening bracket will have been
    // gathered into stmt_ls when that was parsed, so pull out any
    // comments that occur before the opening bracket.
    // (This would be simpler to handle with midrule actions but those
    //  lead to parser conflicts).
    CommentsAndStmt cs = {0};
    cs.comments = context->gatherCommentsFromList((yyvsp[0].exprList), (yylsp[0]));

    // Create the BlockStmt
    auto blockstmt = Block::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[0].exprList)));
    cs.stmt = blockstmt.release();
    (yyval.commentsAndStmt) = cs;
  }
#line 7071 "bison-chpl-lib.cpp"
    break;

  case 65: /* stmt_ls: toplevel_stmt  */
#line 993 "chpl.ypp"
                                       { (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt)); }
#line 7077 "bison-chpl-lib.cpp"
    break;

  case 66: /* stmt_ls: stmt_ls toplevel_stmt  */
#line 994 "chpl.ypp"
                                       { context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt)); }
#line 7083 "bison-chpl-lib.cpp"
    break;

  case 67: /* renames_ls: expr  */
#line 999 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].expr));
  }
#line 7091 "bison-chpl-lib.cpp"
    break;

  case 68: /* renames_ls: all_op_name  */
#line 1003 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList(context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
  }
#line 7099 "bison-chpl-lib.cpp"
    break;

  case 69: /* renames_ls: expr TAS expr  */
#line 1007 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    (yyval.exprList) = context->makeList(as);
  }
#line 7108 "bison-chpl-lib.cpp"
    break;

  case 70: /* renames_ls: renames_ls TCOMMA expr  */
#line 1012 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 7116 "bison-chpl-lib.cpp"
    break;

  case 71: /* renames_ls: renames_ls TCOMMA all_op_name  */
#line 1016 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
  }
#line 7124 "bison-chpl-lib.cpp"
    break;

  case 72: /* renames_ls: renames_ls TCOMMA expr TAS expr  */
#line 1020 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), as);
  }
#line 7133 "bison-chpl-lib.cpp"
    break;

  case 73: /* use_renames_ls: expr  */
#line 1030 "chpl.ypp"
  {
    auto node = context->buildVisibilityClause((yyloc), toOwned((yyvsp[0].expr)));
    (yyval.exprList) = context->makeList(node);
  }
#line 7142 "bison-chpl-lib.cpp"
    break;

  case 74: /* use_renames_ls: expr TAS expr  */
#line 1035 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    auto node = context->buildVisibilityClause((yyloc), toOwned(as));
    (yyval.exprList) = context->makeList(node);
  }
#line 7152 "bison-chpl-lib.cpp"
    break;

  case 75: /* use_renames_ls: expr TAS TUNDERSCORE  */
#line 1041 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), std::move(ident));
    auto node = context->buildVisibilityClause((yyloc), toOwned(as));
    (yyval.exprList) = context->makeList(node);
  }
#line 7163 "bison-chpl-lib.cpp"
    break;

  case 76: /* use_renames_ls: use_renames_ls TCOMMA expr  */
#line 1048 "chpl.ypp"
  {
    auto node = context->buildVisibilityClause((yylsp[0]), toOwned((yyvsp[0].expr)));
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), node);
  }
#line 7172 "bison-chpl-lib.cpp"
    break;

  case 77: /* use_renames_ls: use_renames_ls TCOMMA expr TAS expr  */
#line 1053 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned((yyvsp[0].expr)));
    auto locVisClause = context->makeSpannedLocation((yylsp[-2]), (yylsp[0]));
    auto node = context->buildVisibilityClause(locVisClause, toOwned(as));
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), node);
  }
#line 7183 "bison-chpl-lib.cpp"
    break;

  case 78: /* use_renames_ls: use_renames_ls TCOMMA expr TAS TUNDERSCORE  */
#line 1060 "chpl.ypp"
  {
    auto ident = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr));
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), toOwned(ident));
    auto locVisClause = context->makeSpannedLocation((yylsp[-2]), (yylsp[0]));
    auto node = context->buildVisibilityClause(locVisClause, toOwned(as));
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), node);
  }
#line 7195 "bison-chpl-lib.cpp"
    break;

  case 79: /* opt_only_ls: %empty  */
#line 1070 "chpl.ypp"
                  { (yyval.exprList) = nullptr; }
#line 7201 "bison-chpl-lib.cpp"
    break;

  case 80: /* opt_only_ls: renames_ls  */
#line 1071 "chpl.ypp"
                  { (yyval.exprList) = (yyvsp[0].exprList); }
#line 7207 "bison-chpl-lib.cpp"
    break;

  case 81: /* use_stmt: opt_access_control TUSE use_renames_ls TSEMI  */
#line 1076 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildMultiUseStmt((yyloc), (yyvsp[-3].visibilityTag), (yyvsp[-1].exprList));
  }
#line 7215 "bison-chpl-lib.cpp"
    break;

  case 82: /* use_stmt: opt_access_control TUSE expr TEXCEPT renames_ls TSEMI  */
#line 1080 "chpl.ypp"
  {
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-3]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-5].visibilityTag), toOwned((yyvsp[-3].expr)),
                                     VisibilityClause::EXCEPT,
                                     (yyvsp[-1].exprList));
  }
#line 7226 "bison-chpl-lib.cpp"
    break;

  case 83: /* use_stmt: opt_access_control TUSE expr TAS expr TEXCEPT renames_ls TSEMI  */
#line 1087 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-5]), (yylsp[-3]), toOwned((yyvsp[-5].expr)), toOwned((yyvsp[-3].expr)));
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-5]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-7].visibilityTag), toOwned(as),
                                     VisibilityClause::EXCEPT,
                                     (yyvsp[-1].exprList));
  }
#line 7238 "bison-chpl-lib.cpp"
    break;

  case 84: /* use_stmt: opt_access_control TUSE expr TAS TUNDERSCORE TEXCEPT renames_ls TSEMI  */
#line 1095 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[-3]), (yyvsp[-3].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-5]), (yylsp[-3]), toOwned((yyvsp[-5].expr)), std::move(ident));
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-5]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-7].visibilityTag), toOwned(as),
                                     VisibilityClause::EXCEPT,
                                     (yyvsp[-1].exprList));
  }
#line 7251 "bison-chpl-lib.cpp"
    break;

  case 85: /* use_stmt: opt_access_control TUSE expr TONLY opt_only_ls TSEMI  */
#line 1104 "chpl.ypp"
  {
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-3]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-5].visibilityTag), toOwned((yyvsp[-3].expr)),
                                     VisibilityClause::ONLY,
                                     (yyvsp[-1].exprList));
  }
#line 7262 "bison-chpl-lib.cpp"
    break;

  case 86: /* use_stmt: opt_access_control TUSE expr TAS expr TONLY opt_only_ls TSEMI  */
#line 1111 "chpl.ypp"
  {
    auto as = context->buildAsExpr((yylsp[-5]), (yylsp[-3]), toOwned((yyvsp[-5].expr)), toOwned((yyvsp[-3].expr)));
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-5]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-7].visibilityTag), toOwned(as),
                                     VisibilityClause::ONLY,
                                     (yyvsp[-1].exprList));
  }
#line 7274 "bison-chpl-lib.cpp"
    break;

  case 87: /* use_stmt: opt_access_control TUSE expr TAS TUNDERSCORE TONLY opt_only_ls TSEMI  */
#line 1119 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[-3]), (yyvsp[-3].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-5]), (yylsp[-3]), toOwned((yyvsp[-5].expr)), std::move(ident));
    auto locVisibilityClause = context->makeSpannedLocation((yylsp[-5]), (yylsp[-1]));
    (yyval.commentsAndStmt) = context->buildSingleUseStmt((yyloc), locVisibilityClause, (yyvsp[-7].visibilityTag), toOwned(as),
                                     VisibilityClause::ONLY,
                                     (yyvsp[-1].exprList));
  }
#line 7287 "bison-chpl-lib.cpp"
    break;

  case 88: /* import_stmt: opt_access_control TIMPORT import_ls TSEMI  */
#line 1131 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildImportStmt((yyloc), (yyvsp[-3].visibilityTag), (yyvsp[-1].exprList));
  }
#line 7295 "bison-chpl-lib.cpp"
    break;

  case 89: /* import_expr: expr  */
#line 1138 "chpl.ypp"
  {
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned((yyvsp[0].expr)));
  }
#line 7303 "bison-chpl-lib.cpp"
    break;

  case 90: /* import_expr: expr TDOT all_op_name  */
#line 1142 "chpl.ypp"
  {
    auto dot = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release();
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned(dot));
  }
#line 7312 "bison-chpl-lib.cpp"
    break;

  case 91: /* import_expr: expr TAS ident_use  */
#line 1147 "chpl.ypp"
  {
    auto ident = toOwned(context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)));
    auto as = context->buildAsExpr((yylsp[-2]), (yylsp[0]), toOwned((yyvsp[-2].expr)), std::move(ident));
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned(as));
  }
#line 7322 "bison-chpl-lib.cpp"
    break;

  case 92: /* import_expr: expr TDOT TLCBR renames_ls TRCBR  */
#line 1153 "chpl.ypp"
  {
    (yyval.expr) = context->buildVisibilityClause((yyloc), toOwned((yyvsp[-4].expr)),
                                        VisibilityClause::BRACES,
                                        context->consumeList((yyvsp[-1].exprList)));
  }
#line 7332 "bison-chpl-lib.cpp"
    break;

  case 93: /* import_ls: import_expr  */
#line 1161 "chpl.ypp"
                                { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 7338 "bison-chpl-lib.cpp"
    break;

  case 94: /* import_ls: import_ls TCOMMA import_expr  */
#line 1162 "chpl.ypp"
                                { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 7344 "bison-chpl-lib.cpp"
    break;

  case 95: /* require_stmt: TREQUIRE expr_ls TSEMI  */
#line 1167 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Require::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList)));
    (yyval.commentsAndStmt) = { .comments=comments, .stmt=node.release() };
  }
#line 7354 "bison-chpl-lib.cpp"
    break;

  case 96: /* assignment_stmt: lhs_expr assignop_ident opt_try_expr TSEMI  */
#line 1176 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7362 "bison-chpl-lib.cpp"
    break;

  case 97: /* assignment_stmt: lhs_expr TSWAP opt_try_expr TSEMI  */
#line 1180 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7370 "bison-chpl-lib.cpp"
    break;

  case 98: /* assignment_stmt: lhs_expr TASSIGNREDUCE opt_try_expr TSEMI  */
#line 1184 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7378 "bison-chpl-lib.cpp"
    break;

  case 99: /* assignment_stmt: lhs_expr TASSIGNLAND opt_try_expr TSEMI  */
#line 1188 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7386 "bison-chpl-lib.cpp"
    break;

  case 100: /* assignment_stmt: lhs_expr TASSIGNLOR opt_try_expr TSEMI  */
#line 1192 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr)));
    }
#line 7394 "bison-chpl-lib.cpp"
    break;

  case 101: /* assignment_stmt: lhs_expr TASSIGN TNOINIT TSEMI  */
#line 1196 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildBinOp((yyloc), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), context->buildIdent((yylsp[-1]), (yyvsp[-1].uniqueStr))));
    }
#line 7402 "bison-chpl-lib.cpp"
    break;

  case 102: /* opt_label_ident: %empty  */
#line 1204 "chpl.ypp"
         { (yyval.uniqueStr) = STR(""); }
#line 7408 "bison-chpl-lib.cpp"
    break;

  case 103: /* opt_label_ident: TIDENT  */
#line 1205 "chpl.ypp"
         { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7414 "bison-chpl-lib.cpp"
    break;

  case 104: /* ident_fn_def: TIDENT  */
#line 1209 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7420 "bison-chpl-lib.cpp"
    break;

  case 105: /* ident_fn_def: TNONE  */
#line 1210 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); ERROR((yyloc), "attempt to redefine reserved word 'none'"); }
#line 7426 "bison-chpl-lib.cpp"
    break;

  case 106: /* ident_fn_def: TTHIS  */
#line 1211 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7432 "bison-chpl-lib.cpp"
    break;

  case 107: /* ident_fn_def: TFALSE  */
#line 1212 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); ERROR((yyloc), "attempt to redefine reserved word 'false'"); }
#line 7438 "bison-chpl-lib.cpp"
    break;

  case 108: /* ident_fn_def: TTRUE  */
#line 1213 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); ERROR((yyloc), "attempt to redefine reserved word 'true'"); }
#line 7444 "bison-chpl-lib.cpp"
    break;

  case 109: /* ident_fn_def: internal_type_ident_def  */
#line 1214 "chpl.ypp"
                           { std::string msg = "attempt to redefine reserved type '";
                             msg += (yyvsp[0].uniqueStr).c_str();
                             msg += "'";
                             (yyval.uniqueStr) = (yyvsp[0].uniqueStr); ERROR((yyloc), msg); }
#line 7453 "bison-chpl-lib.cpp"
    break;

  case 110: /* ident_def: TIDENT  */
#line 1220 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7459 "bison-chpl-lib.cpp"
    break;

  case 111: /* ident_def: TNONE  */
#line 1221 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); ERROR((yyloc), "attempt to redefine reserved word 'none'"); }
#line 7465 "bison-chpl-lib.cpp"
    break;

  case 112: /* ident_def: TTHIS  */
#line 1222 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); ERROR((yyloc), "attempt to redefine reserved word 'this'"); }
#line 7471 "bison-chpl-lib.cpp"
    break;

  case 113: /* ident_def: TFALSE  */
#line 1223 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); ERROR((yyloc), "attempt to redefine reserved word 'false'"); }
#line 7477 "bison-chpl-lib.cpp"
    break;

  case 114: /* ident_def: TTRUE  */
#line 1224 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); ERROR((yyloc), "attempt to redefine reserved word 'true'"); }
#line 7483 "bison-chpl-lib.cpp"
    break;

  case 115: /* ident_def: internal_type_ident_def  */
#line 1225 "chpl.ypp"
                           { std::string msg = "attempt to redefine reserved type '";
                             msg += (yyvsp[0].uniqueStr).c_str();
                             msg += "'";
                             (yyval.uniqueStr) = (yyvsp[0].uniqueStr); ERROR((yyloc), msg); }
#line 7492 "bison-chpl-lib.cpp"
    break;

  case 116: /* ident_use: TIDENT  */
#line 1240 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7498 "bison-chpl-lib.cpp"
    break;

  case 117: /* ident_use: TTHIS  */
#line 1241 "chpl.ypp"
                           { (yyval.uniqueStr) = (yyvsp[0].uniqueStr); }
#line 7504 "bison-chpl-lib.cpp"
    break;

  case 137: /* scalar_type: TBOOL  */
#line 1274 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7510 "bison-chpl-lib.cpp"
    break;

  case 138: /* scalar_type: TENUM  */
#line 1275 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7516 "bison-chpl-lib.cpp"
    break;

  case 139: /* scalar_type: TINT  */
#line 1276 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7522 "bison-chpl-lib.cpp"
    break;

  case 140: /* scalar_type: TUINT  */
#line 1277 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7528 "bison-chpl-lib.cpp"
    break;

  case 141: /* scalar_type: TREAL  */
#line 1278 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7534 "bison-chpl-lib.cpp"
    break;

  case 142: /* scalar_type: TIMAG  */
#line 1279 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7540 "bison-chpl-lib.cpp"
    break;

  case 143: /* scalar_type: TCOMPLEX  */
#line 1280 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7546 "bison-chpl-lib.cpp"
    break;

  case 144: /* scalar_type: TBYTES  */
#line 1281 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7552 "bison-chpl-lib.cpp"
    break;

  case 145: /* scalar_type: TSTRING  */
#line 1282 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7558 "bison-chpl-lib.cpp"
    break;

  case 146: /* scalar_type: TLOCALE  */
#line 1283 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7564 "bison-chpl-lib.cpp"
    break;

  case 147: /* scalar_type: TNOTHING  */
#line 1284 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7570 "bison-chpl-lib.cpp"
    break;

  case 148: /* scalar_type: TVOID  */
#line 1285 "chpl.ypp"
           { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 7576 "bison-chpl-lib.cpp"
    break;

  case 153: /* do_stmt: TDO stmt  */
#line 1299 "chpl.ypp"
                { (yyval.blockOrDo) = { (yyvsp[0].commentsAndStmt), true }; }
#line 7582 "bison-chpl-lib.cpp"
    break;

  case 154: /* do_stmt: block_stmt  */
#line 1300 "chpl.ypp"
                { (yyval.blockOrDo) = { (yyvsp[0].commentsAndStmt), false }; }
#line 7588 "bison-chpl-lib.cpp"
    break;

  case 155: /* return_stmt: TRETURN TSEMI  */
#line 1305 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-1]));
    auto node = Return::build(BUILDER, LOC((yyloc)), /*value*/ nullptr);
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7599 "bison-chpl-lib.cpp"
    break;

  case 156: /* return_stmt: TRETURN opt_try_expr TSEMI  */
#line 1312 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Return::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7610 "bison-chpl-lib.cpp"
    break;

  case 158: /* $@3: %empty  */
#line 1323 "chpl.ypp"
  {
    context->noteDeprecation((yyloc), (yyvsp[0].expr));
  }
#line 7618 "bison-chpl-lib.cpp"
    break;

  case 159: /* deprecated_class_level_stmt: TDEPRECATED STRINGLITERAL $@3 class_level_stmt  */
#line 1327 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt);
  }
#line 7626 "bison-chpl-lib.cpp"
    break;

  case 160: /* $@4: %empty  */
#line 1331 "chpl.ypp"
  {
    context->noteDeprecation((yyloc), nullptr);
  }
#line 7634 "bison-chpl-lib.cpp"
    break;

  case 161: /* deprecated_class_level_stmt: TDEPRECATED $@4 class_level_stmt  */
#line 1335 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt);
  }
#line 7642 "bison-chpl-lib.cpp"
    break;

  case 162: /* class_level_stmt: TSEMI  */
#line 1342 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = STMT((yyloc), context->buildEmptyStmt((yyloc)));
    }
#line 7650 "bison-chpl-lib.cpp"
    break;

  case 163: /* class_level_stmt: inner_class_level_stmt  */
#line 1346 "chpl.ypp"
    {
      // visibility should be default when inner_class_level_stmt is parsed
      (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt));
      context->visibility = Decl::DEFAULT_VISIBILITY;
    }
#line 7660 "bison-chpl-lib.cpp"
    break;

  case 164: /* $@5: %empty  */
#line 1351 "chpl.ypp"
          {context->noteDeclStartLoc((yylsp[0]));
           context->noteVisibility(Decl::PUBLIC);}
#line 7667 "bison-chpl-lib.cpp"
    break;

  case 165: /* class_level_stmt: TPUBLIC $@5 inner_class_level_stmt  */
#line 1353 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt));
      context->visibility = Decl::DEFAULT_VISIBILITY;
    }
#line 7676 "bison-chpl-lib.cpp"
    break;

  case 166: /* $@6: %empty  */
#line 1357 "chpl.ypp"
           {context->noteDeclStartLoc((yylsp[0]));
            context->noteVisibility(Decl::PRIVATE);}
#line 7683 "bison-chpl-lib.cpp"
    break;

  case 167: /* class_level_stmt: TPRIVATE $@6 inner_class_level_stmt  */
#line 1359 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->finishStmt((yyvsp[0].commentsAndStmt));
      context->visibility = Decl::DEFAULT_VISIBILITY;
    }
#line 7692 "bison-chpl-lib.cpp"
    break;

  case 175: /* forwarding_decl_stmt: forwarding_decl_start expr TSEMI  */
#line 1377 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-2].attribute)), toOwned((yyvsp[-1].expr)),
                                        VisibilityClause::NONE, nullptr);
    }
#line 7701 "bison-chpl-lib.cpp"
    break;

  case 176: /* forwarding_decl_stmt: forwarding_decl_start expr TEXCEPT renames_ls TSEMI  */
#line 1382 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-4].attribute)), toOwned((yyvsp[-3].expr)),
                                        VisibilityClause::EXCEPT, (yyvsp[-1].exprList));
    }
#line 7710 "bison-chpl-lib.cpp"
    break;

  case 177: /* forwarding_decl_stmt: forwarding_decl_start expr TONLY opt_only_ls TSEMI  */
#line 1387 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-4].attribute)), toOwned((yyvsp[-3].expr)),
                                        VisibilityClause::ONLY, (yyvsp[-1].exprList));
    }
#line 7719 "bison-chpl-lib.cpp"
    break;

  case 178: /* forwarding_decl_stmt: forwarding_decl_start var_decl_stmt  */
#line 1392 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildForwardingDecl((yyloc), toOwned((yyvsp[-1].attribute)), (yyvsp[0].commentsAndStmt));
    }
#line 7727 "bison-chpl-lib.cpp"
    break;

  case 179: /* forwarding_decl_start: TFORWARDING  */
#line 1399 "chpl.ypp"
  {
    (yyval.attribute) = context->buildAttributes((yyloc)).release();
    context->resetAttributePartsState();
  }
#line 7736 "bison-chpl-lib.cpp"
    break;

  case 180: /* extern_or_export: TEXTERN  */
#line 1406 "chpl.ypp"
          { (yyval.linkageTag) = Decl::EXTERN; }
#line 7742 "bison-chpl-lib.cpp"
    break;

  case 181: /* extern_or_export: TEXPORT  */
#line 1407 "chpl.ypp"
          { (yyval.linkageTag) = Decl::EXPORT; }
#line 7748 "bison-chpl-lib.cpp"
    break;

  case 182: /* extern_export_decl_stmt_start: extern_or_export  */
#line 1412 "chpl.ypp"
  {
    // Sets the start location only if it is still unset.
    context->noteDeclStartLoc((yylsp[0]));
    (yyval.linkageTag) = context->noteLinkage((yyvsp[0].linkageTag));
  }
#line 7758 "bison-chpl-lib.cpp"
    break;

  case 183: /* extern_export_decl_stmt: extern_export_decl_stmt_start class_start opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 1422 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yylsp[-5]), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), (yyvsp[-1].exprList), (yylsp[0]));
    context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
  }
#line 7767 "bison-chpl-lib.cpp"
    break;

  case 184: /* extern_export_decl_stmt: extern_export_decl_stmt_start STRINGLITERAL class_start opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 1428 "chpl.ypp"
  {
    // Set the linkage name since it will be nullptr otherwise.
    (yyvsp[-4].typeDeclParts).linkageName = (yyvsp[-5].expr);
    (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yylsp[-6]), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), (yyvsp[-1].exprList), (yylsp[0]));
    context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
  }
#line 7778 "bison-chpl-lib.cpp"
    break;

  case 185: /* extern_export_decl_stmt: extern_export_decl_stmt_start opt_expr fn_decl_stmt  */
#line 1435 "chpl.ypp"
  {
    auto loc = context->declStartLoc((yylsp[-2]));

    AstNode* optExpr = (yyvsp[-1].expr);
    FunctionParts fp = (yyvsp[0].functionParts);

    auto commentList = context->appendList(context->makeList(),
                                           fp.comments);

    auto comments = context->gatherCommentsFromList(commentList, loc);
    delete commentList;

    fp.linkage = (yyvsp[-2].linkageTag);
    fp.comments = comments;
    fp.linkageNameExpr = optExpr;
    (yyval.commentsAndStmt) = context->buildExternExportFunctionDecl((yyloc), fp);
  }
#line 7800 "bison-chpl-lib.cpp"
    break;

  case 186: /* $@7: %empty  */
#line 1453 "chpl.ypp"
  {
    // This will be consumed when building the first variable in the list.
    context->storeVarDeclLinkageName((yyvsp[0].expr));
  }
#line 7809 "bison-chpl-lib.cpp"
    break;

  case 187: /* extern_export_decl_stmt: extern_export_decl_stmt_start opt_expr $@7 var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 1458 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 7818 "bison-chpl-lib.cpp"
    break;

  case 188: /* extern_block_stmt: TEXTERN EXTERNCODE  */
#line 1466 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildExternBlockStmt((yylsp[-1]), (yyvsp[0].sizedStr));
  }
#line 7826 "bison-chpl-lib.cpp"
    break;

  case 189: /* loop_stmt: TDO stmt TWHILE expr TSEMI  */
#line 1473 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-4]),
                               false, (yylsp[-4]), (yyvsp[-3].commentsAndStmt));
    // If the body is not a block, snag any comments before the 'while'.
    if (blockStyle == BlockStyle::IMPLICIT) {
      exprLst = context->appendList(exprLst, context->gatherComments((yylsp[-2])));
    }
    auto body = context->consumeToBlock((yylsp[-4]), exprLst);
    auto node = DoWhile::build(BUILDER, LOC((yyloc)), blockStyle,
                               std::move(body),
                               toOwned((yyvsp[-1].expr)));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7848 "bison-chpl-lib.cpp"
    break;

  case 190: /* loop_stmt: TWHILE expr do_stmt  */
#line 1491 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto body = context->consumeToBlock((yylsp[0]), exprLst);
    auto node = While::build(BUILDER, LOC((yylsp[-2])), toOwned((yyvsp[-1].expr)),
                             blockStyle,
                             std::move(body));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7865 "bison-chpl-lib.cpp"
    break;

  case 191: /* loop_stmt: TWHILE ifvar do_stmt  */
#line 1504 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-2]), (yylsp[0]), (yyvsp[0].blockOrDo));
    auto body = context->consumeToBlock((yylsp[0]), exprLst);
    auto node = While::build(BUILDER, LOC((yylsp[-2])), toOwned((yyvsp[-1].expr)),
                             blockStyle,
                             std::move(body));
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7882 "bison-chpl-lib.cpp"
    break;

  case 192: /* loop_stmt: TCOFORALL expr TIN expr opt_task_intent_ls do_stmt  */
#line 1517 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildCoforallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7890 "bison-chpl-lib.cpp"
    break;

  case 193: /* loop_stmt: TCOFORALL expr TIN zippered_iterator opt_task_intent_ls do_stmt  */
#line 1521 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildCoforallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7898 "bison-chpl-lib.cpp"
    break;

  case 194: /* loop_stmt: TCOFORALL expr opt_task_intent_ls do_stmt  */
#line 1525 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildCoforallLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7906 "bison-chpl-lib.cpp"
    break;

  case 195: /* loop_stmt: TFOR expr TIN expr do_stmt  */
#line 1529 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7914 "bison-chpl-lib.cpp"
    break;

  case 196: /* loop_stmt: TFOR expr TIN zippered_iterator do_stmt  */
#line 1533 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7922 "bison-chpl-lib.cpp"
    break;

  case 197: /* loop_stmt: TFOR expr do_stmt  */
#line 1537 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7930 "bison-chpl-lib.cpp"
    break;

  case 198: /* loop_stmt: TFOR zippered_iterator do_stmt  */
#line 1541 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), (yyvsp[0].blockOrDo));
  }
#line 7938 "bison-chpl-lib.cpp"
    break;

  case 199: /* loop_stmt: TFOR TPARAM ident_def TIN expr do_stmt  */
#line 1545 "chpl.ypp"
  {
    std::vector<ParserComment>* comments;
    ParserExprList* exprLst;
    BlockStyle blockStyle;
    context->prepareStmtPieces(comments, exprLst, blockStyle, (yylsp[-5]), (yylsp[0]), (yyvsp[0].blockOrDo));
    AstNode* ident = context->buildIdent((yylsp[-3]), (yyvsp[-3].uniqueStr));
    auto index = context->buildLoopIndexDecl((yylsp[-3]), toOwned(ident));
    auto body = context->consumeToBlock((yylsp[0]), exprLst);
    auto node = For::build(BUILDER, LOC((yylsp[-5])), std::move(index),
                           toOwned((yyvsp[-1].expr)),
                           blockStyle,
                           std::move(body),
                           /*isExpressionLevel*/ false,
                           /*isParam*/ true);
    CommentsAndStmt cs = { .comments=comments, .stmt=node.release() };
    (yyval.commentsAndStmt) = context->finishStmt(cs);
  }
#line 7960 "bison-chpl-lib.cpp"
    break;

  case 200: /* loop_stmt: TFORALL expr TIN expr do_stmt  */
#line 1563 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7968 "bison-chpl-lib.cpp"
    break;

  case 201: /* loop_stmt: TFORALL expr TIN expr forall_intent_clause do_stmt  */
#line 1567 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7976 "bison-chpl-lib.cpp"
    break;

  case 202: /* loop_stmt: TFORALL expr TIN zippered_iterator do_stmt  */
#line 1571 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 7984 "bison-chpl-lib.cpp"
    break;

  case 203: /* loop_stmt: TFORALL expr TIN zippered_iterator forall_intent_clause do_stmt  */
#line 1575 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 7992 "bison-chpl-lib.cpp"
    break;

  case 204: /* loop_stmt: TFORALL expr do_stmt  */
#line 1579 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 8000 "bison-chpl-lib.cpp"
    break;

  case 205: /* loop_stmt: TFORALL expr forall_intent_clause do_stmt  */
#line 1583 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 8008 "bison-chpl-lib.cpp"
    break;

  case 206: /* loop_stmt: TFORALL zippered_iterator do_stmt  */
#line 1587 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 8016 "bison-chpl-lib.cpp"
    break;

  case 207: /* loop_stmt: TFORALL zippered_iterator forall_intent_clause do_stmt  */
#line 1591 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForallLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 8024 "bison-chpl-lib.cpp"
    break;

  case 208: /* loop_stmt: TFOREACH expr TIN expr do_stmt  */
#line 1595 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 8032 "bison-chpl-lib.cpp"
    break;

  case 209: /* loop_stmt: TFOREACH expr TIN expr forall_intent_clause do_stmt  */
#line 1599 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 8040 "bison-chpl-lib.cpp"
    break;

  case 210: /* loop_stmt: TFOREACH expr TIN zippered_iterator do_stmt  */
#line 1603 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[0]), (yyvsp[-3].expr), (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 8048 "bison-chpl-lib.cpp"
    break;

  case 211: /* loop_stmt: TFOREACH expr TIN zippered_iterator forall_intent_clause do_stmt  */
#line 1607 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[0]), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 8056 "bison-chpl-lib.cpp"
    break;

  case 212: /* loop_stmt: TFOREACH expr do_stmt  */
#line 1611 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 8064 "bison-chpl-lib.cpp"
    break;

  case 213: /* loop_stmt: TFOREACH expr forall_intent_clause do_stmt  */
#line 1615 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 8072 "bison-chpl-lib.cpp"
    break;

  case 214: /* loop_stmt: TFOREACH zippered_iterator do_stmt  */
#line 1619 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-2]), (yylsp[-2]), (yylsp[0]), nullptr, (yyvsp[-1].expr), nullptr, (yyvsp[0].blockOrDo));
  }
#line 8080 "bison-chpl-lib.cpp"
    break;

  case 215: /* loop_stmt: TFOREACH zippered_iterator forall_intent_clause do_stmt  */
#line 1623 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildForeachLoopStmt((yylsp[-3]), (yylsp[-3]), (yylsp[0]), nullptr, (yyvsp[-2].expr), (yyvsp[-1].withClause), (yyvsp[0].blockOrDo));
  }
#line 8088 "bison-chpl-lib.cpp"
    break;

  case 216: /* loop_stmt: TLSBR expr_ls TIN expr TRSBR stmt  */
#line 1627 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[-1]), (yyvsp[-4].exprList), (yyvsp[-2].expr), nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 8096 "bison-chpl-lib.cpp"
    break;

  case 217: /* loop_stmt: TLSBR expr_ls TIN expr forall_intent_clause TRSBR stmt  */
#line 1631 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-6]), (yylsp[-5]), (yylsp[-1]), (yyvsp[-5].exprList), (yyvsp[-3].expr), (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 8104 "bison-chpl-lib.cpp"
    break;

  case 218: /* loop_stmt: TLSBR expr_ls TIN zippered_iterator TRSBR stmt  */
#line 1635 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-5]), (yylsp[-4]), (yylsp[-1]), (yyvsp[-4].exprList), (yyvsp[-2].expr), nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 8112 "bison-chpl-lib.cpp"
    break;

  case 219: /* loop_stmt: TLSBR expr_ls TIN zippered_iterator forall_intent_clause TRSBR stmt  */
#line 1639 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-6]), (yylsp[-5]), (yylsp[-1]), (yyvsp[-5].exprList), (yyvsp[-3].expr), (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 8120 "bison-chpl-lib.cpp"
    break;

  case 220: /* loop_stmt: TLSBR expr_ls TRSBR stmt  */
#line 1643 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-3]), (yylsp[-2]), (yylsp[-1]), (yyvsp[-2].exprList), nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 8128 "bison-chpl-lib.cpp"
    break;

  case 221: /* loop_stmt: TLSBR expr_ls forall_intent_clause TRSBR stmt  */
#line 1647 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[-1]), (yyvsp[-3].exprList), (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 8136 "bison-chpl-lib.cpp"
    break;

  case 222: /* loop_stmt: TLSBR zippered_iterator TRSBR stmt  */
#line 1651 "chpl.ypp"
  {
    auto iterExprs = context->makeList((yyvsp[-2].expr));
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-3]), (yylsp[-2]), (yylsp[-1]), iterExprs, nullptr, (yyvsp[0].commentsAndStmt));
  }
#line 8145 "bison-chpl-lib.cpp"
    break;

  case 223: /* loop_stmt: TLSBR zippered_iterator forall_intent_clause TRSBR stmt  */
#line 1656 "chpl.ypp"
  {
    auto iterExprs = context->makeList((yyvsp[-3].expr));
    (yyval.commentsAndStmt) = context->buildBracketLoopStmt((yylsp[-4]), (yylsp[-3]), (yylsp[-1]), iterExprs, (yyvsp[-2].withClause), (yyvsp[0].commentsAndStmt));
  }
#line 8154 "bison-chpl-lib.cpp"
    break;

  case 224: /* zippered_iterator: TZIP TLP expr_ls TRP  */
#line 1664 "chpl.ypp"
  {
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = Zip::build(BUILDER, LOC((yyloc)), std::move(exprs));
    (yyval.expr) = node.release();
  }
#line 8164 "bison-chpl-lib.cpp"
    break;

  case 225: /* if_stmt: TIF expr TTHEN stmt  */
#line 1673 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-3]), (yylsp[-1]), (yyvsp[-2].expr), (yyvsp[0].commentsAndStmt));
  }
#line 8172 "bison-chpl-lib.cpp"
    break;

  case 226: /* if_stmt: TIF expr block_stmt  */
#line 1677 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-2]), (yylsp[0]), (yyvsp[-1].expr), (yyvsp[0].commentsAndStmt));
  }
#line 8180 "bison-chpl-lib.cpp"
    break;

  case 227: /* if_stmt: TIF expr TTHEN stmt TELSE stmt  */
#line 1681 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-5]), (yylsp[-3]), (yylsp[-1]), (yyvsp[-4].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8188 "bison-chpl-lib.cpp"
    break;

  case 228: /* if_stmt: TIF expr block_stmt TELSE stmt  */
#line 1685 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-4]), (yylsp[-2]), (yylsp[-1]), (yyvsp[-3].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8196 "bison-chpl-lib.cpp"
    break;

  case 229: /* if_stmt: TIF ifvar TTHEN stmt  */
#line 1689 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-3]), (yylsp[-1]), (yyvsp[-2].expr), (yyvsp[0].commentsAndStmt));
  }
#line 8204 "bison-chpl-lib.cpp"
    break;

  case 230: /* if_stmt: TIF ifvar block_stmt  */
#line 1693 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-2]), (yylsp[0]), (yyvsp[-1].expr), (yyvsp[0].commentsAndStmt));
  }
#line 8212 "bison-chpl-lib.cpp"
    break;

  case 231: /* if_stmt: TIF ifvar TTHEN stmt TELSE stmt  */
#line 1697 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-5]), (yylsp[-3]), (yylsp[-1]), (yyvsp[-4].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8220 "bison-chpl-lib.cpp"
    break;

  case 232: /* if_stmt: TIF ifvar block_stmt TELSE stmt  */
#line 1701 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-4]), (yylsp[-2]), (yylsp[-1]), (yyvsp[-3].expr), (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8228 "bison-chpl-lib.cpp"
    break;

  case 233: /* if_stmt: TIF expr assignop_ident expr TTHEN stmt  */
#line 1705 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-3]), (yyvsp[-4].expr), (yyvsp[-3].uniqueStr), (yyvsp[-2].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-5]), (yylsp[-1]), op, (yyvsp[0].commentsAndStmt));
  }
#line 8237 "bison-chpl-lib.cpp"
    break;

  case 234: /* if_stmt: TIF expr assignop_ident expr block_stmt  */
#line 1710 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-2]), (yyvsp[-3].expr), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-4]), (yylsp[0]), op, (yyvsp[0].commentsAndStmt));
  }
#line 8246 "bison-chpl-lib.cpp"
    break;

  case 235: /* if_stmt: TIF expr assignop_ident expr TTHEN stmt TELSE stmt  */
#line 1715 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-5]), (yyvsp[-6].expr), (yyvsp[-5].uniqueStr), (yyvsp[-4].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(true, (yylsp[-7]), (yylsp[-3]), (yylsp[-1]), op, (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8255 "bison-chpl-lib.cpp"
    break;

  case 236: /* if_stmt: TIF expr assignop_ident expr block_stmt TELSE stmt  */
#line 1720 "chpl.ypp"
  {
    auto op = context->buildBinOp((yylsp[-4]), (yyvsp[-5].expr), (yyvsp[-4].uniqueStr), (yyvsp[-3].expr));
    (yyval.commentsAndStmt) = context->buildConditionalStmt(false, (yylsp[-6]), (yylsp[-2]), (yylsp[-1]), op, (yyvsp[-2].commentsAndStmt), (yyvsp[0].commentsAndStmt));
  }
#line 8264 "bison-chpl-lib.cpp"
    break;

  case 237: /* ifvar: TVAR ident_def TASSIGN expr  */
#line 1728 "chpl.ypp"
  {
    auto varDecl = Variable::build(BUILDER, LOC((yyloc)),
                                   /*attributes*/ nullptr,
                                   Decl::DEFAULT_VISIBILITY,
                                   Decl::DEFAULT_LINKAGE,
                                   /*linkageName*/ nullptr,
                                   /*name*/ (yyvsp[-2].uniqueStr),
                                   Variable::VAR,
                                   /*isConfig*/ false,
                                   context->currentScopeIsAggregate(),
                                   /*typeExpression*/ nullptr,
                                   toOwned((yyvsp[0].expr)));
    (yyval.expr) = varDecl.release();
  }
#line 8283 "bison-chpl-lib.cpp"
    break;

  case 238: /* ifvar: TCONST ident_def TASSIGN expr  */
#line 1743 "chpl.ypp"
  {
    auto varDecl = Variable::build(BUILDER, LOC((yyloc)),
                                   /*attributes*/ nullptr,
                                   Decl::DEFAULT_VISIBILITY,
                                   Decl::DEFAULT_LINKAGE,
                                   /*linkageName*/ nullptr,
                                   /*name*/ (yyvsp[-2].uniqueStr),
                                   Variable::CONST,
                                   /*isConfig*/ false,
                                   context->currentScopeIsAggregate(),
                                   /*typeExpression*/ nullptr,
                                   toOwned((yyvsp[0].expr)));
    (yyval.expr) = varDecl.release();
  }
#line 8302 "bison-chpl-lib.cpp"
    break;

  case 239: /* interface_stmt: TINTERFACE ident_def TLP ifc_formal_ls TRP block_stmt  */
#line 1761 "chpl.ypp"
    { (yyval.commentsAndStmt) = TODOSTMT((yyloc)); }
#line 8308 "bison-chpl-lib.cpp"
    break;

  case 240: /* interface_stmt: TINTERFACE ident_def block_stmt  */
#line 1763 "chpl.ypp"
    { (yyval.commentsAndStmt) = TODOSTMT((yyloc)); }
#line 8314 "bison-chpl-lib.cpp"
    break;

  case 241: /* ifc_formal_ls: ifc_formal  */
#line 1767 "chpl.ypp"
                                  { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 8320 "bison-chpl-lib.cpp"
    break;

  case 242: /* ifc_formal_ls: ifc_formal_ls TCOMMA ifc_formal  */
#line 1768 "chpl.ypp"
                                  { context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 8326 "bison-chpl-lib.cpp"
    break;

  case 243: /* ifc_formal: ident_def  */
#line 1773 "chpl.ypp"
             { (yyval.expr) = TODOEXPR((yyloc)); }
#line 8332 "bison-chpl-lib.cpp"
    break;

  case 256: /* implements_type_ident: implements_type_error_ident  */
#line 1791 "chpl.ypp"
  {
    std::string s = "type ";
    s += "'"; s += (yyvsp[0].uniqueStr).c_str(); s += "'";
    s += " not allowed to implement an interface";
    context->noteError((yyloc), s);
    (yyval.uniqueStr) = (yyvsp[0].uniqueStr);
  }
#line 8344 "bison-chpl-lib.cpp"
    break;

  case 263: /* implements_stmt: TIMPLEMENTS ident_def TLP actual_ls TRP TSEMI  */
#line 1820 "chpl.ypp"
    { (yyval.commentsAndStmt) = TODOSTMT((yyloc)); }
#line 8350 "bison-chpl-lib.cpp"
    break;

  case 264: /* implements_stmt: implements_type_ident TIMPLEMENTS ident_def TSEMI  */
#line 1822 "chpl.ypp"
    { (yyval.commentsAndStmt) = TODOSTMT((yyloc)); }
#line 8356 "bison-chpl-lib.cpp"
    break;

  case 265: /* implements_stmt: implements_type_ident TIMPLEMENTS ident_def TLP actual_ls TRP TSEMI  */
#line 1824 "chpl.ypp"
    { (yyval.commentsAndStmt) = TODOSTMT((yyloc)); }
#line 8362 "bison-chpl-lib.cpp"
    break;

  case 266: /* ifc_constraint: TIMPLEMENTS ident_def TLP actual_ls TRP  */
#line 1829 "chpl.ypp"
    { (yyval.expr) = TODOEXPR((yyloc)); }
#line 8368 "bison-chpl-lib.cpp"
    break;

  case 267: /* ifc_constraint: implements_type_ident TIMPLEMENTS ident_def  */
#line 1831 "chpl.ypp"
    { (yyval.expr) = TODOEXPR((yyloc)); }
#line 8374 "bison-chpl-lib.cpp"
    break;

  case 268: /* ifc_constraint: implements_type_ident TIMPLEMENTS ident_def TLP actual_ls TRP  */
#line 1833 "chpl.ypp"
    { (yyval.expr) = TODOEXPR((yyloc)); }
#line 8380 "bison-chpl-lib.cpp"
    break;

  case 269: /* try_stmt: TTRY tryable_stmt  */
#line 1838 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryExprStmt((yyloc), (yyvsp[0].commentsAndStmt), false);
  }
#line 8388 "bison-chpl-lib.cpp"
    break;

  case 270: /* try_stmt: TTRYBANG tryable_stmt  */
#line 1842 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryExprStmt((yyloc), (yyvsp[0].commentsAndStmt), true);
  }
#line 8396 "bison-chpl-lib.cpp"
    break;

  case 271: /* try_stmt: TTRY block_stmt catch_expr_ls  */
#line 1846 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryCatchStmt((yyloc), (yyvsp[-1].commentsAndStmt), (yyvsp[0].exprList), false);
  }
#line 8404 "bison-chpl-lib.cpp"
    break;

  case 272: /* try_stmt: TTRYBANG block_stmt catch_expr_ls  */
#line 1850 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildTryCatchStmt((yyloc), (yyvsp[-1].commentsAndStmt), (yyvsp[0].exprList), true);
  }
#line 8412 "bison-chpl-lib.cpp"
    break;

  case 273: /* catch_expr_ls: %empty  */
#line 1856 "chpl.ypp"
                            { (yyval.exprList) = context->makeList(); }
#line 8418 "bison-chpl-lib.cpp"
    break;

  case 274: /* catch_expr_ls: catch_expr_ls catch_expr  */
#line 1857 "chpl.ypp"
                            { (yyval.exprList) = context->appendList((yyvsp[-1].exprList), (yyvsp[0].expr)); }
#line 8424 "bison-chpl-lib.cpp"
    break;

  case 275: /* catch_expr: TCATCH block_stmt  */
#line 1862 "chpl.ypp"
  {
    (yyval.expr) = context->buildCatch((yyloc), nullptr, (yyvsp[0].commentsAndStmt), false);
  }
#line 8432 "bison-chpl-lib.cpp"
    break;

  case 276: /* catch_expr: TCATCH catch_expr_inner block_stmt  */
#line 1866 "chpl.ypp"
  {
    (yyval.expr) = context->buildCatch((yyloc), (yyvsp[-1].expr), (yyvsp[0].commentsAndStmt), false);
  }
#line 8440 "bison-chpl-lib.cpp"
    break;

  case 277: /* catch_expr: TCATCH TLP catch_expr_inner TRP block_stmt  */
#line 1870 "chpl.ypp"
  {
    (yyval.expr) = context->buildCatch((yyloc), (yyvsp[-2].expr), (yyvsp[0].commentsAndStmt), true);
  }
#line 8448 "bison-chpl-lib.cpp"
    break;

  case 278: /* catch_expr_inner: ident_def  */
#line 1877 "chpl.ypp"
  {
    (yyval.expr) = Variable::build(BUILDER, LOC((yyloc)), /*attributes*/ nullptr,
                         Decl::DEFAULT_VISIBILITY,
                         Decl::DEFAULT_LINKAGE,
                         /*linkageName*/ nullptr,
                         /*name*/ (yyvsp[0].uniqueStr),
                         Variable::VAR,
                         /*isConfig*/ false,
                         /*isField*/ false,
                         /*typeExpression*/ nullptr,
                         /*initExpression*/ nullptr).release();
  }
#line 8465 "bison-chpl-lib.cpp"
    break;

  case 279: /* catch_expr_inner: ident_def TCOLON expr  */
#line 1890 "chpl.ypp"
  {
    (yyval.expr) = Variable::build(BUILDER, LOC((yyloc)), /*attributes*/ nullptr,
                         Decl::DEFAULT_VISIBILITY,
                         Decl::DEFAULT_LINKAGE,
                         /*linkageName*/ nullptr,
                         /*name*/ (yyvsp[-2].uniqueStr),
                         Variable::VAR,
                         /*isConfig*/ false,
                         /*isField*/ false,
                         /*typeExpression*/ toOwned((yyvsp[0].expr)),
                         /*initExpression*/ nullptr).release();
  }
#line 8482 "bison-chpl-lib.cpp"
    break;

  case 280: /* throw_stmt: TTHROW expr TSEMI  */
#line 1906 "chpl.ypp"
  {
    auto comments = context->gatherComments((yylsp[-2]));
    auto node = Throw::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-1].expr)));
    (yyval.commentsAndStmt) = { .comments=comments, .stmt=node.release() };
  }
#line 8492 "bison-chpl-lib.cpp"
    break;

  case 281: /* select_stmt: TSELECT expr TLCBR when_stmt_ls TRCBR  */
#line 1914 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildSelectStmt((yyloc), toOwned((yyvsp[-3].expr)), (yyvsp[-1].exprList));
  }
#line 8500 "bison-chpl-lib.cpp"
    break;

  case 282: /* select_stmt: TSELECT expr TLCBR error TRCBR  */
#line 1918 "chpl.ypp"
  {
    auto comments = context->gatherComments((yyloc));
    auto node = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
    (yyval.commentsAndStmt) = { .comments=comments, .stmt=node.release() };
  }
#line 8510 "bison-chpl-lib.cpp"
    break;

  case 283: /* when_stmt_ls: %empty  */
#line 1926 "chpl.ypp"
                          { (yyval.exprList) = context->makeList(); }
#line 8516 "bison-chpl-lib.cpp"
    break;

  case 284: /* when_stmt_ls: when_stmt_ls when_stmt  */
#line 1927 "chpl.ypp"
                          { (yyval.exprList) = context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt)); }
#line 8522 "bison-chpl-lib.cpp"
    break;

  case 285: /* when_stmt: TWHEN expr_ls do_stmt  */
#line 1932 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildWhenStmt((yyloc), (yyvsp[-1].exprList), (yyvsp[0].blockOrDo));
  }
#line 8530 "bison-chpl-lib.cpp"
    break;

  case 286: /* when_stmt: TOTHERWISE stmt  */
#line 1936 "chpl.ypp"
  {
    BlockOrDo blockOrDo = { .cs=(yyvsp[0].commentsAndStmt), .usesDo=false };
    (yyval.commentsAndStmt) = context->buildWhenStmt((yyloc), nullptr, blockOrDo);
  }
#line 8539 "bison-chpl-lib.cpp"
    break;

  case 287: /* when_stmt: TOTHERWISE TDO stmt  */
#line 1941 "chpl.ypp"
  {
    BlockOrDo blockOrDo = { .cs=(yyvsp[0].commentsAndStmt), .usesDo=true };
    (yyval.commentsAndStmt) = context->buildWhenStmt((yyloc), nullptr, blockOrDo);
  }
#line 8548 "bison-chpl-lib.cpp"
    break;

  case 288: /* manager_expr: expr TAS var_decl_type ident_def  */
#line 1949 "chpl.ypp"
  {
    (yyval.expr) = context->buildManagerExpr((yyloc), (yyvsp[-3].expr), (yyvsp[-1].variableKind), (yylsp[0]), (yyvsp[0].uniqueStr));
    context->resetDeclState();
  }
#line 8557 "bison-chpl-lib.cpp"
    break;

  case 289: /* manager_expr: expr TAS ident_def  */
#line 1954 "chpl.ypp"
  {
    (yyval.expr) = context->buildManagerExpr((yyloc), (yyvsp[-2].expr), (yylsp[0]), (yyvsp[0].uniqueStr));
  }
#line 8565 "bison-chpl-lib.cpp"
    break;

  case 290: /* manager_expr: expr  */
#line 1958 "chpl.ypp"
  {
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 8573 "bison-chpl-lib.cpp"
    break;

  case 291: /* manager_expr_ls: manager_expr  */
#line 1964 "chpl.ypp"
                                        { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 8579 "bison-chpl-lib.cpp"
    break;

  case 292: /* manager_expr_ls: manager_expr_ls TCOMMA manager_expr  */
#line 1965 "chpl.ypp"
                                        { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 8585 "bison-chpl-lib.cpp"
    break;

  case 293: /* manage_stmt: TMANAGE manager_expr_ls do_stmt  */
#line 1970 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildManageStmt((yyloc), (yyvsp[-1].exprList), (yylsp[0]), (yyvsp[0].blockOrDo));
  }
#line 8593 "bison-chpl-lib.cpp"
    break;

  case 294: /* class_decl_stmt: class_start opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 1979 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yyloc), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), (yyvsp[-1].exprList), (yylsp[0]));
      context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
    }
#line 8602 "bison-chpl-lib.cpp"
    break;

  case 295: /* class_decl_stmt: class_start opt_inherit TLCBR error TRCBR  */
#line 1984 "chpl.ypp"
    {
      auto contents =
        context->makeList(ErroneousExpression::build(BUILDER, LOC((yylsp[-1]))));
      (yyval.commentsAndStmt) = context->buildAggregateTypeDecl((yyloc), (yyvsp[-4].typeDeclParts), (yylsp[-3]), (yyvsp[-3].exprList), (yylsp[-2]), contents, (yylsp[0]));
      context->exitScope((yyvsp[-4].typeDeclParts).tag, (yyvsp[-4].typeDeclParts).name);
    }
#line 8613 "bison-chpl-lib.cpp"
    break;

  case 296: /* class_start: class_tag ident_def  */
#line 1995 "chpl.ypp"
  {
    (yyval.typeDeclParts) = context->enterScopeAndBuildTypeDeclParts((yylsp[-1]), (yyvsp[0].uniqueStr), (yyvsp[-1].astTag));
  }
#line 8621 "bison-chpl-lib.cpp"
    break;

  case 297: /* class_tag: TCLASS  */
#line 2001 "chpl.ypp"
           { (yyval.astTag) = asttags::Class; }
#line 8627 "bison-chpl-lib.cpp"
    break;

  case 298: /* class_tag: TRECORD  */
#line 2002 "chpl.ypp"
           { (yyval.astTag) = asttags::Record; }
#line 8633 "bison-chpl-lib.cpp"
    break;

  case 299: /* class_tag: TUNION  */
#line 2003 "chpl.ypp"
           { (yyval.astTag) = asttags::Union; }
#line 8639 "bison-chpl-lib.cpp"
    break;

  case 300: /* opt_inherit: %empty  */
#line 2007 "chpl.ypp"
                  { (yyval.exprList) = nullptr; }
#line 8645 "bison-chpl-lib.cpp"
    break;

  case 301: /* opt_inherit: TCOLON expr_ls  */
#line 2008 "chpl.ypp"
                  { (yyval.exprList) = (yyvsp[0].exprList); }
#line 8651 "bison-chpl-lib.cpp"
    break;

  case 302: /* class_level_stmt_ls: %empty  */
#line 2012 "chpl.ypp"
  {
    /* nothing */
    (yyval.exprList) = context->makeList();
  }
#line 8660 "bison-chpl-lib.cpp"
    break;

  case 303: /* class_level_stmt_ls: class_level_stmt_ls deprecated_class_level_stmt  */
#line 2017 "chpl.ypp"
  {
    context->appendList((yyvsp[-1].exprList), (yyvsp[0].commentsAndStmt));
  }
#line 8668 "bison-chpl-lib.cpp"
    break;

  case 304: /* class_level_stmt_ls: class_level_stmt_ls pragma_ls deprecated_class_level_stmt  */
#line 2021 "chpl.ypp"
  {
    context->appendList((yyvsp[-2].exprList), context->buildPragmaStmt((yylsp[0]), (yyvsp[0].commentsAndStmt)));
  }
#line 8676 "bison-chpl-lib.cpp"
    break;

  case 305: /* enum_decl_stmt: enum_header_lcbr enum_ls TRCBR  */
#line 2028 "chpl.ypp"
    {
      TypeDeclParts parts = (yyvsp[-2].typeDeclParts);
      ParserExprList* list = (yyvsp[-1].exprList);
      // get any comments after the last element but before the closing brace
      context->appendList(list, context->gatherComments((yylsp[0])));

      auto decl = Enum::build(BUILDER, LOC((yyloc)), toOwned(parts.attributes),
                              parts.visibility,
                              parts.name,
                              context->consumeList(list));
      CommentsAndStmt cs = {parts.comments, decl.release()};
      (yyval.commentsAndStmt) = cs;
      context->exitScope(asttags::Enum, parts.name);
      context->resetDeclState();
      context->clearComments();
    }
#line 8697 "bison-chpl-lib.cpp"
    break;

  case 306: /* enum_decl_stmt: enum_header_lcbr error TRCBR  */
#line 2045 "chpl.ypp"
    {
      TypeDeclParts parts = (yyvsp[-2].typeDeclParts);
      auto err = ErroneousExpression::build(BUILDER, LOC((yylsp[-1])));
      CommentsAndStmt cs = {parts.comments, err.release()};
      (yyval.commentsAndStmt) = cs;
      context->exitScope(asttags::Enum, parts.name);
      context->resetDeclState();
      context->clearComments();
    }
#line 8711 "bison-chpl-lib.cpp"
    break;

  case 307: /* enum_header_lcbr: TENUM ident_def TLCBR  */
#line 2058 "chpl.ypp"
  {
    (yyval.typeDeclParts) = context->enterScopeAndBuildTypeDeclParts((yylsp[-2]), (yyvsp[-1].uniqueStr), asttags::Enum);
  }
#line 8719 "bison-chpl-lib.cpp"
    break;

  case 308: /* enum_ls: deprecated_enum_item  */
#line 2065 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
    context->resetAttributePartsState();
  }
#line 8728 "bison-chpl-lib.cpp"
    break;

  case 309: /* enum_ls: enum_ls TCOMMA  */
#line 2070 "chpl.ypp"
  {
    (yyval.exprList) = (yyvsp[-1].exprList);
    context->clearCommentsBefore((yylsp[0]));
    context->resetAttributePartsState();
  }
#line 8738 "bison-chpl-lib.cpp"
    break;

  case 310: /* $@8: %empty  */
#line 2076 "chpl.ypp"
  {
    context->clearCommentsBefore((yylsp[0]));
    context->resetAttributePartsState();
  }
#line 8747 "bison-chpl-lib.cpp"
    break;

  case 311: /* enum_ls: enum_ls TCOMMA $@8 deprecated_enum_item  */
#line 2081 "chpl.ypp"
  {
    context->appendList((yyvsp[-3].exprList), (yyvsp[0].commentsAndStmt));
    context->resetAttributePartsState();
  }
#line 8756 "bison-chpl-lib.cpp"
    break;

  case 313: /* $@9: %empty  */
#line 2090 "chpl.ypp"
  {
    context->noteDeprecation((yyloc), (yyvsp[0].expr));
  }
#line 8764 "bison-chpl-lib.cpp"
    break;

  case 314: /* deprecated_enum_item: TDEPRECATED STRINGLITERAL $@9 enum_item  */
#line 2094 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt);
  }
#line 8772 "bison-chpl-lib.cpp"
    break;

  case 315: /* $@10: %empty  */
#line 2098 "chpl.ypp"
  {
    context->noteDeprecation((yyloc), nullptr);
  }
#line 8780 "bison-chpl-lib.cpp"
    break;

  case 316: /* deprecated_enum_item: TDEPRECATED $@10 enum_item  */
#line 2102 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = (yyvsp[0].commentsAndStmt);
  }
#line 8788 "bison-chpl-lib.cpp"
    break;

  case 317: /* enum_item: ident_def  */
#line 2109 "chpl.ypp"
    {
      auto decl = EnumElement::build(BUILDER, LOC((yyloc)),
                                     context->buildAttributes((yyloc)),
                                     (yyvsp[0].uniqueStr));
      (yyval.commentsAndStmt) = STMT((yyloc), decl.release());
    }
#line 8799 "bison-chpl-lib.cpp"
    break;

  case 318: /* enum_item: ident_def TASSIGN expr  */
#line 2116 "chpl.ypp"
    {
      auto decl = EnumElement::build(BUILDER, LOC((yyloc)),
                                     context->buildAttributes((yyloc)),
                                     (yyvsp[-2].uniqueStr),
                                     toOwned((yyvsp[0].expr)));
      (yyval.commentsAndStmt) = STMT((yyloc), decl.release());
      context->clearCommentsBefore((yylsp[0]));
    }
#line 8812 "bison-chpl-lib.cpp"
    break;

  case 319: /* lambda_decl_start: TLAMBDA  */
#line 2128 "chpl.ypp"
    {
      FunctionParts fp = context->makeFunctionParts(false, false);
      context->noteDeclStartLoc((yylsp[0]));
      auto loc = context->declStartLoc((yyloc));
      fp.comments = context->gatherComments(loc);
      fp.attributes = context->buildAttributes((yyloc)).release();
      fp.visibility = context->visibility;
      context->resetAttributePartsState();
      fp.kind = Function::PROC;
      (yyval.functionParts) = fp;
    }
#line 8828 "bison-chpl-lib.cpp"
    break;

  case 320: /* $@11: %empty  */
#line 2144 "chpl.ypp"
    {
      context->clearComments();
      context->resetDeclState();
      context->enterScope(asttags::Function, STR("lambda"));
    }
#line 8838 "bison-chpl-lib.cpp"
    break;

  case 321: /* lambda_decl_expr: lambda_decl_start req_formal_ls opt_ret_tag opt_type opt_lifetime_where $@11 function_body_stmt  */
#line 2150 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-6].functionParts);
      fp.name = STR("lambda");
      fp.formals = (yyvsp[-5].exprList);
      fp.returnIntent = (yyvsp[-4].returnTag);
      fp.returnType = (yyvsp[-3].expr);
      WhereAndLifetime wl = (yyvsp[-2].lifetimeAndWhere);
      fp.body = (yyvsp[0].exprList);

      fp.lifetime = wl.lifetime;
      fp.where = wl.where;

      context->clearComments();
      context->exitScope(asttags::Function, STR("lambda"));

      (yyval.expr) = context->buildLambda((yyloc), fp);
    }
#line 8860 "bison-chpl-lib.cpp"
    break;

  case 323: /* linkage_spec: linkage_spec_empty  */
#line 2173 "chpl.ypp"
                     { (yyval.functionParts) = context->makeFunctionParts(false, false); }
#line 8866 "bison-chpl-lib.cpp"
    break;

  case 324: /* linkage_spec: TINLINE  */
#line 2174 "chpl.ypp"
                     { context->noteDeclStartLoc((yylsp[0]));
                       (yyval.functionParts) = context->makeFunctionParts(true, false); }
#line 8873 "bison-chpl-lib.cpp"
    break;

  case 325: /* linkage_spec: TOVERRIDE  */
#line 2176 "chpl.ypp"
                     { context->noteDeclStartLoc((yylsp[0]));
                       (yyval.functionParts) = context->makeFunctionParts(false, true); }
#line 8880 "bison-chpl-lib.cpp"
    break;

  case 326: /* fn_decl_stmt_complete: fn_decl_stmt  */
#line 2182 "chpl.ypp"
    {
      (yyval.commentsAndStmt) = context->buildRegularFunctionDecl((yyloc), (yyvsp[0].functionParts));
    }
#line 8888 "bison-chpl-lib.cpp"
    break;

  case 327: /* $@12: %empty  */
#line 2191 "chpl.ypp"
    {
      context->clearComments();
      context->resetDeclState();
      context->enterScope(asttags::Function, (yyvsp[-4].functionParts).name);
    }
#line 8898 "bison-chpl-lib.cpp"
    break;

  case 328: /* fn_decl_stmt: fn_decl_stmt_inner opt_ret_tag opt_ret_type opt_throws_error opt_lifetime_where $@12 opt_function_body_stmt  */
#line 2197 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-6].functionParts);
      fp.returnIntent = (yyvsp[-5].returnTag);
      fp.returnType = (yyvsp[-4].expr);
      fp.throws = ((yyvsp[-3].throwsTag) == ThrowsTag_THROWS) ? true : false;
      WhereAndLifetime wl = (yyvsp[-2].lifetimeAndWhere);
      fp.body = (yyvsp[0].exprList);

      fp.lifetime = wl.lifetime;
      fp.where = wl.where;

      context->clearComments();
      context->exitScope(asttags::Function, (yyvsp[-6].functionParts).name);

      (yyval.functionParts) = fp;
    }
#line 8919 "bison-chpl-lib.cpp"
    break;

  case 329: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag fn_ident opt_formal_ls  */
#line 2217 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-3].functionParts);
      fp.thisIntent = (yyvsp[-2].intentTag);
      fp.name = (yyvsp[-1].uniqueStr);
      fp.formals = (yyvsp[0].exprList);
      (yyval.functionParts) = fp;
    }
#line 8931 "bison-chpl-lib.cpp"
    break;

  case 330: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag assignop_ident opt_formal_ls  */
#line 2225 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-3].functionParts);
      fp.thisIntent = (yyvsp[-2].intentTag);
      fp.name = (yyvsp[-1].uniqueStr);
      fp.formals = (yyvsp[0].exprList);
      (yyval.functionParts) = fp;
    }
#line 8943 "bison-chpl-lib.cpp"
    break;

  case 331: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag fn_decl_receiver_expr TDOT fn_ident opt_formal_ls  */
#line 2233 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-5].functionParts);
      fp.thisIntent = (yyvsp[-4].intentTag);
      fp.receiver = Formal::build(BUILDER, LOC((yylsp[-3])), /*attributes*/ nullptr,
                                  STR("this"), (yyvsp[-4].intentTag), toOwned((yyvsp[-3].expr)),
                                  nullptr).release();
      fp.name = (yyvsp[-1].uniqueStr);
      fp.formals = (yyvsp[0].exprList);
      (yyval.functionParts) = fp;
    }
#line 8958 "bison-chpl-lib.cpp"
    break;

  case 332: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag fn_decl_receiver_expr TDOT assignop_ident opt_formal_ls  */
#line 2244 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-5].functionParts);
      fp.thisIntent = (yyvsp[-4].intentTag);
      fp.receiver = Formal::build(BUILDER, LOC((yylsp[-3])), /*attributes*/ nullptr,
                                  STR("this"), (yyvsp[-4].intentTag), toOwned((yyvsp[-3].expr)),
                                  nullptr).release();
      fp.name = (yyvsp[-1].uniqueStr);
      fp.formals = (yyvsp[0].exprList);
      (yyval.functionParts) = fp;
    }
#line 8973 "bison-chpl-lib.cpp"
    break;

  case 333: /* fn_decl_stmt_inner: fn_decl_stmt_start opt_this_intent_tag error opt_formal_ls  */
#line 2255 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-3].functionParts);
      fp.errorExpr = ErroneousExpression::build(BUILDER, LOC((yyloc))).release();
      (yyval.functionParts) = fp;
    }
#line 8983 "bison-chpl-lib.cpp"
    break;

  case 334: /* fn_decl_stmt_start: linkage_spec proc_iter_or_op  */
#line 2264 "chpl.ypp"
    {
      FunctionParts fp = (yyvsp[-1].functionParts);
      context->noteDeclStartLoc((yylsp[0]));
      auto loc = context->declStartLoc((yyloc));
      fp.comments = context->gatherComments(loc);
      fp.attributes = context->buildAttributes((yyloc)).release();
      fp.visibility = context->visibility;
      context->resetAttributePartsState();
      fp.kind = (yyvsp[0].functionKind);
      (yyval.functionParts) = fp;
    }
#line 8999 "bison-chpl-lib.cpp"
    break;

  case 336: /* fn_decl_receiver_expr: TLP expr TRP  */
#line 2279 "chpl.ypp"
                      { (yyval.expr) = (yyvsp[-1].expr); }
#line 9005 "bison-chpl-lib.cpp"
    break;

  case 339: /* fn_ident: ident_def TBANG  */
#line 2286 "chpl.ypp"
  {
    std::string s = (yyvsp[-1].uniqueStr).c_str();
    s += "!";
    (yyval.uniqueStr) = STR(s.c_str());
  }
#line 9015 "bison-chpl-lib.cpp"
    break;

  case 380: /* formal_var_arg_expr: TDOTDOTDOT  */
#line 2344 "chpl.ypp"
                         { (yyval.expr) = nullptr; }
#line 9021 "bison-chpl-lib.cpp"
    break;

  case 381: /* formal_var_arg_expr: TDOTDOTDOT expr  */
#line 2345 "chpl.ypp"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 9027 "bison-chpl-lib.cpp"
    break;

  case 382: /* formal_var_arg_expr: TDOTDOTDOT query_expr  */
#line 2346 "chpl.ypp"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 9033 "bison-chpl-lib.cpp"
    break;

  case 383: /* opt_formal_ls: %empty  */
#line 2350 "chpl.ypp"
                     { (yyval.exprList) = context->parenlessMarker; }
#line 9039 "bison-chpl-lib.cpp"
    break;

  case 384: /* opt_formal_ls: TLP formal_ls TRP  */
#line 2351 "chpl.ypp"
                     { (yyval.exprList) = (yyvsp[-1].exprList); }
#line 9045 "bison-chpl-lib.cpp"
    break;

  case 385: /* req_formal_ls: TLP formal_ls TRP  */
#line 2355 "chpl.ypp"
                     { (yyval.exprList) = (yyvsp[-1].exprList); }
#line 9051 "bison-chpl-lib.cpp"
    break;

  case 386: /* formal_ls_inner: formal  */
#line 2359 "chpl.ypp"
                                 { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9057 "bison-chpl-lib.cpp"
    break;

  case 387: /* formal_ls_inner: formal_ls_inner TCOMMA formal  */
#line 2360 "chpl.ypp"
                                 { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9063 "bison-chpl-lib.cpp"
    break;

  case 388: /* formal_ls: %empty  */
#line 2364 "chpl.ypp"
                           { (yyval.exprList) = context->makeList(); }
#line 9069 "bison-chpl-lib.cpp"
    break;

  case 389: /* formal_ls: formal_ls_inner  */
#line 2365 "chpl.ypp"
                           { (yyval.exprList) = (yyvsp[0].exprList); }
#line 9075 "bison-chpl-lib.cpp"
    break;

  case 390: /* formal: opt_formal_intent_tag ident_def opt_formal_type opt_init_expr  */
#line 2370 "chpl.ypp"
  {
    (yyval.expr) = Formal::build(BUILDER, LOC((yyloc)), /*attributes*/ nullptr,
                       /*name*/ (yyvsp[-2].uniqueStr),
                       /*intent*/ (yyvsp[-3].intentTag),
                       toOwned((yyvsp[-1].expr)),
                       toOwned((yyvsp[0].expr))).release();
    context->noteIsBuildingFormal(false);
  }
#line 9088 "bison-chpl-lib.cpp"
    break;

  case 391: /* formal: pragma_ls opt_formal_intent_tag ident_def opt_formal_type opt_init_expr  */
#line 2379 "chpl.ypp"
  {
    auto attributes = context->buildAttributes((yyloc));
    (yyval.expr) = Formal::build(BUILDER, LOC((yyloc)), std::move(attributes),
                       /*name*/ (yyvsp[-2].uniqueStr),
                       /*intent*/ (yyvsp[-3].intentTag),
                       toOwned((yyvsp[-1].expr)),
                       toOwned((yyvsp[0].expr))).release();
    context->noteIsBuildingFormal(false);
    context->resetAttributePartsState();
  }
#line 9103 "bison-chpl-lib.cpp"
    break;

  case 392: /* formal: opt_formal_intent_tag ident_def opt_formal_type formal_var_arg_expr  */
#line 2390 "chpl.ypp"
  {
    (yyval.expr) = VarArgFormal::build(BUILDER, LOC((yyloc)),
                             /*attributes*/ nullptr,
                             /*name*/ (yyvsp[-2].uniqueStr),
                             /*intent*/ (yyvsp[-3].intentTag),
                             toOwned((yyvsp[-1].expr)),
                             toOwned((yyvsp[0].expr))).release();
    context->noteIsBuildingFormal(false);
  }
#line 9117 "bison-chpl-lib.cpp"
    break;

  case 393: /* formal: pragma_ls opt_formal_intent_tag ident_def opt_formal_type formal_var_arg_expr  */
#line 2400 "chpl.ypp"
  {
    auto attributes = context->buildAttributes((yyloc));
    (yyval.expr) = VarArgFormal::build(BUILDER, LOC((yyloc)),
                             std::move(attributes),
                             /*name*/ (yyvsp[-2].uniqueStr),
                             /*intent*/ (yyvsp[-3].intentTag),
                             toOwned((yyvsp[-1].expr)),
                             toOwned((yyvsp[0].expr))).release();
    context->noteIsBuildingFormal(false);
    context->resetAttributePartsState();
  }
#line 9133 "bison-chpl-lib.cpp"
    break;

  case 394: /* formal: opt_formal_intent_tag TLP tuple_var_decl_stmt_inner_ls TRP opt_formal_type opt_init_expr  */
#line 2413 "chpl.ypp"
  {
    (yyval.expr) = TupleDecl::build(BUILDER, LOC((yyloc)), /*attributes*/ nullptr,
                          context->visibility,
                          context->linkage,
                          ((TupleDecl::IntentOrKind) (yyvsp[-5].intentTag)),
                          context->consumeList((yyvsp[-3].exprList)),
                          toOwned((yyvsp[-1].expr)),
                          toOwned((yyvsp[0].expr))).release();
    context->noteIsBuildingFormal(false);
  }
#line 9148 "bison-chpl-lib.cpp"
    break;

  case 395: /* formal: opt_formal_intent_tag TLP tuple_var_decl_stmt_inner_ls TRP opt_formal_type formal_var_arg_expr  */
#line 2425 "chpl.ypp"
  {
    (yyval.expr) = ERROR((yyloc), "variable-length argument may not be grouped in a tuple");
  }
#line 9156 "bison-chpl-lib.cpp"
    break;

  case 396: /* opt_formal_intent_tag: %empty  */
#line 2431 "chpl.ypp"
  {
    context->noteIsBuildingFormal(true);
    (yyval.intentTag) = Formal::DEFAULT_INTENT;
  }
#line 9165 "bison-chpl-lib.cpp"
    break;

  case 397: /* opt_formal_intent_tag: required_intent_tag  */
#line 2436 "chpl.ypp"
  {
    context->noteIsBuildingFormal(true);
    (yyval.intentTag) = (yyvsp[0].intentTag);
  }
#line 9174 "bison-chpl-lib.cpp"
    break;

  case 398: /* required_intent_tag: TIN  */
#line 2443 "chpl.ypp"
              { (yyval.intentTag) = Formal::IN; }
#line 9180 "bison-chpl-lib.cpp"
    break;

  case 399: /* required_intent_tag: TINOUT  */
#line 2444 "chpl.ypp"
              { (yyval.intentTag) = Formal::INOUT; }
#line 9186 "bison-chpl-lib.cpp"
    break;

  case 400: /* required_intent_tag: TOUT  */
#line 2445 "chpl.ypp"
              { (yyval.intentTag) = Formal::OUT; }
#line 9192 "bison-chpl-lib.cpp"
    break;

  case 401: /* required_intent_tag: TCONST TIN  */
#line 2446 "chpl.ypp"
              { (yyval.intentTag) = Formal::CONST_IN; }
#line 9198 "bison-chpl-lib.cpp"
    break;

  case 402: /* required_intent_tag: TCONST TREF  */
#line 2447 "chpl.ypp"
              { (yyval.intentTag) = Formal::CONST_REF; }
#line 9204 "bison-chpl-lib.cpp"
    break;

  case 403: /* required_intent_tag: TCONST  */
#line 2448 "chpl.ypp"
              { (yyval.intentTag) = Formal::CONST; }
#line 9210 "bison-chpl-lib.cpp"
    break;

  case 404: /* required_intent_tag: TPARAM  */
#line 2449 "chpl.ypp"
              { (yyval.intentTag) = Formal::PARAM; }
#line 9216 "bison-chpl-lib.cpp"
    break;

  case 405: /* required_intent_tag: TREF  */
#line 2450 "chpl.ypp"
              { (yyval.intentTag) = Formal::REF; }
#line 9222 "bison-chpl-lib.cpp"
    break;

  case 406: /* required_intent_tag: TTYPE  */
#line 2451 "chpl.ypp"
              { (yyval.intentTag) = Formal::TYPE; }
#line 9228 "bison-chpl-lib.cpp"
    break;

  case 407: /* opt_this_intent_tag: %empty  */
#line 2455 "chpl.ypp"
                { (yyval.intentTag) = Formal::DEFAULT_INTENT; }
#line 9234 "bison-chpl-lib.cpp"
    break;

  case 408: /* opt_this_intent_tag: TPARAM  */
#line 2456 "chpl.ypp"
                { (yyval.intentTag) = Formal::PARAM; }
#line 9240 "bison-chpl-lib.cpp"
    break;

  case 409: /* opt_this_intent_tag: TREF  */
#line 2457 "chpl.ypp"
                { (yyval.intentTag) = Formal::REF; }
#line 9246 "bison-chpl-lib.cpp"
    break;

  case 410: /* opt_this_intent_tag: TCONST TREF  */
#line 2458 "chpl.ypp"
                { (yyval.intentTag) = Formal::CONST_REF; }
#line 9252 "bison-chpl-lib.cpp"
    break;

  case 411: /* opt_this_intent_tag: TCONST  */
#line 2459 "chpl.ypp"
                { (yyval.intentTag) = Formal::CONST; }
#line 9258 "bison-chpl-lib.cpp"
    break;

  case 412: /* opt_this_intent_tag: TTYPE  */
#line 2460 "chpl.ypp"
                { (yyval.intentTag) = Formal::TYPE; }
#line 9264 "bison-chpl-lib.cpp"
    break;

  case 413: /* proc_iter_or_op: TPROC  */
#line 2464 "chpl.ypp"
            { (yyval.functionKind) = Function::PROC; }
#line 9270 "bison-chpl-lib.cpp"
    break;

  case 414: /* proc_iter_or_op: TITER  */
#line 2465 "chpl.ypp"
            { (yyval.functionKind) = Function::ITER; }
#line 9276 "bison-chpl-lib.cpp"
    break;

  case 415: /* proc_iter_or_op: TOPERATOR  */
#line 2466 "chpl.ypp"
            { (yyval.functionKind) = Function::OPERATOR; }
#line 9282 "bison-chpl-lib.cpp"
    break;

  case 416: /* opt_ret_tag: %empty  */
#line 2470 "chpl.ypp"
              { (yyval.returnTag) = Function::DEFAULT_RETURN_INTENT; }
#line 9288 "bison-chpl-lib.cpp"
    break;

  case 417: /* opt_ret_tag: TCONST  */
#line 2471 "chpl.ypp"
              { (yyval.returnTag) = Function::CONST; }
#line 9294 "bison-chpl-lib.cpp"
    break;

  case 418: /* opt_ret_tag: TCONST TREF  */
#line 2472 "chpl.ypp"
              { (yyval.returnTag) = Function::CONST_REF; }
#line 9300 "bison-chpl-lib.cpp"
    break;

  case 419: /* opt_ret_tag: TREF  */
#line 2473 "chpl.ypp"
              { (yyval.returnTag) = Function::REF; }
#line 9306 "bison-chpl-lib.cpp"
    break;

  case 420: /* opt_ret_tag: TPARAM  */
#line 2474 "chpl.ypp"
              { (yyval.returnTag) = Function::PARAM; }
#line 9312 "bison-chpl-lib.cpp"
    break;

  case 421: /* opt_ret_tag: TTYPE  */
#line 2475 "chpl.ypp"
              { (yyval.returnTag) = Function::TYPE; }
#line 9318 "bison-chpl-lib.cpp"
    break;

  case 422: /* opt_throws_error: %empty  */
#line 2479 "chpl.ypp"
          { (yyval.throwsTag) = ThrowsTag_DEFAULT; }
#line 9324 "bison-chpl-lib.cpp"
    break;

  case 423: /* opt_throws_error: TTHROWS  */
#line 2480 "chpl.ypp"
          { (yyval.throwsTag) = ThrowsTag_THROWS; }
#line 9330 "bison-chpl-lib.cpp"
    break;

  case 424: /* opt_function_body_stmt: TSEMI  */
#line 2483 "chpl.ypp"
                      { context->clearComments(); (yyval.exprList) = nullptr; }
#line 9336 "bison-chpl-lib.cpp"
    break;

  case 425: /* opt_function_body_stmt: function_body_stmt  */
#line 2484 "chpl.ypp"
                      { (yyval.exprList) = (yyvsp[0].exprList); }
#line 9342 "bison-chpl-lib.cpp"
    break;

  case 426: /* function_body_stmt: block_stmt_body  */
#line 2488 "chpl.ypp"
                    { (yyval.exprList) = (yyvsp[0].exprList); }
#line 9348 "bison-chpl-lib.cpp"
    break;

  case 427: /* function_body_stmt: return_stmt  */
#line 2489 "chpl.ypp"
                    { context->clearComments(); (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt)); }
#line 9354 "bison-chpl-lib.cpp"
    break;

  case 428: /* query_expr: TQUERIEDIDENT  */
#line 2493 "chpl.ypp"
                  { (yyval.expr) = context->buildTypeQuery((yyloc), (yyvsp[0].uniqueStr)); }
#line 9360 "bison-chpl-lib.cpp"
    break;

  case 429: /* opt_lifetime_where: %empty  */
#line 2498 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(nullptr, nullptr); }
#line 9366 "bison-chpl-lib.cpp"
    break;

  case 430: /* opt_lifetime_where: TWHERE expr  */
#line 2500 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].expr), nullptr); }
#line 9372 "bison-chpl-lib.cpp"
    break;

  case 431: /* opt_lifetime_where: TLIFETIME lifetime_components_expr  */
#line 2502 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(nullptr, (yyvsp[0].exprList)); }
#line 9378 "bison-chpl-lib.cpp"
    break;

  case 432: /* opt_lifetime_where: TWHERE expr TLIFETIME lifetime_components_expr  */
#line 2504 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[-2].expr), (yyvsp[0].exprList)); }
#line 9384 "bison-chpl-lib.cpp"
    break;

  case 433: /* opt_lifetime_where: TLIFETIME lifetime_components_expr TWHERE expr  */
#line 2506 "chpl.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].expr), (yyvsp[-2].exprList)); }
#line 9390 "bison-chpl-lib.cpp"
    break;

  case 434: /* lifetime_components_expr: lifetime_expr  */
#line 2511 "chpl.ypp"
  { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9396 "bison-chpl-lib.cpp"
    break;

  case 435: /* lifetime_components_expr: lifetime_components_expr TCOMMA lifetime_expr  */
#line 2513 "chpl.ypp"
  { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9402 "bison-chpl-lib.cpp"
    break;

  case 436: /* lifetime_expr: lifetime_ident TASSIGN lifetime_ident  */
#line 2518 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9408 "bison-chpl-lib.cpp"
    break;

  case 437: /* lifetime_expr: lifetime_ident TLESS lifetime_ident  */
#line 2520 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9414 "bison-chpl-lib.cpp"
    break;

  case 438: /* lifetime_expr: lifetime_ident TLESSEQUAL lifetime_ident  */
#line 2522 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9420 "bison-chpl-lib.cpp"
    break;

  case 439: /* lifetime_expr: lifetime_ident TEQUAL lifetime_ident  */
#line 2524 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9426 "bison-chpl-lib.cpp"
    break;

  case 440: /* lifetime_expr: lifetime_ident TGREATER lifetime_ident  */
#line 2526 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9432 "bison-chpl-lib.cpp"
    break;

  case 441: /* lifetime_expr: lifetime_ident TGREATEREQUAL lifetime_ident  */
#line 2528 "chpl.ypp"
    { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 9438 "bison-chpl-lib.cpp"
    break;

  case 442: /* lifetime_expr: TRETURN lifetime_ident  */
#line 2530 "chpl.ypp"
    { (yyval.expr) = Return::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[0].expr))).release(); }
#line 9444 "bison-chpl-lib.cpp"
    break;

  case 443: /* lifetime_ident: TIDENT  */
#line 2534 "chpl.ypp"
         { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9450 "bison-chpl-lib.cpp"
    break;

  case 444: /* lifetime_ident: TTHIS  */
#line 2535 "chpl.ypp"
         { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9456 "bison-chpl-lib.cpp"
    break;

  case 445: /* type_alias_decl_stmt: type_alias_decl_stmt_start type_alias_decl_stmt_inner_ls TSEMI  */
#line 2540 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 9465 "bison-chpl-lib.cpp"
    break;

  case 446: /* type_alias_decl_stmt_start: TTYPE  */
#line 2548 "chpl.ypp"
  {
    (yyval.variableKind) = context->noteVarDeclKind(Variable::TYPE);
  }
#line 9473 "bison-chpl-lib.cpp"
    break;

  case 447: /* type_alias_decl_stmt_start: TCONFIG TTYPE  */
#line 2552 "chpl.ypp"
  {
    (yyval.variableKind) = context->noteVarDeclKind(Variable::TYPE);
    context->noteIsVarDeclConfig(true);
  }
#line 9482 "bison-chpl-lib.cpp"
    break;

  case 448: /* type_alias_decl_stmt_start: TEXTERN TTYPE  */
#line 2557 "chpl.ypp"
  {
    (yyval.variableKind) = context->noteVarDeclKind(Variable::TYPE);
    context->noteLinkage(Decl::EXTERN);
  }
#line 9491 "bison-chpl-lib.cpp"
    break;

  case 449: /* type_alias_decl_stmt_inner_ls: type_alias_decl_stmt_inner  */
#line 2565 "chpl.ypp"
  {
    (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
  }
#line 9499 "bison-chpl-lib.cpp"
    break;

  case 450: /* type_alias_decl_stmt_inner_ls: type_alias_decl_stmt_inner_ls TCOMMA type_alias_decl_stmt_inner  */
#line 2569 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].commentsAndStmt));
  }
#line 9507 "bison-chpl-lib.cpp"
    break;

  case 451: /* type_alias_decl_stmt_inner: ident_def opt_init_type  */
#line 2576 "chpl.ypp"
  {
    // TODO (dlongnecke-cray): Add a helper to build this and var_decl_stmt.
    auto node = Variable::build(BUILDER, LOC((yyloc)),
                                context->buildAttributes((yyloc)),
                                context->visibility,
                                context->linkage,
                                context->consumeVarDeclLinkageName(),
                                /*name*/ (yyvsp[-1].uniqueStr),
                                context->varDeclKind,
                                context->isVarDeclConfig,
                                context->currentScopeIsAggregate(),
                                /*typeExpression*/ nullptr,
                                toOwned((yyvsp[0].expr)));
      // Gather the comments like a statement does.
      (yyval.commentsAndStmt) = STMT((yylsp[-1]), node.release());
      context->clearComments();
  }
#line 9529 "bison-chpl-lib.cpp"
    break;

  case 452: /* opt_init_type: %empty  */
#line 2596 "chpl.ypp"
  { (yyval.expr) = nullptr; }
#line 9535 "bison-chpl-lib.cpp"
    break;

  case 453: /* opt_init_type: TASSIGN type_level_expr  */
#line 2598 "chpl.ypp"
  { (yyval.expr) = (yyvsp[0].expr); }
#line 9541 "bison-chpl-lib.cpp"
    break;

  case 454: /* opt_init_type: TASSIGN array_type  */
#line 2600 "chpl.ypp"
  {
    // Cannot be a type_level_expr as expr inherits from type_level_expr.
    (yyval.expr) = (yyvsp[0].expr);
  }
#line 9550 "bison-chpl-lib.cpp"
    break;

  case 455: /* var_decl_type: TPARAM  */
#line 2607 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::PARAM); }
#line 9556 "bison-chpl-lib.cpp"
    break;

  case 456: /* var_decl_type: TCONST TREF  */
#line 2608 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::CONST_REF); }
#line 9562 "bison-chpl-lib.cpp"
    break;

  case 457: /* var_decl_type: TREF  */
#line 2609 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::REF); }
#line 9568 "bison-chpl-lib.cpp"
    break;

  case 458: /* var_decl_type: TCONST  */
#line 2610 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::CONST); }
#line 9574 "bison-chpl-lib.cpp"
    break;

  case 459: /* var_decl_type: TVAR  */
#line 2611 "chpl.ypp"
              { (yyval.variableKind) = context->noteVarDeclKind(Variable::VAR); }
#line 9580 "bison-chpl-lib.cpp"
    break;

  case 460: /* $@13: %empty  */
#line 2616 "chpl.ypp"
  {
    // Use a mid-rule action to thread along 'isVarDeclConfig'.
    context->noteIsVarDeclConfig(true);
  }
#line 9589 "bison-chpl-lib.cpp"
    break;

  case 461: /* var_decl_stmt: TCONFIG $@13 var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 2620 "chpl.ypp"
                                             {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 9598 "bison-chpl-lib.cpp"
    break;

  case 462: /* var_decl_stmt: var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 2625 "chpl.ypp"
  {
    (yyval.commentsAndStmt) = context->buildVarOrMultiDeclStmt((yyloc), (yyvsp[-1].exprList));
    context->resetDeclState();
  }
#line 9607 "bison-chpl-lib.cpp"
    break;

  case 463: /* var_decl_stmt_inner_ls: var_decl_stmt_inner  */
#line 2633 "chpl.ypp"
    {
      (yyval.exprList) = context->makeList((yyvsp[0].commentsAndStmt));
    }
#line 9615 "bison-chpl-lib.cpp"
    break;

  case 464: /* var_decl_stmt_inner_ls: var_decl_stmt_inner_ls TCOMMA var_decl_stmt_inner  */
#line 2637 "chpl.ypp"
    {
      (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].commentsAndStmt));
    }
#line 9623 "bison-chpl-lib.cpp"
    break;

  case 465: /* var_decl_stmt_inner: ident_def opt_type opt_init_expr  */
#line 2644 "chpl.ypp"
    {
      auto varDecl = Variable::build(BUILDER, LOC((yyloc)),
                                     context->buildAttributes((yyloc)),
                                     context->visibility,
                                     context->linkage,
                                     context->consumeVarDeclLinkageName(),
                                     /*name*/ (yyvsp[-2].uniqueStr),
                                     context->varDeclKind,
                                     context->isVarDeclConfig,
                                     context->currentScopeIsAggregate(),
                                     toOwned((yyvsp[-1].expr)), toOwned((yyvsp[0].expr)));
      // gather the comments like a statement does
      (yyval.commentsAndStmt) = STMT((yylsp[-2]), varDecl.release());
      context->clearComments();
    }
#line 9643 "bison-chpl-lib.cpp"
    break;

  case 466: /* var_decl_stmt_inner: TLP tuple_var_decl_stmt_inner_ls TRP opt_type opt_init_expr  */
#line 2660 "chpl.ypp"
    {
      auto intentOrKind = (TupleDecl::IntentOrKind) context->varDeclKind;
      auto tupleDecl = TupleDecl::build(BUILDER, LOC((yyloc)),
                                        context->buildAttributes((yyloc)),
                                        context->visibility,
                                        context->linkage,
                                        intentOrKind,
                                        context->consumeList((yyvsp[-3].exprList)),
                                        toOwned((yyvsp[-1].expr)),
                                        toOwned((yyvsp[0].expr)));
      (yyval.commentsAndStmt) = STMT((yylsp[-4]), tupleDecl.release());
      context->clearComments();
    }
#line 9661 "bison-chpl-lib.cpp"
    break;

  case 467: /* tuple_var_decl_component: TUNDERSCORE  */
#line 2677 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleComponent((yyloc), (yyvsp[0].uniqueStr));
  }
#line 9669 "bison-chpl-lib.cpp"
    break;

  case 468: /* tuple_var_decl_component: ident_def  */
#line 2681 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleComponent((yyloc), (yyvsp[0].uniqueStr));
  }
#line 9677 "bison-chpl-lib.cpp"
    break;

  case 469: /* tuple_var_decl_component: TLP tuple_var_decl_stmt_inner_ls TRP  */
#line 2685 "chpl.ypp"
  {
    (yyval.expr) = context->buildTupleComponent((yyloc), (yyvsp[-1].exprList));
  }
#line 9685 "bison-chpl-lib.cpp"
    break;

  case 470: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_component  */
#line 2692 "chpl.ypp"
    { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9691 "bison-chpl-lib.cpp"
    break;

  case 471: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_stmt_inner_ls TCOMMA  */
#line 2694 "chpl.ypp"
    { (yyval.exprList) = (yyvsp[-1].exprList); }
#line 9697 "bison-chpl-lib.cpp"
    break;

  case 472: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_stmt_inner_ls TCOMMA tuple_var_decl_component  */
#line 2696 "chpl.ypp"
    { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9703 "bison-chpl-lib.cpp"
    break;

  case 473: /* opt_init_expr: %empty  */
#line 2702 "chpl.ypp"
                        { (yyval.expr) = nullptr; }
#line 9709 "bison-chpl-lib.cpp"
    break;

  case 474: /* opt_init_expr: TASSIGN TNOINIT  */
#line 2703 "chpl.ypp"
                        { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9715 "bison-chpl-lib.cpp"
    break;

  case 475: /* opt_init_expr: TASSIGN opt_try_expr  */
#line 2704 "chpl.ypp"
                        { (yyval.expr) = (yyvsp[0].expr); }
#line 9721 "bison-chpl-lib.cpp"
    break;

  case 476: /* ret_array_type: TLSBR TRSBR type_level_expr  */
#line 2710 "chpl.ypp"
  {
    (yyval.expr) = context->buildArrayType((yyloc), (yylsp[-2]), /*domainExprs*/ nullptr, (yyvsp[0].expr));
  }
#line 9729 "bison-chpl-lib.cpp"
    break;

  case 477: /* ret_array_type: TLSBR TRSBR  */
#line 2714 "chpl.ypp"
  {
    (yyval.expr) = context->buildArrayType((yyloc), (yylsp[-1]), nullptr, nullptr);
  }
#line 9737 "bison-chpl-lib.cpp"
    break;

  case 478: /* ret_array_type: TLSBR expr_ls TRSBR type_level_expr  */
#line 2718 "chpl.ypp"
  {
    (yyval.expr) = context->buildArrayType((yyloc), (yylsp[-2]), (yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 9745 "bison-chpl-lib.cpp"
    break;

  case 479: /* ret_array_type: TLSBR expr_ls TRSBR  */
#line 2722 "chpl.ypp"
  {
    (yyval.expr) = context->buildArrayType((yyloc), (yylsp[-1]), (yyvsp[-1].exprList), /*typeExpr*/ nullptr);
  }
#line 9753 "bison-chpl-lib.cpp"
    break;

  case 480: /* ret_array_type: TLSBR TRSBR ret_array_type  */
#line 2726 "chpl.ypp"
  {
    (yyval.expr) = context->buildArrayType((yyloc), (yylsp[-2]), /*domainExprs*/ nullptr, (yyvsp[0].expr));
  }
#line 9761 "bison-chpl-lib.cpp"
    break;

  case 481: /* ret_array_type: TLSBR expr_ls TRSBR ret_array_type  */
#line 2730 "chpl.ypp"
  {
    (yyval.expr) = context->buildArrayType((yyloc), (yylsp[-2]), (yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 9769 "bison-chpl-lib.cpp"
    break;

  case 482: /* ret_array_type: TLSBR error TRSBR  */
#line 2734 "chpl.ypp"
  {
    (yyval.expr) = ERROR((yyloc), "invalid expression for domain of array return type");
  }
#line 9777 "bison-chpl-lib.cpp"
    break;

  case 483: /* opt_ret_type: %empty  */
#line 2740 "chpl.ypp"
                                 { (yyval.expr) = nullptr; }
#line 9783 "bison-chpl-lib.cpp"
    break;

  case 484: /* opt_ret_type: TCOLON type_level_expr  */
#line 2741 "chpl.ypp"
                                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9789 "bison-chpl-lib.cpp"
    break;

  case 485: /* opt_ret_type: TCOLON ret_array_type  */
#line 2742 "chpl.ypp"
                                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9795 "bison-chpl-lib.cpp"
    break;

  case 486: /* opt_ret_type: TCOLON reserved_type_ident_use  */
#line 2743 "chpl.ypp"
                                 { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9801 "bison-chpl-lib.cpp"
    break;

  case 487: /* opt_ret_type: error  */
#line 2744 "chpl.ypp"
                                 { (yyval.expr) = ErroneousExpression::build(BUILDER, LOC((yylsp[0]))).release(); }
#line 9807 "bison-chpl-lib.cpp"
    break;

  case 488: /* opt_type: %empty  */
#line 2749 "chpl.ypp"
                                 { (yyval.expr) = nullptr; }
#line 9813 "bison-chpl-lib.cpp"
    break;

  case 489: /* opt_type: TCOLON type_level_expr  */
#line 2750 "chpl.ypp"
                                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9819 "bison-chpl-lib.cpp"
    break;

  case 490: /* opt_type: TCOLON array_type  */
#line 2751 "chpl.ypp"
                                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9825 "bison-chpl-lib.cpp"
    break;

  case 491: /* opt_type: TCOLON reserved_type_ident_use  */
#line 2752 "chpl.ypp"
                                 { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9831 "bison-chpl-lib.cpp"
    break;

  case 492: /* opt_type: error  */
#line 2753 "chpl.ypp"
                                 { (yyval.expr) = ErroneousExpression::build(BUILDER, LOC((yylsp[0]))).release(); }
#line 9837 "bison-chpl-lib.cpp"
    break;

  case 493: /* array_type: TLSBR expr_ls TRSBR type_level_expr  */
#line 2774 "chpl.ypp"
  {
    (yyval.expr) = context->buildArrayType((yyloc), (yylsp[-2]), (yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 9845 "bison-chpl-lib.cpp"
    break;

  case 494: /* array_type: TLSBR expr_ls TRSBR array_type  */
#line 2778 "chpl.ypp"
  {
    (yyval.expr) = context->buildArrayType((yyloc), (yylsp[-2]), (yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 9853 "bison-chpl-lib.cpp"
    break;

  case 495: /* array_type: TLSBR expr_ls TIN expr TRSBR type_level_expr  */
#line 2782 "chpl.ypp"
  {
    (yyval.expr) = context->buildArrayTypeWithIndex((yyloc), (yylsp[-4]), (yyvsp[-4].exprList), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 9861 "bison-chpl-lib.cpp"
    break;

  case 496: /* array_type: TLSBR error TRSBR  */
#line 2786 "chpl.ypp"
  {
    (yyval.expr) = ErroneousExpression::build(BUILDER, LOC((yylsp[-1]))).release();
  }
#line 9869 "bison-chpl-lib.cpp"
    break;

  case 497: /* opt_formal_array_elt_type: %empty  */
#line 2792 "chpl.ypp"
                        { (yyval.expr) = nullptr; }
#line 9875 "bison-chpl-lib.cpp"
    break;

  case 498: /* opt_formal_array_elt_type: type_level_expr  */
#line 2793 "chpl.ypp"
                        { (yyval.expr) = (yyvsp[0].expr); }
#line 9881 "bison-chpl-lib.cpp"
    break;

  case 499: /* opt_formal_array_elt_type: query_expr  */
#line 2794 "chpl.ypp"
                        { (yyval.expr) = (yyvsp[0].expr); }
#line 9887 "bison-chpl-lib.cpp"
    break;

  case 500: /* formal_array_type: TLSBR TRSBR opt_formal_array_elt_type  */
#line 2799 "chpl.ypp"
  {
    auto domainLoc = context->makeSpannedLocation((yylsp[-2]), (yylsp[-1]));
    (yyval.expr) = context->buildArrayType((yyloc), domainLoc, /*domainExprs*/ nullptr, (yyvsp[0].expr));
  }
#line 9896 "bison-chpl-lib.cpp"
    break;

  case 501: /* formal_array_type: TLSBR expr_ls TRSBR opt_formal_array_elt_type  */
#line 2804 "chpl.ypp"
  {
    (yyval.expr) = context->buildArrayType((yyloc), (yylsp[-2]), (yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 9904 "bison-chpl-lib.cpp"
    break;

  case 502: /* formal_array_type: TLSBR TRSBR formal_array_type  */
#line 2812 "chpl.ypp"
  {
    auto domainLoc = context->makeSpannedLocation((yylsp[-2]), (yylsp[-1]));
    (yyval.expr) = context->buildArrayType((yyloc), domainLoc, /*domainExprs*/ nullptr, (yyvsp[0].expr));
  }
#line 9913 "bison-chpl-lib.cpp"
    break;

  case 503: /* formal_array_type: TLSBR expr_ls TRSBR formal_array_type  */
#line 2817 "chpl.ypp"
  {
    (yyval.expr) = context->buildArrayType((yyloc), (yylsp[-2]), (yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 9921 "bison-chpl-lib.cpp"
    break;

  case 504: /* formal_array_type: TLSBR expr_ls TIN expr TRSBR opt_formal_array_elt_type  */
#line 2821 "chpl.ypp"
  {
    (yyval.expr) = context->buildArrayTypeWithIndex((yyloc), (yylsp[-4]), (yyvsp[-4].exprList), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 9929 "bison-chpl-lib.cpp"
    break;

  case 505: /* opt_formal_type: %empty  */
#line 2827 "chpl.ypp"
                                 { (yyval.expr) = nullptr; }
#line 9935 "bison-chpl-lib.cpp"
    break;

  case 506: /* opt_formal_type: TCOLON type_level_expr  */
#line 2828 "chpl.ypp"
                                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9941 "bison-chpl-lib.cpp"
    break;

  case 507: /* opt_formal_type: TCOLON query_expr  */
#line 2829 "chpl.ypp"
                                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9947 "bison-chpl-lib.cpp"
    break;

  case 508: /* opt_formal_type: TCOLON reserved_type_ident_use  */
#line 2830 "chpl.ypp"
                                 { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 9953 "bison-chpl-lib.cpp"
    break;

  case 509: /* opt_formal_type: TCOLON formal_array_type  */
#line 2831 "chpl.ypp"
                                 { (yyval.expr) = (yyvsp[0].expr); }
#line 9959 "bison-chpl-lib.cpp"
    break;

  case 510: /* expr_ls: expr  */
#line 2837 "chpl.ypp"
                             { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9965 "bison-chpl-lib.cpp"
    break;

  case 511: /* expr_ls: query_expr  */
#line 2838 "chpl.ypp"
                             { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9971 "bison-chpl-lib.cpp"
    break;

  case 512: /* expr_ls: expr_ls TCOMMA expr  */
#line 2839 "chpl.ypp"
                             { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9977 "bison-chpl-lib.cpp"
    break;

  case 513: /* expr_ls: expr_ls TCOMMA query_expr  */
#line 2840 "chpl.ypp"
                             { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9983 "bison-chpl-lib.cpp"
    break;

  case 514: /* simple_expr_ls: expr  */
#line 2844 "chpl.ypp"
                                   { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 9989 "bison-chpl-lib.cpp"
    break;

  case 515: /* simple_expr_ls: simple_expr_ls TCOMMA expr  */
#line 2845 "chpl.ypp"
                                   { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 9995 "bison-chpl-lib.cpp"
    break;

  case 516: /* tuple_component: TUNDERSCORE  */
#line 2849 "chpl.ypp"
                { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 10001 "bison-chpl-lib.cpp"
    break;

  case 517: /* tuple_component: opt_try_expr  */
#line 2850 "chpl.ypp"
                { (yyval.expr) = (yyvsp[0].expr); }
#line 10007 "bison-chpl-lib.cpp"
    break;

  case 518: /* tuple_component: query_expr  */
#line 2851 "chpl.ypp"
                { (yyval.expr) = (yyvsp[0].expr); }
#line 10013 "bison-chpl-lib.cpp"
    break;

  case 519: /* tuple_expr_ls: tuple_component TCOMMA tuple_component  */
#line 2856 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList(context->makeList((yyvsp[-2].expr)), (yyvsp[0].expr));
  }
#line 10021 "bison-chpl-lib.cpp"
    break;

  case 520: /* tuple_expr_ls: tuple_expr_ls TCOMMA tuple_component  */
#line 2860 "chpl.ypp"
  {
    (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 10029 "bison-chpl-lib.cpp"
    break;

  case 521: /* opt_actual_ls: %empty  */
#line 2866 "chpl.ypp"
             { (yyval.maybeNamedActualList) = new MaybeNamedActualList(); }
#line 10035 "bison-chpl-lib.cpp"
    break;

  case 522: /* opt_actual_ls: actual_ls  */
#line 2867 "chpl.ypp"
             { (yyval.maybeNamedActualList) = (yyvsp[0].maybeNamedActualList); }
#line 10041 "bison-chpl-lib.cpp"
    break;

  case 523: /* actual_ls: actual_expr  */
#line 2872 "chpl.ypp"
    { MaybeNamedActualList* lst = new MaybeNamedActualList();
      lst->push_back((yyvsp[0].maybeNamedActual));
      (yyval.maybeNamedActualList) = lst;
    }
#line 10050 "bison-chpl-lib.cpp"
    break;

  case 524: /* actual_ls: actual_ls TCOMMA actual_expr  */
#line 2877 "chpl.ypp"
    {
      MaybeNamedActualList* lst = (yyvsp[-2].maybeNamedActualList);
      lst->push_back((yyvsp[0].maybeNamedActual));
      (yyval.maybeNamedActualList) = lst;
    }
#line 10060 "bison-chpl-lib.cpp"
    break;

  case 525: /* actual_expr: ident_use TASSIGN query_expr  */
#line 2885 "chpl.ypp"
                                 { (yyval.maybeNamedActual) = makeMaybeNamedActual((yyvsp[0].expr), (yyvsp[-2].uniqueStr)); }
#line 10066 "bison-chpl-lib.cpp"
    break;

  case 526: /* actual_expr: ident_use TASSIGN opt_try_expr  */
#line 2886 "chpl.ypp"
                                 { (yyval.maybeNamedActual) = makeMaybeNamedActual((yyvsp[0].expr), (yyvsp[-2].uniqueStr)); }
#line 10072 "bison-chpl-lib.cpp"
    break;

  case 527: /* actual_expr: query_expr  */
#line 2887 "chpl.ypp"
                                 { (yyval.maybeNamedActual) = makeMaybeNamedActual((yyvsp[0].expr)); }
#line 10078 "bison-chpl-lib.cpp"
    break;

  case 528: /* actual_expr: opt_try_expr  */
#line 2888 "chpl.ypp"
                                 { (yyval.maybeNamedActual) = makeMaybeNamedActual((yyvsp[0].expr)); }
#line 10084 "bison-chpl-lib.cpp"
    break;

  case 529: /* ident_expr: ident_use  */
#line 2892 "chpl.ypp"
                 { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 10090 "bison-chpl-lib.cpp"
    break;

  case 530: /* ident_expr: scalar_type  */
#line 2893 "chpl.ypp"
                 { (yyval.expr) = (yyvsp[0].expr); }
#line 10096 "bison-chpl-lib.cpp"
    break;

  case 531: /* type_level_expr: sub_type_level_expr  */
#line 2905 "chpl.ypp"
  { (yyval.expr) = (yyvsp[0].expr); }
#line 10102 "bison-chpl-lib.cpp"
    break;

  case 532: /* type_level_expr: sub_type_level_expr TQUESTION  */
#line 2907 "chpl.ypp"
  { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[0].uniqueStr), (yyvsp[-1].expr)); }
#line 10108 "bison-chpl-lib.cpp"
    break;

  case 533: /* type_level_expr: TQUESTION  */
#line 2909 "chpl.ypp"
  { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 10114 "bison-chpl-lib.cpp"
    break;

  case 539: /* sub_type_level_expr: TSINGLE expr  */
#line 2920 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10120 "bison-chpl-lib.cpp"
    break;

  case 540: /* sub_type_level_expr: TINDEX TLP opt_actual_ls TRP  */
#line 2922 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList)); }
#line 10126 "bison-chpl-lib.cpp"
    break;

  case 541: /* sub_type_level_expr: TDOMAIN TLP opt_actual_ls TRP  */
#line 2924 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList)); }
#line 10132 "bison-chpl-lib.cpp"
    break;

  case 542: /* sub_type_level_expr: TSUBDOMAIN TLP opt_actual_ls TRP  */
#line 2926 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActualList)); }
#line 10138 "bison-chpl-lib.cpp"
    break;

  case 543: /* sub_type_level_expr: TSPARSE TSUBDOMAIN TLP actual_expr TRP  */
#line 2928 "chpl.ypp"
  {
    auto locInner = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    auto inner = context->buildTypeConstructor(locInner, (yyvsp[-3].uniqueStr), (yyvsp[-1].maybeNamedActual));
    (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-4].uniqueStr), inner);
  }
#line 10148 "bison-chpl-lib.cpp"
    break;

  case 544: /* sub_type_level_expr: TATOMIC expr  */
#line 2934 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10154 "bison-chpl-lib.cpp"
    break;

  case 545: /* sub_type_level_expr: TSYNC expr  */
#line 2936 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10160 "bison-chpl-lib.cpp"
    break;

  case 546: /* sub_type_level_expr: TOWNED  */
#line 2939 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 10166 "bison-chpl-lib.cpp"
    break;

  case 547: /* sub_type_level_expr: TOWNED expr  */
#line 2941 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10172 "bison-chpl-lib.cpp"
    break;

  case 548: /* sub_type_level_expr: TUNMANAGED  */
#line 2943 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 10178 "bison-chpl-lib.cpp"
    break;

  case 549: /* sub_type_level_expr: TUNMANAGED expr  */
#line 2945 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10184 "bison-chpl-lib.cpp"
    break;

  case 550: /* sub_type_level_expr: TSHARED  */
#line 2947 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 10190 "bison-chpl-lib.cpp"
    break;

  case 551: /* sub_type_level_expr: TSHARED expr  */
#line 2949 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10196 "bison-chpl-lib.cpp"
    break;

  case 552: /* sub_type_level_expr: TBORROWED  */
#line 2951 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 10202 "bison-chpl-lib.cpp"
    break;

  case 553: /* sub_type_level_expr: TBORROWED expr  */
#line 2953 "chpl.ypp"
  { (yyval.expr) = context->buildTypeConstructor((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10208 "bison-chpl-lib.cpp"
    break;

  case 554: /* sub_type_level_expr: TCLASS  */
#line 2956 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 10214 "bison-chpl-lib.cpp"
    break;

  case 555: /* sub_type_level_expr: TRECORD  */
#line 2958 "chpl.ypp"
  { (yyval.expr) = Identifier::build(BUILDER, LOC((yylsp[0])), (yyvsp[0].uniqueStr)).release(); }
#line 10220 "bison-chpl-lib.cpp"
    break;

  case 556: /* for_expr: TFOR expr TIN expr TDO expr  */
#line 2963 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), toOwned((yyvsp[-4].expr)));
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false).release();
  }
#line 10233 "bison-chpl-lib.cpp"
    break;

  case 557: /* for_expr: TFOR expr TIN zippered_iterator TDO expr  */
#line 2972 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), toOwned((yyvsp[-4].expr)));
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false).release();
  }
#line 10246 "bison-chpl-lib.cpp"
    break;

  case 558: /* for_expr: TFOR expr TDO expr  */
#line 2981 "chpl.ypp"
  {
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), /*index*/ nullptr, toOwned((yyvsp[-2].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false).release();
  }
#line 10258 "bison-chpl-lib.cpp"
    break;

  case 559: /* for_expr: TFOR expr TIN expr TDO TIF expr TTHEN expr  */
#line 2989 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-7]), (yyvsp[-7].expr));
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-5].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock(ifLoc, ifExpr.release()),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false).release();
  }
#line 10276 "bison-chpl-lib.cpp"
    break;

  case 560: /* for_expr: TFOR expr TIN zippered_iterator TDO TIF expr TTHEN expr  */
#line 3003 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-7]), (yyvsp[-7].expr));
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-5].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock(ifLoc, ifExpr.release()),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false).release();
  }
#line 10294 "bison-chpl-lib.cpp"
    break;

  case 561: /* for_expr: TFOR expr TDO TIF expr TTHEN expr  */
#line 3017 "chpl.ypp"
  {
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = For::build(BUILDER, LOC((yyloc)), /*index*/ nullptr,
                    toOwned((yyvsp[-5].expr)),
                    BlockStyle::IMPLICIT,
                    context->consumeToBlock(ifLoc, ifExpr.release()),
                    /*isExpressionLevel*/ true,
                    /*isParam*/ false).release();
  }
#line 10312 "bison-chpl-lib.cpp"
    break;

  case 562: /* for_expr: TFORALL expr TIN expr TDO expr  */
#line 3031 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), toOwned((yyvsp[-4].expr)));
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                       /*isExpressionLevel*/ true).release();
  }
#line 10325 "bison-chpl-lib.cpp"
    break;

  case 563: /* for_expr: TFORALL expr TIN zippered_iterator TDO expr  */
#line 3040 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), toOwned((yyvsp[-4].expr)));
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                       /*isExpressionLevel*/ true).release();
  }
#line 10338 "bison-chpl-lib.cpp"
    break;

  case 564: /* for_expr: TFORALL expr TDO expr  */
#line 3049 "chpl.ypp"
  {
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), /*index*/ nullptr, toOwned((yyvsp[-2].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                       /*isExpressionLevel*/ true).release();
  }
#line 10350 "bison-chpl-lib.cpp"
    break;

  case 565: /* for_expr: TFORALL expr TIN expr TDO TIF expr TTHEN expr  */
#line 3057 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-7]), (yyvsp[-7].expr));
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-5].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock(ifLoc, ifExpr.release()),
                       /*isExpressionLevel*/ true).release();
  }
#line 10368 "bison-chpl-lib.cpp"
    break;

  case 566: /* for_expr: TFORALL expr TIN zippered_iterator TDO TIF expr TTHEN expr  */
#line 3071 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-7]), (yyvsp[-7].expr));
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr)= Forall::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-5].expr)),
                      /*withClause*/ nullptr,
                      BlockStyle::IMPLICIT,
                      context->consumeToBlock(ifLoc, ifExpr.release()),
                      /*isExpressionLevel*/ true).release();
  }
#line 10386 "bison-chpl-lib.cpp"
    break;

  case 567: /* for_expr: TFORALL expr TDO TIF expr TTHEN expr  */
#line 3085 "chpl.ypp"
  {
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = Forall::build(BUILDER, LOC((yyloc)), /*index*/ nullptr,
                       toOwned((yyvsp[-5].expr)),
                       /*withClause*/ nullptr,
                       BlockStyle::IMPLICIT,
                       context->consumeToBlock(ifLoc, ifExpr.release()),
                       /*isExpressionLevel*/ true).release();
  }
#line 10404 "bison-chpl-lib.cpp"
    break;

  case 568: /* for_expr: TLSBR expr_ls TRSBR expr  */
#line 3099 "chpl.ypp"
  {
    // TODO: We have to handle the possibility of [1..2, 3..4] here.
    if ((yyvsp[-2].exprList)->size() > 1) {
      const char* msg = "Invalid iterand expression";
      (yyval.expr) = context->raiseError((yylsp[-2]), msg);
    } else {
      auto iterand = context->consumeList((yyvsp[-2].exprList))[0].release();
      assert(iterand);
      (yyval.expr) = BracketLoop::build(BUILDER, LOC((yyloc)), /*index*/ nullptr,
                              toOwned(iterand),
                              /*withClause*/ nullptr,
                              BlockStyle::IMPLICIT,
                              context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                              /*isExpressionLevel*/ true).release();
    }
  }
#line 10425 "bison-chpl-lib.cpp"
    break;

  case 569: /* for_expr: TLSBR expr_ls TIN expr TRSBR expr  */
#line 3116 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), (yyvsp[-4].exprList));
    (yyval.expr) = BracketLoop::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                            /*withClause*/ nullptr,
                            BlockStyle::IMPLICIT,
                            context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                            /*isExpressionLevel*/ true).release();
  }
#line 10438 "bison-chpl-lib.cpp"
    break;

  case 570: /* for_expr: TLSBR expr_ls TIN zippered_iterator TRSBR expr  */
#line 3125 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-4]), (yyvsp[-4].exprList));
    (yyval.expr) = BracketLoop::build(BUILDER, LOC((yyloc)), std::move(index), toOwned((yyvsp[-2].expr)),
                            /*withClause*/ nullptr,
                            BlockStyle::IMPLICIT,
                            context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                            /*isExpressionLevel*/ true).release();
  }
#line 10451 "bison-chpl-lib.cpp"
    break;

  case 571: /* for_expr: TLSBR expr_ls TIN expr TRSBR TIF expr TTHEN expr  */
#line 3134 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-7]), (yyvsp[-7].exprList));
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = BracketLoop::build(BUILDER, LOC((yyloc)), std::move(index),
                            toOwned((yyvsp[-5].expr)),
                            /*withClause*/ nullptr,
                            BlockStyle::IMPLICIT,
                            context->consumeToBlock(ifLoc, ifExpr.release()),
                            /*isExpressionLevel*/ true).release();
  }
#line 10470 "bison-chpl-lib.cpp"
    break;

  case 572: /* for_expr: TLSBR expr_ls TIN zippered_iterator TRSBR TIF expr TTHEN expr  */
#line 3149 "chpl.ypp"
  {
    auto index = context->buildLoopIndexDecl((yylsp[-7]), (yyvsp[-7].exprList));
    auto ifExpr = Conditional::build(BUILDER, LOC2((yylsp[-3]), (yylsp[0])), toOwned((yyvsp[-2].expr)),
                                     BlockStyle::IMPLICIT,
                                     context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                     /*isExpressionLevel*/ true);
    auto ifLoc = context->makeSpannedLocation((yylsp[-3]), (yylsp[0]));
    (yyval.expr) = BracketLoop::build(BUILDER, LOC((yyloc)), std::move(index),
                            toOwned((yyvsp[-5].expr)),
                            /*withClause*/ nullptr,
                            BlockStyle::IMPLICIT,
                            context->consumeToBlock(ifLoc, ifExpr.release()),
                            /*isExpressionLevel*/ true).release();
  }
#line 10489 "bison-chpl-lib.cpp"
    break;

  case 573: /* cond_expr: TIF expr TTHEN expr TELSE expr  */
#line 3167 "chpl.ypp"
  {
    auto node  = Conditional::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-4].expr)),
                                    BlockStyle::IMPLICIT,
                                    context->consumeToBlock((yylsp[-2]), (yyvsp[-2].expr)),
                                    BlockStyle::IMPLICIT,
                                    context->consumeToBlock((yylsp[0]), (yyvsp[0].expr)),
                                    /*isExpressionLevel*/ true);
    (yyval.expr) = node.release();
  }
#line 10503 "bison-chpl-lib.cpp"
    break;

  case 574: /* nil_expr: TNIL  */
#line 3184 "chpl.ypp"
            { (yyval.expr) = context->buildIdent((yylsp[0]), (yyvsp[0].uniqueStr)); }
#line 10509 "bison-chpl-lib.cpp"
    break;

  case 582: /* stmt_level_expr: io_expr TIO expr  */
#line 3200 "chpl.ypp"
  { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10515 "bison-chpl-lib.cpp"
    break;

  case 583: /* opt_task_intent_ls: %empty  */
#line 3204 "chpl.ypp"
                                { (yyval.withClause) = nullptr; }
#line 10521 "bison-chpl-lib.cpp"
    break;

  case 584: /* opt_task_intent_ls: task_intent_clause  */
#line 3205 "chpl.ypp"
                                { (yyval.withClause) = (yyvsp[0].withClause); }
#line 10527 "bison-chpl-lib.cpp"
    break;

  case 585: /* task_intent_clause: TWITH TLP task_intent_ls TRP  */
#line 3210 "chpl.ypp"
  {
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = WithClause::build(BUILDER, LOC((yyloc)), std::move(exprs));
    (yyval.withClause) = node.release();
  }
#line 10537 "bison-chpl-lib.cpp"
    break;

  case 586: /* task_intent_ls: intent_expr  */
#line 3218 "chpl.ypp"
                                      { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 10543 "bison-chpl-lib.cpp"
    break;

  case 587: /* task_intent_ls: task_intent_ls TCOMMA intent_expr  */
#line 3219 "chpl.ypp"
                                      { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 10549 "bison-chpl-lib.cpp"
    break;

  case 588: /* forall_intent_clause: TWITH TLP forall_intent_ls TRP  */
#line 3224 "chpl.ypp"
  {
    auto exprs = context->consumeList((yyvsp[-1].exprList));
    auto node = WithClause::build(BUILDER, LOC((yyloc)), std::move(exprs));
    (yyval.withClause) = node.release();
  }
#line 10559 "bison-chpl-lib.cpp"
    break;

  case 589: /* forall_intent_ls: intent_expr  */
#line 3232 "chpl.ypp"
                                       { (yyval.exprList) = context->makeList((yyvsp[0].expr)); }
#line 10565 "bison-chpl-lib.cpp"
    break;

  case 590: /* forall_intent_ls: forall_intent_ls TCOMMA intent_expr  */
#line 3233 "chpl.ypp"
                                       { (yyval.exprList) = context->appendList((yyvsp[-2].exprList), (yyvsp[0].expr)); }
#line 10571 "bison-chpl-lib.cpp"
    break;

  case 591: /* intent_expr: task_var_prefix ident_expr opt_type opt_init_expr  */
#line 3238 "chpl.ypp"
  {
    if (auto ident = (yyvsp[-2].expr)->toIdentifier()) {
      auto name = ident->name();
      auto node = TaskVar::build(BUILDER, LOC((yyloc)), /*attributes*/ nullptr,
                                 name,
                                 /*intent*/ (yyvsp[-3].taskIntent),
                                 toOwned((yyvsp[-1].expr)),
                                 toOwned((yyvsp[0].expr)));
      (yyval.expr) = node.release();
    } else {
      const char* msg = "Expected identifier for task variable name";
      (yyval.expr) = context->raiseError((yyloc), msg);
    }
  }
#line 10590 "bison-chpl-lib.cpp"
    break;

  case 592: /* intent_expr: reduce_scan_op_expr TREDUCE ident_expr  */
#line 3253 "chpl.ypp"
  {
    (yyval.expr) = Reduce::build(BUILDER, LOC((yyloc)), (yyvsp[-2].uniqueStr), toOwned((yyvsp[0].expr))).release();
  }
#line 10598 "bison-chpl-lib.cpp"
    break;

  case 593: /* intent_expr: expr TREDUCE ident_expr  */
#line 3257 "chpl.ypp"
  {
    (yyval.expr) = context->buildCustomReduce((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 10606 "bison-chpl-lib.cpp"
    break;

  case 594: /* task_var_prefix: TCONST  */
#line 3263 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::CONST;     }
#line 10612 "bison-chpl-lib.cpp"
    break;

  case 595: /* task_var_prefix: TIN  */
#line 3264 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::IN;        }
#line 10618 "bison-chpl-lib.cpp"
    break;

  case 596: /* task_var_prefix: TCONST TIN  */
#line 3265 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::CONST_IN;  }
#line 10624 "bison-chpl-lib.cpp"
    break;

  case 597: /* task_var_prefix: TREF  */
#line 3266 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::REF;       }
#line 10630 "bison-chpl-lib.cpp"
    break;

  case 598: /* task_var_prefix: TCONST TREF  */
#line 3267 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::CONST_REF; }
#line 10636 "bison-chpl-lib.cpp"
    break;

  case 599: /* task_var_prefix: TVAR  */
#line 3268 "chpl.ypp"
               { (yyval.taskIntent) = TaskVar::VAR;       }
#line 10642 "bison-chpl-lib.cpp"
    break;

  case 601: /* io_expr: io_expr TIO expr  */
#line 3274 "chpl.ypp"
  { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 10648 "bison-chpl-lib.cpp"
    break;

  case 602: /* new_maybe_decorated: TNEW  */
#line 3279 "chpl.ypp"
    { (yyval.newManagement) = New::DEFAULT_MANAGEMENT; }
#line 10654 "bison-chpl-lib.cpp"
    break;

  case 603: /* new_maybe_decorated: TNEW TOWNED  */
#line 3281 "chpl.ypp"
    { (yyval.newManagement) = New::OWNED; }
#line 10660 "bison-chpl-lib.cpp"
    break;

  case 604: /* new_maybe_decorated: TNEW TSHARED  */
#line 3283 "chpl.ypp"
    { (yyval.newManagement) = New::SHARED; }
#line 10666 "bison-chpl-lib.cpp"
    break;

  case 605: /* new_maybe_decorated: TNEW TUNMANAGED  */
#line 3285 "chpl.ypp"
    { (yyval.newManagement) = New::UNMANAGED; }
#line 10672 "bison-chpl-lib.cpp"
    break;

  case 606: /* new_maybe_decorated: TNEW TBORROWED  */
#line 3287 "chpl.ypp"
    { (yyval.newManagement) = New::BORROWED; }
#line 10678 "bison-chpl-lib.cpp"
    break;

  case 607: /* new_expr: new_maybe_decorated expr  */
#line 3293 "chpl.ypp"
  {
    (yyval.expr) = context->buildNewExpr((yyloc), (yyvsp[-1].newManagement), (yyvsp[0].expr));
  }
#line 10686 "bison-chpl-lib.cpp"
    break;

  case 608: /* new_expr: TNEW TOWNED TLP expr TRP TLP opt_actual_ls TRP  */
#line 3300 "chpl.ypp"
  {
    AstList actuals;
    std::vector<UniqueString> actualNames;
    context->consumeNamedActuals((yyvsp[-1].maybeNamedActualList), actuals, actualNames);
    auto call = FnCall::build(BUILDER, LOC((yyloc)),
                              toOwned((yyvsp[-4].expr)),
                              std::move(actuals),
                              std::move(actualNames),
                              /* square */ false);
    (yyval.expr) = context->buildNewExpr((yyloc), New::OWNED, call.release());
  }
#line 10702 "bison-chpl-lib.cpp"
    break;

  case 609: /* new_expr: TNEW TSHARED TLP expr TRP TLP opt_actual_ls TRP  */
#line 3312 "chpl.ypp"
  {
    AstList actuals;
    std::vector<UniqueString> actualNames;
    context->consumeNamedActuals((yyvsp[-1].maybeNamedActualList), actuals, actualNames);
    auto call = FnCall::build(BUILDER, LOC((yyloc)),
                              toOwned((yyvsp[-4].expr)),
                              std::move(actuals),
                              std::move(actualNames),
                              /* square */ false);
    (yyval.expr) = context->buildNewExpr((yyloc), New::SHARED, call.release());
  }
#line 10718 "bison-chpl-lib.cpp"
    break;

  case 610: /* new_expr: TNEW TOWNED TLP expr TRP TLP opt_actual_ls TRP TQUESTION  */
#line 3324 "chpl.ypp"
  {
    AstList actuals;
    std::vector<UniqueString> actualNames;
    context->consumeNamedActuals((yyvsp[-2].maybeNamedActualList), actuals, actualNames);
    auto base = context->buildUnaryOp((yylsp[-5]), (yyvsp[0].uniqueStr), (yyvsp[-5].expr));
    auto call = FnCall::build(BUILDER, LOC((yyloc)),
                              toOwned(base),
                              std::move(actuals),
                              std::move(actualNames),
                              /* square */ false);
    (yyval.expr) = context->buildNewExpr((yyloc), New::OWNED, call.release());
  }
#line 10735 "bison-chpl-lib.cpp"
    break;

  case 611: /* new_expr: TNEW TSHARED TLP expr TRP TLP opt_actual_ls TRP TQUESTION  */
#line 3337 "chpl.ypp"
  {
    AstList actuals;
    std::vector<UniqueString> actualNames;
    context->consumeNamedActuals((yyvsp[-2].maybeNamedActualList), actuals, actualNames);
    auto base = context->buildUnaryOp((yylsp[-5]), (yyvsp[0].uniqueStr), (yyvsp[-5].expr));
    auto call = FnCall::build(BUILDER, LOC((yyloc)),
                              toOwned(base),
                              std::move(actuals),
                              std::move(actualNames),
                              /* square */ false);
    (yyval.expr) = context->buildNewExpr((yyloc), New::SHARED, call.release());

  }
#line 10753 "bison-chpl-lib.cpp"
    break;

  case 612: /* let_expr: TLET var_decl_stmt_inner_ls TIN expr  */
#line 3354 "chpl.ypp"
  {
    (yyval.expr) = context->buildLetExpr((yyloc), (yyvsp[-2].exprList), (yyvsp[0].expr));
  }
#line 10761 "bison-chpl-lib.cpp"
    break;

  case 622: /* expr: TLP TDOTDOTDOT expr TRP  */
#line 3373 "chpl.ypp"
  {
    (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-2].uniqueStr), (yyvsp[-1].expr));
  }
#line 10769 "bison-chpl-lib.cpp"
    break;

  case 623: /* expr: expr TCOLON expr  */
#line 3377 "chpl.ypp"
  {
    (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr));
  }
#line 10777 "bison-chpl-lib.cpp"
    break;

  case 624: /* expr: expr TDOTDOT expr  */
#line 3381 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT, toOwned((yyvsp[-2].expr)),
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10786 "bison-chpl-lib.cpp"
    break;

  case 625: /* expr: expr TDOTDOTOPENHIGH expr  */
#line 3386 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::OPEN_HIGH, toOwned((yyvsp[-2].expr)),
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10795 "bison-chpl-lib.cpp"
    break;

  case 626: /* expr: expr TDOTDOT  */
#line 3391 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT, toOwned((yyvsp[-1].expr)),
                      /*upperBound*/ nullptr).release();
  }
#line 10804 "bison-chpl-lib.cpp"
    break;

  case 627: /* expr: TDOTDOT expr  */
#line 3396 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT,
                      /*lowerBound*/ nullptr,
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10814 "bison-chpl-lib.cpp"
    break;

  case 628: /* expr: TDOTDOTOPENHIGH expr  */
#line 3402 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::OPEN_HIGH,
                      /*lowerBound*/ nullptr,
                      toOwned((yyvsp[0].expr))).release();
  }
#line 10824 "bison-chpl-lib.cpp"
    break;

  case 629: /* expr: TDOTDOT  */
#line 3408 "chpl.ypp"
  {
    (yyval.expr) = Range::build(BUILDER, LOC((yyloc)), Range::DEFAULT,
                      /*lowerBound*/ nullptr,
                      /*upperBound*/ nullptr).release();
  }
#line 10834 "bison-chpl-lib.cpp"
    break;

  case 630: /* opt_expr: %empty  */
#line 3439 "chpl.ypp"
                  { (yyval.expr) = nullptr; }
#line 10840 "bison-chpl-lib.cpp"
    break;

  case 631: /* opt_expr: expr  */
#line 3440 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10846 "bison-chpl-lib.cpp"
    break;

  case 632: /* opt_try_expr: TTRY expr  */
#line 3444 "chpl.ypp"
                  { (yyval.expr) = context->buildTryExpr((yyloc), (yyvsp[0].expr), false); }
#line 10852 "bison-chpl-lib.cpp"
    break;

  case 633: /* opt_try_expr: TTRYBANG expr  */
#line 3445 "chpl.ypp"
                  { (yyval.expr) = context->buildTryExpr((yyloc), (yyvsp[0].expr), true); }
#line 10858 "bison-chpl-lib.cpp"
    break;

  case 634: /* opt_try_expr: expr  */
#line 3446 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 10864 "bison-chpl-lib.cpp"
    break;

  case 640: /* call_base_expr: expr TBANG  */
#line 3463 "chpl.ypp"
                                { (yyval.expr) = context->buildUnaryOp((yyloc),
                                                             STR("postfix!"),
                                                             (yyvsp[-1].expr)); }
#line 10872 "bison-chpl-lib.cpp"
    break;

  case 641: /* call_base_expr: sub_type_level_expr TQUESTION  */
#line 3466 "chpl.ypp"
                                { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[0].uniqueStr), (yyvsp[-1].expr)); }
#line 10878 "bison-chpl-lib.cpp"
    break;

  case 644: /* call_expr: call_base_expr TLP opt_actual_ls TRP  */
#line 3473 "chpl.ypp"
    {
      AstList actuals;
      std::vector<UniqueString> actualNames;
      context->consumeNamedActuals((yyvsp[-1].maybeNamedActualList), actuals, actualNames);
      auto fnCall = FnCall::build(BUILDER, LOC((yyloc)),
                                  toOwned((yyvsp[-3].expr)),
                                  std::move(actuals),
                                  std::move(actualNames),
                                  /* square */ false);
      (yyval.expr) = fnCall.release();
    }
#line 10894 "bison-chpl-lib.cpp"
    break;

  case 645: /* call_expr: call_base_expr TLSBR opt_actual_ls TRSBR  */
#line 3485 "chpl.ypp"
    {
      AstList actuals;
      std::vector<UniqueString> actualNames;
      context->consumeNamedActuals((yyvsp[-1].maybeNamedActualList), actuals, actualNames);
      auto fnCall = FnCall::build(BUILDER, LOC((yyloc)),
                                  toOwned((yyvsp[-3].expr)),
                                  std::move(actuals),
                                  std::move(actualNames),
                                  /* square */ true);
      (yyval.expr) = fnCall.release();
    }
#line 10910 "bison-chpl-lib.cpp"
    break;

  case 646: /* call_expr: TPRIMITIVE TLP opt_actual_ls TRP  */
#line 3497 "chpl.ypp"
    {
      (yyval.expr) = context->buildPrimCall((yyloc), (yyvsp[-1].maybeNamedActualList));
    }
#line 10918 "bison-chpl-lib.cpp"
    break;

  case 647: /* dot_expr: expr TDOT ident_use  */
#line 3504 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10924 "bison-chpl-lib.cpp"
    break;

  case 648: /* dot_expr: expr TDOT TTYPE  */
#line 3506 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10930 "bison-chpl-lib.cpp"
    break;

  case 649: /* dot_expr: expr TDOT TDOMAIN  */
#line 3508 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10936 "bison-chpl-lib.cpp"
    break;

  case 650: /* dot_expr: expr TDOT TLOCALE  */
#line 3510 "chpl.ypp"
    { (yyval.expr) = Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-2].expr)), (yyvsp[0].uniqueStr)).release(); }
#line 10942 "bison-chpl-lib.cpp"
    break;

  case 651: /* dot_expr: expr TDOT TBYTES TLP TRP  */
#line 3512 "chpl.ypp"
    {
      (yyval.expr) = FnCall::build(BUILDER, LOC((yyloc)),
                         Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-4].expr)), (yyvsp[-2].uniqueStr)),
                         false).release();
    }
#line 10952 "bison-chpl-lib.cpp"
    break;

  case 652: /* dot_expr: expr TDOT TBYTES TLSBR TRSBR  */
#line 3518 "chpl.ypp"
    {
      (yyval.expr) = FnCall::build(BUILDER, LOC((yyloc)),
                         Dot::build(BUILDER, LOC((yyloc)), toOwned((yyvsp[-4].expr)), (yyvsp[-2].uniqueStr)),
                         true).release();
    }
#line 10962 "bison-chpl-lib.cpp"
    break;

  case 653: /* parenthesized_expr: TLP tuple_component TRP  */
#line 3530 "chpl.ypp"
                                    { (yyval.expr) = (yyvsp[-1].expr); }
#line 10968 "bison-chpl-lib.cpp"
    break;

  case 654: /* parenthesized_expr: TLP tuple_component TCOMMA TRP  */
#line 3532 "chpl.ypp"
  {
    (yyval.expr) = Tuple::build(BUILDER, LOC((yyloc)), context->consume((yyvsp[-2].expr))).release();
  }
#line 10976 "bison-chpl-lib.cpp"
    break;

  case 655: /* parenthesized_expr: TLP tuple_expr_ls TRP  */
#line 3536 "chpl.ypp"
  {
    (yyval.expr) = Tuple::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList))).release();
  }
#line 10984 "bison-chpl-lib.cpp"
    break;

  case 656: /* parenthesized_expr: TLP tuple_expr_ls TCOMMA TRP  */
#line 3540 "chpl.ypp"
  {
    (yyval.expr) = Tuple::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-2].exprList))).release();
  }
#line 10992 "bison-chpl-lib.cpp"
    break;

  case 657: /* bool_literal: TFALSE  */
#line 3546 "chpl.ypp"
         { (yyval.expr) = BoolLiteral::build(BUILDER, LOC((yyloc)), false).release(); }
#line 10998 "bison-chpl-lib.cpp"
    break;

  case 658: /* bool_literal: TTRUE  */
#line 3547 "chpl.ypp"
         { (yyval.expr) = BoolLiteral::build(BUILDER, LOC((yyloc)), true).release(); }
#line 11004 "bison-chpl-lib.cpp"
    break;

  case 659: /* str_bytes_literal: STRINGLITERAL  */
#line 3551 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 11010 "bison-chpl-lib.cpp"
    break;

  case 660: /* str_bytes_literal: BYTESLITERAL  */
#line 3552 "chpl.ypp"
                  { (yyval.expr) = (yyvsp[0].expr); }
#line 11016 "bison-chpl-lib.cpp"
    break;

  case 663: /* literal_expr: INTLITERAL  */
#line 3558 "chpl.ypp"
                 { (yyval.expr) = context->buildNumericLiteral((yyloc), (yyvsp[0].uniqueStr), INTLITERAL); }
#line 11022 "bison-chpl-lib.cpp"
    break;

  case 664: /* literal_expr: REALLITERAL  */
#line 3559 "chpl.ypp"
                 { (yyval.expr) = context->buildNumericLiteral((yyloc), (yyvsp[0].uniqueStr), REALLITERAL); }
#line 11028 "bison-chpl-lib.cpp"
    break;

  case 665: /* literal_expr: IMAGLITERAL  */
#line 3560 "chpl.ypp"
                 { (yyval.expr) = context->buildNumericLiteral((yyloc), (yyvsp[0].uniqueStr), IMAGLITERAL); }
#line 11034 "bison-chpl-lib.cpp"
    break;

  case 666: /* literal_expr: CSTRINGLITERAL  */
#line 3561 "chpl.ypp"
                      { (yyval.expr) = (yyvsp[0].expr); }
#line 11040 "bison-chpl-lib.cpp"
    break;

  case 667: /* literal_expr: TNONE  */
#line 3562 "chpl.ypp"
                      { (yyval.expr) = context->buildIdent((yyloc), (yyvsp[0].uniqueStr)); }
#line 11046 "bison-chpl-lib.cpp"
    break;

  case 668: /* literal_expr: TLCBR expr_ls TRCBR  */
#line 3564 "chpl.ypp"
  {
    (yyval.expr) = Domain::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList))).release();
  }
#line 11054 "bison-chpl-lib.cpp"
    break;

  case 669: /* literal_expr: TLCBR expr_ls TCOMMA TRCBR  */
#line 3568 "chpl.ypp"
  {
    (yyval.expr) = Domain::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-2].exprList))).release();
  }
#line 11062 "bison-chpl-lib.cpp"
    break;

  case 670: /* literal_expr: TLSBR expr_ls TRSBR  */
#line 3572 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList))).release();
  }
#line 11070 "bison-chpl-lib.cpp"
    break;

  case 671: /* literal_expr: TLSBR expr_ls TCOMMA TRSBR  */
#line 3576 "chpl.ypp"
  {
    (yyval.expr) = Array::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-2].exprList))).release();
  }
#line 11078 "bison-chpl-lib.cpp"
    break;

  case 672: /* literal_expr: TLSBR assoc_expr_ls TRSBR  */
#line 3580 "chpl.ypp"
  {
    (yyval.expr) = Domain::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-1].exprList))).release();
  }
#line 11086 "bison-chpl-lib.cpp"
    break;

  case 673: /* literal_expr: TLSBR assoc_expr_ls TCOMMA TRSBR  */
#line 3584 "chpl.ypp"
  {
    // TODO (dlongnecke): Record trailing comma?
    (yyval.expr) = Domain::build(BUILDER, LOC((yyloc)), context->consumeList((yyvsp[-2].exprList))).release();
  }
#line 11095 "bison-chpl-lib.cpp"
    break;

  case 674: /* assoc_expr_ls: expr TALIAS expr  */
#line 3593 "chpl.ypp"
  {
    auto node = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr));
    (yyval.exprList) = context->makeList(node);
  }
#line 11104 "bison-chpl-lib.cpp"
    break;

  case 675: /* assoc_expr_ls: assoc_expr_ls TCOMMA expr TALIAS expr  */
#line 3598 "chpl.ypp"
  {
    auto loc = context->makeSpannedLocation((yylsp[-2]), (yylsp[0]));
    auto node = context->buildBinOp(loc, (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr));
    (yyval.exprList) = context->appendList((yyvsp[-4].exprList), node);
  }
#line 11114 "bison-chpl-lib.cpp"
    break;

  case 676: /* binary_op_expr: expr TPLUS expr  */
#line 3606 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11120 "bison-chpl-lib.cpp"
    break;

  case 677: /* binary_op_expr: expr TMINUS expr  */
#line 3607 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11126 "bison-chpl-lib.cpp"
    break;

  case 678: /* binary_op_expr: expr TSTAR expr  */
#line 3608 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11132 "bison-chpl-lib.cpp"
    break;

  case 679: /* binary_op_expr: expr TDIVIDE expr  */
#line 3609 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11138 "bison-chpl-lib.cpp"
    break;

  case 680: /* binary_op_expr: expr TSHIFTLEFT expr  */
#line 3610 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11144 "bison-chpl-lib.cpp"
    break;

  case 681: /* binary_op_expr: expr TSHIFTRIGHT expr  */
#line 3611 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11150 "bison-chpl-lib.cpp"
    break;

  case 682: /* binary_op_expr: expr TMOD expr  */
#line 3612 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11156 "bison-chpl-lib.cpp"
    break;

  case 683: /* binary_op_expr: expr TEQUAL expr  */
#line 3613 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11162 "bison-chpl-lib.cpp"
    break;

  case 684: /* binary_op_expr: expr TNOTEQUAL expr  */
#line 3614 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11168 "bison-chpl-lib.cpp"
    break;

  case 685: /* binary_op_expr: expr TLESSEQUAL expr  */
#line 3615 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11174 "bison-chpl-lib.cpp"
    break;

  case 686: /* binary_op_expr: expr TGREATEREQUAL expr  */
#line 3616 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11180 "bison-chpl-lib.cpp"
    break;

  case 687: /* binary_op_expr: expr TLESS expr  */
#line 3617 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11186 "bison-chpl-lib.cpp"
    break;

  case 688: /* binary_op_expr: expr TGREATER expr  */
#line 3618 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11192 "bison-chpl-lib.cpp"
    break;

  case 689: /* binary_op_expr: expr TBAND expr  */
#line 3619 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11198 "bison-chpl-lib.cpp"
    break;

  case 690: /* binary_op_expr: expr TBOR expr  */
#line 3620 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11204 "bison-chpl-lib.cpp"
    break;

  case 691: /* binary_op_expr: expr TBXOR expr  */
#line 3621 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11210 "bison-chpl-lib.cpp"
    break;

  case 692: /* binary_op_expr: expr TAND expr  */
#line 3622 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11216 "bison-chpl-lib.cpp"
    break;

  case 693: /* binary_op_expr: expr TOR expr  */
#line 3623 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11222 "bison-chpl-lib.cpp"
    break;

  case 694: /* binary_op_expr: expr TEXP expr  */
#line 3624 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11228 "bison-chpl-lib.cpp"
    break;

  case 695: /* binary_op_expr: expr TBY expr  */
#line 3625 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11234 "bison-chpl-lib.cpp"
    break;

  case 696: /* binary_op_expr: expr TALIGN expr  */
#line 3626 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11240 "bison-chpl-lib.cpp"
    break;

  case 697: /* binary_op_expr: expr THASH expr  */
#line 3627 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11246 "bison-chpl-lib.cpp"
    break;

  case 698: /* binary_op_expr: expr TDMAPPED expr  */
#line 3628 "chpl.ypp"
                           { (yyval.expr) = context->buildBinOp((yyloc), (yyvsp[-2].expr), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11252 "bison-chpl-lib.cpp"
    break;

  case 699: /* unary_op_expr: TPLUS expr  */
#line 3632 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11258 "bison-chpl-lib.cpp"
    break;

  case 700: /* unary_op_expr: TMINUS expr  */
#line 3633 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11264 "bison-chpl-lib.cpp"
    break;

  case 701: /* unary_op_expr: TMINUSMINUS expr  */
#line 3634 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11270 "bison-chpl-lib.cpp"
    break;

  case 702: /* unary_op_expr: TPLUSPLUS expr  */
#line 3635 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11276 "bison-chpl-lib.cpp"
    break;

  case 703: /* unary_op_expr: TBANG expr  */
#line 3636 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11282 "bison-chpl-lib.cpp"
    break;

  case 704: /* unary_op_expr: expr TBANG  */
#line 3637 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc),
                                                              STR("postfix!"),
                                                              (yyvsp[-1].expr)); }
#line 11290 "bison-chpl-lib.cpp"
    break;

  case 705: /* unary_op_expr: TBNOT expr  */
#line 3640 "chpl.ypp"
                                 { (yyval.expr) = context->buildUnaryOp((yyloc), (yyvsp[-1].uniqueStr), (yyvsp[0].expr)); }
#line 11296 "bison-chpl-lib.cpp"
    break;

  case 706: /* reduce_expr: expr TREDUCE expr  */
#line 3645 "chpl.ypp"
  {
    (yyval.expr) = context->buildCustomReduce((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 11304 "bison-chpl-lib.cpp"
    break;

  case 707: /* reduce_expr: expr TREDUCE zippered_iterator  */
#line 3649 "chpl.ypp"
  {
    (yyval.expr) = context->buildCustomReduce((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 11312 "bison-chpl-lib.cpp"
    break;

  case 708: /* reduce_expr: reduce_scan_op_expr TREDUCE expr  */
#line 3653 "chpl.ypp"
  {
    (yyval.expr) = Reduce::build(BUILDER, LOC((yyloc)), (yyvsp[-2].uniqueStr), toOwned((yyvsp[0].expr))).release();
  }
#line 11320 "bison-chpl-lib.cpp"
    break;

  case 709: /* reduce_expr: reduce_scan_op_expr TREDUCE zippered_iterator  */
#line 3657 "chpl.ypp"
  {
    (yyval.expr) = Reduce::build(BUILDER, LOC((yyloc)), (yyvsp[-2].uniqueStr), toOwned((yyvsp[0].expr))).release();
  }
#line 11328 "bison-chpl-lib.cpp"
    break;

  case 710: /* scan_expr: expr TSCAN expr  */
#line 3664 "chpl.ypp"
  {
    (yyval.expr) = context->buildCustomScan((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 11336 "bison-chpl-lib.cpp"
    break;

  case 711: /* scan_expr: expr TSCAN zippered_iterator  */
#line 3668 "chpl.ypp"
  {
    (yyval.expr) = context->buildCustomScan((yyloc), (yylsp[-2]), (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 11344 "bison-chpl-lib.cpp"
    break;

  case 712: /* scan_expr: reduce_scan_op_expr TSCAN expr  */
#line 3672 "chpl.ypp"
  {
    (yyval.expr) = Scan::build(BUILDER, LOC((yyloc)), (yyvsp[-2].uniqueStr), toOwned((yyvsp[0].expr))).release();
  }
#line 11352 "bison-chpl-lib.cpp"
    break;

  case 713: /* scan_expr: reduce_scan_op_expr TSCAN zippered_iterator  */
#line 3676 "chpl.ypp"
  {
    (yyval.expr) = Scan::build(BUILDER, LOC((yyloc)), (yyvsp[-2].uniqueStr), toOwned((yyvsp[0].expr))).release();
  }
#line 11360 "bison-chpl-lib.cpp"
    break;


#line 11364 "bison-chpl-lib.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYCHPL_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, context, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYCHPL_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYCHPL_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, context);
          yychar = YYCHPL_EMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, context, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYCHPL_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, context);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, context);
      YYPOPSTACK (1);
    }
  yyps->yynew = 2;
  goto yypushreturn;


/*-------------------------.
| yypushreturn -- return.  |
`-------------------------*/
yypushreturn:

  return yyresult;
}
#undef yychpl_nerrs
#undef yystate
#undef yyerrstatus
#undef yyssa
#undef yyss
#undef yyssp
#undef yyvsa
#undef yyvs
#undef yyvsp
#undef yylsa
#undef yyls
#undef yylsp
#undef yystacksize
