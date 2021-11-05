/* A Bison parser, made by GNU Bison 3.8.1.  */

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
#define YYBISON 30801

/* Bison version string.  */
#define YYBISON_VERSION "3.8.1"

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
  #include "./lib/scope.h"
  #include "./lib/type.h"
  #include "./lib/gen.h"

  extern FILE *yyin;

  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *message);

  extern int currentLine;
  extern int currentColumn;
  extern int scopeCounting;
  extern int totalErrors;
  extern int semanticErrors;

  tableNode* table;
  treeNode* root;
  int lastFunctionType = -1;

#line 95 "cipl_syn.tab.c"

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
  YYSYMBOL_35_1 = 35,                      /* @1  */
  YYSYMBOL_params = 36,                    /* params  */
  YYSYMBOL_paramList = 37,                 /* paramList  */
  YYSYMBOL_param = 38,                     /* param  */
  YYSYMBOL_compoundStmt = 39,              /* compoundStmt  */
  YYSYMBOL_40_2 = 40,                      /* @2  */
  YYSYMBOL_statementList = 41,             /* statementList  */
  YYSYMBOL_statement = 42,                 /* statement  */
  YYSYMBOL_expressionStmt = 43,            /* expressionStmt  */
  YYSYMBOL_conditionalStmt = 44,           /* conditionalStmt  */
  YYSYMBOL_conditionalBody = 45,           /* conditionalBody  */
  YYSYMBOL_loopStmt = 46,                  /* loopStmt  */
  YYSYMBOL_returnStmt = 47,                /* returnStmt  */
  YYSYMBOL_inOutStmt = 48,                 /* inOutStmt  */
  YYSYMBOL_expression = 49,                /* expression  */
  YYSYMBOL_logicExpression = 50,           /* logicExpression  */
  YYSYMBOL_relatExpression = 51,           /* relatExpression  */
  YYSYMBOL_listExpression = 52,            /* listExpression  */
  YYSYMBOL_addExpression = 53,             /* addExpression  */
  YYSYMBOL_mulExpression = 54,             /* mulExpression  */
  YYSYMBOL_factor = 55,                    /* factor  */
  YYSYMBOL_unaryExpression = 56,           /* unaryExpression  */
  YYSYMBOL_call = 57,                      /* call  */
  YYSYMBOL_outputArgs = 58,                /* outputArgs  */
  YYSYMBOL_args = 59,                      /* args  */
  YYSYMBOL_argList = 60                    /* argList  */
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2584

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  265

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
static const yytype_int16 yyrline[] =
{
       0,    97,    97,   103,   108,   112,   113,   116,   123,   127,
     127,   139,   142,   143,   144,   147,   152,   155,   164,   164,
     174,   177,   182,   185,   186,   187,   188,   189,   190,   191,
     194,   195,   198,   206,   212,   215,   216,   217,   218,   219,
     220,   223,   233,   241,   250,   256,   257,   260,   268,   271,
     278,   281,   288,   291,   298,   301,   308,   311,   318,   321,
     328,   329,   330,   334,   337,   340,   345,   351,   359,   370,
     371,   376,   377,   380,   385
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
  "variableDeclaration", "functionDeclaration", "@1", "params",
  "paramList", "param", "compoundStmt", "@2", "statementList", "statement",
  "expressionStmt", "conditionalStmt", "conditionalBody", "loopStmt",
  "returnStmt", "inOutStmt", "expression", "logicExpression",
  "relatExpression", "listExpression", "addExpression", "mulExpression",
  "factor", "unaryExpression", "call", "outputArgs", "args", "argList", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-174)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-75)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      85,   -10,    19,    40,   131,   183,   202,   223,   268,   306,
     112,  -174,   381,   400,    18,     6,    -2,    66,    55,    80,
     116,   117,    10,    74,   424,  1388,   452,   274,  1413,   624,
     599,  2461,  2467,   228,   228,    92,  2478,    15,    73,   258,
      22,    24,  1438,   280,  1463,  1488,    91,  1513,  1538,  1563,
    1588,  1613,  1638,    96,    68,   455,   475,   359,  2484,  2495,
    2501,  2512,   258,    58,   610,  2518,  2529,    97,   115,   280,
     258,   124,   127,   170,   155,    87,   153,   519,  1663,   228,
     228,   228,   228,   228,   160,   380,   161,   382,  1688,   163,
     178,  1713,  1738,   180,  1763,   185,   187,   190,  2535,   530,
     551,  2546,   603,  2552,  2563,   383,  2186,   228,   198,   206,
     410,   663,   688,   713,   738,   763,   788,   813,   100,  1788,
    1813,  2210,   280,  1838,   213,  2138,  1863,  1388,  1888,   547,
     367,   647,   444,   444,  2373,   280,     1,    12,    49,   433,
    2389,  2395,  2401,  2411,  2229,  2235,  2241,   474,   474,  2262,
     280,     4,   302,   465,   104,  2268,  2274,  2295,  2301,  1913,
     838,    27,   204,   258,    28,    30,   863,  1388,   229,  1938,
    1963,  1988,  2013,  2038,  2063,  2088,  1413,   280,    58,   576,
    2417,  2423,   227,   444,   444,   444,   444,   444,   383,    58,
     267,  2307,  2328,   233,   474,   474,   474,   474,   474,   239,
     280,   258,   246,   259,   276,   266,    87,  1413,   888,   265,
     269,   279,  2433,    57,   138,  2439,   145,  2445,   459,   286,
    2334,   499,   541,  2340,   569,  2361,   913,   291,   281,   938,
     963,   299,   988,   300,   321,  2113,  2455,  2367,  2186,   228,
     326,   327,  1013,  1038,   119,  1063,  1088,  2186,   280,  1113,
     301,  2162,   317,   354,  1138,  1163,  1188,  1213,  1238,  1263,
    1288,  1313,  1338,   337,  1363
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -174,  -174,  -174,   373,     0,  -174,  -174,  -174,  -174,   348,
     -21,  -173,  -117,  -123,   -61,   -53,  -113,   -50,   -47,   -33,
     -26,   426,   392,   316,   340,   234,   -28,    60,   166,   184,
    -111,  -174
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    44,     7,    14,    18,    19,    20,
      45,    46,    28,    47,    48,    49,   114,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    97,
      86,    87
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    26,   126,   209,     6,    65,    66,    16,   123,   183,
     176,    24,   194,    71,     8,   141,    68,    76,     9,    17,
     -50,   184,    10,    72,   -14,    74,   -48,   -48,   199,   203,
     -48,   205,   -13,    25,   234,   156,    84,    85,   -50,    69,
      11,   141,    15,    89,    90,   112,    73,   141,    75,    96,
     207,   200,   204,   113,   206,   103,   115,   -52,   -52,   116,
     171,   144,   145,   146,   147,   -49,   184,   211,   172,    21,
     148,   173,   149,   117,   174,   -52,    79,   156,   219,   110,
     168,    22,   150,   -49,   -72,   111,     1,    17,   175,   -48,
     129,   130,   131,   132,   141,    67,   124,    70,     2,   133,
     170,   134,    23,   142,   180,   181,   -12,   141,    79,   182,
     196,   135,   -54,   -54,    95,   197,    77,    78,   159,   191,
     192,   122,   141,   157,   193,   243,   -54,    79,   256,   142,
     -54,    -2,     1,    13,   249,   142,    -9,   202,   -16,   -17,
     248,    88,   -16,   -17,     2,    91,   -51,   -51,    92,   141,
     156,   210,    85,   -53,   -53,   141,   141,   141,   141,   217,
     156,   156,   218,    85,   -51,   157,   156,   156,   156,   156,
     225,   -53,   141,    93,   227,   228,    94,   112,   141,    98,
      96,   -47,   142,    -4,    -4,   113,   112,   104,   115,   106,
     257,   116,   142,   142,   113,   142,    -4,   115,   258,   107,
     116,   259,    -5,    -5,   260,   117,   108,   157,   157,   143,
     142,   -70,   168,   -69,   117,    -5,   109,   111,   261,   119,
     141,   168,   250,    -6,    -6,   168,   111,   120,   201,   158,
     255,    64,    31,    32,    33,   143,    -6,   142,   157,   125,
      34,   143,    36,   142,   142,   142,   142,   142,   157,   157,
     208,   254,    43,   212,   157,   157,   157,   157,   157,   220,
     142,    30,    31,    32,    33,   226,   142,   229,   -11,   -11,
      34,   158,    36,   -62,   -62,   -62,   -62,   140,   -62,   231,
     230,   -11,    43,   129,   130,   131,   132,   232,   143,   -62,
     235,   189,   133,   -62,   134,   -47,   -15,   155,   143,   143,
     -15,   143,   239,   140,   135,   236,    -8,    -8,   142,   140,
     -50,   195,   237,   158,   158,   101,   143,   238,   -20,    -8,
     -20,   -20,   -20,   -20,   -50,   240,   241,   251,   -50,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   155,
     -20,   -20,   -20,   143,   158,   262,   242,   245,   246,   143,
     143,   143,   143,   143,   158,   158,   140,   263,   264,   138,
     158,   158,   158,   158,   158,    81,   143,   -54,   -54,   140,
      82,    27,   143,   -64,   -64,   -64,   -64,    12,   -64,   153,
     -54,    -3,    -3,   139,   140,   138,   144,   145,   146,   147,
     233,   138,     0,   -64,    -3,   148,   100,   149,   102,     0,
      -7,    -7,   -74,   154,   105,     0,   -74,   150,   -71,   139,
       0,   140,   155,    -7,   143,   139,     0,   140,   140,   215,
     140,   153,   155,   155,   -20,   -20,     0,     0,   155,   155,
     223,   155,   -73,     0,   140,   137,   -73,   -20,   138,   185,
     140,   -54,   -54,     0,   186,   154,     0,   179,   130,   131,
     132,   138,   -10,   -10,     0,   152,   133,     0,   134,   -54,
       0,   137,   139,   -50,    80,   -10,   138,   137,   135,   136,
       0,    99,     0,   -52,   -52,   139,   -50,   190,   145,   146,
     147,   -47,   140,   -52,   -52,   -47,   148,   -52,   149,   151,
     139,   -52,     0,   138,   153,   136,   -52,   152,   150,   138,
     214,   136,   216,     0,   153,   153,     0,   -49,   195,     0,
     153,   222,     0,   224,   137,     0,   138,   139,   154,   -19,
     -19,   -49,   138,   139,   139,   -49,   139,   137,   154,   154,
       0,   151,   -19,   118,   154,   154,     0,   154,   -49,    80,
     139,     0,   137,     0,     0,     0,   139,     0,   136,   -51,
     -51,   -49,     0,   -62,   -62,   -62,   -62,   177,   -62,   -51,
     -51,   136,     0,   -51,   138,     0,     0,   -51,     0,   137,
     152,   178,   -51,   -62,     0,   213,   136,   -53,   -53,     0,
     152,   152,   -62,   -62,   -62,   -62,   221,   -62,   139,     0,
       0,   -53,   137,     0,     0,   -53,     0,     0,   137,     0,
     178,     0,   -62,   136,   151,   -62,   -62,   -62,   -62,    62,
     -62,   -53,   -53,     0,   151,   151,   -62,   -62,   -62,   -62,
     -62,   -62,     0,    63,   -53,   -20,   136,   -20,   -20,   -20,
     -20,   -62,   136,     0,    63,     0,   -20,   -20,   -20,   -20,
     137,   -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,
       0,     0,   128,   -63,   -63,   -63,   -63,     0,   -63,     0,
       0,     0,     0,     0,   -36,   244,   -36,   -36,   -36,   -36,
       0,     0,     0,   -63,   136,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -35,
       0,   -35,   -35,   -35,   -35,     0,     0,     0,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,   -37,     0,   -37,   -37,   -37,   -37,
       0,     0,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -33,
       0,   -33,   -33,   -33,   -33,     0,     0,     0,     0,     0,
     -33,   -33,   -33,   -33,   121,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -38,     0,   -38,   -38,   -38,   -38,
       0,     0,     0,     0,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -39,
       0,   -39,   -39,   -39,   -39,     0,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   -39,   -39,   -40,     0,   -40,   -40,   -40,   -40,
       0,     0,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -20,
       0,   -20,   -20,   -20,   -20,     0,     0,     0,     0,     0,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
       0,   -20,   -20,   -20,   -31,     0,   -31,   -31,   -31,   -31,
       0,     0,     0,     0,     0,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -30,
       0,   -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
       0,   -30,   -30,   -30,   -34,     0,   -34,   -34,   -34,   -34,
       0,     0,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -42,
       0,   -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
       0,   -42,   -42,   -42,   -45,     0,   -45,   -45,   -45,   -45,
       0,     0,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -46,
       0,   -46,   -46,   -46,   -46,     0,     0,     0,     0,     0,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
       0,   -46,   -46,   -46,   -19,     0,   -19,   -19,   -19,   -19,
       0,     0,     0,     0,     0,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -33,
       0,   -33,   -33,   -33,   -33,     0,     0,     0,     0,     0,
     -33,   -33,   -33,   -33,   247,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -43,     0,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -44,
       0,   -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
       0,   -44,   -44,   -44,   -32,     0,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -28,
       0,   -28,   -28,   -28,   -28,     0,     0,     0,     0,     0,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -24,     0,   -24,   -24,   -24,   -24,
       0,     0,     0,     0,     0,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -41,
       0,   -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
       0,   -41,   -41,   -41,   -23,     0,   -23,   -23,   -23,   -23,
       0,     0,     0,     0,     0,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -25,
       0,   -25,   -25,   -25,   -25,     0,     0,     0,     0,     0,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
       0,   -25,   -25,   -25,   -26,     0,   -26,   -26,   -26,   -26,
       0,     0,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -27,
       0,   -27,   -27,   -27,   -27,     0,     0,     0,     0,     0,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,   -27,   -27,   -27,   -29,     0,   -29,   -29,   -29,   -29,
       0,     0,     0,     0,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,    -8,
       0,    -8,    -8,    -8,    -8,     0,     0,     0,     0,     0,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
       0,    -8,    -8,    -8,    -7,     0,    -7,    -7,    -7,    -7,
       0,     0,     0,     0,     0,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,   -22,
       0,   -22,   -22,   -22,   -22,     0,     0,     0,     0,     0,
     -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,
       0,   -22,   -22,   -22,    29,     0,    30,    31,    32,    33,
       0,     0,     0,     0,     0,    34,    35,    36,    37,     0,
      38,    39,    40,    41,    42,     0,   127,    43,   -18,   -31,
       0,   -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -28,     0,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,     0,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -24,
       0,   -24,   -24,   -24,   -24,     0,     0,     0,     0,     0,
     -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,
       0,   -24,   -24,   -24,   -21,     0,   -21,   -21,   -21,   -21,
       0,     0,     0,     0,     0,   -21,   -21,   -21,   -21,     0,
     -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -23,
       0,   -23,   -23,   -23,   -23,     0,     0,     0,     0,     0,
     -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,
       0,   -23,   -23,   -23,   -25,     0,   -25,   -25,   -25,   -25,
       0,     0,     0,     0,     0,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -26,
       0,   -26,   -26,   -26,   -26,     0,     0,     0,     0,     0,
     -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,   -27,     0,   -27,   -27,   -27,   -27,
       0,     0,     0,     0,     0,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -29,
       0,   -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,
     -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -30,     0,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,     0,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -34,
       0,   -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -42,     0,   -42,   -42,   -42,   -42,
       0,     0,     0,     0,     0,   -42,   -42,   -42,   -42,     0,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -45,
       0,   -45,   -45,   -45,   -45,     0,     0,     0,     0,     0,
     -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,
       0,   -45,   -45,   -45,   -46,     0,   -46,   -46,   -46,   -46,
       0,     0,     0,     0,     0,   -46,   -46,   -46,   -46,     0,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -43,
       0,   -43,   -43,   -43,   -43,     0,     0,     0,     0,     0,
     -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,
       0,   -43,   -43,   -43,   -44,     0,   -44,   -44,   -44,   -44,
       0,     0,     0,     0,     0,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -32,
       0,   -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,
     -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -41,     0,   -41,   -41,   -41,   -41,
       0,     0,     0,     0,     0,   -41,   -41,   -41,   -41,     0,
     -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,    -8,
       0,    -8,    -8,    -8,    -8,     0,     0,     0,     0,     0,
      -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,
       0,    -8,    -8,    -8,    -7,     0,    -7,    -7,    -7,    -7,
       0,     0,     0,     0,     0,    -7,    -7,    -7,    -7,     0,
      -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,   -20,
       0,   -20,   -20,   -20,   -20,     0,     0,     0,     0,     0,
     -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,
       0,   -20,   -20,   -20,   -36,     0,   -36,   -36,   -36,   -36,
       0,     0,     0,     0,     0,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -35,
       0,   -35,   -35,   -35,   -35,     0,     0,     0,     0,     0,
     -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,   -37,     0,   -37,   -37,   -37,   -37,
       0,     0,     0,     0,     0,   -37,   -37,   -37,   -37,     0,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -38,
       0,   -38,   -38,   -38,   -38,     0,     0,     0,     0,     0,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
       0,   -38,   -38,   -38,   -39,     0,   -39,   -39,   -39,   -39,
       0,     0,     0,     0,     0,   -39,   -39,   -39,   -39,     0,
     -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -40,
       0,   -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,
       0,   -40,   -40,   -40,   -19,     0,   -19,   -19,   -19,   -19,
       0,     0,     0,     0,     0,   -19,   -19,   -19,   -19,     0,
     -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,    29,
       0,    30,    31,    32,    33,     0,     0,     0,     0,     0,
      34,    35,    36,    37,     0,    38,    39,    40,    41,    42,
       0,   127,    43,   252,     0,    30,    31,    32,    33,     0,
       0,     0,     0,     0,    34,   253,    36,   161,     0,   162,
     163,   164,   165,   166,     0,   167,    43,   160,     0,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    34,     0,
      36,   161,     0,   162,   163,   164,   165,   166,     0,   167,
      43,   169,     0,    30,    31,    32,    33,     0,     0,     0,
       0,     0,    34,     0,    36,    37,     0,    38,    39,    40,
      41,    42,     0,   127,    43,   -62,   -62,   -62,   -62,   188,
     -62,   -64,   -64,   -64,   -64,     0,   -64,   -63,   -63,   -63,
     -63,   -62,   -63,   189,     0,   -62,     0,   -64,     0,     0,
       0,   -64,     0,   -63,     0,     0,     0,   -63,   -65,   -65,
     -65,   -65,     0,   -65,   -56,   198,   -56,   -56,     0,   -56,
     -58,   -58,   -58,   -58,   -65,   -58,     0,     0,   -65,     0,
     -56,     0,     0,     0,   -56,     0,   -58,     0,     0,     0,
     -58,   -60,   -60,   -60,   -60,     0,   -60,   -61,   -61,   -61,
     -61,     0,   -61,   -67,   -67,   -67,   -67,   -60,   -67,     0,
       0,   -60,     0,   -61,     0,     0,     0,   -61,     0,   -67,
       0,     0,     0,   -67,   -66,   -66,   -66,   -66,     0,   -66,
     -59,   -59,   -59,   -59,     0,   -59,   -55,   198,   -55,   -55,
     -66,   -55,     0,     0,   -66,     0,   -59,     0,     0,     0,
     -59,     0,   -55,     0,     0,     0,   -55,   -57,   -57,   -57,
     -57,     0,   -57,   -68,   -68,   -68,   -68,     0,   -68,   -65,
     -65,   -65,   -65,   -57,   -65,     0,     0,   -57,     0,   -68,
       0,     0,     0,   -68,     0,   -56,   187,   -56,   -56,   -65,
     -56,   -58,   -58,   -58,   -58,     0,   -58,   -60,   -60,   -60,
     -60,     0,   -60,     0,     0,   -56,     0,   -61,   -61,   -61,
     -61,   -58,   -61,   -67,   -67,   -67,   -67,   -60,   -67,   -66,
     -66,   -66,   -66,     0,   -66,     0,     0,   -61,     0,   -59,
     -59,   -59,   -59,   -67,   -59,   -55,   187,   -55,   -55,   -66,
     -55,   -57,   -57,   -57,   -57,     0,   -57,     0,     0,   -59,
       0,   -68,   -68,   -68,   -68,   -55,   -68,   -64,   -64,   -64,
     -64,   -57,   -64,   -63,   -63,   -63,   -63,     0,   -63,     0,
       0,   -68,   -64,     0,   -65,   -65,   -65,   -65,   -63,   -65,
     -56,    83,   -56,   -56,     0,   -56,     0,     0,     0,   -65,
       0,   -58,   -58,   -58,   -58,   -56,   -58,   -60,   -60,   -60,
     -60,     0,   -60,     0,     0,     0,   -58,     0,   -61,   -61,
     -61,   -61,   -60,   -61,   -67,   -67,   -67,   -67,     0,   -67,
       0,     0,     0,   -61,     0,   -66,   -66,   -66,   -66,   -67,
     -66,   -59,   -59,   -59,   -59,     0,   -59,     0,     0,     0,
     -66,     0,   -55,    83,   -55,   -55,   -59,   -55,   -57,   -57,
     -57,   -57,     0,   -57,     0,     0,     0,   -55,     0,   -68,
     -68,   -68,   -68,   -57,   -68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -68
};

static const yytype_int16 yycheck[] =
{
       0,    22,   125,   176,     4,    33,    34,     1,   121,     8,
     127,     1,     8,    39,    24,    43,     1,    43,    28,    13,
       8,     9,     3,     1,    26,     1,    22,    26,     1,     1,
      26,     1,    26,    23,   207,    63,    62,    63,    26,    24,
       0,    69,    24,    69,    70,   106,    24,    75,    24,    75,
     167,    24,    24,   106,    24,    83,   106,     8,     9,   106,
     121,     3,     4,     5,     6,     8,     9,   178,   121,     3,
      12,   121,    14,   106,   121,    26,     8,   105,   189,   105,
     106,    26,    24,    26,    26,   106,     1,    13,   121,    21,
       3,     4,     5,     6,   122,     3,   122,    24,    13,    12,
     121,    14,    22,    43,   132,   133,    26,   135,     8,   135,
       6,    24,     8,     9,    27,    11,    25,    21,    21,   147,
     148,    21,   150,    63,   150,   238,    22,     8,   251,    69,
      26,     0,     1,    21,   247,    75,    24,   163,    22,    22,
      21,    26,    26,    26,    13,    21,     8,     9,    21,   177,
     178,   177,   178,     8,     9,   183,   184,   185,   186,   187,
     188,   189,   188,   189,    26,   105,   194,   195,   196,   197,
     198,    26,   200,     3,   200,   201,    21,   238,   206,    26,
     206,    21,   122,     0,     1,   238,   247,    26,   238,    26,
     251,   238,   132,   133,   247,   135,    13,   247,   251,    21,
     247,   251,     0,     1,   251,   238,    26,   147,   148,    43,
     150,    26,   238,    26,   247,    13,    26,   238,   251,    21,
     248,   247,   248,     0,     1,   251,   247,    21,    24,    63,
     251,     3,     4,     5,     6,    69,    13,   177,   178,    26,
      12,    75,    14,   183,   184,   185,   186,   187,   188,   189,
      21,   251,    24,    26,   194,   195,   196,   197,   198,    26,
     200,     3,     4,     5,     6,    26,   206,    21,     0,     1,
      12,   105,    14,     6,     7,     8,     9,    43,    11,     3,
      21,    13,    24,     3,     4,     5,     6,    21,   122,    22,
      25,    24,    12,    26,    14,    26,    22,    63,   132,   133,
      26,   135,    21,    69,    24,    26,     0,     1,   248,    75,
       8,     9,    26,   147,   148,    81,   150,    26,     1,    13,
       3,     4,     5,     6,    22,    26,    26,    26,    26,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   105,
      23,    24,    25,   177,   178,    28,    25,    21,    21,   183,
     184,   185,   186,   187,   188,   189,   122,     3,    21,    43,
     194,   195,   196,   197,   198,     6,   200,     8,     9,   135,
      11,    23,   206,     6,     7,     8,     9,     4,    11,    63,
      21,     0,     1,    43,   150,    69,     3,     4,     5,     6,
     206,    75,    -1,    26,    13,    12,    80,    14,    82,    -1,
       0,     1,    22,    63,    22,    -1,    26,    24,    26,    69,
      -1,   177,   178,    13,   248,    75,    -1,   183,   184,   185,
     186,   105,   188,   189,     0,     1,    -1,    -1,   194,   195,
     196,   197,    22,    -1,   200,    43,    26,    13,   122,     6,
     206,     8,     9,    -1,    11,   105,    -1,     3,     4,     5,
       6,   135,     0,     1,    -1,    63,    12,    -1,    14,    26,
      -1,    69,   122,     8,     9,    13,   150,    75,    24,    43,
      -1,    79,    -1,     8,     9,   135,    21,     3,     4,     5,
       6,    22,   248,     8,     9,    26,    12,    22,    14,    63,
     150,    26,    -1,   177,   178,    69,    21,   105,    24,   183,
     184,    75,   186,    -1,   188,   189,    -1,     8,     9,    -1,
     194,   195,    -1,   197,   122,    -1,   200,   177,   178,     0,
       1,    22,   206,   183,   184,    26,   186,   135,   188,   189,
      -1,   105,    13,   107,   194,   195,    -1,   197,     8,     9,
     200,    -1,   150,    -1,    -1,    -1,   206,    -1,   122,     8,
       9,    21,    -1,     6,     7,     8,     9,    10,    11,     8,
       9,   135,    -1,    22,   248,    -1,    -1,    26,    -1,   177,
     178,    24,    21,    26,    -1,   183,   150,     8,     9,    -1,
     188,   189,     6,     7,     8,     9,   194,    11,   248,    -1,
      -1,    22,   200,    -1,    -1,    26,    -1,    -1,   206,    -1,
      24,    -1,    26,   177,   178,     6,     7,     8,     9,    10,
      11,     8,     9,    -1,   188,   189,     6,     7,     8,     9,
      21,    11,    -1,    24,    21,     1,   200,     3,     4,     5,
       6,    21,   206,    -1,    24,    -1,    12,    13,    14,    15,
     248,    17,    18,    19,    20,    21,    -1,    23,    24,    25,
      -1,    -1,    28,     6,     7,     8,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,     1,   239,     3,     4,     5,     6,
      -1,    -1,    -1,    26,   248,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      -1,    23,    24,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,     6,     7,     8,     9,    10,
      11,     6,     7,     8,     9,    -1,    11,     6,     7,     8,
       9,    22,    11,    24,    -1,    26,    -1,    22,    -1,    -1,
      -1,    26,    -1,    22,    -1,    -1,    -1,    26,     6,     7,
       8,     9,    -1,    11,     6,     7,     8,     9,    -1,    11,
       6,     7,     8,     9,    22,    11,    -1,    -1,    26,    -1,
      22,    -1,    -1,    -1,    26,    -1,    22,    -1,    -1,    -1,
      26,     6,     7,     8,     9,    -1,    11,     6,     7,     8,
       9,    -1,    11,     6,     7,     8,     9,    22,    11,    -1,
      -1,    26,    -1,    22,    -1,    -1,    -1,    26,    -1,    22,
      -1,    -1,    -1,    26,     6,     7,     8,     9,    -1,    11,
       6,     7,     8,     9,    -1,    11,     6,     7,     8,     9,
      22,    11,    -1,    -1,    26,    -1,    22,    -1,    -1,    -1,
      26,    -1,    22,    -1,    -1,    -1,    26,     6,     7,     8,
       9,    -1,    11,     6,     7,     8,     9,    -1,    11,     6,
       7,     8,     9,    22,    11,    -1,    -1,    26,    -1,    22,
      -1,    -1,    -1,    26,    -1,     6,     7,     8,     9,    26,
      11,     6,     7,     8,     9,    -1,    11,     6,     7,     8,
       9,    -1,    11,    -1,    -1,    26,    -1,     6,     7,     8,
       9,    26,    11,     6,     7,     8,     9,    26,    11,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    26,    -1,     6,
       7,     8,     9,    26,    11,     6,     7,     8,     9,    26,
      11,     6,     7,     8,     9,    -1,    11,    -1,    -1,    26,
      -1,     6,     7,     8,     9,    26,    11,     6,     7,     8,
       9,    26,    11,     6,     7,     8,     9,    -1,    11,    -1,
      -1,    26,    21,    -1,     6,     7,     8,     9,    21,    11,
       6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,    21,
      -1,     6,     7,     8,     9,    21,    11,     6,     7,     8,
       9,    -1,    11,    -1,    -1,    -1,    21,    -1,     6,     7,
       8,     9,    21,    11,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    21,    -1,     6,     7,     8,     9,    21,
      11,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      21,    -1,     6,     7,     8,     9,    21,    11,     6,     7,
       8,     9,    -1,    11,    -1,    -1,    -1,    21,    -1,     6,
       7,     8,     9,    21,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    13,    30,    31,    32,    33,    34,    24,    28,
       3,     0,    32,    21,    35,    24,     1,    13,    36,    37,
      38,     3,    26,    22,     1,    23,    39,    38,    41,     1,
       3,     4,     5,     6,    12,    13,    14,    15,    17,    18,
      19,    20,    21,    24,    33,    39,    40,    42,    43,    44,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    10,    24,     3,    55,    55,     3,     1,    24,
      24,    49,     1,    24,     1,    24,    49,    25,    21,     8,
       9,     6,    11,     7,    49,    49,    59,    60,    26,    49,
      49,    21,    21,     3,    21,    27,    49,    58,    26,    51,
      52,    54,    52,    55,    26,    22,    26,    21,    26,    26,
      49,    39,    43,    44,    45,    46,    47,    48,    50,    21,
      21,    16,    21,    45,    49,    26,    42,    23,    28,     3,
       4,     5,     6,    12,    14,    24,    50,    51,    52,    53,
      54,    55,    56,    57,     3,     4,     5,     6,    12,    14,
      24,    50,    51,    52,    53,    54,    55,    56,    57,    21,
       1,    15,    17,    18,    19,    20,    21,    23,    49,     1,
      39,    43,    44,    46,    47,    48,    41,    10,    24,     3,
      55,    55,    49,     8,     9,     6,    11,     7,    10,    24,
       3,    55,    55,    49,     8,     9,     6,    11,     7,     1,
      24,    24,    49,     1,    24,     1,    24,    41,    21,    40,
      49,    59,    26,    51,    52,    54,    52,    55,    49,    59,
      26,    51,    52,    54,    52,    55,    26,    49,    49,    21,
      21,     3,    21,    58,    40,    25,    26,    26,    26,    21,
      26,    26,    25,    45,    50,    21,    21,    16,    21,    45,
      49,    26,     1,    13,    33,    39,    42,    43,    44,    46,
      47,    48,    28,     3,    21
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    29,    30,    31,    31,    32,    32,    33,    33,    35,
      34,    34,    36,    36,    36,    37,    37,    38,    40,    39,
      39,    41,    41,    42,    42,    42,    42,    42,    42,    42,
      43,    43,    44,    44,    44,    45,    45,    45,    45,    45,
      45,    46,    47,    48,    48,    48,    48,    49,    49,    50,
      50,    51,    51,    52,    52,    53,    53,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    56,    56,    57,    58,
      58,    59,    59,    60,    60
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     2,     0,
       7,     2,     1,     0,     1,     3,     1,     2,     0,     4,
       1,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     7,     5,     3,     1,     1,     1,     1,     1,
       1,     9,     3,     5,     5,     3,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     2,     2,     4,     1,
       1,     1,     0,     3,     1
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
  case 2: /* program: declarationList  */
#line 97 "./src/cipl_syn.y"
                  {
    (yyval.node) = (yyvsp[0].node);
    root = (yyval.node);
  }
#line 1982 "cipl_syn.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 103 "./src/cipl_syn.y"
                              {
    (yyval.node) = createNode("invisible node");
    (yyval.node)->children[0] = (yyvsp[-1].node);
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 1992 "cipl_syn.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 108 "./src/cipl_syn.y"
                { (yyval.node) = (yyvsp[0].node); 
  }
#line 1999 "cipl_syn.tab.c"
    break;

  case 5: /* declaration: variableDeclaration  */
#line 112 "./src/cipl_syn.y"
                      { (yyval.node) = (yyvsp[0].node); }
#line 2005 "cipl_syn.tab.c"
    break;

  case 6: /* declaration: functionDeclaration  */
#line 113 "./src/cipl_syn.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 2011 "cipl_syn.tab.c"
    break;

  case 7: /* variableDeclaration: TYPE ID SEMICOLON  */
#line 116 "./src/cipl_syn.y"
                    {
    newSymbol((yyvsp[-1].token).content, (yyvsp[-2].token).content, 0, currentScope->id, table);
    (yyval.node) = createNode("variable declaration");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token), -1);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), getSymbolType(table, (yyvsp[-1].token).content, currentScope));
    (yyval.node)->children[1]->value.scopeNum = currentScope->id;
  }
#line 2023 "cipl_syn.tab.c"
    break;

  case 8: /* variableDeclaration: error ';'  */
#line 123 "./src/cipl_syn.y"
              {yyerrok;}
#line 2029 "cipl_syn.tab.c"
    break;

  case 9: /* @1: %empty  */
#line 127 "./src/cipl_syn.y"
                {
    (yyval.node) = createNode("function declaration");
    (yyval.node)->children[0] = addLeaf((yyvsp[-1].token), -1);
    lastFunctionType = stringToType((yyvsp[-1].token).content);
    newSymbol((yyvsp[0].token).content,  (yyvsp[-1].token).content, 1, currentScope->id, table);
    (yyval.node)->children[1] = addLeaf((yyvsp[0].token), getSymbolType(table, (yyvsp[0].token).content, currentScope));
    (yyval.node)->children[1]->value.scopeNum = currentScope->id;
  }
#line 2042 "cipl_syn.tab.c"
    break;

  case 10: /* functionDeclaration: TYPE ID @1 OPEN_PAREN params CLOSE_PAREN compoundStmt  */
#line 134 "./src/cipl_syn.y"
                                                {
    (yyval.node) = (yyvsp[-4].node);
    (yyval.node)->children[2] = (yyvsp[-2].node);
    (yyval.node)->children[3] = (yyvsp[0].node);
  }
#line 2052 "cipl_syn.tab.c"
    break;

  case 11: /* functionDeclaration: error OPEN_PAREN  */
#line 139 "./src/cipl_syn.y"
                     { yyerrok; }
#line 2058 "cipl_syn.tab.c"
    break;

  case 12: /* params: paramList  */
#line 142 "./src/cipl_syn.y"
            { (yyval.node) = (yyvsp[0].node); }
#line 2064 "cipl_syn.tab.c"
    break;

  case 13: /* params: %empty  */
#line 143 "./src/cipl_syn.y"
            { (yyval.node) = NULL; }
#line 2070 "cipl_syn.tab.c"
    break;

  case 14: /* params: error  */
#line 144 "./src/cipl_syn.y"
          { yyerrok; }
#line 2076 "cipl_syn.tab.c"
    break;

  case 15: /* paramList: paramList COMMA param  */
#line 147 "./src/cipl_syn.y"
                        {
    (yyval.node) = createNode("invisible node");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 2086 "cipl_syn.tab.c"
    break;

  case 16: /* paramList: param  */
#line 152 "./src/cipl_syn.y"
          { (yyval.node) = (yyvsp[0].node); }
#line 2092 "cipl_syn.tab.c"
    break;

  case 17: /* param: TYPE ID  */
#line 155 "./src/cipl_syn.y"
          {
    newSymbol((yyvsp[0].token).content,  (yyvsp[-1].token).content, 2, scopeCounting+1, table);
    (yyval.node) = createNode("param");
    (yyval.node)->children[0] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[1] = addLeaf((yyvsp[0].token), stringToType((yyvsp[-1].token).content));
    (yyval.node)->children[1]->value.scopeNum = currentScope->id+1;
  }
#line 2104 "cipl_syn.tab.c"
    break;

  case 18: /* @2: %empty  */
#line 164 "./src/cipl_syn.y"
                                 {
    (yyval.node) = createNode("invisible node");
    (yyval.node)->children[0] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[1] = (yyvsp[0].node);    
  }
#line 2114 "cipl_syn.tab.c"
    break;

  case 19: /* compoundStmt: OPEN_CURLY statementList @2 CLOSE_CURLY  */
#line 168 "./src/cipl_syn.y"
                { 
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->children[2] = addLeaf((yyvsp[0].token), -1);
    // Return scope
    currentScope = currentScope->parent;
  }
#line 2125 "cipl_syn.tab.c"
    break;

  case 20: /* compoundStmt: error  */
#line 174 "./src/cipl_syn.y"
          {yyerrok;}
#line 2131 "cipl_syn.tab.c"
    break;

  case 21: /* statementList: statementList statement  */
#line 177 "./src/cipl_syn.y"
                          {
    (yyval.node) = createNode("invisible node");
    (yyval.node)->children[0] = (yyvsp[-1].node);
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 2141 "cipl_syn.tab.c"
    break;

  case 22: /* statementList: %empty  */
#line 182 "./src/cipl_syn.y"
            { (yyval.node) = NULL; }
#line 2147 "cipl_syn.tab.c"
    break;

  case 23: /* statement: expressionStmt  */
#line 185 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2153 "cipl_syn.tab.c"
    break;

  case 24: /* statement: compoundStmt  */
#line 186 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2159 "cipl_syn.tab.c"
    break;

  case 25: /* statement: conditionalStmt  */
#line 187 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2165 "cipl_syn.tab.c"
    break;

  case 26: /* statement: loopStmt  */
#line 188 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2171 "cipl_syn.tab.c"
    break;

  case 27: /* statement: returnStmt  */
#line 189 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2177 "cipl_syn.tab.c"
    break;

  case 28: /* statement: variableDeclaration  */
#line 190 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2183 "cipl_syn.tab.c"
    break;

  case 29: /* statement: inOutStmt  */
#line 191 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2189 "cipl_syn.tab.c"
    break;

  case 30: /* expressionStmt: expression SEMICOLON  */
#line 194 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[-1].node); }
#line 2195 "cipl_syn.tab.c"
    break;

  case 31: /* expressionStmt: SEMICOLON  */
#line 195 "./src/cipl_syn.y"
                          { (yyval.node) = NULL; }
#line 2201 "cipl_syn.tab.c"
    break;

  case 32: /* conditionalStmt: IF OPEN_PAREN expression CLOSE_PAREN conditionalBody ELSE conditionalBody  */
#line 198 "./src/cipl_syn.y"
                                                                            {
    (yyval.node) = createNode("if else statment");
    (yyval.node)->children[0] = addLeaf((yyvsp[-6].token), -1);
    (yyval.node)->children[1] = (yyvsp[-4].node);
    (yyval.node)->children[2] = (yyvsp[-2].node);
    (yyval.node)->children[3] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[4] = (yyvsp[0].node);
  }
#line 2214 "cipl_syn.tab.c"
    break;

  case 33: /* conditionalStmt: IF OPEN_PAREN expression CLOSE_PAREN conditionalBody  */
#line 206 "./src/cipl_syn.y"
                                                         {
    (yyval.node) = createNode("if statment");
    (yyval.node)->children[0] = addLeaf((yyvsp[-4].token), -1);
    (yyval.node)->children[1] = (yyvsp[-2].node);
    (yyval.node)->children[2] = (yyvsp[0].node);
  }
#line 2225 "cipl_syn.tab.c"
    break;

  case 34: /* conditionalStmt: IF error CLOSE_PAREN  */
#line 212 "./src/cipl_syn.y"
                         {yyerrok;}
#line 2231 "cipl_syn.tab.c"
    break;

  case 35: /* conditionalBody: expressionStmt  */
#line 215 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2237 "cipl_syn.tab.c"
    break;

  case 36: /* conditionalBody: compoundStmt  */
#line 216 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2243 "cipl_syn.tab.c"
    break;

  case 37: /* conditionalBody: conditionalStmt  */
#line 217 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2249 "cipl_syn.tab.c"
    break;

  case 38: /* conditionalBody: loopStmt  */
#line 218 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2255 "cipl_syn.tab.c"
    break;

  case 39: /* conditionalBody: returnStmt  */
#line 219 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2261 "cipl_syn.tab.c"
    break;

  case 40: /* conditionalBody: inOutStmt  */
#line 220 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2267 "cipl_syn.tab.c"
    break;

  case 41: /* loopStmt: FOR OPEN_PAREN expression SEMICOLON logicExpression SEMICOLON expression CLOSE_PAREN statement  */
#line 223 "./src/cipl_syn.y"
                                                                                                 {
    (yyval.node) = createNode("for statment");
    (yyval.node)->children[0] = addLeaf((yyvsp[-8].token), -1);
    (yyval.node)->children[1] = (yyvsp[-6].node);
    (yyval.node)->children[2] = (yyvsp[-4].node);
    (yyval.node)->children[3] = (yyvsp[-2].node);
    (yyval.node)->children[4] = (yyvsp[0].node);
  }
#line 2280 "cipl_syn.tab.c"
    break;

  case 42: /* returnStmt: RETURN expression SEMICOLON  */
#line 233 "./src/cipl_syn.y"
                              {
    (yyval.node) = createNode("return statment");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token), -1);
    (yyval.node)->children[1] = (yyvsp[-1].node);
    checkReturn((yyvsp[-1].node), lastFunctionType);
  }
#line 2291 "cipl_syn.tab.c"
    break;

  case 43: /* inOutStmt: INPUT OPEN_PAREN ID CLOSE_PAREN SEMICOLON  */
#line 241 "./src/cipl_syn.y"
                                            {
    (yyval.node) = createNode("input");
    (yyval.node)->children[0] = addLeaf((yyvsp[-4].token), -1);
    (yyval.node)->children[1] = addLeaf((yyvsp[-2].token), getSymbolType(table, (yyvsp[-2].token).content, currentScope));

    (yyval.node)->children[1]->value.scopeNum = getSymbolScope(table, (yyvsp[-2].token).content, currentScope);

    checkIOArgs((yyval.node));
  }
#line 2305 "cipl_syn.tab.c"
    break;

  case 44: /* inOutStmt: OUTPUT OPEN_PAREN outputArgs CLOSE_PAREN SEMICOLON  */
#line 250 "./src/cipl_syn.y"
                                                        {
    (yyval.node) = createNode("output");
    (yyval.node)->children[0] = addLeaf((yyvsp[-4].token), -1);
    (yyval.node)->children[1] = (yyvsp[-2].node);
    checkIOArgs((yyval.node));
  }
#line 2316 "cipl_syn.tab.c"
    break;

  case 45: /* inOutStmt: INPUT error SEMICOLON  */
#line 256 "./src/cipl_syn.y"
                          {yyerrok;}
#line 2322 "cipl_syn.tab.c"
    break;

  case 46: /* inOutStmt: OUTPUT error SEMICOLON  */
#line 257 "./src/cipl_syn.y"
                           {yyerrok;}
#line 2328 "cipl_syn.tab.c"
    break;

  case 47: /* expression: ID OP_ASSIG expression  */
#line 260 "./src/cipl_syn.y"
                          {
    (yyval.node) = createNode("assign expression");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token), getSymbolType(table, (yyvsp[-2].token).content, currentScope));
    (yyval.node)->children[0]->value.scopeNum = getSymbolScope(table, (yyvsp[-2].token).content, currentScope);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveType((yyvsp[-1].token), (yyval.node)->children[0], (yyvsp[0].node));
  }
#line 2341 "cipl_syn.tab.c"
    break;

  case 48: /* expression: logicExpression  */
#line 268 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2347 "cipl_syn.tab.c"
    break;

  case 49: /* logicExpression: logicExpression OP_LOGIC relatExpression  */
#line 271 "./src/cipl_syn.y"
                                            {
    (yyval.node) = createNode("logic expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = 0; // always integer
  }
#line 2359 "cipl_syn.tab.c"
    break;

  case 50: /* logicExpression: relatExpression  */
#line 278 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2365 "cipl_syn.tab.c"
    break;

  case 51: /* relatExpression: relatExpression OP_RELAT listExpression  */
#line 281 "./src/cipl_syn.y"
                                            {
    (yyval.node) = createNode("relational expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveType((yyvsp[-1].token), (yyvsp[-2].node), (yyvsp[0].node));
  }
#line 2377 "cipl_syn.tab.c"
    break;

  case 52: /* relatExpression: listExpression  */
#line 288 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2383 "cipl_syn.tab.c"
    break;

  case 53: /* listExpression: addExpression OP_LIST listExpression  */
#line 291 "./src/cipl_syn.y"
                                            {
    (yyval.node) = createNode("list expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveType((yyvsp[-1].token), (yyvsp[-2].node), (yyvsp[0].node));
  }
#line 2395 "cipl_syn.tab.c"
    break;

  case 54: /* listExpression: addExpression  */
#line 298 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2401 "cipl_syn.tab.c"
    break;

  case 55: /* addExpression: addExpression OP_ADD mulExpression  */
#line 301 "./src/cipl_syn.y"
                                     {
    (yyval.node) = createNode("additive expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveType((yyvsp[-1].token), (yyvsp[-2].node), (yyvsp[0].node));
  }
#line 2413 "cipl_syn.tab.c"
    break;

  case 56: /* addExpression: mulExpression  */
#line 308 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2419 "cipl_syn.tab.c"
    break;

  case 57: /* mulExpression: mulExpression OP_MUL factor  */
#line 311 "./src/cipl_syn.y"
                              {
    (yyval.node) = createNode("multiplicative expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveType((yyvsp[-1].token), (yyvsp[-2].node), (yyvsp[0].node));
  }
#line 2431 "cipl_syn.tab.c"
    break;

  case 58: /* mulExpression: factor  */
#line 318 "./src/cipl_syn.y"
           { (yyval.node) = (yyvsp[0].node); }
#line 2437 "cipl_syn.tab.c"
    break;

  case 59: /* factor: OPEN_PAREN expression CLOSE_PAREN  */
#line 321 "./src/cipl_syn.y"
                                    {
    (yyval.node) = createNode("parenthesis expression");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token), -1);
    (yyval.node)->children[1] = (yyvsp[-1].node);
    (yyval.node)->children[2] = addLeaf((yyvsp[0].token), -1);
    (yyval.node)->nodeType = (yyvsp[-1].node)->nodeType;
  }
#line 2449 "cipl_syn.tab.c"
    break;

  case 60: /* factor: unaryExpression  */
#line 328 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2455 "cipl_syn.tab.c"
    break;

  case 61: /* factor: call  */
#line 329 "./src/cipl_syn.y"
         { (yyval.node) = (yyvsp[0].node); }
#line 2461 "cipl_syn.tab.c"
    break;

  case 62: /* factor: ID  */
#line 330 "./src/cipl_syn.y"
       {
    (yyval.node) = addLeaf((yyvsp[0].token), getSymbolType(table, (yyvsp[0].token).content, currentScope));
    (yyval.node)->value.scopeNum = getSymbolScope(table, (yyvsp[0].token).content, currentScope);
  }
#line 2470 "cipl_syn.tab.c"
    break;

  case 63: /* factor: FLOAT  */
#line 334 "./src/cipl_syn.y"
          {
    (yyval.node) = addLeaf((yyvsp[0].token), 1);
  }
#line 2478 "cipl_syn.tab.c"
    break;

  case 64: /* factor: INT  */
#line 337 "./src/cipl_syn.y"
        {
    (yyval.node) = addLeaf((yyvsp[0].token), 0);
  }
#line 2486 "cipl_syn.tab.c"
    break;

  case 65: /* factor: NIL  */
#line 340 "./src/cipl_syn.y"
        {
    (yyval.node) = addLeaf((yyvsp[0].token), 4);
  }
#line 2494 "cipl_syn.tab.c"
    break;

  case 66: /* unaryExpression: UN_OP factor  */
#line 345 "./src/cipl_syn.y"
               {
    (yyval.node) = createNode("unary expression");
    (yyval.node)->children[0] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[1] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveUnaryType((yyvsp[-1].token), (yyvsp[0].node));
  }
#line 2505 "cipl_syn.tab.c"
    break;

  case 67: /* unaryExpression: OP_ADD factor  */
#line 351 "./src/cipl_syn.y"
                  {
    (yyval.node) = createNode("signed expression");
    (yyval.node)->children[0] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[1] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveUnaryType((yyvsp[-1].token), (yyvsp[0].node));
  }
#line 2516 "cipl_syn.tab.c"
    break;

  case 68: /* call: ID OPEN_PAREN args CLOSE_PAREN  */
#line 359 "./src/cipl_syn.y"
                                 {
    (yyval.node) = createNode("function call");
    int type = getSymbolType(table, (yyvsp[-3].token).content, currentScope);
    (yyval.node)->children[0] = addLeaf((yyvsp[-3].token), type);
    (yyval.node)->children[0]->value.scopeNum = getSymbolScope(table, (yyvsp[-3].token).content, currentScope);
    (yyval.node)->children[1] = (yyvsp[-1].node);
    (yyval.node)->nodeType = type;
    checkParams((yyvsp[-3].token).content, (yyvsp[-1].node), table);
  }
#line 2530 "cipl_syn.tab.c"
    break;

  case 69: /* outputArgs: expression  */
#line 370 "./src/cipl_syn.y"
             { (yyval.node) = (yyvsp[0].node); }
#line 2536 "cipl_syn.tab.c"
    break;

  case 70: /* outputArgs: STRING  */
#line 371 "./src/cipl_syn.y"
           {
    (yyval.node) = addLeaf((yyvsp[0].token), 5);
  }
#line 2544 "cipl_syn.tab.c"
    break;

  case 71: /* args: argList  */
#line 376 "./src/cipl_syn.y"
          { (yyval.node) = (yyvsp[0].node); }
#line 2550 "cipl_syn.tab.c"
    break;

  case 72: /* args: %empty  */
#line 377 "./src/cipl_syn.y"
            { (yyval.node) = NULL; }
#line 2556 "cipl_syn.tab.c"
    break;

  case 73: /* argList: argList COMMA expression  */
#line 380 "./src/cipl_syn.y"
                           {
    (yyval.node) = createNode("arguments list");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 2566 "cipl_syn.tab.c"
    break;

  case 74: /* argList: expression  */
#line 385 "./src/cipl_syn.y"
               { (yyval.node) = (yyvsp[0].node); }
#line 2572 "cipl_syn.tab.c"
    break;


#line 2576 "cipl_syn.tab.c"

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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 387 "./src/cipl_syn.y"


void yyerror (char const *message) {
  printf("%3d \t %4d \t " PRINT_RED "Syntactic Error: %s \n" PRINT_RESET, currentLine, currentColumn, message);
  totalErrors++;
}

int main (int argc, char *argv[]) {

  if (argc > 1) {
    FILE *file = fopen(argv[1], "r");

    if (file) {
      yyin = file;

      // Create table
      table = initTable(scopeCounting);
      // Create global scope
      currentScope = newScope(scopeCounting, NULL, 0);
      scopeNode* global = currentScope;

      printf("\nErrors detected:\n");
      printf("Line \t Column\t Error\n");

      yyparse();
      mainWasDeclared(table);
      if (totalErrors == 0 && semanticErrors == 0) {
        printf(PRINT_CYAN "There's no errors.\n" PRINT_RESET);
      }
      
      if (totalErrors == 0) {

        printf("\nAbstract Syntax Tree:\n");
        printTree(root, 1);
        genCode(createFile(argv[1]), table, root);
        freeTree(root);
      } 

      printTable(table);
      freeTable(table);

      printf("\nScope Hierarchy:\n");
      printScope(global);
      freeScope(global);


      yylex_destroy();
      fclose(file);
    } else {
      printf("Invalid filename and/or path.\n");
    }
  } else {
    printf("There isn't input files.\n");
  }


  return 0;
}
