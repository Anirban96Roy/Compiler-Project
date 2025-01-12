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
#line 1 "2007096.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<math.h>
	int data[60];
	void yyerror(char *s);
	int yylex(void);
	int num_declared_variables = 0;
	char* declared_variables[1000];

int check_duplicate_declaration(const char* variable) {
    for (int i = 0; i < num_declared_variables; ++i) {
        if (strcmp(variable, declared_variables[i]) == 0) {
            return 1; // Duplicate declaration
        }
    }
    return 0; // Not a duplicate
}

	

#line 94 "2007096.tab.c"

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

#include "2007096.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_MAIN = 3,                       /* MAIN  */
  YYSYMBOL_START = 4,                      /* START  */
  YYSYMBOL_END = 5,                        /* END  */
  YYSYMBOL_NUM = 6,                        /* NUM  */
  YYSYMBOL_VAR = 7,                        /* VAR  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_SWITCH = 9,                     /* SWITCH  */
  YYSYMBOL_HEADER = 10,                    /* HEADER  */
  YYSYMBOL_CASE = 11,                      /* CASE  */
  YYSYMBOL_DEFAULT = 12,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 13,                     /* BREAK  */
  YYSYMBOL_FOR = 14,                       /* FOR  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_VALUE = 16,                     /* VALUE  */
  YYSYMBOL_FACTORIAL = 17,                 /* FACTORIAL  */
  YYSYMBOL_READ = 18,                      /* READ  */
  YYSYMBOL_PRINT = 19,                     /* PRINT  */
  YYSYMBOL_ODD_EVEN = 20,                  /* ODD_EVEN  */
  YYSYMBOL_BIGMOD = 21,                    /* BIGMOD  */
  YYSYMBOL_ASSIGN = 22,                    /* ASSIGN  */
  YYSYMBOL_DEFINE = 23,                    /* DEFINE  */
  YYSYMBOL_EOL = 24,                       /* EOL  */
  YYSYMBOL_ARRAY = 25,                     /* ARRAY  */
  YYSYMBOL_CLASS = 26,                     /* CLASS  */
  YYSYMBOL_INT = 27,                       /* INT  */
  YYSYMBOL_FLOAT = 28,                     /* FLOAT  */
  YYSYMBOL_CHAR = 29,                      /* CHAR  */
  YYSYMBOL_IFX = 30,                       /* IFX  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_SIN = 32,                       /* SIN  */
  YYSYMBOL_COS = 33,                       /* COS  */
  YYSYMBOL_TAN = 34,                       /* TAN  */
  YYSYMBOL_COSEC = 35,                     /* COSEC  */
  YYSYMBOL_COT = 36,                       /* COT  */
  YYSYMBOL_SEC = 37,                       /* SEC  */
  YYSYMBOL_LOG = 38,                       /* LOG  */
  YYSYMBOL_LOG10 = 39,                     /* LOG10  */
  YYSYMBOL_LT = 40,                        /* LT  */
  YYSYMBOL_GT = 41,                        /* GT  */
  YYSYMBOL_LTE = 42,                       /* LTE  */
  YYSYMBOL_GTE = 43,                       /* GTE  */
  YYSYMBOL_EQ = 44,                        /* EQ  */
  YYSYMBOL_PLUS = 45,                      /* PLUS  */
  YYSYMBOL_MINUS = 46,                     /* MINUS  */
  YYSYMBOL_BitXOR = 47,                    /* BitXOR  */
  YYSYMBOL_BitOR = 48,                     /* BitOR  */
  YYSYMBOL_BitAND = 49,                    /* BitAND  */
  YYSYMBOL_MUL = 50,                       /* MUL  */
  YYSYMBOL_DIV = 51,                       /* DIV  */
  YYSYMBOL_MOD = 52,                       /* MOD  */
  YYSYMBOL_POW = 53,                       /* POW  */
  YYSYMBOL_DEC = 54,                       /* DEC  */
  YYSYMBOL_INC = 55,                       /* INC  */
  YYSYMBOL_BitNOT = 56,                    /* BitNOT  */
  YYSYMBOL_57_ = 57,                       /* ':'  */
  YYSYMBOL_58_ = 58,                       /* '('  */
  YYSYMBOL_59_ = 59,                       /* ','  */
  YYSYMBOL_60_ = 60,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 61,                  /* $accept  */
  YYSYMBOL_program = 62,                   /* program  */
  YYSYMBOL_headers = 63,                   /* headers  */
  YYSYMBOL_cstatement = 64,                /* cstatement  */
  YYSYMBOL_statement = 65,                 /* statement  */
  YYSYMBOL_B = 66,                         /* B  */
  YYSYMBOL_C = 67,                         /* C  */
  YYSYMBOL_D = 68,                         /* D  */
  YYSYMBOL_declaration = 69,               /* declaration  */
  YYSYMBOL_TYPE = 70,                      /* TYPE  */
  YYSYMBOL_ID1 = 71,                       /* ID1  */
  YYSYMBOL_expression = 72                 /* expression  */
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
typedef yytype_uint8 yy_state_t;

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   706

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


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
      58,    60,     2,     2,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    57,     2,
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
      55,    56
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    52,    52,    54,    55,    58,    60,    63,    64,    66,
      68,    74,    82,    87,    98,   108,   113,   119,   125,   131,
     137,   145,   153,   155,   159,   164,   165,   167,   168,   170,
     172,   176,   177,   178,   183,   184,   196,   198,   200,   202,
     204,   206,   208,   210,   212,   214,   223,   227,   231,   240,
     241,   250,   259,   268,   277,   288,   289,   291,   293,   295,
     297,   299,   301,   302,   303
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "MAIN", "START", "END",
  "NUM", "VAR", "IF", "SWITCH", "HEADER", "CASE", "DEFAULT", "BREAK",
  "FOR", "WHILE", "VALUE", "FACTORIAL", "READ", "PRINT", "ODD_EVEN",
  "BIGMOD", "ASSIGN", "DEFINE", "EOL", "ARRAY", "CLASS", "INT", "FLOAT",
  "CHAR", "IFX", "ELSE", "SIN", "COS", "TAN", "COSEC", "COT", "SEC", "LOG",
  "LOG10", "LT", "GT", "LTE", "GTE", "EQ", "PLUS", "MINUS", "BitXOR",
  "BitOR", "BitAND", "MUL", "DIV", "MOD", "POW", "DEC", "INC", "BitNOT",
  "':'", "'('", "','", "')'", "$accept", "program", "headers",
  "cstatement", "statement", "B", "C", "D", "declaration", "TYPE", "ID1",
  "expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-80)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,   -80,    26,    10,   -80,     9,   -80,    55,   -80,   113,
     -80,   -80,    45,    11,    19,    22,    23,    24,    25,    27,
      28,    29,    31,    61,   -80,   -11,    77,   -80,   -80,   -80,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
     -80,    74,    92,   -13,    58,    58,    96,    97,    99,    58,
     100,   101,   102,   104,    58,    49,   105,     6,   -80,   651,
     651,   651,   651,   651,   651,   651,   651,   -80,   527,   -80,
     -80,    52,   -80,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,   -80,   -80,   447,
     548,    53,    56,    64,   569,    57,    65,    75,   108,   611,
     -11,    66,   -80,   155,   -80,   163,   427,   427,   427,   427,
     427,   106,   106,    21,    21,    21,    21,    21,     7,   -33,
     -80,   176,   184,   183,   192,   175,   177,   178,   179,   180,
      58,   140,   199,   158,   202,   -80,   -80,   196,   154,   165,
     -80,   -80,   -80,   -80,   -80,   631,   211,   173,   -80,   -80,
     203,   228,   238,    13,   239,   240,    58,   -80,   222,   248,
     216,   191,   -80,   193,   196,   -80,   189,   -80,   590,   293,
     -80,   -80,   247,    58,    58,   -80,   254,   338,   -80,   -80,
     -80,   479,   511,   -80,   -80,   383,   257,   265,   428,   -80,
     236,   255,   -80,   -80,   -80
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     4,     0,     0,     1,     0,     3,     0,     5,     0,
       2,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    56,
      57,    58,    59,    61,    60,    63,    62,    41,     0,     8,
      35,    30,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     0,    55,     0,    50,    51,    52,    53,
      54,    42,    43,    38,    39,    40,    44,    45,    48,    49,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     5,     0,     0,     0,
      22,    13,    23,    24,    14,     0,     0,     0,    16,     5,
       0,     0,     0,    25,     0,     0,     0,     5,     0,     0,
      20,     0,    15,     0,     0,    26,     0,     5,     0,     0,
      19,    17,     0,     0,     0,    27,     0,     0,    64,    18,
       5,     0,     0,     5,    12,     0,     0,     0,     0,    21,
       0,     0,    11,    28,    29
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -80,   -80,   -80,   -79,   -80,   -80,    88,   -80,   188,   264,
     -80,   -30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     9,    40,   152,   153,   165,    41,    42,
      71,    43
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     102,    72,     1,     5,    89,    90,    27,    28,    29,    94,
       6,    87,    88,   133,    99,   163,     4,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   150,   164,     8,
      86,    87,    88,   103,    11,    58,     7,    44,    55,    45,
     159,    83,    84,    85,    86,    87,    88,    46,   169,    22,
      47,    48,    49,    50,    57,    51,    52,    53,   177,    54,
      30,    31,    32,    33,    34,    35,    36,    37,    69,    70,
     145,   185,    91,    92,   188,    93,    95,   100,    96,    97,
      98,   105,   101,   122,    38,   123,    39,   126,    10,    11,
      12,    13,    14,   124,   132,   127,   168,    15,    16,    17,
      18,    19,    20,    21,    22,   128,    23,    24,    25,    26,
      27,    28,    29,   181,   182,    30,    31,    32,    33,    34,
      35,    36,    37,    80,    81,    82,    83,    84,    85,    86,
      87,    88,   134,   148,    11,    12,    13,    14,   129,    38,
     135,    39,    15,    16,    17,    18,    19,    20,    21,    22,
     136,    23,    24,    25,    26,    27,    28,    29,   137,   138,
      30,    31,    32,    33,    34,    35,    36,    37,   139,   140,
     146,   141,   142,   143,   144,   147,   149,   151,   160,    11,
      12,    13,    14,   154,    38,   157,    39,    15,    16,    17,
      18,    19,    20,    21,    22,   155,    23,    24,    25,    26,
      27,    28,    29,   158,   161,    30,    31,    32,    33,    34,
      35,    36,    37,   162,   167,   166,   170,   172,   173,   176,
     174,   180,   175,   171,    11,    12,    13,    14,   183,    38,
     193,    39,    15,    16,    17,    18,    19,    20,    21,    22,
     190,    23,    24,    25,    26,    27,    28,    29,   191,   194,
      30,    31,    32,    33,    34,    35,    36,    37,   131,    56,
       0,     0,     0,     0,     0,     0,     0,     0,   179,    11,
      12,    13,    14,     0,    38,     0,    39,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    23,    24,    25,    26,
      27,    28,    29,     0,     0,    30,    31,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   184,    11,    12,    13,    14,     0,    38,
       0,    39,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    23,    24,    25,    26,    27,    28,    29,     0,     0,
      30,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,    11,
      12,    13,    14,     0,    38,     0,    39,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    23,    24,    25,    26,
      27,    28,    29,     0,     0,    30,    31,    32,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,    11,    12,    13,    14,     0,    38,
       0,    39,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    23,    24,    25,    26,    27,    28,    29,     0,     0,
      30,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,   120,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     0,    38,     0,    39,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,   186,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,   187,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     0,     0,     0,     0,   104,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,     0,     0,     0,     0,   121,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,     0,     0,     0,     0,   125,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,     0,     0,     0,
     178,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
     130,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
     156,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88
};

static const yytype_int16 yycheck[] =
{
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
       4,    24,    10,     3,    44,    45,    27,    28,    29,    49,
      10,    54,    55,   102,    54,    12,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,   136,    45,     4,
      53,    54,    55,    57,     6,     7,    57,    22,     7,    58,
     149,    50,    51,    52,    53,    54,    55,    58,   157,    21,
      58,    58,    58,    58,     7,    58,    58,    58,   167,    58,
      32,    33,    34,    35,    36,    37,    38,    39,    24,     7,
     130,   180,     6,     6,   183,     6,     6,    58,     7,     7,
       6,    59,     7,    60,    56,    59,    58,    60,     5,     6,
       7,     8,     9,    59,    58,    60,   156,    14,    15,    16,
      17,    18,    19,    20,    21,    60,    23,    24,    25,    26,
      27,    28,    29,   173,   174,    32,    33,    34,    35,    36,
      37,    38,    39,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     7,     5,     6,     7,     8,     9,    60,    56,
       7,    58,    14,    15,    16,    17,    18,    19,    20,    21,
       4,    23,    24,    25,    26,    27,    28,    29,     4,     6,
      32,    33,    34,    35,    36,    37,    38,    39,     6,    24,
      60,    24,    24,    24,    24,     6,     4,    11,     5,     6,
       7,     8,     9,    59,    56,     4,    58,    14,    15,    16,
      17,    18,    19,    20,    21,    60,    23,    24,    25,    26,
      27,    28,    29,    60,     6,    32,    33,    34,    35,    36,
      37,    38,    39,     5,     4,     6,    24,    31,    57,    60,
      57,     4,   164,     5,     6,     7,     8,     9,     4,    56,
      24,    58,    14,    15,    16,    17,    18,    19,    20,    21,
      13,    23,    24,    25,    26,    27,    28,    29,    13,    24,
      32,    33,    34,    35,    36,    37,    38,    39,   100,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,     8,     9,    -1,    56,    -1,    58,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,     8,     9,    -1,    56,
      -1,    58,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,     8,     9,    -1,    56,    -1,    58,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,     8,     9,    -1,    56,
      -1,    58,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    24,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    56,    -1,    58,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    60,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    60,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    60,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      60,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      59,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      59,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    62,    63,     0,     3,    10,    57,     4,    64,
       5,     6,     7,     8,     9,    14,    15,    16,    17,    18,
      19,    20,    21,    23,    24,    25,    26,    27,    28,    29,
      32,    33,    34,    35,    36,    37,    38,    39,    56,    58,
      65,    69,    70,    72,    22,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,     7,    70,     7,     7,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    24,
       7,    71,    24,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    72,
      72,     6,     6,     6,    72,     6,     7,     7,     6,    72,
      58,     7,     4,    57,    60,    59,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      24,    60,    60,    59,    59,    60,    60,    60,    60,    60,
      59,    69,    58,    64,     7,     7,     4,     4,     6,     6,
      24,    24,    24,    24,    24,    72,    60,     6,     5,     4,
      64,    11,    66,    67,    59,    60,    59,     4,    60,    64,
       5,     6,     5,    12,    45,    68,     6,     4,    72,    64,
      24,     5,    31,    57,    57,    67,    60,    64,    60,     5,
       4,    72,    72,     4,     5,    64,    24,    24,    64,     5,
      13,    13,     5,    24,    24
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    66,    66,    67,    67,    68,
      69,    70,    70,    70,    71,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     2,     1,     0,     2,     1,     2,     2,
       4,    11,     9,     5,     5,     7,     5,     7,     8,     7,
       7,    11,     5,     5,     5,     1,     2,     3,     7,     6,
       2,     1,     1,     1,     3,     1,     1,     1,     3,     3,
       3,     2,     3,     3,     3,     3,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     8
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

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
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
  case 2: /* program: headers MAIN ':' START cstatement END  */
#line 52 "2007096.y"
                                               {printf("\nEnd of Main function\n");}
#line 1370 "2007096.tab.c"
    break;

  case 3: /* headers: headers HEADER  */
#line 54 "2007096.y"
                        {  printf("Header Library Declared Here\n");  }
#line 1376 "2007096.tab.c"
    break;

  case 4: /* headers: HEADER  */
#line 55 "2007096.y"
                 {  printf("Header Library Declared Here\n");  }
#line 1382 "2007096.tab.c"
    break;

  case 10: /* statement: VAR ASSIGN expression EOL  */
#line 68 "2007096.y"
                                        { 
								data[yyvsp[-3]] = yyvsp[-1]; 
								printf("\nValue of the variable: %d\n",yyvsp[-1]);
								yyval=yyvsp[-1];
								}
#line 1392 "2007096.tab.c"
    break;

  case 11: /* statement: FOR '(' NUM ',' NUM ',' NUM ')' START cstatement END  */
#line 74 "2007096.y"
                                                               {
	                                int i;
	                                printf("\nFOR loop execution\n");
	                                for(i=yyvsp[-8] ; i<yyvsp[-6] ; i=i+yyvsp[-4] )
					{printf("Value of the  i: %d expression value : %d\n", i,yyvsp[-1]);}
					}
#line 1403 "2007096.tab.c"
    break;

  case 12: /* statement: WHILE '(' NUM ',' NUM ')' START cstatement END  */
#line 82 "2007096.y"
                                                          {
	                                int i;
	                                printf("\nWHILE loop execution\n");
	                                for(i=yyvsp[-6] ; i<yyvsp[-4] ; i++) {printf("Value of the loop: %d expression value: %d\n", i,yyvsp[-1]);}
									}
#line 1413 "2007096.tab.c"
    break;

  case 13: /* statement: FACTORIAL '(' NUM ')' EOL  */
#line 87 "2007096.y"
                                    {
		printf("\nFACTORIAL declaration\n");
		int i;
		int f=1;
		for(i=1;i<=yyvsp[-2];i++)
		{
			f=f*i;
		}
		printf("FACTORIAL of %d  : %d\n",yyvsp[-2],f);
		}
#line 1428 "2007096.tab.c"
    break;

  case 14: /* statement: ODD_EVEN '(' NUM ')' EOL  */
#line 98 "2007096.y"
                                   {
		printf("\nDetermining odd or even number\n");

		if(yyvsp[-2] %2 ==0){
			printf("Number : %d  -> Even\n",yyvsp[-2]);
		}
		else{
			printf("Number : %d  -> Odd\n",yyvsp[-2]);
		}
		}
#line 1443 "2007096.tab.c"
    break;

  case 15: /* statement: SWITCH '(' NUM ')' START B END  */
#line 108 "2007096.y"
                                          {
			printf("\nSWITCH CASE declaration\n");
			printf("Finally choose case number :-> %d\n",yyvsp[-4]);
	}
#line 1452 "2007096.tab.c"
    break;

  case 16: /* statement: CLASS VAR START cstatement END  */
#line 113 "2007096.y"
                                         {

		printf("\nClass declaration\n");
		//printf("Expression : %d\n",$4);
		}
#line 1462 "2007096.tab.c"
    break;

  case 17: /* statement: CLASS VAR ':' VAR START cstatement END  */
#line 119 "2007096.y"
                                                 {

		printf("\nInheritance occur \n");
		//printf("Expression value : %d",$6);
		}
#line 1472 "2007096.tab.c"
    break;

  case 18: /* statement: DEFINE VAR '(' declaration ')' START cstatement END  */
#line 125 "2007096.y"
                                                              {
		printf("\nFunction declaration\n");
		//printf("Function Parameter : %d\n",$4);
		//printf("Function internal block statement : %d\n",$7);
		}
#line 1482 "2007096.tab.c"
    break;

  case 19: /* statement: ARRAY TYPE VAR '(' NUM ')' EOL  */
#line 131 "2007096.y"
                                         {
		printf("\nArray declaration\n");

		printf("Size of the array is : %d\n",yyvsp[-2]);
		}
#line 1492 "2007096.tab.c"
    break;

  case 20: /* statement: IF '(' expression ')' START cstatement END  */
#line 137 "2007096.y"
                                                               {
    	if(yyvsp[-4]){
        	printf("\nValue of expression in IF: %d\n", yyvsp[-1]);
    	}
    	else{
        	printf("\nCondition value zero in IF block\n");
    	}
	}
#line 1505 "2007096.tab.c"
    break;

  case 21: /* statement: IF '(' expression ')' START cstatement END ELSE START cstatement END  */
#line 145 "2007096.y"
                                                                               {
    	if(yyvsp[-8]){
        	printf("\nValue of expression in IF: %d\n", yyvsp[-5]);
    	}
    	else{
        	printf("\nValue of expression in ELSE: %d\n", yyvsp[0]);
    	}
	}
#line 1518 "2007096.tab.c"
    break;

  case 22: /* statement: VALUE '(' expression ')' EOL  */
#line 153 "2007096.y"
                                       {printf("\nPrint expression %d\n",yyvsp[-2]);}
#line 1524 "2007096.tab.c"
    break;

  case 23: /* statement: READ '(' VAR ')' EOL  */
#line 155 "2007096.y"
                               {
    	printf("Enter value for %c: ", yyvsp[-2] + 'a');
    	scanf("%d", &data[yyvsp[-2]]);
	}
#line 1533 "2007096.tab.c"
    break;

  case 24: /* statement: PRINT '(' VAR ')' EOL  */
#line 159 "2007096.y"
                                {
        printf("Displayed value of %c: %d\n", yyvsp[-2] + 'a', data[yyvsp[-2]]);
    }
#line 1541 "2007096.tab.c"
    break;

  case 28: /* C: CASE NUM ':' expression EOL BREAK EOL  */
#line 168 "2007096.y"
                                                {}
#line 1547 "2007096.tab.c"
    break;

  case 29: /* D: DEFAULT ':' expression EOL BREAK EOL  */
#line 170 "2007096.y"
                                           {}
#line 1553 "2007096.tab.c"
    break;

  case 31: /* TYPE: INT  */
#line 176 "2007096.y"
                  {printf("\nInterger declaration\n");}
#line 1559 "2007096.tab.c"
    break;

  case 32: /* TYPE: FLOAT  */
#line 177 "2007096.y"
              {printf("\nFloat declaration\n");}
#line 1565 "2007096.tab.c"
    break;

  case 33: /* TYPE: CHAR  */
#line 178 "2007096.y"
              {printf("\nCharacter declaration\n");}
#line 1571 "2007096.tab.c"
    break;

  case 35: /* ID1: VAR  */
#line 184 "2007096.y"
          {if (num_declared_variables + 1 < 1000) {
            if (check_duplicate_declaration(yyvsp[0])) {
                printf("-->Duplicate declaration");
            } else {
                // Add the variable to the symbol table
                //declared_variables[++num_declared_variables] = strdup($1);
            }
        } else {
            printf("Error: Too many declared variables, array bounds exceeded");
        }}
#line 1586 "2007096.tab.c"
    break;

  case 36: /* expression: NUM  */
#line 196 "2007096.y"
                                                        { printf("\nNumber :  %d\n",yyvsp[0] ); yyval = yyvsp[0];  }
#line 1592 "2007096.tab.c"
    break;

  case 37: /* expression: VAR  */
#line 198 "2007096.y"
                                                                {  }
#line 1598 "2007096.tab.c"
    break;

  case 38: /* expression: expression BitXOR expression  */
#line 200 "2007096.y"
                                        {printf("\nBitwise XOR of %d and %d is %d\n ",yyvsp[-2],yyvsp[0],yyvsp[-2]^yyvsp[0]); yyval = yyvsp[-2] ^ yyvsp[0]; }
#line 1604 "2007096.tab.c"
    break;

  case 39: /* expression: expression BitOR expression  */
#line 202 "2007096.y"
                                                {printf("\nBitwise OR of %d and %d is %d\n ",yyvsp[-2],yyvsp[0],yyvsp[-2]|yyvsp[0]); yyval = yyvsp[-2] | yyvsp[0]; }
#line 1610 "2007096.tab.c"
    break;

  case 40: /* expression: expression BitAND expression  */
#line 204 "2007096.y"
                                        {printf("\nBitwise AND of %d and %d is %d\n ",yyvsp[-2],yyvsp[0],yyvsp[-2]&yyvsp[0]); yyval = yyvsp[-2] & yyvsp[0]; }
#line 1616 "2007096.tab.c"
    break;

  case 41: /* expression: BitNOT expression  */
#line 206 "2007096.y"
                                                        {printf("\nBitwise NOT of %d is %d\n ",yyvsp[0],~yyvsp[0]); yyval = ~yyvsp[0]; }
#line 1622 "2007096.tab.c"
    break;

  case 42: /* expression: expression PLUS expression  */
#line 208 "2007096.y"
                                        {printf("\nAddition of %d and %d is %d \n",yyvsp[-2],yyvsp[0],yyvsp[-2]+yyvsp[0] );  yyval = yyvsp[-2] + yyvsp[0];}
#line 1628 "2007096.tab.c"
    break;

  case 43: /* expression: expression MINUS expression  */
#line 210 "2007096.y"
                                        {printf("\nSubtraction of %d and %d is %d \n ",yyvsp[-2],yyvsp[0],yyvsp[-2]-yyvsp[0]); yyval = yyvsp[-2] - yyvsp[0]; }
#line 1634 "2007096.tab.c"
    break;

  case 44: /* expression: expression MUL expression  */
#line 212 "2007096.y"
                                        {printf("\nMultiplication of %d and %d is %d\n ",yyvsp[-2],yyvsp[0],yyvsp[-2]*yyvsp[0]); yyval = yyvsp[-2] * yyvsp[0]; }
#line 1640 "2007096.tab.c"
    break;

  case 45: /* expression: expression DIV expression  */
#line 214 "2007096.y"
                                        { if(yyvsp[0]){
										printf("\nDivision of %d and %d is %d\n",yyvsp[-2],yyvsp[0],yyvsp[-2]/yyvsp[0]);
										yyval = yyvsp[-2] / yyvsp[0];
				  					}
				  					else{
										yyval = 0;
										printf("\nDivision by zero\n");
				  					} 	
				    			}
#line 1654 "2007096.tab.c"
    break;

  case 46: /* expression: expression INC  */
#line 223 "2007096.y"
                                        {
								printf("\nIncrement of %d is %d\n",yyvsp[-1],yyvsp[-1]+1);
								yyval = yyvsp[-1] + 1;
							}
#line 1663 "2007096.tab.c"
    break;

  case 47: /* expression: expression DEC  */
#line 227 "2007096.y"
                                        {
								printf("\nDecrement of %d is %d\n",yyvsp[-1],yyvsp[-1]-1);
								yyval = yyvsp[-1] - 1;
							}
#line 1672 "2007096.tab.c"
    break;

  case 48: /* expression: expression MOD expression  */
#line 231 "2007096.y"
                                        { if(yyvsp[0]){
				     					printf("\nMod of %d and %d is %d\n",yyvsp[-2],yyvsp[0],yyvsp[-2] % yyvsp[0]);
				     					yyval = yyvsp[-2] % yyvsp[0];
										}
				  					else{
										yyval = 0;
										printf("\nMOD by zero\n");
				  					} 	
				    			}
#line 1686 "2007096.tab.c"
    break;

  case 49: /* expression: expression POW expression  */
#line 240 "2007096.y"
                                        {printf("\nPower of %d and %d is %d\n",yyvsp[-2],yyvsp[0],pow(yyvsp[-2] , yyvsp[0]));  yyval = pow(yyvsp[-2] , yyvsp[0]);}
#line 1692 "2007096.tab.c"
    break;

  case 50: /* expression: expression LT expression  */
#line 241 "2007096.y"
                                        { if(yyvsp[-2]<yyvsp[0]){
										printf("\n%d is less than %d\n",yyvsp[-2],yyvsp[0]);
										}
								  else{
										printf("\n%d is not less than %d\n",yyvsp[-2],yyvsp[0]);
								  }
								yyval = yyvsp[-2] < yyvsp[0]; 
								}
#line 1705 "2007096.tab.c"
    break;

  case 51: /* expression: expression GT expression  */
#line 250 "2007096.y"
                                        { if(yyvsp[-2]>yyvsp[0]){
										printf("\n%d is greater than %d\n",yyvsp[-2],yyvsp[0]);
										}
								  else{
										printf("\n%d is not greater than %d\n",yyvsp[-2],yyvsp[0]);
								  }
								yyval = yyvsp[-2] > yyvsp[0]; 
								}
#line 1718 "2007096.tab.c"
    break;

  case 52: /* expression: expression LTE expression  */
#line 259 "2007096.y"
                                        { if(yyvsp[-2]<=yyvsp[0]){
										printf("\n%d is less than or equal to %d\n",yyvsp[-2],yyvsp[0]);
										}
								  else{
										printf("\n%d is not less than or equal to %d\n",yyvsp[-2],yyvsp[0]);
								  }
								yyval = yyvsp[-2] <= yyvsp[0]; 
								}
#line 1731 "2007096.tab.c"
    break;

  case 53: /* expression: expression GTE expression  */
#line 268 "2007096.y"
                                        { if(yyvsp[-2]>=yyvsp[0]){
										printf("\n%d is greater than or equal to %d\n",yyvsp[-2],yyvsp[0]);
										}
								  else{
										printf("\n%d is not greater than or equal to %d\n",yyvsp[-2],yyvsp[0]);
								  }
								yyval = yyvsp[-2] >= yyvsp[0]; 
								}
#line 1744 "2007096.tab.c"
    break;

  case 54: /* expression: expression EQ expression  */
#line 277 "2007096.y"
                                        { if(yyvsp[-2]==yyvsp[0]){
										printf("\n%d is equal to %d\n",yyvsp[-2],yyvsp[0]);
										}
								  else{
										printf("\n%d is not equal to %d\n",yyvsp[-2],yyvsp[0]);
								  }
								yyval = yyvsp[-2] == yyvsp[0]; 
								}
#line 1757 "2007096.tab.c"
    break;

  case 55: /* expression: '(' expression ')'  */
#line 288 "2007096.y"
                                        { yyval = yyvsp[-1];	}
#line 1763 "2007096.tab.c"
    break;

  case 56: /* expression: SIN expression  */
#line 289 "2007096.y"
                                                {printf("\nValue of Sin(%d) is %lf\n",yyvsp[0],sin(yyvsp[0]*3.1416/180)); yyval=sin(yyvsp[0]*3.1416/180);}
#line 1769 "2007096.tab.c"
    break;

  case 57: /* expression: COS expression  */
#line 291 "2007096.y"
                                        {printf("\nValue of Cos(%d) is %lf\n",yyvsp[0],cos(yyvsp[0]*3.1416/180)); yyval=cos(yyvsp[0]*3.1416/180);}
#line 1775 "2007096.tab.c"
    break;

  case 58: /* expression: TAN expression  */
#line 293 "2007096.y"
                                        {printf("\nValue of Tan(%d) is %lf\n",yyvsp[0],tan(yyvsp[0]*3.1416/180)); yyval=tan(yyvsp[0]*3.1416/180);}
#line 1781 "2007096.tab.c"
    break;

  case 59: /* expression: COSEC expression  */
#line 295 "2007096.y"
                                                {printf("\nValue of Cosec(%d) is %lf\n",yyvsp[0],1/sin(yyvsp[0]*3.1416/180)); yyval=1/sin(yyvsp[0]*3.1416/180);}
#line 1787 "2007096.tab.c"
    break;

  case 60: /* expression: SEC expression  */
#line 297 "2007096.y"
                                        {printf("\nValue of Sec(%d) is %lf\n",yyvsp[0],1/cos(yyvsp[0]*3.1416/180)); yyval=1/cos(yyvsp[0]*3.1416/180);}
#line 1793 "2007096.tab.c"
    break;

  case 61: /* expression: COT expression  */
#line 299 "2007096.y"
                                        {printf("\nValue of Cot(%d) is %lf\n",yyvsp[0],1/tan(yyvsp[0]*3.1416/180)); yyval=1/tan(yyvsp[0]*3.1416/180);}
#line 1799 "2007096.tab.c"
    break;

  case 62: /* expression: LOG10 expression  */
#line 301 "2007096.y"
                                        {printf("\nValue of Log10(%d) is %lf\n",yyvsp[0],(log(yyvsp[0]*1.0)/log(10.0))); yyval=(log(yyvsp[0]*1.0)/log(10.0));}
#line 1805 "2007096.tab.c"
    break;

  case 63: /* expression: LOG expression  */
#line 302 "2007096.y"
                                                {printf("\nValue of Log(%d) is %lf\n",yyvsp[0],(log(yyvsp[0]))); yyval=(log(yyvsp[0]));}
#line 1811 "2007096.tab.c"
    break;

  case 64: /* expression: BIGMOD '(' expression ',' expression ',' expression ')'  */
#line 303 "2007096.y"
                                                                  {
			long long res = 1;
			long long x = yyvsp[-5];
			long long p= yyvsp[-3];
			long long m=yyvsp[-1];
			while ( p )
			{
				if (p%2== 1) //p is odd
				{
					res = ( res * x ) % m;
				}
				x = ( x * x ) % m;
				p = p / 2;
			}
			printf("\nBigmod of %d ^ %d MOD %d is = %lld\n",yyvsp[-5],yyvsp[-3],yyvsp[-1],res);
			yyval=res;
		}
#line 1833 "2007096.tab.c"
    break;


#line 1837 "2007096.tab.c"

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
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
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

  return yyresult;
}

#line 321 "2007096.y"



void yyerror(char *s){
	printf( "%s\n", s);
}
