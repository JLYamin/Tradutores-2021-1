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
#line 4 "./src/cipl_syn.y"

  #include "./lib/tree.h"
  #include "./lib/symbol.h"

  extern FILE *yyin;

  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *message);

  extern int currentLine;
  extern int currentColumn;
  extern int scopeCounting;
  extern int totalErrors;

  tableNode* table;

#line 89 "cipl_syn.tab.c"

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

#include "cipl_syn.tab.h"
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
  YYSYMBOL_OP_ADD = 6,                     /* OP_ADD  */
  YYSYMBOL_OP_MUL = 7,                     /* OP_MUL  */
  YYSYMBOL_OP_LOGIC = 8,                   /* OP_LOGIC  */
  YYSYMBOL_OP_RELAT = 9,                   /* OP_RELAT  */
  YYSYMBOL_OP_ASSIG = 10,                  /* OP_ASSIG  */
  YYSYMBOL_OP_LIST = 11,                   /* OP_LIST  */
  YYSYMBOL_UN_OP = 12,                     /* UN_OP  */
  YYSYMBOL_TYPE = 13,                      /* TYPE  */
  YYSYMBOL_NIL = 14,                       /* NIL  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_RETURN = 18,                    /* RETURN  */
  YYSYMBOL_INPUT = 19,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 20,                    /* OUTPUT  */
  YYSYMBOL_SEMICOLON = 21,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 22,                     /* COMMA  */
  YYSYMBOL_OPEN_CURLY = 23,                /* OPEN_CURLY  */
  YYSYMBOL_OPEN_PAREN = 24,                /* OPEN_PAREN  */
  YYSYMBOL_CLOSE_CURLY = 25,               /* CLOSE_CURLY  */
  YYSYMBOL_CLOSE_PAREN = 26,               /* CLOSE_PAREN  */
  YYSYMBOL_STRING = 27,                    /* STRING  */
  YYSYMBOL_28_ = 28,                       /* ';'  */
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
  YYSYMBOL_factor = 52,                    /* factor  */
  YYSYMBOL_unaryExpression = 53,           /* unaryExpression  */
  YYSYMBOL_call = 54,                      /* call  */
  YYSYMBOL_outputArgs = 55,                /* outputArgs  */
  YYSYMBOL_args = 56,                      /* args  */
  YYSYMBOL_argList = 57                    /* argList  */
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2251

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  261

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   282


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,    28,
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
      25,    26,    27
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    90,    90,    93,    94,    97,    98,   101,   104,   108,
     111,   114,   115,   118,   119,   122,   125,   126,   129,   130,
     133,   134,   135,   136,   137,   138,   139,   142,   143,   146,
     147,   148,   151,   154,   157,   158,   159,   160,   163,   164,
     167,   168,   171,   172,   175,   176,   179,   180,   183,   184,
     187,   188,   189,   190,   191,   192,   193,   196,   197,   200,
     203,   204,   207,   208,   211,   212
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  static const char *const yy_sname[] =
  {
  "end of file", "error", "invalid token", "ID", "INT", "FLOAT", "OP_ADD",
  "OP_MUL", "OP_LOGIC", "OP_RELAT", "OP_ASSIG", "OP_LIST", "UN_OP", "TYPE",
  "NIL", "IF", "ELSE", "FOR", "RETURN", "INPUT", "OUTPUT", "SEMICOLON",
  "COMMA", "OPEN_CURLY", "OPEN_PAREN", "CLOSE_CURLY", "CLOSE_PAREN",
  "STRING", "';'", "$accept", "program", "declarationList", "declaration",
  "variableDeclaration", "functionDeclaration", "params", "paramList",
  "param", "compoundStmt", "statementList", "statement", "expressionStmt",
  "conditionalStmt", "loopStmt", "returnStmt", "inOutStmt", "expression",
  "logicExpression", "relatExpression", "listExpression", "addExpression",
  "mulExpression", "factor", "unaryExpression", "call", "outputArgs",
  "args", "argList", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    59
};
#endif

#define YYPACT_NINF (-116)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-66)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      52,    11,    10,    30,   107,   235,   257,   292,   307,   232,
    -116,   340,   442,    36,    42,    35,   129,   208,   265,    28,
      43,   463,  1230,   467,   295,  1255,   653,   680,  2128,  2134,
      87,    87,    92,  2145,     2,    56,   262,    13,    16,  1280,
     310,   494,  1305,  1330,  1355,  1380,  1405,  1430,  1455,  1480,
     100,    97,   254,   506,  2046,  2151,  2162,  2168,  2179,   262,
     121,  2101,  2185,  2196,   111,   151,   310,   262,   161,   173,
     195,   188,     4,   185,  1505,    87,    87,    87,    87,    87,
     207,   305,   214,   311,  1530,   216,   212,  1555,  1580,   217,
    1605,   238,   251,   259,  2202,   620,   628,  2213,   643,  2219,
    2230,   390,  1855,    87,   267,   285,   325,   201,   101,  1630,
    1655,  1879,   310,  1680,   306,  1879,  1705,  1230,  1730,   130,
     243,   293,   406,   406,   337,   310,   219,    55,    77,   381,
     427,   478,  2030,  2036,   616,   530,   609,   520,   520,  1904,
     310,    88,    12,   108,  2042,  1910,  1931,  1937,  1943,  1755,
     122,   326,   336,   573,   573,   339,   310,   347,   351,    54,
     308,    18,   294,   262,    24,    26,   704,  1230,   729,   755,
     780,   805,   830,   855,   880,   315,  1780,   310,   121,   272,
    2052,  2063,   353,   406,   406,   406,   406,   406,   390,   121,
    1898,  1964,  1970,   355,   520,   520,   520,   520,   520,   121,
     356,   357,   371,   905,   377,   373,   310,   262,   385,   387,
     410,   400,     4,  1805,   930,  1830,   396,   397,  2073,    80,
     157,  2079,   184,  2085,   350,   398,  1976,   671,  2105,  1997,
    2107,  2003,   401,   403,   955,   980,   411,   423,  1005,  1030,
     430,  1055,   446,  1080,  2095,  2009,   447,  1855,    87,   453,
     457,  1105,   136,  1130,  1155,  1855,   310,  1180,   462,  1855,
    1205
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,  -116,   428,     0,  -116,  -116,  -116,   459,   -18,
    -115,   -79,   -80,   -69,   -59,   -58,   -56,    83,   507,   456,
     405,   365,   314,   -25,   172,   263,   270,   -95,  -116
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    42,     7,    15,    16,    17,    43,
      25,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    93,    82,    83
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    23,   176,    65,     6,    62,    63,   150,   151,   152,
     153,   -10,   -10,     9,    69,   131,   154,    71,   155,   205,
     -41,   195,   170,   107,   -10,   209,    66,   211,   156,    21,
      10,    91,   113,   171,   -41,   146,   116,    70,   -41,     8,
      72,   131,   206,   172,   173,    18,   174,    92,   210,    14,
     212,    22,   213,     1,    99,   -17,    14,   -17,   -17,   -17,
     -17,    19,   -12,   -41,   184,     2,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,   146,   -17,   -17,   -17,
      67,   -41,   203,   217,   169,   -43,   -43,   131,   -40,   184,
      61,    28,    29,    30,   225,    64,   194,   180,   181,    31,
     131,    33,   168,   -43,   232,    75,   -40,    -2,     1,    75,
     -39,    40,   191,   192,   -39,   131,   -43,   -43,   -39,    68,
       2,    74,   112,    73,   134,   135,   136,   137,   200,   201,
     -43,   131,   149,   138,   -43,   139,   -53,   -53,   -53,   -53,
     177,   -53,    80,    81,    75,   140,   199,   -63,   -53,    85,
      86,    20,   131,   146,   178,   -11,   -53,   256,   131,   131,
     131,   131,   223,   146,   146,   -42,   -42,   170,   251,   146,
     146,   146,   146,   231,   146,   170,   257,    84,   171,   170,
     260,   131,    87,   -42,   106,   175,   171,    92,   172,   173,
     171,   174,   -44,   -44,    88,   114,   172,   173,    89,   174,
     172,   173,   -30,   174,   -30,   -30,   -30,   -30,   182,    90,
     -44,    94,   132,   -30,   -30,   -30,   -30,   111,   -30,   -30,
     -30,   -30,   -30,   193,   -30,   -30,   -30,   183,   -38,   169,
     -14,   131,   147,   103,   -14,    -4,    -4,   169,   132,   202,
     100,   169,   102,   104,   157,   -39,   208,   168,    -4,   -55,
     -55,   -55,   -55,    12,   -55,   168,    13,    -5,    -5,   168,
     216,    81,   -41,    76,   -61,    27,    28,    29,    30,   -55,
      -5,   224,    81,   147,    31,   -41,    33,   -60,   -53,   -53,
     -53,   -53,    81,   -53,   132,   105,    40,   -15,   109,   236,
     237,   -15,    -6,    -6,   132,   132,   178,   132,   -53,   -54,
     -54,   -54,   -54,   133,   -54,    -6,   110,    -8,    -8,   147,
     147,   204,   132,   119,   120,   121,   122,   -13,   207,   -54,
      -8,   -13,   123,   148,   124,   157,   157,   -65,   132,   133,
     175,   -65,   115,   101,   125,   158,   214,   -62,   175,   258,
      -3,    -3,   175,   -56,   -56,   -56,   -56,   -64,   -56,   132,
     147,   -64,   -55,    -3,   130,   132,   132,   132,   132,   132,
     147,   147,   -54,   -56,   148,   -56,   147,   147,   147,   147,
     147,   147,   -38,   -51,   145,   133,   -38,   -52,   132,   218,
     130,   226,   -58,   -57,   157,   133,   133,   185,   133,   -45,
     -45,    97,   186,   134,   135,   136,   137,   233,   234,   235,
     148,   148,   138,   133,   139,   129,   238,   -45,   239,   179,
     120,   121,   122,   240,   140,   145,   158,   158,   123,   133,
     124,   241,   -38,   244,   245,   144,   130,   246,   132,   -50,
     125,   129,    11,   -47,   187,   -47,   -47,   247,   -47,   130,
     133,   148,    -7,    -7,   248,   128,   133,   133,   133,   133,
     133,   148,   148,   -47,   130,    -7,   249,   148,   148,   148,
     148,   148,   148,   -17,   -17,   143,   144,    -9,    -9,   133,
     130,   128,   250,   -59,   253,   158,   -17,   129,   254,    24,
      -9,    96,   242,    98,   -49,   -49,   -49,   -49,   259,   -49,
     129,   130,   145,     0,   -16,   -16,   127,   130,   130,   221,
     130,     0,   145,   145,   -49,   129,   143,   -16,   145,   145,
     229,   145,     0,   145,   -43,   -43,   142,   128,     0,   133,
     130,   129,   127,   190,   135,   136,   137,   -43,     0,     0,
     128,    95,   138,     0,   139,     0,   -55,   -55,   -55,   -55,
       0,   -55,   129,   144,   140,   128,     0,   126,   129,   129,
       0,   129,   -55,   144,   144,     0,   -55,   142,     0,   144,
     144,   128,   144,     0,   144,     0,     0,   141,   127,     0,
     130,   129,     0,   126,     0,     0,   150,   151,   152,   153,
       0,   127,   128,   143,     0,   154,     0,   155,   128,   220,
       0,   222,     0,   143,   143,     0,   127,   156,     0,   143,
     228,     0,   230,     0,   143,     0,     0,     0,   141,     0,
     108,   128,   127,     0,     0,   -54,   -54,   -54,   -54,   126,
     -54,   129,   -53,   -53,   -53,   -53,   188,   -53,   -40,    76,
       0,   -54,   126,   127,   142,   -54,   -42,   -42,   -53,   219,
     189,   -40,   -53,     0,   142,   142,     0,   126,     0,   -42,
     227,   -44,   -44,     0,   -17,   142,   -17,   -17,   -17,   -17,
       0,   128,   127,   126,   -44,   -17,   -17,   -17,   -17,     0,
     -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,   -17,   -40,
     195,   118,     0,     0,   126,   141,   -53,   -53,   -53,   -53,
      59,   -53,     0,   -40,     0,   141,   141,   -40,     0,     0,
       0,   -53,     0,     0,    60,   -28,   141,   -28,   -28,   -28,
     -28,     0,   127,   126,     0,     0,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,
     -25,     0,   -25,   -25,   -25,   -25,     0,     0,     0,     0,
       0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   252,   -21,     0,   -21,   -21,
     -21,   -21,     0,   126,     0,     0,     0,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,
     -21,   -20,     0,   -20,   -20,   -20,   -20,     0,     0,     0,
       0,     0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,     0,   -20,   -20,   -20,   -22,     0,   -22,   -22,
     -22,   -22,     0,     0,     0,     0,     0,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,
     -22,   -23,     0,   -23,   -23,   -23,   -23,     0,     0,     0,
       0,     0,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,     0,   -23,   -23,   -23,   -24,     0,   -24,   -24,
     -24,   -24,     0,     0,     0,     0,     0,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -26,     0,   -26,   -26,   -26,   -26,     0,     0,     0,
       0,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,     0,   -26,   -26,   -26,    -8,     0,    -8,    -8,
      -8,    -8,     0,     0,     0,     0,     0,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,
      -8,   -27,     0,   -27,   -27,   -27,   -27,     0,     0,     0,
       0,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,   -27,   -27,    -7,     0,    -7,    -7,
      -7,    -7,     0,     0,     0,     0,     0,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,
      -7,   -31,     0,   -31,   -31,   -31,   -31,     0,     0,     0,
       0,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -33,     0,   -33,   -33,
     -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -36,     0,   -36,   -36,   -36,   -36,     0,     0,     0,
       0,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -36,   -37,     0,   -37,   -37,
     -37,   -37,     0,     0,     0,     0,     0,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -16,     0,   -16,   -16,   -16,   -16,     0,     0,     0,
       0,     0,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,     0,   -16,   -16,   -16,   -30,     0,   -30,   -30,
     -30,   -30,     0,     0,     0,     0,     0,   -30,   -30,   -30,
     -30,   255,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -34,     0,   -34,   -34,   -34,   -34,     0,     0,     0,
       0,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -35,     0,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,     0,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -29,     0,   -29,   -29,   -29,   -29,     0,     0,     0,
       0,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -32,     0,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -19,     0,   -19,   -19,   -19,   -19,     0,     0,     0,
       0,     0,   -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,
     -19,   -19,     0,   -19,   -19,   -19,    26,     0,    27,    28,
      29,    30,     0,     0,     0,     0,     0,    31,    32,    33,
      34,     0,    35,    36,    37,    38,    39,     0,   117,    40,
      41,   -28,     0,   -28,   -28,   -28,   -28,     0,     0,     0,
       0,     0,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,   -28,   -25,     0,   -25,   -25,
     -25,   -25,     0,     0,     0,     0,     0,   -25,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,
     -25,   -21,     0,   -21,   -21,   -21,   -21,     0,     0,     0,
       0,     0,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,
     -21,   -21,     0,   -21,   -21,   -21,   -18,     0,   -18,   -18,
     -18,   -18,     0,     0,     0,     0,     0,   -18,   -18,   -18,
     -18,     0,   -18,   -18,   -18,   -18,   -18,     0,   -18,   -18,
     -18,   -20,     0,   -20,   -20,   -20,   -20,     0,     0,     0,
       0,     0,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,
     -20,   -20,     0,   -20,   -20,   -20,   -22,     0,   -22,   -22,
     -22,   -22,     0,     0,     0,     0,     0,   -22,   -22,   -22,
     -22,     0,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,
     -22,   -23,     0,   -23,   -23,   -23,   -23,     0,     0,     0,
       0,     0,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,
     -23,   -23,     0,   -23,   -23,   -23,   -24,     0,   -24,   -24,
     -24,   -24,     0,     0,     0,     0,     0,   -24,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -26,     0,   -26,   -26,   -26,   -26,     0,     0,     0,
       0,     0,   -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -27,     0,   -27,   -27,
     -27,   -27,     0,     0,     0,     0,     0,   -27,   -27,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -31,     0,   -31,   -31,   -31,   -31,     0,     0,     0,
       0,     0,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -33,     0,   -33,   -33,
     -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -36,     0,   -36,   -36,   -36,   -36,     0,     0,     0,
       0,     0,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -36,   -37,     0,   -37,   -37,
     -37,   -37,     0,     0,     0,     0,     0,   -37,   -37,   -37,
     -37,     0,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -34,     0,   -34,   -34,   -34,   -34,     0,     0,     0,
       0,     0,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -35,     0,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,     0,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -29,     0,   -29,   -29,   -29,   -29,     0,     0,     0,
       0,     0,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -32,     0,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,     0,   -32,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
     -32,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,     0,
       0,     0,    -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,
      -8,    -8,     0,    -8,    -8,    -8,    -7,     0,    -7,    -7,
      -7,    -7,     0,     0,     0,     0,     0,    -7,    -7,    -7,
      -7,     0,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,
      -7,    26,     0,    27,    28,    29,    30,     0,     0,     0,
       0,     0,    31,    32,    33,    34,     0,    35,    36,    37,
      38,    39,     0,   117,    40,   215,    26,     0,    27,    28,
      29,    30,     0,     0,     0,     0,     0,    31,    32,    33,
      34,     0,    35,    36,    37,    38,    39,     0,   117,    40,
     243,   -16,     0,   -16,   -16,   -16,   -16,     0,     0,     0,
       0,     0,   -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,
     -16,   -16,     0,   -16,   -16,   -16,   159,     0,    27,    28,
      29,    30,     0,     0,     0,     0,     0,    31,   160,    33,
     161,     0,   162,   163,   164,   165,   166,     0,   167,    40,
      26,     0,    27,    28,    29,    30,     0,     0,     0,     0,
       0,    31,    32,    33,    34,     0,    35,    36,    37,    38,
      39,     0,   117,    40,   -53,   -53,   -53,   -53,     0,   -53,
     -56,   -56,   -56,   -56,     0,   -56,   -47,   198,   -47,   -47,
     -53,   -47,   189,     0,   -53,     0,   -56,     0,     0,     0,
     -56,     0,   -47,     0,     0,     0,   -47,   -49,   -49,   -49,
     -49,     0,   -49,   -51,   -51,   -51,   -51,     0,   -51,   -52,
     -52,   -52,   -52,   -49,   -52,     0,     0,   -49,     0,   -51,
       0,     0,     0,   -51,     0,   -52,     0,     0,     0,   -52,
     -58,   -58,   -58,   -58,     0,   -58,   -57,   -57,   -57,   -57,
       0,   -57,   -50,   -50,   -50,   -50,   -58,   -50,     0,     0,
     -58,     0,   -57,     0,     0,     0,   -57,     0,   -50,     0,
       0,     0,   -50,   -46,   198,   -46,   -46,     0,   -46,   -48,
     -48,   -48,   -48,     0,   -48,   -59,   -59,   -59,   -59,   -46,
     -59,     0,     0,   -46,     0,   -48,     0,     0,     0,   -48,
       0,   -59,     0,     0,     0,   -59,   -51,   -51,   -51,   -51,
       0,   -51,   -52,   -52,   -52,   -52,     0,   -52,   196,     0,
     -45,   -45,    77,   197,   -45,   -45,   -51,    78,   -58,   -58,
     -58,   -58,   -52,   -58,   -45,     0,     0,   -45,   -45,   -57,
     -57,   -57,   -57,     0,   -57,     0,     0,     0,   -58,   -50,
     -50,   -50,   -50,     0,   -50,   -46,   187,   -46,   -46,   -57,
     -46,   -48,   -48,   -48,   -48,     0,   -48,     0,     0,   -50,
       0,   -59,   -59,   -59,   -59,   -46,   -59,   -53,   -53,   -53,
     -53,   -48,   -53,   -42,   -42,   -44,   -44,     0,     0,     0,
       0,   -59,   -53,     0,     0,    60,     0,   -42,     0,   -44,
       0,   -42,     0,   -44,   -55,   -55,   -55,   -55,     0,   -55,
     -54,   -54,   -54,   -54,     0,   -54,     0,     0,     0,   -55,
       0,   -56,   -56,   -56,   -56,   -54,   -56,   -47,    79,   -47,
     -47,     0,   -47,     0,     0,     0,   -56,     0,   -49,   -49,
     -49,   -49,   -47,   -49,   -51,   -51,   -51,   -51,     0,   -51,
       0,     0,     0,   -49,     0,   -52,   -52,   -52,   -52,   -51,
     -52,   -58,   -58,   -58,   -58,     0,   -58,     0,     0,     0,
     -52,     0,   -57,   -57,   -57,   -57,   -58,   -57,   -50,   -50,
     -50,   -50,     0,   -50,     0,     0,     0,   -57,     0,   -46,
      79,   -46,   -46,   -50,   -46,   -48,   -48,   -48,   -48,     0,
     -48,     0,     0,     0,   -46,     0,   -59,   -59,   -59,   -59,
     -48,   -59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -59
};

static const yytype_int16 yycheck[] =
{
       0,    19,   117,     1,     4,    30,    31,     3,     4,     5,
       6,     0,     1,     3,     1,    40,    12,     1,    14,     1,
       8,     9,   102,   102,    13,     1,    24,     1,    24,     1,
       0,    27,   111,   102,    22,    60,   115,    24,    26,    28,
      24,    66,    24,   102,   102,     3,   102,    72,    24,    13,
      24,    23,   167,     1,    79,     1,    13,     3,     4,     5,
       6,    26,    26,     8,     9,    13,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   101,    23,    24,    25,
      24,    26,    28,   178,   102,     8,     9,   112,     8,     9,
       3,     4,     5,     6,   189,     3,     8,   122,   123,    12,
     125,    14,   102,    26,   199,     8,    26,     0,     1,     8,
      22,    24,   137,   138,    26,   140,     8,     9,    21,    36,
      13,    21,    21,    40,     3,     4,     5,     6,   153,   154,
      22,   156,    21,    12,    26,    14,     6,     7,     8,     9,
      10,    11,    59,    60,     8,    24,    24,    26,    26,    66,
      67,    22,   177,   178,    24,    26,    26,    21,   183,   184,
     185,   186,   187,   188,   189,     8,     9,   247,   247,   194,
     195,   196,   197,   198,   199,   255,   255,    26,   247,   259,
     259,   206,    21,    26,   101,   102,   255,   212,   247,   247,
     259,   247,     8,     9,    21,   112,   255,   255,     3,   255,
     259,   259,     1,   259,     3,     4,     5,     6,   125,    21,
      26,    26,    40,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   140,    23,    24,    25,     8,    21,   247,
      22,   256,    60,    21,    26,     0,     1,   255,    66,   156,
      26,   259,    26,    26,    72,    26,   163,   247,    13,     6,
       7,     8,     9,    21,    11,   255,    24,     0,     1,   259,
     177,   178,     8,     9,    26,     3,     4,     5,     6,    26,
      13,   188,   189,   101,    12,    21,    14,    26,     6,     7,
       8,     9,   199,    11,   112,    26,    24,    22,    21,   206,
     207,    26,     0,     1,   122,   123,    24,   125,    26,     6,
       7,     8,     9,    40,    11,    13,    21,     0,     1,   137,
     138,     3,   140,     3,     4,     5,     6,    22,    24,    26,
      13,    26,    12,    60,    14,   153,   154,    22,   156,    66,
     247,    26,    26,    22,    24,    72,    21,    26,   255,   256,
       0,     1,   259,     6,     7,     8,     9,    22,    11,   177,
     178,    26,    26,    13,    40,   183,   184,   185,   186,   187,
     188,   189,    26,    26,   101,    26,   194,   195,   196,   197,
     198,   199,    22,    26,    60,   112,    26,    26,   206,    26,
      66,    26,    26,    26,   212,   122,   123,     6,   125,     8,
       9,    77,    11,     3,     4,     5,     6,    26,    21,    26,
     137,   138,    12,   140,    14,    40,    21,    26,    21,     3,
       4,     5,     6,     3,    24,   101,   153,   154,    12,   156,
      14,    21,    26,    26,    26,    60,   112,    26,   256,    26,
      24,    66,     4,     6,     7,     8,     9,    26,    11,   125,
     177,   178,     0,     1,    21,    40,   183,   184,   185,   186,
     187,   188,   189,    26,   140,    13,    26,   194,   195,   196,
     197,   198,   199,     0,     1,    60,   101,     0,     1,   206,
     156,    66,    26,    26,    21,   212,    13,   112,    21,    20,
      13,    76,   212,    78,     6,     7,     8,     9,    26,    11,
     125,   177,   178,    -1,     0,     1,    40,   183,   184,   185,
     186,    -1,   188,   189,    26,   140,   101,    13,   194,   195,
     196,   197,    -1,   199,     8,     9,    60,   112,    -1,   256,
     206,   156,    66,     3,     4,     5,     6,    21,    -1,    -1,
     125,    75,    12,    -1,    14,    -1,     6,     7,     8,     9,
      -1,    11,   177,   178,    24,   140,    -1,    40,   183,   184,
      -1,   186,    22,   188,   189,    -1,    26,   101,    -1,   194,
     195,   156,   197,    -1,   199,    -1,    -1,    60,   112,    -1,
     256,   206,    -1,    66,    -1,    -1,     3,     4,     5,     6,
      -1,   125,   177,   178,    -1,    12,    -1,    14,   183,   184,
      -1,   186,    -1,   188,   189,    -1,   140,    24,    -1,   194,
     195,    -1,   197,    -1,   199,    -1,    -1,    -1,   101,    -1,
     103,   206,   156,    -1,    -1,     6,     7,     8,     9,   112,
      11,   256,     6,     7,     8,     9,    10,    11,     8,     9,
      -1,    22,   125,   177,   178,    26,     8,     9,    22,   183,
      24,    21,    26,    -1,   188,   189,    -1,   140,    -1,    21,
     194,     8,     9,    -1,     1,   199,     3,     4,     5,     6,
      -1,   256,   206,   156,    21,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     8,
       9,    28,    -1,    -1,   177,   178,     6,     7,     8,     9,
      10,    11,    -1,    22,    -1,   188,   189,    26,    -1,    -1,
      -1,    21,    -1,    -1,    24,     1,   199,     3,     4,     5,
       6,    -1,   256,   206,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    25,
       1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    25,   248,     1,    -1,     3,     4,
       5,     6,    -1,   256,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
       1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,    -1,    23,    24,     6,     7,     8,     9,    -1,    11,
       6,     7,     8,     9,    -1,    11,     6,     7,     8,     9,
      22,    11,    24,    -1,    26,    -1,    22,    -1,    -1,    -1,
      26,    -1,    22,    -1,    -1,    -1,    26,     6,     7,     8,
       9,    -1,    11,     6,     7,     8,     9,    -1,    11,     6,
       7,     8,     9,    22,    11,    -1,    -1,    26,    -1,    22,
      -1,    -1,    -1,    26,    -1,    22,    -1,    -1,    -1,    26,
       6,     7,     8,     9,    -1,    11,     6,     7,     8,     9,
      -1,    11,     6,     7,     8,     9,    22,    11,    -1,    -1,
      26,    -1,    22,    -1,    -1,    -1,    26,    -1,    22,    -1,
      -1,    -1,    26,     6,     7,     8,     9,    -1,    11,     6,
       7,     8,     9,    -1,    11,     6,     7,     8,     9,    22,
      11,    -1,    -1,    26,    -1,    22,    -1,    -1,    -1,    26,
      -1,    22,    -1,    -1,    -1,    26,     6,     7,     8,     9,
      -1,    11,     6,     7,     8,     9,    -1,    11,     6,    -1,
       8,     9,     6,    11,     8,     9,    26,    11,     6,     7,
       8,     9,    26,    11,    22,    -1,    -1,    21,    26,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    26,     6,
       7,     8,     9,    -1,    11,     6,     7,     8,     9,    26,
      11,     6,     7,     8,     9,    -1,    11,    -1,    -1,    26,
      -1,     6,     7,     8,     9,    26,    11,     6,     7,     8,
       9,    26,    11,     8,     9,     8,     9,    -1,    -1,    -1,
      -1,    26,    21,    -1,    -1,    24,    -1,    22,    -1,    22,
      -1,    26,    -1,    26,     6,     7,     8,     9,    -1,    11,
       6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,    21,
      -1,     6,     7,     8,     9,    21,    11,     6,     7,     8,
       9,    -1,    11,    -1,    -1,    -1,    21,    -1,     6,     7,
       8,     9,    21,    11,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    21,    -1,     6,     7,     8,     9,    21,
      11,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      21,    -1,     6,     7,     8,     9,    21,    11,     6,     7,
       8,     9,    -1,    11,    -1,    -1,    -1,    21,    -1,     6,
       7,     8,     9,    21,    11,     6,     7,     8,     9,    -1,
      11,    -1,    -1,    -1,    21,    -1,     6,     7,     8,     9,
      21,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    13,    30,    31,    32,    33,    34,    28,     3,
       0,    32,    21,    24,    13,    35,    36,    37,     3,    26,
      22,     1,    23,    38,    37,    39,     1,     3,     4,     5,
       6,    12,    13,    14,    15,    17,    18,    19,    20,    21,
      24,    25,    33,    38,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    10,
      24,     3,    52,    52,     3,     1,    24,    24,    46,     1,
      24,     1,    24,    46,    21,     8,     9,     6,    11,     7,
      46,    46,    56,    57,    26,    46,    46,    21,    21,     3,
      21,    27,    52,    55,    26,    48,    49,    51,    49,    52,
      26,    22,    26,    21,    26,    26,    46,    40,    47,    21,
      21,    16,    21,    40,    46,    26,    40,    23,    28,     3,
       4,     5,     6,    12,    14,    24,    47,    48,    49,    50,
      51,    52,    53,    54,     3,     4,     5,     6,    12,    14,
      24,    47,    48,    49,    50,    51,    52,    53,    54,    21,
       3,     4,     5,     6,    12,    14,    24,    53,    54,     1,
      13,    15,    17,    18,    19,    20,    21,    23,    33,    38,
      41,    42,    43,    44,    45,    46,    39,    10,    24,     3,
      52,    52,    46,     8,     9,     6,    11,     7,    10,    24,
       3,    52,    52,    46,     8,     9,     6,    11,     7,    24,
      52,    52,    46,    28,     3,     1,    24,    24,    46,     1,
      24,     1,    24,    39,    21,    25,    46,    56,    26,    48,
      49,    51,    49,    52,    46,    56,    26,    48,    49,    51,
      49,    52,    56,    26,    21,    26,    46,    46,    21,    21,
       3,    21,    55,    25,    26,    26,    26,    26,    21,    26,
      26,    40,    47,    21,    21,    16,    21,    40,    46,    26,
      40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    29,    30,    31,    31,    32,    32,    33,    33,    34,
      34,    35,    35,    36,    36,    37,    38,    38,    39,    39,
      40,    40,    40,    40,    40,    40,    40,    41,    41,    42,
      42,    42,    43,    44,    45,    45,    45,    45,    46,    46,
      47,    47,    48,    48,    49,    49,    50,    50,    51,    51,
      52,    52,    52,    52,    52,    52,    52,    53,    53,    54,
      55,    55,    56,    56,    57,    57
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     2,     6,
       1,     1,     0,     3,     1,     2,     3,     1,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     7,
       5,     3,     9,     3,     5,     5,     3,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     2,     2,     4,
       1,     1,     1,     0,     3,     1
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
          = yysize + yystrlen (yysymbol_name (yyarg[yyi]));
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
          yyp = yystpcpy (yyp, yysymbol_name (yyarg[yyi++]));
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
#line 90 "./src/cipl_syn.y"
                  {}
#line 1908 "cipl_syn.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 93 "./src/cipl_syn.y"
                              {}
#line 1914 "cipl_syn.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 94 "./src/cipl_syn.y"
                              {}
#line 1920 "cipl_syn.tab.c"
    break;

  case 5: /* declaration: variableDeclaration  */
#line 97 "./src/cipl_syn.y"
                      {}
#line 1926 "cipl_syn.tab.c"
    break;

  case 6: /* declaration: functionDeclaration  */
#line 98 "./src/cipl_syn.y"
                        {}
#line 1932 "cipl_syn.tab.c"
    break;

  case 7: /* variableDeclaration: TYPE ID SEMICOLON  */
#line 101 "./src/cipl_syn.y"
                    {
    newSymbol((yyvsp[-1].token).content, (yyvsp[-2].token).content, 0, scopeCounting, table);
  }
#line 1940 "cipl_syn.tab.c"
    break;

  case 8: /* variableDeclaration: error ';'  */
#line 104 "./src/cipl_syn.y"
              {yyerrok;}
#line 1946 "cipl_syn.tab.c"
    break;

  case 9: /* functionDeclaration: TYPE ID OPEN_PAREN params CLOSE_PAREN compoundStmt  */
#line 108 "./src/cipl_syn.y"
                                                      {
    newSymbol((yyvsp[-4].token).content,  (yyvsp[-5].token).content, 1, scopeCounting, table);
  }
#line 1954 "cipl_syn.tab.c"
    break;

  case 10: /* functionDeclaration: error  */
#line 111 "./src/cipl_syn.y"
          {yyerrok;}
#line 1960 "cipl_syn.tab.c"
    break;

  case 11: /* params: paramList  */
#line 114 "./src/cipl_syn.y"
            {}
#line 1966 "cipl_syn.tab.c"
    break;

  case 12: /* params: %empty  */
#line 115 "./src/cipl_syn.y"
            {}
#line 1972 "cipl_syn.tab.c"
    break;

  case 13: /* paramList: paramList COMMA param  */
#line 118 "./src/cipl_syn.y"
                        {}
#line 1978 "cipl_syn.tab.c"
    break;

  case 14: /* paramList: param  */
#line 119 "./src/cipl_syn.y"
          {}
#line 1984 "cipl_syn.tab.c"
    break;

  case 15: /* param: TYPE ID  */
#line 122 "./src/cipl_syn.y"
          {}
#line 1990 "cipl_syn.tab.c"
    break;

  case 16: /* compoundStmt: OPEN_CURLY statementList CLOSE_CURLY  */
#line 125 "./src/cipl_syn.y"
                                        {}
#line 1996 "cipl_syn.tab.c"
    break;

  case 17: /* compoundStmt: error  */
#line 126 "./src/cipl_syn.y"
          {yyerrok;}
#line 2002 "cipl_syn.tab.c"
    break;

  case 18: /* statementList: statementList statement  */
#line 129 "./src/cipl_syn.y"
                          {}
#line 2008 "cipl_syn.tab.c"
    break;

  case 19: /* statementList: %empty  */
#line 130 "./src/cipl_syn.y"
            {}
#line 2014 "cipl_syn.tab.c"
    break;

  case 20: /* statement: expressionStmt  */
#line 133 "./src/cipl_syn.y"
                          {}
#line 2020 "cipl_syn.tab.c"
    break;

  case 21: /* statement: compoundStmt  */
#line 134 "./src/cipl_syn.y"
                          {}
#line 2026 "cipl_syn.tab.c"
    break;

  case 22: /* statement: conditionalStmt  */
#line 135 "./src/cipl_syn.y"
                          {}
#line 2032 "cipl_syn.tab.c"
    break;

  case 23: /* statement: loopStmt  */
#line 136 "./src/cipl_syn.y"
                          {}
#line 2038 "cipl_syn.tab.c"
    break;

  case 24: /* statement: returnStmt  */
#line 137 "./src/cipl_syn.y"
                          {}
#line 2044 "cipl_syn.tab.c"
    break;

  case 25: /* statement: variableDeclaration  */
#line 138 "./src/cipl_syn.y"
                          {}
#line 2050 "cipl_syn.tab.c"
    break;

  case 26: /* statement: inOutStmt  */
#line 139 "./src/cipl_syn.y"
                          {}
#line 2056 "cipl_syn.tab.c"
    break;

  case 27: /* expressionStmt: expression SEMICOLON  */
#line 142 "./src/cipl_syn.y"
                          {}
#line 2062 "cipl_syn.tab.c"
    break;

  case 28: /* expressionStmt: SEMICOLON  */
#line 143 "./src/cipl_syn.y"
                          {}
#line 2068 "cipl_syn.tab.c"
    break;

  case 29: /* conditionalStmt: IF OPEN_PAREN expression CLOSE_PAREN statement ELSE statement  */
#line 146 "./src/cipl_syn.y"
                                                                {}
#line 2074 "cipl_syn.tab.c"
    break;

  case 30: /* conditionalStmt: IF OPEN_PAREN expression CLOSE_PAREN statement  */
#line 147 "./src/cipl_syn.y"
                                                                {}
#line 2080 "cipl_syn.tab.c"
    break;

  case 31: /* conditionalStmt: IF error CLOSE_PAREN  */
#line 148 "./src/cipl_syn.y"
                         {yyerrok;}
#line 2086 "cipl_syn.tab.c"
    break;

  case 32: /* loopStmt: FOR OPEN_PAREN expression SEMICOLON logicExpression SEMICOLON expression CLOSE_PAREN statement  */
#line 151 "./src/cipl_syn.y"
                                                                                                 {}
#line 2092 "cipl_syn.tab.c"
    break;

  case 33: /* returnStmt: RETURN expression SEMICOLON  */
#line 154 "./src/cipl_syn.y"
                              {}
#line 2098 "cipl_syn.tab.c"
    break;

  case 34: /* inOutStmt: INPUT OPEN_PAREN ID CLOSE_PAREN SEMICOLON  */
#line 157 "./src/cipl_syn.y"
                                            {}
#line 2104 "cipl_syn.tab.c"
    break;

  case 35: /* inOutStmt: OUTPUT OPEN_PAREN outputArgs CLOSE_PAREN SEMICOLON  */
#line 158 "./src/cipl_syn.y"
                                                        {}
#line 2110 "cipl_syn.tab.c"
    break;

  case 36: /* inOutStmt: INPUT error SEMICOLON  */
#line 159 "./src/cipl_syn.y"
                          {yyerrok;}
#line 2116 "cipl_syn.tab.c"
    break;

  case 37: /* inOutStmt: OUTPUT error SEMICOLON  */
#line 160 "./src/cipl_syn.y"
                           {yyerrok;}
#line 2122 "cipl_syn.tab.c"
    break;

  case 38: /* expression: ID OP_ASSIG expression  */
#line 163 "./src/cipl_syn.y"
                          {}
#line 2128 "cipl_syn.tab.c"
    break;

  case 39: /* expression: logicExpression  */
#line 164 "./src/cipl_syn.y"
                          {}
#line 2134 "cipl_syn.tab.c"
    break;

  case 40: /* logicExpression: logicExpression OP_LOGIC relatExpression  */
#line 167 "./src/cipl_syn.y"
                                            {}
#line 2140 "cipl_syn.tab.c"
    break;

  case 41: /* logicExpression: relatExpression  */
#line 168 "./src/cipl_syn.y"
                                            {}
#line 2146 "cipl_syn.tab.c"
    break;

  case 42: /* relatExpression: relatExpression OP_RELAT listExpression  */
#line 171 "./src/cipl_syn.y"
                                            {}
#line 2152 "cipl_syn.tab.c"
    break;

  case 43: /* relatExpression: listExpression  */
#line 172 "./src/cipl_syn.y"
                                            {}
#line 2158 "cipl_syn.tab.c"
    break;

  case 44: /* listExpression: addExpression OP_LIST listExpression  */
#line 175 "./src/cipl_syn.y"
                                            {}
#line 2164 "cipl_syn.tab.c"
    break;

  case 45: /* listExpression: addExpression  */
#line 176 "./src/cipl_syn.y"
                                            {}
#line 2170 "cipl_syn.tab.c"
    break;

  case 46: /* addExpression: addExpression OP_ADD mulExpression  */
#line 179 "./src/cipl_syn.y"
                                             {}
#line 2176 "cipl_syn.tab.c"
    break;

  case 47: /* addExpression: mulExpression  */
#line 180 "./src/cipl_syn.y"
                                            {}
#line 2182 "cipl_syn.tab.c"
    break;

  case 48: /* mulExpression: mulExpression OP_MUL factor  */
#line 183 "./src/cipl_syn.y"
                                            {}
#line 2188 "cipl_syn.tab.c"
    break;

  case 49: /* mulExpression: factor  */
#line 184 "./src/cipl_syn.y"
                                            {}
#line 2194 "cipl_syn.tab.c"
    break;

  case 50: /* factor: OPEN_PAREN expression CLOSE_PAREN  */
#line 187 "./src/cipl_syn.y"
                                            {}
#line 2200 "cipl_syn.tab.c"
    break;

  case 51: /* factor: unaryExpression  */
#line 188 "./src/cipl_syn.y"
                                            {}
#line 2206 "cipl_syn.tab.c"
    break;

  case 52: /* factor: call  */
#line 189 "./src/cipl_syn.y"
                                            {}
#line 2212 "cipl_syn.tab.c"
    break;

  case 53: /* factor: ID  */
#line 190 "./src/cipl_syn.y"
                                            {}
#line 2218 "cipl_syn.tab.c"
    break;

  case 54: /* factor: FLOAT  */
#line 191 "./src/cipl_syn.y"
                                            {}
#line 2224 "cipl_syn.tab.c"
    break;

  case 55: /* factor: INT  */
#line 192 "./src/cipl_syn.y"
                                            {}
#line 2230 "cipl_syn.tab.c"
    break;

  case 56: /* factor: NIL  */
#line 193 "./src/cipl_syn.y"
                                            {}
#line 2236 "cipl_syn.tab.c"
    break;

  case 57: /* unaryExpression: UN_OP factor  */
#line 196 "./src/cipl_syn.y"
                                            {}
#line 2242 "cipl_syn.tab.c"
    break;

  case 58: /* unaryExpression: OP_ADD factor  */
#line 197 "./src/cipl_syn.y"
                                          {}
#line 2248 "cipl_syn.tab.c"
    break;

  case 59: /* call: ID OPEN_PAREN args CLOSE_PAREN  */
#line 200 "./src/cipl_syn.y"
                                            {}
#line 2254 "cipl_syn.tab.c"
    break;

  case 60: /* outputArgs: factor  */
#line 203 "./src/cipl_syn.y"
                                            {}
#line 2260 "cipl_syn.tab.c"
    break;

  case 61: /* outputArgs: STRING  */
#line 204 "./src/cipl_syn.y"
                                            {}
#line 2266 "cipl_syn.tab.c"
    break;

  case 62: /* args: argList  */
#line 207 "./src/cipl_syn.y"
                                            {}
#line 2272 "cipl_syn.tab.c"
    break;

  case 63: /* args: %empty  */
#line 208 "./src/cipl_syn.y"
                                            {}
#line 2278 "cipl_syn.tab.c"
    break;

  case 64: /* argList: argList COMMA expression  */
#line 211 "./src/cipl_syn.y"
                                            {}
#line 2284 "cipl_syn.tab.c"
    break;

  case 65: /* argList: expression  */
#line 212 "./src/cipl_syn.y"
                                            {}
#line 2290 "cipl_syn.tab.c"
    break;


#line 2294 "cipl_syn.tab.c"

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
          goto yyexhaustedlab;
      }
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


#if 1
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 214 "./src/cipl_syn.y"


void yyerror (char const *message) {
  printf("%3d \t %4d \t " PRINT_RED "Syntactic Error: %s \n" PRINT_RESET, currentLine, currentColumn, message);
  totalErrors++;
}

int main (int argc, char *argv[]) {
if (argc > 1) {
    FILE *file = fopen(argv[1], "r");

    if (file) {
      yyin = file;

      printf("\nErrors detected:\n");
      printf("Line \t Column\t Error\n");
      table = initTable(scopeCounting);

      yyparse();
      if (totalErrors == 0) {
        printf(PRINT_CYAN "There's no errors.\n" PRINT_RESET);
      }
      printTable(table);
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
