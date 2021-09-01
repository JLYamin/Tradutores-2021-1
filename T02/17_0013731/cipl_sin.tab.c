/* A Bison parser, made by GNU Bison 3.7.6.  */

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
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "./src/cipl_sin.y"

  #include "./lib/tree.h"
  #include "./lib/symbol.h"

  extern FILE *yyin;

  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *message);

  extern int current_line;
  extern int current_column;

#line 85 "cipl_sin.tab.c"

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

#include "cipl_sin.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_OP_PLUS = 6,                    /* OP_PLUS  */
  YYSYMBOL_OP_MINUS = 7,                   /* OP_MINUS  */
  YYSYMBOL_OP_MUL = 8,                     /* OP_MUL  */
  YYSYMBOL_OP_LOGIC = 9,                   /* OP_LOGIC  */
  YYSYMBOL_OP_RELAT = 10,                  /* OP_RELAT  */
  YYSYMBOL_OP_ASSIG = 11,                  /* OP_ASSIG  */
  YYSYMBOL_OP_LIST = 12,                   /* OP_LIST  */
  YYSYMBOL_UN_OP = 13,                     /* UN_OP  */
  YYSYMBOL_TYPE = 14,                      /* TYPE  */
  YYSYMBOL_NIL = 15,                       /* NIL  */
  YYSYMBOL_IF = 16,                        /* IF  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_RETURN = 19,                    /* RETURN  */
  YYSYMBOL_INPUT = 20,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 21,                    /* OUTPUT  */
  YYSYMBOL_SEMICOLON = 22,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 23,                     /* COMMA  */
  YYSYMBOL_OPEN_CURLY = 24,                /* OPEN_CURLY  */
  YYSYMBOL_OPEN_PAREN = 25,                /* OPEN_PAREN  */
  YYSYMBOL_CLOSE_CURLY = 26,               /* CLOSE_CURLY  */
  YYSYMBOL_CLOSE_PAREN = 27,               /* CLOSE_PAREN  */
  YYSYMBOL_STRING = 28,                    /* STRING  */
  YYSYMBOL_YYACCEPT = 29,                  /* $accept  */
  YYSYMBOL_program = 30,                   /* program  */
  YYSYMBOL_declarationList = 31,           /* declarationList  */
  YYSYMBOL_declaration = 32,               /* declaration  */
  YYSYMBOL_variableDeclaration = 33,       /* variableDeclaration  */
  YYSYMBOL_functionDeclaration = 34,       /* functionDeclaration  */
  YYSYMBOL_params = 35,                    /* params  */
  YYSYMBOL_paramList = 36,                 /* paramList  */
  YYSYMBOL_param = 37,                     /* param  */
  YYSYMBOL_compoundStmt = 38,              /* compoundStmt  */
  YYSYMBOL_statementList = 39,             /* statementList  */
  YYSYMBOL_statement = 40,                 /* statement  */
  YYSYMBOL_expressionStmt = 41,            /* expressionStmt  */
  YYSYMBOL_conditionalStmt = 42,           /* conditionalStmt  */
  YYSYMBOL_loopStmt = 43,                  /* loopStmt  */
  YYSYMBOL_returnStmt = 44,                /* returnStmt  */
  YYSYMBOL_inOutStmt = 45,                 /* inOutStmt  */
  YYSYMBOL_expression = 46,                /* expression  */
  YYSYMBOL_logicExpression = 47,           /* logicExpression  */
  YYSYMBOL_relatExpression = 48,           /* relatExpression  */
  YYSYMBOL_listExpression = 49,            /* listExpression  */
  YYSYMBOL_addExpression = 50,             /* addExpression  */
  YYSYMBOL_mulExpression = 51,             /* mulExpression  */
  YYSYMBOL_opAdd = 52,                     /* opAdd  */
  YYSYMBOL_factor = 53,                    /* factor  */
  YYSYMBOL_unaryExpression = 54,           /* unaryExpression  */
  YYSYMBOL_call = 55,                      /* call  */
  YYSYMBOL_outputArgs = 56,                /* outputArgs  */
  YYSYMBOL_args = 57,                      /* args  */
  YYSYMBOL_argList = 58                    /* argList  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2042

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  244

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   283


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
      25,    26,    27,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    86,    86,    89,    90,    93,    94,    97,   100,   103,
     104,   107,   108,   111,   114,   117,   118,   121,   122,   123,
     124,   125,   126,   127,   130,   131,   134,   135,   138,   141,
     144,   145,   148,   149,   152,   153,   156,   157,   160,   161,
     164,   165,   168,   169,   172,   173,   176,   177,   178,   179,
     180,   181,   182,   185,   186,   189,   192,   193,   196,   197,
     200,   201
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INT", "FLOAT",
  "OP_PLUS", "OP_MINUS", "OP_MUL", "OP_LOGIC", "OP_RELAT", "OP_ASSIG",
  "OP_LIST", "UN_OP", "TYPE", "NIL", "IF", "ELSE", "FOR", "RETURN",
  "INPUT", "OUTPUT", "SEMICOLON", "COMMA", "OPEN_CURLY", "OPEN_PAREN",
  "CLOSE_CURLY", "CLOSE_PAREN", "STRING", "$accept", "program",
  "declarationList", "declaration", "variableDeclaration",
  "functionDeclaration", "params", "paramList", "param", "compoundStmt",
  "statementList", "statement", "expressionStmt", "conditionalStmt",
  "loopStmt", "returnStmt", "inOutStmt", "expression", "logicExpression",
  "relatExpression", "listExpression", "addExpression", "mulExpression",
  "opAdd", "factor", "unaryExpression", "call", "outputArgs", "args",
  "argList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283
};
#endif

#define YYPACT_NINF (-158)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-62)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,    11,    21,    63,    76,    84,   178,   303,  -158,   180,
     185,    25,    83,    31,    33,   113,   118,    72,    73,  1100,
     201,   161,  1124,  1898,   617,  1918,    66,    66,   110,  1927,
      89,   117,    96,   137,   147,  1148,   228,   210,  1172,  1196,
    1220,  1244,  1268,  1292,  1316,  1340,    98,    58,   259,   283,
    2020,  1935,  1944,  1952,  1961,    96,   112,  1907,  1969,  1978,
     157,   228,    96,   184,   224,     5,   207,  1364,    66,    66,
     252,   281,    66,    66,    66,   218,   190,   219,   202,   220,
     230,  1388,   233,   234,   263,   270,  1986,   337,   339,   362,
    1995,  2003,  2012,   378,  1604,    66,   276,   282,   272,   655,
     129,  1412,  1436,  1627,   228,  1460,   304,  1627,  1484,  1100,
     264,    19,   123,   418,   418,  1799,   228,     7,    14,    55,
    1891,  1815,  1822,  1829,  1838,   638,   527,   677,   500,   500,
    1647,   228,   160,    39,    79,   593,  1654,  1676,  1683,  1705,
    1508,    30,   325,   327,   513,   513,   328,   228,   336,   338,
     365,   352,   354,    96,   361,   363,   692,  1100,   716,   740,
     764,   788,   812,   836,   860,   356,  1532,   228,   112,   626,
    1845,  1852,   377,   418,   418,   418,   418,   418,   378,   112,
     333,  1712,  1734,   385,   500,   500,   500,   500,   500,   112,
     386,   387,   388,   370,   228,    96,   397,   421,     5,  1556,
     884,  1580,   399,   400,  1861,   134,   235,   291,  1868,  1875,
     353,   401,  1741,    95,   227,   307,  1763,  1770,   402,   403,
     908,   408,   414,   932,   410,   413,   956,  1884,  1792,   415,
    1604,    66,   419,   429,   980,   199,  1004,  1028,  1604,   228,
    1052,   425,  1604,  1076
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
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
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,  -158,  -158,   450,     0,  -158,  -158,  -158,   444,   -16,
    -107,   -56,   -49,   -40,   -35,   -33,   -26,   -19,   463,   428,
     301,   398,   271,  -116,   -21,   135,   222,   265,  -157,  -158
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,    38,     6,    13,    14,    15,    39,
      22,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    73,    52,    53,    54,    85,    77,    78
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    20,   166,     5,   176,    58,    59,     1,   141,   142,
     143,   203,   144,    63,     7,   122,   173,    66,   145,   187,
     146,     8,   211,   -35,   174,   -51,   -51,   -51,   -51,   -51,
     147,   -51,   218,    83,   -33,   137,    75,    76,    99,    12,
     122,   -35,    79,    80,    84,   160,   -51,   105,   -35,   185,
     199,   108,   -10,    91,   161,   189,    18,   -49,    17,   162,
      -9,   163,   -35,    -2,   -37,   -37,   -35,    68,   164,    57,
      24,    25,   137,    26,    98,   165,    -4,     1,   159,    27,
     -33,    29,   -37,   122,    -5,   106,    16,    12,   -37,   -37,
      -4,    36,   170,   171,   158,   122,    19,   172,    -5,    23,
      24,    25,   -37,    26,   -34,   185,   -37,   181,   182,    27,
     122,    29,   183,    60,    61,   125,   126,   127,   -34,   128,
      67,    36,   -34,   190,   191,   129,   122,   130,   192,   -50,
     -50,   -50,   -50,   -50,   196,   -50,   -12,   131,    68,   -59,
     -12,   -13,    62,   -34,   174,   -13,   122,   137,   202,    76,
     -50,   104,   122,   122,   122,   122,   209,   137,   137,   210,
      76,   -34,    64,   137,   137,   137,   137,   217,   137,   184,
      76,   123,    65,   122,   234,   221,   222,    84,    -6,   140,
      -3,   160,   240,   -33,   -11,    -7,   243,   -33,   -11,   160,
     161,   138,    -6,   160,    -3,   162,   123,   163,   161,    -7,
     148,    -8,   161,   162,   164,   163,    81,   162,    68,   163,
     -14,   165,   164,   -61,   159,    -8,   164,   -61,   122,   165,
     241,   239,   159,   165,   -14,    93,   159,    82,   138,   -58,
     158,   110,   111,   112,    86,   113,   -36,   -36,   158,   123,
     -32,   114,   158,   115,   -36,   -36,    92,    94,   123,   123,
     -36,   123,    95,   116,   -36,   -44,   -44,   -44,   124,   -44,
      96,   -57,   -36,   138,   138,   -44,   123,   -44,   -35,    69,
     -49,   -49,   -49,   -49,   -49,   167,   -49,   -44,   139,   148,
     148,   -35,   123,   124,   -45,   -45,   -45,   149,   -45,   168,
     -56,   -49,   -37,   -37,   -45,   -60,   -45,    97,   101,   -60,
     -38,   -38,   123,   138,   102,   -37,   -45,   121,   123,   123,
     123,   123,   123,   138,   138,   139,   -38,   -38,   -38,   138,
     138,   138,   138,   138,   138,    10,   124,   136,    11,   123,
     -38,   107,   121,   148,   -38,   124,   124,   119,   124,   -49,
     -49,   -49,   -49,   -49,    90,   -49,   -34,    69,   -36,   -36,
     139,   139,   -51,   124,   -50,   -52,   -49,   134,   179,   -34,
     -49,   -36,   119,   -47,   136,   -48,   149,   149,   193,   124,
      88,   -38,   -38,    89,   123,   121,   -32,   194,   200,   195,
     -32,   125,   126,   127,   -38,   128,   197,   121,   198,   124,
     139,   129,   220,   130,   134,   124,   124,   124,   124,   124,
     139,   139,   121,   131,   204,   119,   139,   139,   139,   139,
     139,   139,   212,   -54,   -53,   219,   124,   119,   121,   223,
     149,   169,   111,   112,   224,   113,   -32,   227,   228,   229,
     -46,   114,   119,   115,   120,   230,   231,   232,   121,   136,
     233,   236,   -55,   116,   121,   121,   121,   208,   119,   136,
     136,   237,   242,     9,   135,   136,   136,   136,   216,   120,
     136,   124,    21,   225,   118,   121,     0,     0,   119,   134,
       0,     0,     0,     0,   119,   206,   207,     0,     0,   134,
     134,     0,     0,     0,   133,   134,   214,   215,     0,   118,
     134,   135,     0,     0,     0,   119,    87,     0,     0,   117,
       0,     0,   120,   180,   126,   127,     0,   128,     0,     0,
     121,     0,     0,   129,   120,   130,   141,   142,   143,   132,
     144,   133,     0,     0,   117,   131,   145,     0,   146,   120,
       0,     0,   118,   -51,   -51,   -51,   -51,   -51,   147,   -51,
     119,     0,     0,     0,   118,   120,     0,     0,     0,     0,
     -51,     0,     0,     0,   -51,     0,   132,     0,   100,   118,
       0,     0,     0,     0,     0,   120,   135,   117,     0,     0,
       0,   120,   120,   120,     0,   118,   135,   135,     0,   117,
       0,     0,   135,   135,   135,     0,     0,   135,     0,     0,
       0,     0,   120,     0,   117,   118,   133,     0,     0,    70,
      71,   205,   -39,   -39,     0,   186,   133,   133,     0,     0,
     117,     0,   213,     0,     0,     0,   -39,   133,     0,     0,
     -39,     0,   118,   -51,   -51,   -51,   -51,   -51,     0,   -51,
     117,   132,   -49,   -49,   -49,   -49,   -49,   120,   -49,   -51,
       0,   132,   132,     0,   -49,   -49,   -49,   -49,   -49,   178,
     -49,   168,   132,   -49,     0,     0,     0,   117,   -27,   -27,
     -27,   -49,   -27,   179,     0,   -49,     0,   118,   -27,   -27,
     -27,   -27,   103,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,   -27,     0,   -50,   -50,   -50,   -50,   -50,     0,   -50,
       0,     0,     0,     0,   235,   -25,   -25,   -25,     0,   -25,
     -50,     0,   117,     0,   -50,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -22,
     -22,   -22,     0,   -22,     0,     0,     0,     0,     0,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,
     -22,   -22,   -22,   -18,   -18,   -18,     0,   -18,     0,     0,
       0,     0,     0,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,     0,   -18,   -18,   -18,   -17,   -17,   -17,
       0,   -17,     0,     0,     0,     0,     0,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,
     -17,   -19,   -19,   -19,     0,   -19,     0,     0,     0,     0,
       0,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,     0,   -19,   -19,   -19,   -20,   -20,   -20,     0,   -20,
       0,     0,     0,     0,     0,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -21,
     -21,   -21,     0,   -21,     0,     0,     0,     0,     0,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,
     -21,   -21,   -21,   -23,   -23,   -23,     0,   -23,     0,     0,
       0,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,     0,   -23,   -23,   -23,   -24,   -24,   -24,
       0,   -24,     0,     0,     0,     0,     0,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,    -7,    -7,    -7,     0,    -7,     0,     0,     0,     0,
       0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,     0,    -7,    -7,    -7,   -29,   -29,   -29,     0,   -29,
       0,     0,     0,     0,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -14,
     -14,   -14,     0,   -14,     0,     0,     0,     0,     0,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,     0,
     -14,   -14,   -14,   -27,   -27,   -27,     0,   -27,     0,     0,
       0,     0,     0,   -27,   -27,   -27,   -27,   238,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -30,   -30,   -30,
       0,   -30,     0,     0,     0,     0,     0,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -31,   -31,   -31,     0,   -31,     0,     0,     0,     0,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -26,   -26,   -26,     0,   -26,
       0,     0,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -28,
     -28,   -28,     0,   -28,     0,     0,     0,     0,     0,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -16,   -16,   -16,     0,   -16,     0,     0,
       0,     0,     0,   -16,   -16,   -16,   -16,     0,   -16,   -16,
     -16,   -16,   -16,     0,   -16,   -16,   -16,    23,    24,    25,
       0,    26,     0,     0,     0,     0,     0,    27,    28,    29,
      30,     0,    31,    32,    33,    34,    35,     0,   109,    36,
      37,   -25,   -25,   -25,     0,   -25,     0,     0,     0,     0,
       0,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -22,   -22,   -22,     0,   -22,
       0,     0,     0,     0,     0,   -22,   -22,   -22,   -22,     0,
     -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -18,
     -18,   -18,     0,   -18,     0,     0,     0,     0,     0,   -18,
     -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,     0,
     -18,   -18,   -18,   -15,   -15,   -15,     0,   -15,     0,     0,
       0,     0,     0,   -15,   -15,   -15,   -15,     0,   -15,   -15,
     -15,   -15,   -15,     0,   -15,   -15,   -15,   -17,   -17,   -17,
       0,   -17,     0,     0,     0,     0,     0,   -17,   -17,   -17,
     -17,     0,   -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,
     -17,   -19,   -19,   -19,     0,   -19,     0,     0,     0,     0,
       0,   -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,
     -19,     0,   -19,   -19,   -19,   -20,   -20,   -20,     0,   -20,
       0,     0,     0,     0,     0,   -20,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -21,
     -21,   -21,     0,   -21,     0,     0,     0,     0,     0,   -21,
     -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,     0,
     -21,   -21,   -21,   -23,   -23,   -23,     0,   -23,     0,     0,
       0,     0,     0,   -23,   -23,   -23,   -23,     0,   -23,   -23,
     -23,   -23,   -23,     0,   -23,   -23,   -23,   -24,   -24,   -24,
       0,   -24,     0,     0,     0,     0,     0,   -24,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -29,   -29,   -29,     0,   -29,     0,     0,     0,     0,
       0,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,     0,   -29,   -29,   -29,   -30,   -30,   -30,     0,   -30,
       0,     0,     0,     0,     0,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -31,
     -31,   -31,     0,   -31,     0,     0,     0,     0,     0,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,   -31,   -26,   -26,   -26,     0,   -26,     0,     0,
       0,     0,     0,   -26,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -28,   -28,   -28,
       0,   -28,     0,     0,     0,     0,     0,   -28,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,
     -28,    -7,    -7,    -7,     0,    -7,     0,     0,     0,     0,
       0,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,
      -7,     0,    -7,    -7,    -7,    23,    24,    25,     0,    26,
       0,     0,     0,     0,     0,    27,    28,    29,    30,     0,
      31,    32,    33,    34,    35,     0,   109,    36,   201,    23,
      24,    25,     0,    26,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,    31,    32,    33,    34,    35,     0,
     109,    36,   226,   -14,   -14,   -14,     0,   -14,     0,     0,
       0,     0,     0,   -14,   -14,   -14,   -14,     0,   -14,   -14,
     -14,   -14,   -14,     0,   -14,   -14,   -14,    23,    24,    25,
       0,    26,     0,     0,     0,     0,     0,    27,   150,    29,
     151,     0,   152,   153,   154,   155,   156,     0,   157,    36,
      23,    24,    25,     0,    26,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,    31,    32,    33,    34,    35,
       0,   109,    36,   -52,   -52,   -52,   -52,   -52,     0,   -52,
     -41,   -41,   188,   -41,   -41,     0,   -41,     0,     0,     0,
     -52,     0,     0,     0,   -52,     0,     0,   -41,     0,     0,
       0,   -41,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -47,
     -47,   -47,   -47,   -47,     0,   -47,     0,     0,     0,   -43,
       0,     0,     0,   -43,     0,     0,   -47,     0,     0,     0,
     -47,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -54,   -54,
     -54,   -54,   -54,     0,   -54,     0,     0,     0,   -48,     0,
       0,     0,   -48,     0,     0,   -54,     0,     0,     0,   -54,
     -53,   -53,   -53,   -53,   -53,     0,   -53,   -46,   -46,   -46,
     -46,   -46,     0,   -46,     0,     0,     0,   -53,     0,     0,
       0,   -53,     0,     0,   -46,     0,     0,     0,   -46,   -40,
     -40,   188,   -40,   -40,     0,   -40,   -42,   -42,   -42,   -42,
     -42,     0,   -42,     0,     0,     0,   -40,     0,     0,     0,
     -40,     0,     0,   -42,     0,     0,     0,   -42,   -55,   -55,
     -55,   -55,   -55,     0,   -55,   -52,   -52,   -52,   -52,   -52,
       0,   -52,     0,     0,     0,   -55,     0,     0,     0,   -55,
       0,   -41,   -41,   177,   -41,   -41,   -52,   -41,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -47,   -47,   -47,   -47,   -47,
       0,   -47,   -41,     0,   -48,   -48,   -48,   -48,   -48,   -43,
     -48,   -54,   -54,   -54,   -54,   -54,   -47,   -54,   -53,   -53,
     -53,   -53,   -53,     0,   -53,   -48,     0,   -46,   -46,   -46,
     -46,   -46,   -54,   -46,   -40,   -40,   177,   -40,   -40,   -53,
     -40,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -46,     0,
     -55,   -55,   -55,   -55,   -55,   -40,   -55,    70,    71,     0,
     -39,   -39,   -42,   175,   -49,   -49,   -49,   -49,   -49,    55,
     -49,   -55,     0,   -49,   -49,   -49,   -49,   -49,   -39,   -49,
     -49,     0,     0,    56,   -50,   -50,   -50,   -50,   -50,   -49,
     -50,     0,    56,   -52,   -52,   -52,   -52,   -52,     0,   -52,
     -50,   -41,   -41,    74,   -41,   -41,     0,   -41,     0,   -52,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -41,   -47,   -47,
     -47,   -47,   -47,     0,   -47,     0,   -43,   -48,   -48,   -48,
     -48,   -48,     0,   -48,   -47,   -54,   -54,   -54,   -54,   -54,
       0,   -54,     0,   -48,   -53,   -53,   -53,   -53,   -53,     0,
     -53,   -54,   -46,   -46,   -46,   -46,   -46,     0,   -46,     0,
     -53,   -40,   -40,    74,   -40,   -40,     0,   -40,   -46,   -42,
     -42,   -42,   -42,   -42,     0,   -42,     0,   -40,   -55,   -55,
     -55,   -55,   -55,     0,   -55,   -42,    70,    71,     0,   -39,
     -39,     0,    72,     0,   -55,     0,     0,     0,     0,     0,
       0,     0,   -39
};

static const yytype_int16 yycheck[] =
{
       0,    17,   109,     3,   120,    26,    27,    14,     3,     4,
       5,   168,     7,    32,     3,    36,     9,    36,    13,   135,
      15,     0,   179,     9,    10,     6,     7,     8,     9,    10,
      25,    12,   189,    28,    27,    56,    55,    56,    94,    14,
      61,    27,    61,    62,    65,    94,    27,   103,     9,    10,
     157,   107,    27,    74,    94,    25,    23,    27,    27,    94,
      27,    94,    23,     0,     9,    10,    27,     9,    94,     3,
       4,     5,    93,     7,    93,    94,     0,    14,    94,    13,
      22,    15,    27,   104,     0,   104,     3,    14,     9,    10,
      14,    25,   113,   114,    94,   116,    24,   116,    14,     3,
       4,     5,    23,     7,     9,    10,    27,   128,   129,    13,
     131,    15,   131,     3,    25,     3,     4,     5,    23,     7,
      22,    25,    27,   144,   145,    13,   147,    15,   147,     6,
       7,     8,     9,    10,   153,    12,    23,    25,     9,    27,
      27,    23,    25,     9,    10,    27,   167,   168,   167,   168,
      27,    22,   173,   174,   175,   176,   177,   178,   179,   178,
     179,    27,    25,   184,   185,   186,   187,   188,   189,     9,
     189,    36,    25,   194,   230,   194,   195,   198,     0,    22,
       0,   230,   238,    23,    23,     0,   242,    27,    27,   238,
     230,    56,    14,   242,    14,   230,    61,   230,   238,    14,
      65,     0,   242,   238,   230,   238,    22,   242,     9,   242,
       0,   230,   238,    23,   230,    14,   242,    27,   239,   238,
     239,    22,   238,   242,    14,    23,   242,     3,    93,    27,
     230,     3,     4,     5,    27,     7,     9,    10,   238,   104,
      22,    13,   242,    15,     9,    10,    27,    27,   113,   114,
      23,   116,    22,    25,    27,     3,     4,     5,    36,     7,
      27,    27,    27,   128,   129,    13,   131,    15,     9,    10,
       6,     7,     8,     9,    10,    11,    12,    25,    56,   144,
     145,    22,   147,    61,     3,     4,     5,    65,     7,    25,
      27,    27,     9,    10,    13,    23,    15,    27,    22,    27,
       9,    10,   167,   168,    22,    22,    25,    36,   173,   174,
     175,   176,   177,   178,   179,    93,     9,    10,    27,   184,
     185,   186,   187,   188,   189,    22,   104,    56,    25,   194,
      23,    27,    61,   198,    27,   113,   114,    36,   116,     6,
       7,     8,     9,    10,    73,    12,     9,    10,     9,    10,
     128,   129,    27,   131,    27,    27,    23,    56,    25,    22,
      27,    22,    61,    27,    93,    27,   144,   145,     3,   147,
      69,     9,    10,    72,   239,   104,    23,    25,    22,    25,
      27,     3,     4,     5,    22,     7,    25,   116,    25,   167,
     168,    13,    22,    15,    93,   173,   174,   175,   176,   177,
     178,   179,   131,    25,    27,   104,   184,   185,   186,   187,
     188,   189,    27,    27,    27,    27,   194,   116,   147,    22,
     198,     3,     4,     5,     3,     7,    27,    27,    27,    27,
      27,    13,   131,    15,    36,    27,    22,    27,   167,   168,
      27,    22,    27,    25,   173,   174,   175,   176,   147,   178,
     179,    22,    27,     3,    56,   184,   185,   186,   187,    61,
     189,   239,    18,   198,    36,   194,    -1,    -1,   167,   168,
      -1,    -1,    -1,    -1,   173,   174,   175,    -1,    -1,   178,
     179,    -1,    -1,    -1,    56,   184,   185,   186,    -1,    61,
     189,    93,    -1,    -1,    -1,   194,    68,    -1,    -1,    36,
      -1,    -1,   104,     3,     4,     5,    -1,     7,    -1,    -1,
     239,    -1,    -1,    13,   116,    15,     3,     4,     5,    56,
       7,    93,    -1,    -1,    61,    25,    13,    -1,    15,   131,
      -1,    -1,   104,     6,     7,     8,     9,    10,    25,    12,
     239,    -1,    -1,    -1,   116,   147,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    93,    -1,    95,   131,
      -1,    -1,    -1,    -1,    -1,   167,   168,   104,    -1,    -1,
      -1,   173,   174,   175,    -1,   147,   178,   179,    -1,   116,
      -1,    -1,   184,   185,   186,    -1,    -1,   189,    -1,    -1,
      -1,    -1,   194,    -1,   131,   167,   168,    -1,    -1,     6,
       7,   173,     9,    10,    -1,    12,   178,   179,    -1,    -1,
     147,    -1,   184,    -1,    -1,    -1,    23,   189,    -1,    -1,
      27,    -1,   194,     6,     7,     8,     9,    10,    -1,    12,
     167,   168,     6,     7,     8,     9,    10,   239,    12,    22,
      -1,   178,   179,    -1,     6,     7,     8,     9,    10,    11,
      12,    25,   189,    27,    -1,    -1,    -1,   194,     3,     4,
       5,    23,     7,    25,    -1,    27,    -1,   239,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    24,
      25,    26,    -1,     6,     7,     8,     9,    10,    -1,    12,
      -1,    -1,    -1,    -1,   231,     3,     4,     5,    -1,     7,
      23,    -1,   239,    -1,    27,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    24,    25,    26,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      24,    25,    26,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    24,    25,    26,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    24,    25,
      26,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    24,    25,    26,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    24,    25,    26,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      24,    25,    26,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    24,    25,    26,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    24,    25,
      26,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    24,    25,    26,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    24,    25,    26,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      24,    25,    26,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    24,    25,    26,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    24,    25,
      26,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    24,    25,    26,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    24,    25,    26,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      24,    25,    26,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    -1,    24,    25,    26,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    -1,    24,    25,
      26,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    -1,    24,    25,    26,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    -1,    24,    25,    26,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    -1,
      24,    25,    26,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    -1,    24,    25,    26,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    -1,    24,    25,
      26,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    -1,    24,    25,    26,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    -1,    24,    25,    26,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    -1,
      24,    25,    26,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    -1,    24,    25,    26,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    -1,    24,    25,
      26,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    -1,    24,    25,    26,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    -1,    24,    25,    26,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    -1,
      24,    25,    26,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    -1,    24,    25,    26,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    -1,    24,    25,
      26,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    -1,    24,    25,    26,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    -1,    24,    25,    26,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    -1,
      24,    25,    26,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    -1,    24,    25,    26,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    -1,    24,    25,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      -1,    24,    25,     6,     7,     8,     9,    10,    -1,    12,
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    23,    -1,    -1,
      -1,    27,     6,     7,     8,     9,    10,    -1,    12,     6,
       7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    -1,    -1,    23,    -1,    -1,    -1,
      27,     6,     7,     8,     9,    10,    -1,    12,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    23,    -1,    -1,    -1,    27,
       6,     7,     8,     9,    10,    -1,    12,     6,     7,     8,
       9,    10,    -1,    12,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    27,    -1,    -1,    23,    -1,    -1,    -1,    27,     6,
       7,     8,     9,    10,    -1,    12,     6,     7,     8,     9,
      10,    -1,    12,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    -1,    23,    -1,    -1,    -1,    27,     6,     7,
       8,     9,    10,    -1,    12,     6,     7,     8,     9,    10,
      -1,    12,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      -1,     6,     7,     8,     9,    10,    27,    12,     6,     7,
       8,     9,    10,    -1,    12,     6,     7,     8,     9,    10,
      -1,    12,    27,    -1,     6,     7,     8,     9,    10,    27,
      12,     6,     7,     8,     9,    10,    27,    12,     6,     7,
       8,     9,    10,    -1,    12,    27,    -1,     6,     7,     8,
       9,    10,    27,    12,     6,     7,     8,     9,    10,    27,
      12,     6,     7,     8,     9,    10,    -1,    12,    27,    -1,
       6,     7,     8,     9,    10,    27,    12,     6,     7,    -1,
       9,    10,    27,    12,     6,     7,     8,     9,    10,    11,
      12,    27,    -1,     6,     7,     8,     9,    10,    27,    12,
      22,    -1,    -1,    25,     6,     7,     8,     9,    10,    22,
      12,    -1,    25,     6,     7,     8,     9,    10,    -1,    12,
      22,     6,     7,     8,     9,    10,    -1,    12,    -1,    22,
       6,     7,     8,     9,    10,    -1,    12,    22,     6,     7,
       8,     9,    10,    -1,    12,    -1,    22,     6,     7,     8,
       9,    10,    -1,    12,    22,     6,     7,     8,     9,    10,
      -1,    12,    -1,    22,     6,     7,     8,     9,    10,    -1,
      12,    22,     6,     7,     8,     9,    10,    -1,    12,    -1,
      22,     6,     7,     8,     9,    10,    -1,    12,    22,     6,
       7,     8,     9,    10,    -1,    12,    -1,    22,     6,     7,
       8,     9,    10,    -1,    12,    22,     6,     7,    -1,     9,
      10,    -1,    12,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    14,    30,    31,    32,    33,    34,     3,     0,    32,
      22,    25,    14,    35,    36,    37,     3,    27,    23,    24,
      38,    37,    39,     3,     4,     5,     7,    13,    14,    15,
      16,    18,    19,    20,    21,    22,    25,    26,    33,    38,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    53,    54,    55,    11,    25,     3,    53,    53,
       3,    25,    25,    46,    25,    25,    46,    22,     9,    10,
       6,     7,    12,    52,     8,    46,    46,    57,    58,    46,
      46,    22,     3,    28,    53,    56,    27,    48,    49,    49,
      51,    53,    27,    23,    27,    22,    27,    27,    46,    40,
      47,    22,    22,    17,    22,    40,    46,    27,    40,    24,
       3,     4,     5,     7,    13,    15,    25,    47,    48,    49,
      50,    51,    53,    54,    55,     3,     4,     5,     7,    13,
      15,    25,    47,    48,    49,    50,    51,    53,    54,    55,
      22,     3,     4,     5,     7,    13,    15,    25,    54,    55,
      14,    16,    18,    19,    20,    21,    22,    24,    33,    38,
      41,    42,    43,    44,    45,    46,    39,    11,    25,     3,
      53,    53,    46,     9,    10,    12,    52,     8,    11,    25,
       3,    53,    53,    46,     9,    10,    12,    52,     8,    25,
      53,    53,    46,     3,    25,    25,    46,    25,    25,    39,
      22,    26,    46,    57,    27,    48,    49,    49,    51,    53,
      46,    57,    27,    48,    49,    49,    51,    53,    57,    27,
      22,    46,    46,    22,     3,    56,    26,    27,    27,    27,
      27,    22,    27,    27,    40,    47,    22,    22,    17,    22,
      40,    46,    27,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    29,    30,    31,    31,    32,    32,    33,    34,    35,
      35,    36,    36,    37,    38,    39,    39,    40,    40,    40,
      40,    40,    40,    40,    41,    41,    42,    42,    43,    44,
      45,    45,    46,    46,    47,    47,    48,    48,    49,    49,
      50,    50,    51,    51,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    54,    54,    55,    56,    56,    57,    57,
      58,    58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     1,
       0,     3,     1,     2,     3,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     7,     5,     9,     3,
       5,     5,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     2,     2,     4,     1,     1,     1,     0,
       3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 2: /* program: declarationList  */
#line 86 "./src/cipl_sin.y"
                  {}
#line 1640 "cipl_sin.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 89 "./src/cipl_sin.y"
                              {}
#line 1646 "cipl_sin.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 90 "./src/cipl_sin.y"
                              {}
#line 1652 "cipl_sin.tab.c"
    break;

  case 5: /* declaration: variableDeclaration  */
#line 93 "./src/cipl_sin.y"
                      {}
#line 1658 "cipl_sin.tab.c"
    break;

  case 6: /* declaration: functionDeclaration  */
#line 94 "./src/cipl_sin.y"
                        {}
#line 1664 "cipl_sin.tab.c"
    break;

  case 7: /* variableDeclaration: TYPE ID SEMICOLON  */
#line 97 "./src/cipl_sin.y"
                    {}
#line 1670 "cipl_sin.tab.c"
    break;

  case 8: /* functionDeclaration: TYPE ID OPEN_PAREN params CLOSE_PAREN compoundStmt  */
#line 100 "./src/cipl_sin.y"
                                                      {}
#line 1676 "cipl_sin.tab.c"
    break;

  case 9: /* params: paramList  */
#line 103 "./src/cipl_sin.y"
            {}
#line 1682 "cipl_sin.tab.c"
    break;

  case 10: /* params: %empty  */
#line 104 "./src/cipl_sin.y"
            {}
#line 1688 "cipl_sin.tab.c"
    break;

  case 11: /* paramList: paramList COMMA param  */
#line 107 "./src/cipl_sin.y"
                        {}
#line 1694 "cipl_sin.tab.c"
    break;

  case 12: /* paramList: param  */
#line 108 "./src/cipl_sin.y"
          {}
#line 1700 "cipl_sin.tab.c"
    break;

  case 13: /* param: TYPE ID  */
#line 111 "./src/cipl_sin.y"
          {}
#line 1706 "cipl_sin.tab.c"
    break;

  case 14: /* compoundStmt: OPEN_CURLY statementList CLOSE_CURLY  */
#line 114 "./src/cipl_sin.y"
                                        {}
#line 1712 "cipl_sin.tab.c"
    break;

  case 15: /* statementList: statementList statement  */
#line 117 "./src/cipl_sin.y"
                          {}
#line 1718 "cipl_sin.tab.c"
    break;

  case 16: /* statementList: %empty  */
#line 118 "./src/cipl_sin.y"
            {}
#line 1724 "cipl_sin.tab.c"
    break;

  case 17: /* statement: expressionStmt  */
#line 121 "./src/cipl_sin.y"
                          {}
#line 1730 "cipl_sin.tab.c"
    break;

  case 18: /* statement: compoundStmt  */
#line 122 "./src/cipl_sin.y"
                          {}
#line 1736 "cipl_sin.tab.c"
    break;

  case 19: /* statement: conditionalStmt  */
#line 123 "./src/cipl_sin.y"
                          {}
#line 1742 "cipl_sin.tab.c"
    break;

  case 20: /* statement: loopStmt  */
#line 124 "./src/cipl_sin.y"
                          {}
#line 1748 "cipl_sin.tab.c"
    break;

  case 21: /* statement: returnStmt  */
#line 125 "./src/cipl_sin.y"
                          {}
#line 1754 "cipl_sin.tab.c"
    break;

  case 22: /* statement: variableDeclaration  */
#line 126 "./src/cipl_sin.y"
                          {}
#line 1760 "cipl_sin.tab.c"
    break;

  case 23: /* statement: inOutStmt  */
#line 127 "./src/cipl_sin.y"
                          {}
#line 1766 "cipl_sin.tab.c"
    break;

  case 24: /* expressionStmt: expression SEMICOLON  */
#line 130 "./src/cipl_sin.y"
                          {}
#line 1772 "cipl_sin.tab.c"
    break;

  case 25: /* expressionStmt: SEMICOLON  */
#line 131 "./src/cipl_sin.y"
                          {}
#line 1778 "cipl_sin.tab.c"
    break;

  case 26: /* conditionalStmt: IF OPEN_PAREN expression CLOSE_PAREN statement ELSE statement  */
#line 134 "./src/cipl_sin.y"
                                                                {}
#line 1784 "cipl_sin.tab.c"
    break;

  case 27: /* conditionalStmt: IF OPEN_PAREN expression CLOSE_PAREN statement  */
#line 135 "./src/cipl_sin.y"
                                                                {}
#line 1790 "cipl_sin.tab.c"
    break;

  case 28: /* loopStmt: FOR OPEN_PAREN expression SEMICOLON logicExpression SEMICOLON expression CLOSE_PAREN statement  */
#line 138 "./src/cipl_sin.y"
                                                                                                 {}
#line 1796 "cipl_sin.tab.c"
    break;

  case 29: /* returnStmt: RETURN expression SEMICOLON  */
#line 141 "./src/cipl_sin.y"
                              {}
#line 1802 "cipl_sin.tab.c"
    break;

  case 30: /* inOutStmt: INPUT OPEN_PAREN ID CLOSE_PAREN SEMICOLON  */
#line 144 "./src/cipl_sin.y"
                                            {}
#line 1808 "cipl_sin.tab.c"
    break;

  case 31: /* inOutStmt: OUTPUT OPEN_PAREN outputArgs CLOSE_PAREN SEMICOLON  */
#line 145 "./src/cipl_sin.y"
                                                        {printf("%s %s %s\n", (yyvsp[-4].token).content, (yyvsp[-3].token).content, (yyvsp[-1].token).content);}
#line 1814 "cipl_sin.tab.c"
    break;

  case 32: /* expression: ID OP_ASSIG expression  */
#line 148 "./src/cipl_sin.y"
                          {}
#line 1820 "cipl_sin.tab.c"
    break;

  case 33: /* expression: logicExpression  */
#line 149 "./src/cipl_sin.y"
                          {}
#line 1826 "cipl_sin.tab.c"
    break;

  case 34: /* logicExpression: logicExpression OP_LOGIC relatExpression  */
#line 152 "./src/cipl_sin.y"
                                            {}
#line 1832 "cipl_sin.tab.c"
    break;

  case 35: /* logicExpression: relatExpression  */
#line 153 "./src/cipl_sin.y"
                                            {}
#line 1838 "cipl_sin.tab.c"
    break;

  case 36: /* relatExpression: relatExpression OP_RELAT listExpression  */
#line 156 "./src/cipl_sin.y"
                                            {}
#line 1844 "cipl_sin.tab.c"
    break;

  case 37: /* relatExpression: listExpression  */
#line 157 "./src/cipl_sin.y"
                                            {}
#line 1850 "cipl_sin.tab.c"
    break;

  case 38: /* listExpression: addExpression OP_LIST listExpression  */
#line 160 "./src/cipl_sin.y"
                                            {}
#line 1856 "cipl_sin.tab.c"
    break;

  case 39: /* listExpression: addExpression  */
#line 161 "./src/cipl_sin.y"
                                            {}
#line 1862 "cipl_sin.tab.c"
    break;

  case 40: /* addExpression: addExpression opAdd mulExpression  */
#line 164 "./src/cipl_sin.y"
                                            {}
#line 1868 "cipl_sin.tab.c"
    break;

  case 41: /* addExpression: mulExpression  */
#line 165 "./src/cipl_sin.y"
                                            {}
#line 1874 "cipl_sin.tab.c"
    break;

  case 42: /* mulExpression: mulExpression OP_MUL factor  */
#line 168 "./src/cipl_sin.y"
                                            {}
#line 1880 "cipl_sin.tab.c"
    break;

  case 43: /* mulExpression: factor  */
#line 169 "./src/cipl_sin.y"
                                            {}
#line 1886 "cipl_sin.tab.c"
    break;

  case 44: /* opAdd: OP_PLUS  */
#line 172 "./src/cipl_sin.y"
                                            {}
#line 1892 "cipl_sin.tab.c"
    break;

  case 45: /* opAdd: OP_MINUS  */
#line 173 "./src/cipl_sin.y"
                                            {}
#line 1898 "cipl_sin.tab.c"
    break;

  case 46: /* factor: OPEN_PAREN expression CLOSE_PAREN  */
#line 176 "./src/cipl_sin.y"
                                            {}
#line 1904 "cipl_sin.tab.c"
    break;

  case 47: /* factor: unaryExpression  */
#line 177 "./src/cipl_sin.y"
                                            {}
#line 1910 "cipl_sin.tab.c"
    break;

  case 48: /* factor: call  */
#line 178 "./src/cipl_sin.y"
                                            {}
#line 1916 "cipl_sin.tab.c"
    break;

  case 49: /* factor: ID  */
#line 179 "./src/cipl_sin.y"
                                            {printf("%s\n", (yyvsp[0].token).content);}
#line 1922 "cipl_sin.tab.c"
    break;

  case 50: /* factor: FLOAT  */
#line 180 "./src/cipl_sin.y"
                                            {}
#line 1928 "cipl_sin.tab.c"
    break;

  case 51: /* factor: INT  */
#line 181 "./src/cipl_sin.y"
                                            {}
#line 1934 "cipl_sin.tab.c"
    break;

  case 52: /* factor: NIL  */
#line 182 "./src/cipl_sin.y"
                                            {}
#line 1940 "cipl_sin.tab.c"
    break;

  case 53: /* unaryExpression: UN_OP factor  */
#line 185 "./src/cipl_sin.y"
                                            {}
#line 1946 "cipl_sin.tab.c"
    break;

  case 54: /* unaryExpression: OP_MINUS factor  */
#line 186 "./src/cipl_sin.y"
                                  {}
#line 1952 "cipl_sin.tab.c"
    break;

  case 55: /* call: ID OPEN_PAREN args CLOSE_PAREN  */
#line 189 "./src/cipl_sin.y"
                                            {}
#line 1958 "cipl_sin.tab.c"
    break;

  case 56: /* outputArgs: factor  */
#line 192 "./src/cipl_sin.y"
                                   {}
#line 1964 "cipl_sin.tab.c"
    break;

  case 57: /* outputArgs: STRING  */
#line 193 "./src/cipl_sin.y"
                                            {printf("%s\n", (yyvsp[0].token).content);}
#line 1970 "cipl_sin.tab.c"
    break;

  case 58: /* args: argList  */
#line 196 "./src/cipl_sin.y"
                                            {}
#line 1976 "cipl_sin.tab.c"
    break;

  case 59: /* args: %empty  */
#line 197 "./src/cipl_sin.y"
                                            {}
#line 1982 "cipl_sin.tab.c"
    break;

  case 60: /* argList: argList COMMA expression  */
#line 200 "./src/cipl_sin.y"
                                            {}
#line 1988 "cipl_sin.tab.c"
    break;

  case 61: /* argList: expression  */
#line 201 "./src/cipl_sin.y"
                                            {}
#line 1994 "cipl_sin.tab.c"
    break;


#line 1998 "cipl_sin.tab.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 203 "./src/cipl_sin.y"


void yyerror (char const *message) {
  fprintf(stderr, "%3d \t %4d \t %s\n", current_line, current_column, message);
}

int main (int argc, char *argv[]) {
if (argc > 1) {
    FILE *file = fopen(argv[1], "r");

    if (file) {
      yyin = file;

      yyparse();
    } else {
      printf("Invalid filename and/or path.\n");
    }

    fclose(file);
  } else {
    printf("There isn't input files.\n");
  }

  yylex_destroy();

  return 0;
}
