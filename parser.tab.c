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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

	/* definitions */
#include <stdio.h>

extern FILE *yyin;
extern int yylex();
extern int yylineno;
extern char *yytext;
int max_err = 0;

void yyerror(const char *message);

#line 84 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* T_EOF  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_INT = 3,                      /* T_INT  */
  YYSYMBOL_T_CHAR = 4,                     /* T_CHAR  */
  YYSYMBOL_T_DOUBLE = 5,                   /* T_DOUBLE  */
  YYSYMBOL_T_BOOLEAN = 6,                  /* T_BOOLEAN  */
  YYSYMBOL_T_STRING = 7,                   /* T_STRING  */
  YYSYMBOL_T_CLASS = 8,                    /* T_CLASS  */
  YYSYMBOL_T_NEW = 9,                      /* T_NEW  */
  YYSYMBOL_T_RETURN = 10,                  /* T_RETURN  */
  YYSYMBOL_T_VOID = 11,                    /* T_VOID  */
  YYSYMBOL_T_IF = 12,                      /* T_IF  */
  YYSYMBOL_T_ELSE = 13,                    /* T_ELSE  */
  YYSYMBOL_T_WHILE = 14,                   /* T_WHILE  */
  YYSYMBOL_T_DO = 15,                      /* T_DO  */
  YYSYMBOL_T_FOR = 16,                     /* T_FOR  */
  YYSYMBOL_T_SWITCH = 17,                  /* T_SWITCH  */
  YYSYMBOL_T_CASE = 18,                    /* T_CASE  */
  YYSYMBOL_T_DEFAULT = 19,                 /* T_DEFAULT  */
  YYSYMBOL_T_BREAK = 20,                   /* T_BREAK  */
  YYSYMBOL_T_TRUE = 21,                    /* T_TRUE  */
  YYSYMBOL_T_FALSE = 22,                   /* T_FALSE  */
  YYSYMBOL_T_PUBLIC = 23,                  /* T_PUBLIC  */
  YYSYMBOL_T_PRIVATE = 24,                 /* T_PRIVATE  */
  YYSYMBOL_T_OUT = 25,                     /* T_OUT  */
  YYSYMBOL_T_PRINT = 26,                   /* T_PRINT  */
  YYSYMBOL_T_INTEGER_VAL = 27,             /* T_INTEGER_VAL  */
  YYSYMBOL_T_DOUBLE_VAL = 28,              /* T_DOUBLE_VAL  */
  YYSYMBOL_T_CHAR_VAL = 29,                /* T_CHAR_VAL  */
  YYSYMBOL_T_CNAME = 30,                   /* T_CNAME  */
  YYSYMBOL_T_ID = 31,                      /* T_ID  */
  YYSYMBOL_T_STRING_VAL = 32,              /* T_STRING_VAL  */
  YYSYMBOL_T_NEWLINE = 33,                 /* "NEW LINE"  */
  YYSYMBOL_T_ASSIGN = 34,                  /* T_ASSIGN  */
  YYSYMBOL_T_PLUS = 35,                    /* T_PLUS  */
  YYSYMBOL_T_MINUS = 36,                   /* T_MINUS  */
  YYSYMBOL_T_MULTIPLY = 37,                /* T_MULTIPLY  */
  YYSYMBOL_T_DIVIDE = 38,                  /* T_DIVIDE  */
  YYSYMBOL_T_MODULO = 39,                  /* T_MODULO  */
  YYSYMBOL_T_GREATER = 40,                 /* T_GREATER  */
  YYSYMBOL_T_LESS = 41,                    /* T_LESS  */
  YYSYMBOL_T_EQUALS = 42,                  /* T_EQUALS  */
  YYSYMBOL_T_NEQUALS = 43,                 /* T_NEQUALS  */
  YYSYMBOL_T_AND = 44,                     /* T_AND  */
  YYSYMBOL_T_OR = 45,                      /* T_OR  */
  YYSYMBOL_T_LPAR = 46,                    /* T_LPAR  */
  YYSYMBOL_T_RPAR = 47,                    /* T_RPAR  */
  YYSYMBOL_T_LBRACES = 48,                 /* T_LBRACES  */
  YYSYMBOL_T_RBRACES = 49,                 /* T_RBRACES  */
  YYSYMBOL_T_LBR = 50,                     /* T_LBR  */
  YYSYMBOL_T_RBR = 51,                     /* T_RBR  */
  YYSYMBOL_T_DOT = 52,                     /* T_DOT  */
  YYSYMBOL_T_COLON = 53,                   /* T_COLON  */
  YYSYMBOL_T_SEMICOLON = 54,               /* T_SEMICOLON  */
  YYSYMBOL_T_COMMA = 55,                   /* T_COMMA  */
  YYSYMBOL_T_QUOTES = 56,                  /* T_QUOTES  */
  YYSYMBOL_T_COMMENT = 57,                 /* T_COMMENT  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_start = 59,                     /* start  */
  YYSYMBOL_program = 60,                   /* program  */
  YYSYMBOL_class = 61,                     /* class  */
  YYSYMBOL_nested = 62,                    /* nested  */
  YYSYMBOL_cname = 63,                     /* cname  */
  YYSYMBOL_attribute = 64,                 /* attribute  */
  YYSYMBOL_amodifier = 65,                 /* amodifier  */
  YYSYMBOL_variable = 66,                  /* variable  */
  YYSYMBOL_int = 67,                       /* int  */
  YYSYMBOL_int_set = 68,                   /* int_set  */
  YYSYMBOL_id = 69,                        /* id  */
  YYSYMBOL_int_assign = 70,                /* int_assign  */
  YYSYMBOL_char = 71,                      /* char  */
  YYSYMBOL_char_set = 72,                  /* char_set  */
  YYSYMBOL_char_assign = 73,               /* char_assign  */
  YYSYMBOL_CHAR = 74,                      /* CHAR  */
  YYSYMBOL_double = 75,                    /* double  */
  YYSYMBOL_double_assign = 76,             /* double_assign  */
  YYSYMBOL_double_set = 77,                /* double_set  */
  YYSYMBOL_boolean = 78,                   /* boolean  */
  YYSYMBOL_boolean_set = 79,               /* boolean_set  */
  YYSYMBOL_boolean_assign = 80,            /* boolean_assign  */
  YYSYMBOL_BOOLEAN = 81,                   /* BOOLEAN  */
  YYSYMBOL_String = 82,                    /* String  */
  YYSYMBOL_String_set = 83,                /* String_set  */
  YYSYMBOL_String_assign = 84,             /* String_assign  */
  YYSYMBOL_STRING = 85,                    /* STRING  */
  YYSYMBOL_method = 86,                    /* method  */
  YYSYMBOL_mattribute = 87,                /* mattribute  */
  YYSYMBOL_mmodifier = 88,                 /* mmodifier  */
  YYSYMBOL_type = 89,                      /* type  */
  YYSYMBOL_values = 90,                    /* values  */
  YYSYMBOL_arg = 91,                       /* arg  */
  YYSYMBOL_arg2 = 92,                      /* arg2  */
  YYSYMBOL_commands = 93,                  /* commands  */
  YYSYMBOL_object = 94,                    /* object  */
  YYSYMBOL_val = 95,                       /* val  */
  YYSYMBOL_val1 = 96,                      /* val1  */
  YYSYMBOL_INTEGER = 97,                   /* INTEGER  */
  YYSYMBOL_DOUBLE = 98,                    /* DOUBLE  */
  YYSYMBOL_val2 = 99,                      /* val2  */
  YYSYMBOL_access = 100,                   /* access  */
  YYSYMBOL_assign = 101,                   /* assign  */
  YYSYMBOL_expression = 102,               /* expression  */
  YYSYMBOL_newline = 103,                  /* newline  */
  YYSYMBOL_operation = 104,                /* operation  */
  YYSYMBOL_literal = 105,                  /* literal  */
  YYSYMBOL_operator = 106,                 /* operator  */
  YYSYMBOL_do = 107,                       /* do  */
  YYSYMBOL_cond = 108,                     /* cond  */
  YYSYMBOL_log_expr1 = 109,                /* log_expr1  */
  YYSYMBOL_log_expr2 = 110,                /* log_expr2  */
  YYSYMBOL_oper = 111,                     /* oper  */
  YYSYMBOL_comp_oper = 112,                /* comp_oper  */
  YYSYMBOL_second_operand = 113,           /* second_operand  */
  YYSYMBOL_log_oper = 114,                 /* log_oper  */
  YYSYMBOL_for = 115,                      /* for  */
  YYSYMBOL_int_loop = 116,                 /* int_loop  */
  YYSYMBOL_for_assign = 117,               /* for_assign  */
  YYSYMBOL_if = 118,                       /* if  */
  YYSYMBOL_else_com = 119,                 /* else_com  */
  YYSYMBOL_else_if = 120,                  /* else_if  */
  YYSYMBOL_else = 121,                     /* else  */
  YYSYMBOL_switch = 122,                   /* switch  */
  YYSYMBOL_case = 123,                     /* case  */
  YYSYMBOL_default = 124,                  /* default  */
  YYSYMBOL_print = 125,                    /* print  */
  YYSYMBOL_var_print = 126,                /* var_print  */
  YYSYMBOL_return = 127,                   /* return  */
  YYSYMBOL_break = 128                     /* break  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   427

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  167
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  376

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   312


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      55,    56,    57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    87,    87,    88,    91,    97,   100,   101,   104,   107,
     108,   111,   112,   113,   116,   117,   118,   119,   120,   123,
     124,   127,   128,   131,   134,   135,   138,   139,   142,   143,
     146,   147,   150,   153,   154,   157,   158,   161,   162,   165,
     166,   169,   170,   173,   174,   177,   178,   181,   182,   185,
     186,   189,   190,   193,   196,   197,   200,   201,   205,   206,
     209,   210,   211,   212,   213,   214,   217,   218,   219,   222,
     223,   224,   225,   226,   227,   230,   231,   232,   233,   234,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   250,   254,   255,   256,   259,   260,   261,   262,   263,
     264,   267,   270,   273,   274,   275,   276,   277,   280,   281,
     284,   287,   288,   289,   290,   293,   294,   297,   298,   299,
     300,   301,   302,   305,   306,   309,   310,   311,   312,   315,
     318,   319,   322,   323,   325,   327,   328,   330,   331,   332,
     333,   335,   336,   337,   338,   339,   342,   343,   347,   350,
     351,   354,   357,   360,   361,   362,   365,   368,   371,   374,
     375,   378,   379,   382,   385,   386,   389,   392
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "T_EOF", "error", "\"invalid token\"", "T_INT", "T_CHAR", "T_DOUBLE",
  "T_BOOLEAN", "T_STRING", "T_CLASS", "T_NEW", "T_RETURN", "T_VOID",
  "T_IF", "T_ELSE", "T_WHILE", "T_DO", "T_FOR", "T_SWITCH", "T_CASE",
  "T_DEFAULT", "T_BREAK", "T_TRUE", "T_FALSE", "T_PUBLIC", "T_PRIVATE",
  "T_OUT", "T_PRINT", "T_INTEGER_VAL", "T_DOUBLE_VAL", "T_CHAR_VAL",
  "T_CNAME", "T_ID", "T_STRING_VAL", "\"NEW LINE\"", "T_ASSIGN", "T_PLUS",
  "T_MINUS", "T_MULTIPLY", "T_DIVIDE", "T_MODULO", "T_GREATER", "T_LESS",
  "T_EQUALS", "T_NEQUALS", "T_AND", "T_OR", "T_LPAR", "T_RPAR",
  "T_LBRACES", "T_RBRACES", "T_LBR", "T_RBR", "T_DOT", "T_COLON",
  "T_SEMICOLON", "T_COMMA", "T_QUOTES", "T_COMMENT", "$accept", "start",
  "program", "class", "nested", "cname", "attribute", "amodifier",
  "variable", "int", "int_set", "id", "int_assign", "char", "char_set",
  "char_assign", "CHAR", "double", "double_assign", "double_set",
  "boolean", "boolean_set", "boolean_assign", "BOOLEAN", "String",
  "String_set", "String_assign", "STRING", "method", "mattribute",
  "mmodifier", "type", "values", "arg", "arg2", "commands", "object",
  "val", "val1", "INTEGER", "DOUBLE", "val2", "access", "assign",
  "expression", "newline", "operation", "literal", "operator", "do",
  "cond", "log_expr1", "log_expr2", "oper", "comp_oper", "second_operand",
  "log_oper", "for", "int_loop", "for_assign", "if", "else_com", "else_if",
  "else", "switch", "case", "default", "print", "var_print", "return",
  "break", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-299)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -12,    26,    39,   -12,     8,    22,  -299,  -299,     8,  -299,
    -299,    19,  -299,     8,   -16,    67,    66,    32,  -299,    35,
     221,  -299,   255,   -12,  -299,    55,    55,    55,    55,    55,
      42,  -299,  -299,  -299,  -299,  -299,  -299,    55,  -299,  -299,
    -299,  -299,   -24,  -299,   -20,  -299,  -299,  -299,   -19,  -299,
    -299,  -299,   -18,  -299,  -299,  -299,   -17,  -299,  -299,  -299,
       8,    73,   223,    55,   100,    55,   223,    55,    95,    55,
     107,    55,   -16,   344,    22,  -299,  -299,  -299,  -299,  -299,
    -299,   250,    80,  -299,  -299,  -299,  -299,  -299,  -299,    94,
      75,    75,  -299,    97,   106,   116,  -299,   118,   129,  -299,
     135,   137,  -299,   138,   140,  -299,  -299,    55,    55,    55,
      55,    55,   152,  -299,  -299,   166,  -299,   121,    75,    55,
      55,  -299,  -299,  -299,  -299,   250,   250,    55,    55,    55,
      55,   160,   161,   162,   176,   182,   190,   214,  -299,   193,
     215,  -299,    75,    75,    75,    75,   219,  -299,   229,  -299,
     233,  -299,   239,  -299,   344,   344,   344,   344,   344,     8,
     202,   225,   228,   227,  -299,   231,   232,  -299,   237,  -299,
    -299,  -299,  -299,  -299,  -299,    76,   214,   214,   214,  -299,
     214,   214,  -299,  -299,  -299,   221,   307,  -299,  -299,  -299,
    -299,  -299,  -299,   236,   250,   247,   249,   252,   257,   251,
     256,    55,   -22,   258,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,    54,    17,     8,   306,   250,
    -299,   284,   282,   223,    55,     8,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,    76,  -299,    55,   299,
     271,  -299,  -299,   307,  -299,    55,   150,   274,   312,   272,
       5,     3,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,
    -299,  -299,  -299,   281,  -299,  -299,  -299,  -299,  -299,  -299,
     273,  -299,  -299,   283,   280,   296,   286,   313,    22,  -299,
     316,  -299,    26,  -299,  -299,   125,  -299,  -299,  -299,  -299,
    -299,  -299,     8,     8,   326,     8,   309,   308,   311,   320,
     307,   353,   314,   351,    55,   323,   214,  -299,  -299,   322,
     327,    55,   214,   309,   318,   328,    12,    17,   124,   321,
    -299,  -299,   324,   364,   366,  -299,    12,   330,   326,     8,
    -299,   334,   333,  -299,  -299,   329,   331,   307,    17,     8,
    -299,    55,   368,   335,   307,   350,   340,   214,   369,   341,
     342,    55,   345,   337,   339,   346,     8,  -299,    75,     8,
       8,     8,  -299,   307,   326,   307,   307,   307,   347,  -299,
     348,   368,  -299,  -299,  -299,  -299
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     3,     0,     0,     1,     2,   116,     4,
       8,     0,   115,     0,    13,    12,    11,     0,    55,     0,
       0,    10,     0,     7,     5,     0,     0,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,     0,     6,    23,
      14,    19,    22,    20,    29,    15,    26,    27,    38,    16,
      34,    33,    42,    17,    39,    40,    50,    18,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    13,    68,     0,    45,    46,   101,   102,    32,
      53,     0,   124,   104,   106,   107,   103,   105,   123,    25,
     114,   111,    21,    22,    31,    29,    28,    36,    38,    37,
      44,    42,    41,    52,    50,    49,     9,     0,     0,     0,
       0,     0,     0,    66,    67,     0,   124,     0,   122,     0,
       0,   125,   126,   127,   128,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    78,    79,     0,    94,   121,     0,
       0,    24,   118,   119,   120,   117,     0,    30,     0,    35,
       0,    43,     0,    51,     0,     0,     0,     0,     0,     0,
     104,   106,   107,     0,    92,   103,   105,    93,     0,    69,
      74,    70,    71,    72,    73,    57,     0,     0,     0,   113,
       0,     0,   112,    12,    11,     0,    90,    96,   100,    98,
      99,    95,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   150,     0,
     167,     0,     0,     0,     0,     0,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    57,   166,     0,     0,
       0,   130,   131,    90,   149,     0,     0,     0,     0,     0,
       0,     7,    81,    82,    80,    83,    84,    85,    86,    87,
      88,    89,    56,     0,   137,   138,   139,   140,   146,   147,
       0,   135,   136,     0,     0,     0,     0,     0,     0,   110,
       0,   108,    58,    59,    54,   133,   145,   143,   144,   141,
     142,   134,     0,     0,     0,     0,   165,     0,     0,     0,
      90,     0,     0,     0,     0,     0,    94,   109,   132,     0,
       0,     0,     0,   165,     0,     0,     0,     0,     0,     0,
     164,   163,     0,     0,     0,   152,     0,     0,     0,     0,
      91,     0,     0,   154,   153,     0,     0,    90,     0,     0,
     129,     0,   160,     0,    90,     0,     0,     0,   162,     0,
       0,     0,     0,     0,     0,     0,     0,   157,     0,     0,
       0,     0,   158,    90,     0,    90,    90,    90,     0,   151,
       0,   160,   161,   156,   148,   159
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -299,   391,  -299,    85,   375,    -3,   332,  -162,   216,  -299,
     336,    -5,   285,  -299,   338,   275,  -108,  -299,   278,   343,
    -299,   349,   279,   -50,  -299,   352,   270,   -30,   156,   173,
    -299,  -299,  -299,   204,   354,   -52,  -299,   105,   -43,  -134,
     -36,   -83,  -299,  -299,   -60,    -4,   -76,    28,   -90,  -299,
    -298,   113,   175,  -299,    96,  -299,   130,  -299,  -299,  -299,
    -299,    90,  -299,  -299,  -299,    46,  -299,  -299,   108,  -299,
    -299
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,    17,    18,   201,    19,    20,    30,    40,
      41,   202,    43,    45,    46,    47,    83,    49,    50,    51,
      53,    54,    55,    84,    57,    58,    59,    85,    21,   186,
      22,    37,   112,   113,   170,   203,   204,   163,   164,    86,
      87,    88,   205,   206,    89,   324,    90,    91,   125,   207,
     240,   241,   242,   270,   271,   291,   272,   208,   245,   346,
     209,   325,   326,   333,   210,   348,   355,   211,   305,   212,
     213
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,   126,    11,   165,    12,   117,    97,    15,    16,    14,
      62,     1,   223,   185,    64,    66,    68,    70,   100,   327,
      42,    44,    48,    52,    56,   323,   282,   283,   126,   160,
     224,    63,    61,    -7,     5,    65,    67,    69,    71,     6,
     343,     8,   165,   165,   165,     8,   165,   165,    39,   142,
     144,   280,    10,   126,   167,   126,    72,    82,    93,   281,
      95,    82,    98,   238,   101,    23,   104,    13,   160,   160,
     160,   115,   160,   160,   185,     5,   116,   -59,   -58,   -13,
     -13,   -13,   -13,   -13,    24,     4,    39,   161,     4,   121,
     122,   123,   124,   188,   188,   188,    60,   188,   188,   183,
     184,   166,   131,   132,   133,   134,   135,   162,   237,   118,
     121,   122,   123,   124,   139,   140,    75,    76,   215,    73,
     116,   116,   146,   148,   150,   152,   161,   161,   161,    94,
     161,   161,   119,   187,   189,   190,   289,   191,   192,   103,
     166,   166,   166,   246,   166,   166,   162,   162,   162,   120,
     162,   162,    63,   143,   145,   175,   121,   122,   123,   124,
     302,   127,   287,   249,   264,   265,   266,   267,   138,   268,
     269,    65,   165,   128,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,    67,   121,   122,   123,   124,   116,
     129,   274,    69,   130,   336,    71,   222,   276,   160,   136,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   239,   137,   243,   116,   154,   155,   156,    82,   250,
     288,   251,   118,   167,    25,    26,    27,    28,    29,   319,
     369,   157,    74,   239,   290,    75,    76,   158,   159,   168,
     275,    77,    78,    79,    75,    76,    80,   118,   309,    62,
      77,    78,    79,    64,    39,    80,   161,   176,    31,    32,
      33,    34,    35,    66,   353,   286,    36,    68,   364,    81,
     166,    75,    76,    70,   179,   297,   162,    77,    78,    79,
     177,    39,    80,   178,   182,   342,   180,   181,   300,   301,
     214,   303,   350,   216,    75,    76,    81,   217,   218,   313,
      77,    78,    79,   219,    39,   220,   318,   225,   221,   244,
     247,   368,   239,   370,   371,   372,   248,   194,   273,   195,
     277,   278,   196,   197,   198,   337,   279,   199,   285,   293,
     294,   292,   200,   239,   295,   344,   345,    10,    39,   264,
     265,   266,   267,   268,   269,   296,   358,   107,   108,   109,
     110,   111,   363,    77,   306,   365,   366,   367,   169,   171,
     172,   173,   174,   298,   304,   307,   238,   310,   311,   312,
     314,   316,   321,   317,   329,   322,   331,   335,   330,   332,
     338,   339,   349,   340,   351,   341,   347,   352,   354,   356,
     360,   357,   361,   359,     7,   362,   373,   374,    38,    92,
     153,   193,   147,    96,   106,   141,   149,   284,   151,   262,
      99,   315,   308,   263,   328,   299,   334,   375,   102,     0,
       0,   320,     0,   105,     0,     0,     0,   114
};

static const yytype_int16 yycheck[] =
{
       4,    91,     5,   137,     8,    81,    66,    23,    24,    13,
      34,    23,    34,   175,    34,    34,    34,    34,    68,   317,
      25,    26,    27,    28,    29,    13,    23,    24,   118,   137,
      52,    55,    37,    49,     8,    55,    55,    55,    55,     0,
     338,    33,   176,   177,   178,    33,   180,   181,    31,   125,
     126,    46,    30,   143,   137,   145,    60,    62,    63,    54,
      65,    66,    67,    46,    69,    33,    71,    48,   176,   177,
     178,    74,   180,   181,   236,     8,    81,    11,    11,     3,
       4,     5,     6,     7,    49,     0,    31,   137,     3,    35,
      36,    37,    38,   176,   177,   178,    54,   180,   181,    23,
      24,   137,   107,   108,   109,   110,   111,   137,    54,    81,
      35,    36,    37,    38,   119,   120,    21,    22,   194,    46,
     125,   126,   127,   128,   129,   130,   176,   177,   178,    29,
     180,   181,    52,   176,   177,   178,   270,   180,   181,    32,
     176,   177,   178,   219,   180,   181,   176,   177,   178,    55,
     180,   181,    55,   125,   126,   159,    35,    36,    37,    38,
     294,    55,   270,   223,    40,    41,    42,    43,    47,    44,
      45,    55,   306,    55,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    55,    35,    36,    37,    38,   194,
      55,   243,    55,    55,   328,    55,   201,    47,   306,    47,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   216,    46,   217,   219,    55,    55,    55,   223,   224,
     270,   225,   194,   306,     3,     4,     5,     6,     7,   312,
     364,    55,     9,   238,   270,    21,    22,    55,    48,    46,
     245,    27,    28,    29,    21,    22,    32,   219,   300,    34,
      27,    28,    29,    34,    31,    32,   306,    55,     3,     4,
       5,     6,     7,    34,   347,   270,    11,    34,   358,    46,
     306,    21,    22,    34,    47,   278,   306,    27,    28,    29,
      55,    31,    32,    55,    47,   337,    55,    55,   292,   293,
      54,   295,   344,    46,    21,    22,    46,    48,    46,   304,
      27,    28,    29,    46,    31,    54,   311,    49,    52,     3,
      26,   363,   317,   365,   366,   367,    34,    10,    47,    12,
      46,     9,    15,    16,    17,   329,    54,    20,    47,    49,
      34,    48,    25,   338,    48,   339,   341,    30,    31,    40,
      41,    42,    43,    44,    45,    32,   351,     3,     4,     5,
       6,     7,   356,    27,    46,   359,   360,   361,   154,   155,
     156,   157,   158,    47,    55,    54,    46,    14,    54,    18,
      47,    49,    54,    46,    53,    47,    12,    47,    54,    13,
      46,    48,    47,    54,    34,    54,    18,    47,    19,    48,
      53,    49,    53,    48,     3,    49,    49,    49,    23,    63,
     130,   185,   127,    65,    72,   120,   128,   251,   129,   236,
      67,   306,   299,   238,   318,   285,   326,   371,    69,    -1,
      -1,   313,    -1,    71,    -1,    -1,    -1,    73
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    59,    60,    61,     8,     0,    59,    33,   103,
      30,    63,   103,    48,   103,    23,    24,    61,    62,    64,
      65,    86,    88,    33,    49,     3,     4,     5,     6,     7,
      66,     3,     4,     5,     6,     7,    11,    89,    62,    31,
      67,    68,    69,    70,    69,    71,    72,    73,    69,    75,
      76,    77,    69,    78,    79,    80,    69,    82,    83,    84,
      54,    69,    34,    55,    34,    55,    34,    55,    34,    55,
      34,    55,   103,    46,     9,    21,    22,    27,    28,    29,
      32,    46,    69,    74,    81,    85,    97,    98,    99,   102,
     104,   105,    68,    69,    29,    69,    72,   102,    69,    77,
      81,    69,    79,    32,    69,    83,    64,     3,     4,     5,
       6,     7,    90,    91,    92,    63,    69,   104,   105,    52,
      55,    35,    36,    37,    38,   106,   106,    55,    55,    55,
      55,    69,    69,    69,    69,    69,    47,    46,    47,    69,
      69,    70,   104,   105,   104,   105,    69,    73,    69,    76,
      69,    80,    69,    84,    55,    55,    55,    55,    55,    48,
      74,    81,    85,    95,    96,    97,    98,    99,    46,    91,
      92,    91,    91,    91,    91,   103,    55,    55,    55,    47,
      55,    55,    47,    23,    24,    65,    87,    96,    99,    96,
      96,    96,    96,    66,    10,    12,    15,    16,    17,    20,
      25,    63,    69,    93,    94,   100,   101,   107,   115,   118,
     122,   125,   127,   128,    54,   104,    46,    48,    46,    46,
      54,    52,    69,    34,    52,    49,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,    54,    46,    69,
     108,   109,   110,   103,     3,   116,   104,    26,    34,   102,
      69,   103,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    87,   110,    40,    41,    42,    43,    44,    45,
     111,   112,   114,    47,    93,    69,    47,    46,     9,    54,
      46,    54,    23,    24,    86,    47,    69,    74,    81,    97,
      98,   113,    48,    49,    34,    48,    32,    63,    47,   114,
     103,   103,    97,   103,    55,   126,    46,    54,   109,    93,
      14,    54,    18,    69,    47,    95,    49,    46,    69,    99,
     126,    54,    47,    13,   103,   119,   120,   108,   112,    53,
      54,    12,    13,   121,   119,    47,    97,   103,    46,    48,
      54,    54,    93,   108,   103,    69,   117,    18,   123,    47,
      93,    34,    47,    99,    19,   124,    48,    49,    69,    48,
      53,    53,    49,   103,   106,   103,   103,   103,    93,    97,
      93,    93,    93,    49,    49,   123
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    60,    61,    62,    62,    63,    64,
      64,    65,    65,    65,    66,    66,    66,    66,    66,    67,
      67,    68,    68,    69,    70,    70,    71,    71,    72,    72,
      73,    73,    74,    75,    75,    76,    76,    77,    77,    78,
      78,    79,    79,    80,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    86,    86,    87,    87,    88,    88,
      89,    89,    89,    89,    89,    89,    90,    90,    90,    91,
      91,    91,    91,    91,    91,    92,    92,    92,    92,    92,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    94,    95,    95,    95,    96,    96,    96,    96,    96,
      96,    97,    98,    99,    99,    99,    99,    99,   100,   100,
     101,   102,   102,   102,   102,   103,   103,   104,   104,   104,
     104,   104,   104,   105,   105,   106,   106,   106,   106,   107,
     108,   108,   109,   109,   110,   111,   111,   112,   112,   112,
     112,   113,   113,   113,   113,   113,   114,   114,   115,   116,
     116,   117,   118,   119,   119,   119,   120,   121,   122,   123,
     123,   124,   124,   125,   126,   126,   127,   128
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     2,     7,     3,     0,     1,     5,
       1,     1,     1,     0,     2,     2,     2,     2,     2,     1,
       1,     3,     1,     1,     5,     3,     1,     1,     3,     1,
       5,     3,     1,     1,     1,     5,     3,     3,     1,     1,
       1,     3,     1,     5,     3,     1,     1,     1,     1,     3,
       1,     5,     3,     1,    13,     1,     5,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       4,     4,     4,     4,     1,     2,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       0,     9,     1,     1,     0,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     6,
       4,     1,     5,     5,     1,     2,     1,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,    11,
       1,     1,     5,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,    17,     1,
       0,     5,     9,     2,     2,     0,     9,     5,    14,     6,
       0,     4,     0,     8,     3,     0,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= T_EOF)
    {
      yychar = T_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1736 "parser.tab.c"

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= T_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == T_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 402 "parser.y"


int main(int argc, char *argv[]) {
	if (argc>1) {
		yyin = fopen(argv[1], "r");
		if (yyin==NULL) {
			perror("Error opening file");
			return -1;
		}
	}
	yyparse();


	fclose(yyin);
	if(max_err>=1)
		printf("Unsuccessful parsing, total errors: %d", max_err);
	else if(max_err==0)
		printf("Successful parsing, no errors detected");
	return 0;

}

void yyerror(const char *message) {
	max_err ++;
	printf("Error at line %d caused by %s : %s\n", yylineno, yytext, message);
}
