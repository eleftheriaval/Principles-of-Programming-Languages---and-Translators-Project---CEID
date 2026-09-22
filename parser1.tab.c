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
#line 1 "parser1.y"

	/* definitions */
#include <stdio.h>

extern FILE *yyin;
extern int yylex();
extern int yylineno;
extern char *yytext;
int max_err = 0;

void yyerror(const char *message);

#line 84 "parser1.tab.c"

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

#include "parser1.tab.h"
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   432

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  168
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  378

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
       0,    87,    87,    88,    89,    92,    98,   101,   102,   105,
     108,   109,   112,   113,   114,   117,   118,   119,   120,   121,
     124,   125,   128,   129,   132,   135,   136,   139,   140,   143,
     144,   147,   148,   151,   154,   155,   158,   159,   162,   163,
     166,   167,   170,   171,   174,   175,   178,   179,   182,   183,
     186,   187,   190,   191,   194,   197,   198,   201,   202,   206,
     207,   210,   211,   212,   213,   214,   215,   218,   219,   220,
     223,   224,   225,   226,   227,   228,   231,   232,   233,   234,
     235,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   251,   255,   256,   257,   260,   261,   262,   263,
     264,   265,   268,   271,   274,   275,   276,   277,   278,   281,
     282,   285,   288,   289,   290,   291,   294,   295,   298,   299,
     300,   301,   302,   303,   306,   307,   310,   311,   312,   313,
     316,   319,   320,   323,   324,   326,   328,   329,   331,   332,
     333,   334,   336,   337,   338,   339,   340,   343,   344,   348,
     351,   352,   355,   358,   361,   362,   363,   366,   369,   372,
     375,   376,   379,   380,   383,   386,   387,   390,   393
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

#define YYPACT_NINF (-291)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-61)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,   -24,     7,    20,    16,    -7,  -291,    14,  -291,  -291,
      -7,  -291,  -291,    28,  -291,    -7,   -12,    75,    71,    81,
    -291,    87,   221,  -291,   106,    97,  -291,    99,    99,    99,
      99,    99,    83,  -291,  -291,  -291,  -291,  -291,  -291,    99,
    -291,  -291,  -291,  -291,   -28,  -291,   -20,  -291,  -291,  -291,
      30,  -291,  -291,  -291,    32,  -291,  -291,  -291,    41,  -291,
    -291,  -291,    -7,    92,   250,    99,   113,    99,   250,    99,
      80,    99,   114,    99,   -12,   258,    14,  -291,  -291,  -291,
    -291,  -291,  -291,   266,    93,  -291,  -291,  -291,  -291,  -291,
    -291,    96,   248,   248,  -291,   102,   103,   118,  -291,   121,
     127,  -291,   133,   136,  -291,   137,   139,  -291,  -291,    99,
      99,    99,    99,    99,   101,  -291,  -291,   104,  -291,   117,
     248,    99,    99,  -291,  -291,  -291,  -291,   266,   266,    99,
      99,    99,    99,   140,   143,   145,   158,   161,   120,   157,
    -291,   123,   162,  -291,   248,   248,   248,   248,   183,  -291,
     206,  -291,   219,  -291,   220,  -291,   258,   258,   258,   258,
     258,    -7,   203,   212,   215,   226,  -291,   225,   236,  -291,
     227,  -291,  -291,  -291,  -291,  -291,  -291,   232,   157,   157,
     157,  -291,   157,   157,  -291,  -291,  -291,   221,   150,  -291,
    -291,  -291,  -291,  -291,  -291,   245,   266,   229,   262,   265,
     276,   271,   280,    99,   -21,   284,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    54,    53,    -7,
     332,   266,  -291,   316,   309,   250,    99,    -7,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   232,  -291,
      99,   261,   297,  -291,  -291,   150,  -291,    99,   195,   299,
     337,   294,   -14,    95,  -291,  -291,  -291,  -291,  -291,  -291,
    -291,  -291,  -291,  -291,  -291,   302,  -291,  -291,  -291,  -291,
    -291,  -291,   287,  -291,  -291,   303,   301,   318,   307,   327,
      14,  -291,   313,  -291,     7,  -291,  -291,    89,  -291,  -291,
    -291,  -291,  -291,  -291,    -7,    -7,   335,    -7,   308,   319,
     310,   320,   150,   353,   314,   351,    99,   323,   157,  -291,
    -291,   322,   326,    99,   157,   308,   321,   329,     5,    53,
     298,   324,  -291,  -291,   325,   361,   365,  -291,     5,   334,
     335,    -7,  -291,   328,   338,  -291,  -291,   331,   333,   150,
      53,    -7,  -291,    99,   370,   342,   150,   356,   344,   157,
     373,   345,   346,    99,   348,   341,   347,   349,    -7,  -291,
     248,    -7,    -7,    -7,  -291,   150,   335,   150,   150,   150,
     350,  -291,   352,   370,  -291,  -291,  -291,  -291
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     3,     0,     1,     2,
     117,     5,     9,     0,   116,     0,    14,    13,    12,     0,
      56,     0,     0,    11,     0,     8,     6,     0,     0,     0,
       0,     0,     0,    61,    62,    63,    64,    65,    66,     0,
       7,    24,    15,    20,    23,    21,    30,    16,    27,    28,
      39,    17,    35,    34,    43,    18,    40,    41,    51,    19,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    69,     0,    46,    47,   102,
     103,    33,    54,     0,   125,   105,   107,   108,   104,   106,
     124,    26,   115,   112,    22,    23,    32,    30,    29,    37,
      39,    38,    45,    43,    42,    53,    51,    50,    10,     0,
       0,     0,     0,     0,     0,    67,    68,     0,   125,     0,
     123,     0,     0,   126,   127,   128,   129,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,     0,    95,
     122,     0,     0,    25,   119,   120,   121,   118,     0,    31,
       0,    36,     0,    44,     0,    52,     0,     0,     0,     0,
       0,     0,   105,   107,   108,     0,    93,   104,   106,    94,
       0,    70,    75,    71,    72,    73,    74,    58,     0,     0,
       0,   114,     0,     0,   113,    13,    12,     0,    91,    97,
     101,    99,   100,    96,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     151,     0,   168,     0,     0,     0,     0,     0,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    58,   167,
       0,     0,     0,   131,   132,    91,   150,     0,     0,     0,
       0,     0,     0,     8,    82,    83,    81,    84,    85,    86,
      87,    88,    89,    90,    57,     0,   138,   139,   140,   141,
     147,   148,     0,   136,   137,     0,     0,     0,     0,     0,
       0,   111,     0,   109,    59,    60,    55,   134,   146,   144,
     145,   142,   143,   135,     0,     0,     0,     0,   166,     0,
       0,     0,    91,     0,     0,     0,     0,     0,    95,   110,
     133,     0,     0,     0,     0,   166,     0,     0,     0,     0,
       0,     0,   165,   164,     0,     0,     0,   153,     0,     0,
       0,     0,    92,     0,     0,   155,   154,     0,     0,    91,
       0,     0,   130,     0,   161,     0,    91,     0,     0,     0,
     163,     0,     0,     0,     0,     0,     0,     0,     0,   158,
       0,     0,     0,     0,   159,    91,     0,    91,    91,    91,
       0,   152,     0,   161,   162,   157,   149,   160
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -291,   393,  -291,    56,   377,    -4,   330,  -170,   216,  -291,
     340,    -6,   285,  -291,   339,   279,  -109,  -291,   281,   343,
    -291,   354,   278,   -51,  -291,   355,   282,   -39,   160,   172,
    -291,  -291,  -291,   171,   357,    15,  -291,   107,   141,  -137,
     -85,  -131,  -291,  -291,   -64,    -5,   -49,   -47,   -92,  -291,
    -290,   115,   177,  -291,    98,  -291,   132,  -291,  -291,  -291,
    -291,    94,  -291,  -291,  -291,    47,  -291,  -291,   108,  -291,
    -291
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,    19,    20,   203,    21,    22,    32,    42,
      43,   204,    45,    47,    48,    49,    85,    51,    52,    53,
      55,    56,    57,    86,    59,    60,    61,    87,    23,   188,
      24,    39,   114,   115,   172,   205,   206,   165,   166,    88,
      89,    90,   207,   208,    91,   326,    92,    93,   127,   209,
     242,   243,   244,   272,   273,   293,   274,   210,   247,   348,
     211,   327,   328,   335,   212,   350,   357,   213,   307,   214,
     215
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,   128,   167,    13,    99,    14,    64,   187,   169,     6,
      16,    17,    18,   225,    66,     7,    -4,     1,   325,   102,
       8,    44,    46,    50,    54,    58,    10,    65,   128,   329,
     162,   226,   282,    63,   119,    67,   120,    -8,    10,     2,
     283,   167,   167,   167,    12,   167,   167,   190,   190,   190,
     345,   190,   190,   128,   168,   128,     5,    74,    84,    95,
       5,    97,    84,   100,    68,   103,    70,   106,   187,   162,
     162,   162,   117,   162,   162,    72,    15,   118,   144,   146,
     145,   147,   -60,     7,    41,    69,   -59,    71,   163,   123,
     124,   125,   126,   168,   168,   168,    73,   168,   168,   240,
     164,    77,    78,   133,   134,   135,   136,   137,   239,    33,
      34,    35,    36,    37,    25,   141,   142,    38,   284,   285,
       2,   118,   118,   148,   150,   152,   154,   163,   163,   163,
      41,   163,   163,   270,   271,   291,    26,    62,    75,   164,
     164,   164,    96,   164,   164,   121,   105,   217,   138,   120,
     139,   122,   123,   124,   125,   126,   177,    65,   129,   304,
     196,   251,   197,   289,   140,   198,   199,   200,   161,   170,
     201,   167,   248,    67,   120,   202,   130,   169,    77,    78,
      12,    41,    69,   321,    79,    80,    81,   292,   131,    82,
     118,    71,   132,   338,    73,   156,    64,   224,   157,   162,
     158,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   241,   159,   245,   118,   160,    66,   355,    84,
     252,   290,   253,   168,    27,    28,    29,    30,    31,   371,
     123,   124,   125,   126,   241,   -14,   -14,   -14,   -14,   -14,
      68,   277,   278,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,    70,    72,   185,   186,   163,   178,    76,
     276,   109,   110,   111,   112,   113,   288,   179,   366,   164,
     180,    77,    78,   181,   184,   218,   299,    79,    80,    81,
     182,    41,    82,   123,   124,   125,   126,    77,    78,   302,
     303,   183,   305,    79,    80,    81,    83,    41,    82,   216,
     315,   266,   267,   268,   269,   270,   271,   320,    77,    78,
     219,   220,    83,   241,    79,    80,    81,   311,    41,   189,
     191,   192,   221,   193,   194,   222,   339,   171,   173,   174,
     175,   176,   223,   227,   241,   246,   346,   347,   266,   267,
     268,   269,   249,   250,   275,   279,   280,   360,   281,   287,
     295,   294,   296,   365,   344,   297,   367,   368,   369,   298,
     300,   352,    79,   306,   309,   308,   240,   312,   313,   314,
     316,   318,   319,   333,   340,   323,   324,   331,   334,   332,
     370,   337,   372,   373,   374,   342,   341,   343,   349,   351,
     353,   354,   356,   358,   362,   359,   361,     9,   364,   375,
     363,   376,    40,   195,   108,    94,    98,   143,   149,   153,
     264,   151,   101,   286,   155,   317,   310,   265,   330,   301,
     377,     0,   336,   322,     0,   104,     0,     0,   107,     0,
       0,     0,   116
};

static const yytype_int16 yycheck[] =
{
       5,    93,   139,     7,    68,    10,    34,   177,   139,    33,
      15,    23,    24,    34,    34,     8,     0,     1,    13,    70,
       0,    27,    28,    29,    30,    31,    33,    55,   120,   319,
     139,    52,    46,    39,    83,    55,    83,    49,    33,    23,
      54,   178,   179,   180,    30,   182,   183,   178,   179,   180,
     340,   182,   183,   145,   139,   147,     0,    62,    64,    65,
       4,    67,    68,    69,    34,    71,    34,    73,   238,   178,
     179,   180,    76,   182,   183,    34,    48,    83,   127,   128,
     127,   128,    11,     8,    31,    55,    11,    55,   139,    35,
      36,    37,    38,   178,   179,   180,    55,   182,   183,    46,
     139,    21,    22,   109,   110,   111,   112,   113,    54,     3,
       4,     5,     6,     7,    33,   121,   122,    11,    23,    24,
      23,   127,   128,   129,   130,   131,   132,   178,   179,   180,
      31,   182,   183,    44,    45,   272,    49,    54,    46,   178,
     179,   180,    29,   182,   183,    52,    32,   196,    47,   196,
      46,    55,    35,    36,    37,    38,   161,    55,    55,   296,
      10,   225,    12,   272,    47,    15,    16,    17,    48,    46,
      20,   308,   221,    55,   221,    25,    55,   308,    21,    22,
      30,    31,    55,   314,    27,    28,    29,   272,    55,    32,
     196,    55,    55,   330,    55,    55,    34,   203,    55,   308,
      55,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   218,    55,   219,   221,    55,    34,   349,   225,
     226,   272,   227,   308,     3,     4,     5,     6,     7,   366,
      35,    36,    37,    38,   240,     3,     4,     5,     6,     7,
      34,   247,    47,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,    34,    34,    23,    24,   308,    55,     9,
     245,     3,     4,     5,     6,     7,   272,    55,   360,   308,
      55,    21,    22,    47,    47,    46,   280,    27,    28,    29,
      55,    31,    32,    35,    36,    37,    38,    21,    22,   294,
     295,    55,   297,    27,    28,    29,    46,    31,    32,    54,
     306,    40,    41,    42,    43,    44,    45,   313,    21,    22,
      48,    46,    46,   319,    27,    28,    29,   302,    31,   178,
     179,   180,    46,   182,   183,    54,   331,   156,   157,   158,
     159,   160,    52,    49,   340,     3,   341,   343,    40,    41,
      42,    43,    26,    34,    47,    46,     9,   353,    54,    47,
      49,    48,    34,   358,   339,    48,   361,   362,   363,    32,
      47,   346,    27,    55,    54,    46,    46,    14,    54,    18,
      47,    49,    46,    12,    46,    54,    47,    53,    13,    54,
     365,    47,   367,   368,   369,    54,    48,    54,    18,    47,
      34,    47,    19,    48,    53,    49,    48,     4,    49,    49,
      53,    49,    25,   187,    74,    65,    67,   122,   129,   131,
     238,   130,    69,   253,   132,   308,   301,   240,   320,   287,
     373,    -1,   328,   315,    -1,    71,    -1,    -1,    73,    -1,
      -1,    -1,    75
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    23,    59,    60,    61,    33,     8,     0,    59,
      33,   103,    30,    63,   103,    48,   103,    23,    24,    61,
      62,    64,    65,    86,    88,    33,    49,     3,     4,     5,
       6,     7,    66,     3,     4,     5,     6,     7,    11,    89,
      62,    31,    67,    68,    69,    70,    69,    71,    72,    73,
      69,    75,    76,    77,    69,    78,    79,    80,    69,    82,
      83,    84,    54,    69,    34,    55,    34,    55,    34,    55,
      34,    55,    34,    55,   103,    46,     9,    21,    22,    27,
      28,    29,    32,    46,    69,    74,    81,    85,    97,    98,
      99,   102,   104,   105,    68,    69,    29,    69,    72,   102,
      69,    77,    81,    69,    79,    32,    69,    83,    64,     3,
       4,     5,     6,     7,    90,    91,    92,    63,    69,   104,
     105,    52,    55,    35,    36,    37,    38,   106,   106,    55,
      55,    55,    55,    69,    69,    69,    69,    69,    47,    46,
      47,    69,    69,    70,   104,   105,   104,   105,    69,    73,
      69,    76,    69,    80,    69,    84,    55,    55,    55,    55,
      55,    48,    74,    81,    85,    95,    96,    97,    98,    99,
      46,    91,    92,    91,    91,    91,    91,   103,    55,    55,
      55,    47,    55,    55,    47,    23,    24,    65,    87,    96,
      99,    96,    96,    96,    96,    66,    10,    12,    15,    16,
      17,    20,    25,    63,    69,    93,    94,   100,   101,   107,
     115,   118,   122,   125,   127,   128,    54,   104,    46,    48,
      46,    46,    54,    52,    69,    34,    52,    49,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,    54,
      46,    69,   108,   109,   110,   103,     3,   116,   104,    26,
      34,   102,    69,   103,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    87,   110,    40,    41,    42,    43,
      44,    45,   111,   112,   114,    47,    93,    69,    47,    46,
       9,    54,    46,    54,    23,    24,    86,    47,    69,    74,
      81,    97,    98,   113,    48,    49,    34,    48,    32,    63,
      47,   114,   103,   103,    97,   103,    55,   126,    46,    54,
     109,    93,    14,    54,    18,    69,    47,    95,    49,    46,
      69,    99,   126,    54,    47,    13,   103,   119,   120,   108,
     112,    53,    54,    12,    13,   121,   119,    47,    97,   103,
      46,    48,    54,    54,    93,   108,   103,    69,   117,    18,
     123,    47,    93,    34,    47,    99,    19,   124,    48,    49,
      69,    48,    53,    53,    49,   103,   106,   103,   103,   103,
      93,    97,    93,    93,    93,    49,    49,   123
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    60,    61,    62,    62,    63,
      64,    64,    65,    65,    65,    66,    66,    66,    66,    66,
      67,    67,    68,    68,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    75,    75,    76,    76,    77,    77,
      78,    78,    79,    79,    80,    80,    81,    81,    82,    82,
      83,    83,    84,    84,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    89,    89,    89,    89,    90,    90,    90,
      91,    91,    91,    91,    91,    91,    92,    92,    92,    92,
      92,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    94,    95,    95,    95,    96,    96,    96,    96,
      96,    96,    97,    98,    99,    99,    99,    99,    99,   100,
     100,   101,   102,   102,   102,   102,   103,   103,   104,   104,
     104,   104,   104,   104,   105,   105,   106,   106,   106,   106,
     107,   108,   108,   109,   109,   110,   111,   111,   112,   112,
     112,   112,   113,   113,   113,   113,   113,   114,   114,   115,
     116,   116,   117,   118,   119,   119,   119,   120,   121,   122,
     123,   123,   124,   124,   125,   126,   126,   127,   128
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     2,     7,     3,     0,     1,
       5,     1,     1,     1,     0,     2,     2,     2,     2,     2,
       1,     1,     3,     1,     1,     5,     3,     1,     1,     3,
       1,     5,     3,     1,     1,     1,     5,     3,     3,     1,
       1,     1,     3,     1,     5,     3,     1,     1,     1,     1,
       3,     1,     5,     3,     1,    13,     1,     5,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     4,     4,     4,     4,     1,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     0,     9,     1,     1,     0,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       6,     4,     1,     5,     5,     1,     2,     1,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
      11,     1,     1,     5,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,    17,
       1,     0,     5,     9,     2,     2,     0,     9,     5,    14,
       6,     0,     4,     0,     8,     3,     0,     3,     2
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
  case 3: /* start: error "NEW LINE"  */
#line 88 "parser1.y"
                                      {yyerrok;}
#line 1740 "parser1.tab.c"
    break;


#line 1744 "parser1.tab.c"

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

#line 403 "parser1.y"


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
