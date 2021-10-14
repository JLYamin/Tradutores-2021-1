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
  #include "./lib/scope.h"
  #include "./lib/type.h"

  extern FILE *yyin;

  extern int yylex();
  extern int yylex_destroy();
  void yyerror (char const *message);

  extern int currentLine;
  extern int currentColumn;
  extern int scopeCounting;
  extern int totalErrors;

  tableNode* table;
  treeNode* root;

#line 92 "cipl_syn.tab.c"

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
  YYSYMBOL_39_1 = 39,                      /* @1  */
  YYSYMBOL_statementList = 40,             /* statementList  */
  YYSYMBOL_statement = 41,                 /* statement  */
  YYSYMBOL_expressionStmt = 42,            /* expressionStmt  */
  YYSYMBOL_conditionalStmt = 43,           /* conditionalStmt  */
  YYSYMBOL_conditionalBody = 44,           /* conditionalBody  */
  YYSYMBOL_loopStmt = 45,                  /* loopStmt  */
  YYSYMBOL_returnStmt = 46,                /* returnStmt  */
  YYSYMBOL_inOutStmt = 47,                 /* inOutStmt  */
  YYSYMBOL_expression = 48,                /* expression  */
  YYSYMBOL_logicExpression = 49,           /* logicExpression  */
  YYSYMBOL_relatExpression = 50,           /* relatExpression  */
  YYSYMBOL_listExpression = 51,            /* listExpression  */
  YYSYMBOL_addExpression = 52,             /* addExpression  */
  YYSYMBOL_mulExpression = 53,             /* mulExpression  */
  YYSYMBOL_factor = 54,                    /* factor  */
  YYSYMBOL_unaryExpression = 55,           /* unaryExpression  */
  YYSYMBOL_call = 56,                      /* call  */
  YYSYMBOL_outputArgs = 57,                /* outputArgs  */
  YYSYMBOL_args = 58,                      /* args  */
  YYSYMBOL_argList = 59                    /* argList  */
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
#define YYLAST   2552

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  262

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
       0,   104,   104,   110,   115,   119,   120,   123,   129,   133,
     141,   144,   145,   148,   153,   156,   164,   164,   174,   177,
     182,   185,   186,   187,   188,   189,   190,   191,   194,   195,
     198,   206,   212,   215,   216,   217,   218,   219,   220,   223,
     233,   241,   247,   253,   254,   257,   264,   267,   274,   277,
     284,   287,   294,   297,   304,   307,   314,   317,   324,   325,
     326,   329,   332,   335,   340,   346,   354,   363,   364,   369,
     370,   373,   378
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
  "param", "compoundStmt", "@1", "statementList", "statement",
  "expressionStmt", "conditionalStmt", "conditionalBody", "loopStmt",
  "returnStmt", "inOutStmt", "expression", "logicExpression",
  "relatExpression", "listExpression", "addExpression", "mulExpression",
  "factor", "unaryExpression", "call", "outputArgs", "args", "argList", YY_NULLPTR
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

#define YYPACT_NINF (-167)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-73)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      65,    20,    72,    25,    97,   126,   129,   246,   269,   122,
    -167,   351,   399,     1,    73,    60,     4,    61,   114,    11,
      82,   410,  1392,   426,   170,  1417,   620,   643,   298,   551,
     356,   356,   120,   560,     8,    84,   429,    15,    18,  1442,
     478,  1467,  1492,   108,  1517,  1542,  1567,  1592,  1617,  1642,
     117,    51,   457,   508,   654,  2447,  2463,  2469,  2480,   429,
      87,   333,  2486,  2497,   133,   138,   478,   429,   152,   155,
     176,   160,    57,   163,   437,  1667,   356,   356,   356,   356,
     356,   165,   180,   185,   182,  1692,   188,   211,  1717,  1742,
     212,  1767,   213,   239,   242,  2503,   510,   693,  2514,   718,
    2520,  2531,   483,   310,   356,   253,   260,   365,   667,   692,
     717,   742,   767,   792,   817,    95,  1792,  1817,  2190,   478,
    1842,   257,  2142,  1867,  1392,  1892,   234,   438,  2353,   537,
     537,  2369,   478,    56,   210,   245,   106,  2375,  2381,  2391,
    2397,  2209,  2215,  2221,   598,   598,  2242,   478,     2,    48,
      80,   605,  2248,  2254,  2275,  2281,  1917,   842,    21,   271,
     429,    22,    30,   867,  1392,   280,  1942,  1967,  1992,  2017,
    2042,  2067,  2092,  1417,   478,    87,   650,  2403,  2413,   266,
     537,   537,   537,   537,   537,   483,    87,   396,  2287,  2308,
     286,   598,   598,   598,   598,   598,   292,   478,   429,   282,
     311,   344,   327,    57,  1417,   892,   328,   330,   332,  2419,
     268,   337,  2425,   389,  2435,   395,   341,  2314,   179,   201,
    2320,   207,  2341,   917,   352,   360,   942,   967,   364,   992,
     366,   391,  2117,  2441,  2347,   310,   356,   393,   407,  1017,
    1042,   110,  1067,  1092,   310,   478,  1117,   404,  2166,   572,
     439,  1142,  1167,  1192,  1217,  1242,  1267,  1292,  1317,  1342,
     419,  1367
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,  -167,   450,     0,  -167,  -167,  -167,   436,   -18,
    -166,  -113,  -120,  -100,   -53,  -110,   -51,   -50,   -45,   -23,
     433,   353,   329,    81,   277,   -25,   105,   191,   264,  -146,
    -167
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    41,     7,    15,    16,    17,    42,
      43,    25,    44,    45,    46,   111,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    94,    83,
      84
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    23,   123,   109,     6,    62,    63,   206,   120,    65,
     191,   173,    21,    68,    14,   138,    69,    73,   168,    71,
     -10,   -10,   196,   200,   -46,    10,    20,   -12,   -46,   208,
     -11,   202,    66,   -10,    22,   153,    81,    82,   231,    70,
     216,   138,    72,    86,    87,   197,   201,   138,     8,    93,
     110,   204,   112,   113,   203,   100,   -48,   192,   114,    76,
     126,   127,   128,   129,   180,   169,     1,   170,   171,   130,
     -48,   131,   -46,   172,   -48,     9,    18,   153,     2,   107,
     165,   132,   -46,   -14,    92,   108,    19,   -14,   -50,   -50,
     141,   142,   143,   144,   138,    14,   121,    -2,     1,   145,
     167,   146,   -50,    76,   177,   178,   -50,   138,    67,   179,
       2,   147,   182,   -70,   -52,   -52,   119,   183,    76,   188,
     189,   136,   138,    64,   190,   240,    -4,    -4,   253,    -5,
      -5,   245,   -52,    74,   246,   109,   -15,   199,    75,    -4,
     -15,   151,    -5,    12,   109,   139,    13,   136,   254,   138,
     153,   207,    82,   136,   156,   138,   138,   138,   138,   214,
     153,   153,   215,    82,    85,   154,   153,   153,   153,   153,
     222,   139,   138,    88,   224,   225,    89,   139,   138,    90,
      93,    91,   110,   151,   112,   113,   -45,   -47,   192,    95,
     114,   110,   -13,   112,   113,   255,   -13,   256,   257,   114,
     136,   -47,   -72,   258,   102,   -47,   -72,   154,   -69,   -49,
     -49,   101,   165,   136,   103,   -51,   -51,   108,   -48,   181,
     138,   165,   247,   -49,   139,   165,   108,   -49,   136,   -51,
     252,   140,   104,   -51,   139,   139,   -48,   139,   105,   -68,
     -60,   -60,   -60,   -60,   174,   -60,    -6,    -6,   251,   154,
     154,   155,   139,   -50,   -50,   136,   151,   140,   175,    -6,
     -60,   136,   136,   140,   136,   -67,   151,   151,   106,    -8,
      -8,   -50,   151,   151,   116,   151,   -47,   181,   136,   139,
     154,   117,    -8,   122,   136,   139,   139,   139,   139,   139,
     154,   154,   209,   155,   -47,   198,   154,   154,   154,   154,
     154,   205,   139,   226,   -62,   -62,   -62,   -62,   139,   -62,
     140,   157,   217,    27,    28,    29,    30,   137,   223,   -62,
     140,   140,    31,   140,    33,   158,   136,   159,   160,   161,
     162,   163,   227,   164,    40,   155,   155,   152,   140,   -60,
     -60,   -60,   -60,   137,   -60,   -49,   -49,   228,   229,   137,
     139,    -3,    -3,   232,   -60,    98,   -45,    60,   233,    61,
      28,    29,    30,   -49,    -3,   140,   155,   234,    31,   135,
      33,   140,   140,   140,   140,   140,   155,   155,   235,   152,
      40,   236,   155,   155,   155,   155,   155,   -71,   140,   150,
     237,   -71,   238,   134,   140,   135,   137,   -51,   -51,    -7,
      -7,   135,   -60,   -60,   -60,   -60,    97,   -60,    99,   137,
     -18,   -18,    -7,   149,   242,   -51,   239,   -45,   -60,   134,
     186,   -45,   -60,   -18,   137,   134,    -9,    -9,   243,    96,
     248,   150,    27,    28,    29,    30,   140,   -17,   -17,    -9,
     261,    31,   260,    33,   -62,   -62,   -62,   -62,   135,   -62,
     -17,   137,   152,    40,    11,   149,    24,   137,   137,   212,
     137,   135,   152,   152,   -62,   -48,    77,   230,   152,   152,
     220,   152,   134,   133,   137,     0,   135,     0,   -48,     0,
     137,   126,   127,   128,   129,   134,   141,   142,   143,   144,
     130,     0,   131,   148,     0,   145,     0,   146,     0,   133,
     134,     0,   132,   135,   150,   133,     0,   147,     0,   135,
     211,     0,   213,     0,   150,   150,   -50,   -50,   -47,    77,
     150,   219,   137,   221,     0,     0,   135,   134,   149,   -50,
       0,   -47,   135,   210,     0,   148,     0,   115,   149,   149,
     176,   127,   128,   129,   218,     0,     0,     0,     0,   130,
     134,   131,   133,     0,     0,     0,   134,   -61,   -61,   -61,
     -61,   132,   -61,     0,     0,   133,   -63,   -63,   -63,   -63,
       0,   -63,   -61,   -18,   135,   -18,   -18,   -18,   -18,     0,
     133,   -63,     0,     0,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,   134,     0,
     259,   187,   142,   143,   144,     0,     0,   133,   148,     0,
     145,   193,   146,   -52,   -52,     0,   194,     0,   148,   148,
       0,   -18,   147,   -18,   -18,   -18,   -18,   -52,     0,     0,
     133,   -52,   -18,   -18,   -18,   -18,   133,   -18,   -18,   -18,
     -18,   -18,     0,   -18,   -18,   -18,     0,     0,   125,   -60,
     -60,   -60,   -60,    59,   -60,     0,   -60,   -60,   -60,   -60,
      78,   -60,   -52,   -52,   -60,    79,     0,    60,   -34,   241,
     -34,   -34,   -34,   -34,   175,   -52,   -60,     0,   133,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -33,     0,   -33,   -33,   -33,   -33,     0,
       0,   -49,   -49,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -49,   -33,   -33,   -33,   -35,     0,
     -35,   -35,   -35,   -35,     0,     0,   -51,   -51,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -51,
     -35,   -35,   -35,   -31,     0,   -31,   -31,   -31,   -31,     0,
       0,     0,     0,     0,   -31,   -31,   -31,   -31,   118,   -31,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -36,     0,
     -36,   -36,   -36,   -36,     0,     0,     0,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -36,   -37,     0,   -37,   -37,   -37,   -37,     0,
       0,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -38,     0,
     -38,   -38,   -38,   -38,     0,     0,     0,     0,     0,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,
     -38,   -38,   -38,   -18,     0,   -18,   -18,   -18,   -18,     0,
       0,     0,     0,     0,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -29,     0,
     -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,
     -29,   -29,   -29,   -28,     0,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -32,     0,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -40,     0,   -40,   -40,   -40,   -40,     0,
       0,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -43,     0,
     -43,   -43,   -43,   -43,     0,     0,     0,     0,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,   -43,   -44,     0,   -44,   -44,   -44,   -44,     0,
       0,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -17,     0,
     -17,   -17,   -17,   -17,     0,     0,     0,     0,     0,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,     0,
     -17,   -17,   -17,   -31,     0,   -31,   -31,   -31,   -31,     0,
       0,     0,     0,     0,   -31,   -31,   -31,   -31,   244,   -31,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -41,     0,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,
     -41,   -41,   -41,   -42,     0,   -42,   -42,   -42,   -42,     0,
       0,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -30,     0,
     -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -26,     0,   -26,   -26,   -26,   -26,     0,
       0,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -22,     0,
     -22,   -22,   -22,   -22,     0,     0,     0,     0,     0,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,
     -22,   -22,   -22,   -39,     0,   -39,   -39,   -39,   -39,     0,
       0,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -21,     0,
     -21,   -21,   -21,   -21,     0,     0,     0,     0,     0,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,
     -21,   -21,   -21,   -23,     0,   -23,   -23,   -23,   -23,     0,
       0,     0,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -24,     0,
     -24,   -24,   -24,   -24,     0,     0,     0,     0,     0,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -25,     0,   -25,   -25,   -25,   -25,     0,
       0,     0,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -27,     0,
     -27,   -27,   -27,   -27,     0,     0,     0,     0,     0,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,    -8,     0,    -8,    -8,    -8,    -8,     0,
       0,     0,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,    -7,     0,
      -7,    -7,    -7,    -7,     0,     0,     0,     0,     0,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,
      -7,    -7,    -7,   -20,     0,   -20,   -20,   -20,   -20,     0,
       0,     0,     0,     0,   -20,   -20,   -20,   -20,     0,   -20,
     -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,    26,     0,
      27,    28,    29,    30,     0,     0,     0,     0,     0,    31,
      32,    33,    34,     0,    35,    36,    37,    38,    39,     0,
     124,    40,   -16,   -29,     0,   -29,   -29,   -29,   -29,     0,
       0,     0,     0,     0,   -29,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -26,     0,
     -26,   -26,   -26,   -26,     0,     0,     0,     0,     0,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,   -26,   -22,     0,   -22,   -22,   -22,   -22,     0,
       0,     0,     0,     0,   -22,   -22,   -22,   -22,     0,   -22,
     -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -19,     0,
     -19,   -19,   -19,   -19,     0,     0,     0,     0,     0,   -19,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,     0,
     -19,   -19,   -19,   -21,     0,   -21,   -21,   -21,   -21,     0,
       0,     0,     0,     0,   -21,   -21,   -21,   -21,     0,   -21,
     -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -23,     0,
     -23,   -23,   -23,   -23,     0,     0,     0,     0,     0,   -23,
     -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,     0,
     -23,   -23,   -23,   -24,     0,   -24,   -24,   -24,   -24,     0,
       0,     0,     0,     0,   -24,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -25,     0,
     -25,   -25,   -25,   -25,     0,     0,     0,     0,     0,   -25,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -27,     0,   -27,   -27,   -27,   -27,     0,
       0,     0,     0,     0,   -27,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -28,     0,
     -28,   -28,   -28,   -28,     0,     0,     0,     0,     0,   -28,
     -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -32,     0,   -32,   -32,   -32,   -32,     0,
       0,     0,     0,     0,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -40,     0,
     -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,   -40,
     -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,     0,
     -40,   -40,   -40,   -43,     0,   -43,   -43,   -43,   -43,     0,
       0,     0,     0,     0,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -44,     0,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,   -44,
     -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   -44,   -41,     0,   -41,   -41,   -41,   -41,     0,
       0,     0,     0,     0,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -42,     0,
     -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,   -42,
     -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,     0,
     -42,   -42,   -42,   -30,     0,   -30,   -30,   -30,   -30,     0,
       0,     0,     0,     0,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -39,     0,
     -39,   -39,   -39,   -39,     0,     0,     0,     0,     0,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,
     -39,   -39,   -39,    -8,     0,    -8,    -8,    -8,    -8,     0,
       0,     0,     0,     0,    -8,    -8,    -8,    -8,     0,    -8,
      -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,    -7,     0,
      -7,    -7,    -7,    -7,     0,     0,     0,     0,     0,    -7,
      -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,     0,
      -7,    -7,    -7,   -18,     0,   -18,   -18,   -18,   -18,     0,
       0,     0,     0,     0,   -18,   -18,   -18,   -18,     0,   -18,
     -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -34,     0,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -33,     0,   -33,   -33,   -33,   -33,     0,
       0,     0,     0,     0,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -35,     0,
     -35,   -35,   -35,   -35,     0,     0,     0,     0,     0,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -36,     0,   -36,   -36,   -36,   -36,     0,
       0,     0,     0,     0,   -36,   -36,   -36,   -36,     0,   -36,
     -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -37,     0,
     -37,   -37,   -37,   -37,     0,     0,     0,     0,     0,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,
     -37,   -37,   -37,   -38,     0,   -38,   -38,   -38,   -38,     0,
       0,     0,     0,     0,   -38,   -38,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -17,     0,
     -17,   -17,   -17,   -17,     0,     0,     0,     0,     0,   -17,
     -17,   -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,     0,
     -17,   -17,   -17,    26,     0,    27,    28,    29,    30,     0,
       0,     0,     0,     0,    31,    32,    33,    34,     0,    35,
      36,    37,    38,    39,     0,   124,    40,   249,     0,    27,
      28,    29,    30,     0,     0,     0,     0,     0,    31,   250,
      33,   158,     0,   159,   160,   161,   162,   163,     0,   164,
      40,   166,     0,    27,    28,    29,    30,     0,     0,     0,
       0,     0,    31,     0,    33,    34,     0,    35,    36,    37,
      38,    39,     0,   124,    40,   -60,   -60,   -60,   -60,   185,
     -60,   -62,   -62,   -62,   -62,     0,   -62,   -61,   -61,   -61,
     -61,   -60,   -61,   186,     0,   -60,     0,   -62,     0,     0,
       0,   -62,     0,   -61,     0,     0,     0,   -61,   -63,   -63,
     -63,   -63,     0,   -63,   -54,   195,   -54,   -54,     0,   -54,
     -56,   -56,   -56,   -56,   -63,   -56,     0,     0,   -63,     0,
     -54,     0,     0,     0,   -54,     0,   -56,     0,     0,     0,
     -56,   -58,   -58,   -58,   -58,     0,   -58,   -59,   -59,   -59,
     -59,     0,   -59,   -65,   -65,   -65,   -65,   -58,   -65,     0,
       0,   -58,     0,   -59,     0,     0,     0,   -59,     0,   -65,
       0,     0,     0,   -65,   -64,   -64,   -64,   -64,     0,   -64,
     -57,   -57,   -57,   -57,     0,   -57,   -53,   195,   -53,   -53,
     -64,   -53,     0,     0,   -64,     0,   -57,     0,     0,     0,
     -57,     0,   -53,     0,     0,     0,   -53,   -55,   -55,   -55,
     -55,     0,   -55,   -66,   -66,   -66,   -66,     0,   -66,   -61,
     -61,   -61,   -61,   -55,   -61,     0,     0,   -55,     0,   -66,
       0,     0,     0,   -66,     0,   -63,   -63,   -63,   -63,   -61,
     -63,   -54,   184,   -54,   -54,     0,   -54,   -56,   -56,   -56,
     -56,     0,   -56,     0,     0,   -63,     0,   -58,   -58,   -58,
     -58,   -54,   -58,   -59,   -59,   -59,   -59,   -56,   -59,   -65,
     -65,   -65,   -65,     0,   -65,     0,     0,   -58,     0,   -64,
     -64,   -64,   -64,   -59,   -64,   -57,   -57,   -57,   -57,   -65,
     -57,   -53,   184,   -53,   -53,     0,   -53,     0,     0,   -64,
       0,   -55,   -55,   -55,   -55,   -57,   -55,   -66,   -66,   -66,
     -66,   -53,   -66,   -54,    80,   -54,   -54,     0,   -54,     0,
       0,   -55,     0,     0,     0,     0,     0,   -66,   -54,   -56,
     -56,   -56,   -56,     0,   -56,   -58,   -58,   -58,   -58,     0,
     -58,     0,     0,     0,   -56,     0,   -59,   -59,   -59,   -59,
     -58,   -59,   -65,   -65,   -65,   -65,     0,   -65,     0,     0,
       0,   -59,     0,   -64,   -64,   -64,   -64,   -65,   -64,   -57,
     -57,   -57,   -57,     0,   -57,     0,     0,     0,   -64,     0,
     -53,    80,   -53,   -53,   -57,   -53,   -55,   -55,   -55,   -55,
       0,   -55,     0,     0,     0,   -53,     0,   -66,   -66,   -66,
     -66,   -55,   -66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -66
};

static const yytype_int16 yycheck[] =
{
       0,    19,   122,   103,     4,    30,    31,   173,   118,     1,
       8,   124,     1,    36,    13,    40,     1,    40,   118,     1,
       0,     1,     1,     1,    22,     0,    22,    26,    26,   175,
      26,     1,    24,    13,    23,    60,    59,    60,   204,    24,
     186,    66,    24,    66,    67,    24,    24,    72,    28,    72,
     103,   164,   103,   103,    24,    80,     8,     9,   103,     8,
       3,     4,     5,     6,     8,   118,     1,   118,   118,    12,
      22,    14,    21,   118,    26,     3,     3,   102,    13,   102,
     103,    24,    26,    22,    27,   103,    26,    26,     8,     9,
       3,     4,     5,     6,   119,    13,   119,     0,     1,    12,
     118,    14,    22,     8,   129,   130,    26,   132,    24,   132,
      13,    24,     6,    26,     8,     9,    21,    11,     8,   144,
     145,    40,   147,     3,   147,   235,     0,     1,   248,     0,
       1,    21,    26,    25,   244,   235,    22,   160,    21,    13,
      26,    60,    13,    21,   244,    40,    24,    66,   248,   174,
     175,   174,   175,    72,    21,   180,   181,   182,   183,   184,
     185,   186,   185,   186,    26,    60,   191,   192,   193,   194,
     195,    66,   197,    21,   197,   198,    21,    72,   203,     3,
     203,    21,   235,   102,   235,   235,    21,     8,     9,    26,
     235,   244,    22,   244,   244,   248,    26,   248,   248,   244,
     119,    22,    22,   248,    22,    26,    26,   102,    26,     8,
       9,    26,   235,   132,    26,     8,     9,   235,     8,     9,
     245,   244,   245,    22,   119,   248,   244,    26,   147,    22,
     248,    40,    21,    26,   129,   130,    26,   132,    26,    26,
       6,     7,     8,     9,    10,    11,     0,     1,   248,   144,
     145,    60,   147,     8,     9,   174,   175,    66,    24,    13,
      26,   180,   181,    72,   183,    26,   185,   186,    26,     0,
       1,    26,   191,   192,    21,   194,     8,     9,   197,   174,
     175,    21,    13,    26,   203,   180,   181,   182,   183,   184,
     185,   186,    26,   102,    26,    24,   191,   192,   193,   194,
     195,    21,   197,    21,     6,     7,     8,     9,   203,    11,
     119,     1,    26,     3,     4,     5,     6,    40,    26,    21,
     129,   130,    12,   132,    14,    15,   245,    17,    18,    19,
      20,    21,    21,    23,    24,   144,   145,    60,   147,     6,
       7,     8,     9,    66,    11,     8,     9,     3,    21,    72,
     245,     0,     1,    25,    21,    78,    26,    24,    26,     3,
       4,     5,     6,    26,    13,   174,   175,    26,    12,    40,
      14,   180,   181,   182,   183,   184,   185,   186,    26,   102,
      24,    21,   191,   192,   193,   194,   195,    22,   197,    60,
      26,    26,    26,    40,   203,    66,   119,     8,     9,     0,
       1,    72,     6,     7,     8,     9,    77,    11,    79,   132,
       0,     1,    13,    60,    21,    26,    25,    22,    22,    66,
      24,    26,    26,    13,   147,    72,     0,     1,    21,    76,
      26,   102,     3,     4,     5,     6,   245,     0,     1,    13,
      21,    12,     3,    14,     6,     7,     8,     9,   119,    11,
      13,   174,   175,    24,     4,   102,    20,   180,   181,   182,
     183,   132,   185,   186,    26,     8,     9,   203,   191,   192,
     193,   194,   119,    40,   197,    -1,   147,    -1,    21,    -1,
     203,     3,     4,     5,     6,   132,     3,     4,     5,     6,
      12,    -1,    14,    60,    -1,    12,    -1,    14,    -1,    66,
     147,    -1,    24,   174,   175,    72,    -1,    24,    -1,   180,
     181,    -1,   183,    -1,   185,   186,     8,     9,     8,     9,
     191,   192,   245,   194,    -1,    -1,   197,   174,   175,    21,
      -1,    21,   203,   180,    -1,   102,    -1,   104,   185,   186,
       3,     4,     5,     6,   191,    -1,    -1,    -1,    -1,    12,
     197,    14,   119,    -1,    -1,    -1,   203,     6,     7,     8,
       9,    24,    11,    -1,    -1,   132,     6,     7,     8,     9,
      -1,    11,    21,     1,   245,     3,     4,     5,     6,    -1,
     147,    21,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,   245,    -1,
      28,     3,     4,     5,     6,    -1,    -1,   174,   175,    -1,
      12,     6,    14,     8,     9,    -1,    11,    -1,   185,   186,
      -1,     1,    24,     3,     4,     5,     6,    22,    -1,    -1,
     197,    26,    12,    13,    14,    15,   203,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,    -1,    -1,    28,     6,
       7,     8,     9,    10,    11,    -1,     6,     7,     8,     9,
       6,    11,     8,     9,    21,    11,    -1,    24,     1,   236,
       3,     4,     5,     6,    24,    21,    26,    -1,   245,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     8,     9,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    21,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,     8,     9,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    21,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
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
      -1,    26,    -1,    -1,    -1,    -1,    -1,    26,    21,     6,
       7,     8,     9,    -1,    11,     6,     7,     8,     9,    -1,
      11,    -1,    -1,    -1,    21,    -1,     6,     7,     8,     9,
      21,    11,     6,     7,     8,     9,    -1,    11,    -1,    -1,
      -1,    21,    -1,     6,     7,     8,     9,    21,    11,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    21,    -1,
       6,     7,     8,     9,    21,    11,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    21,    -1,     6,     7,     8,
       9,    21,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    13,    30,    31,    32,    33,    34,    28,     3,
       0,    32,    21,    24,    13,    35,    36,    37,     3,    26,
      22,     1,    23,    38,    37,    40,     1,     3,     4,     5,
       6,    12,    13,    14,    15,    17,    18,    19,    20,    21,
      24,    33,    38,    39,    41,    42,    43,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    10,
      24,     3,    54,    54,     3,     1,    24,    24,    48,     1,
      24,     1,    24,    48,    25,    21,     8,     9,     6,    11,
       7,    48,    48,    58,    59,    26,    48,    48,    21,    21,
       3,    21,    27,    48,    57,    26,    50,    51,    53,    51,
      54,    26,    22,    26,    21,    26,    26,    48,    38,    42,
      43,    44,    45,    46,    47,    49,    21,    21,    16,    21,
      44,    48,    26,    41,    23,    28,     3,     4,     5,     6,
      12,    14,    24,    49,    50,    51,    52,    53,    54,    55,
      56,     3,     4,     5,     6,    12,    14,    24,    49,    50,
      51,    52,    53,    54,    55,    56,    21,     1,    15,    17,
      18,    19,    20,    21,    23,    48,     1,    38,    42,    43,
      45,    46,    47,    40,    10,    24,     3,    54,    54,    48,
       8,     9,     6,    11,     7,    10,    24,     3,    54,    54,
      48,     8,     9,     6,    11,     7,     1,    24,    24,    48,
       1,    24,     1,    24,    40,    21,    39,    48,    58,    26,
      50,    51,    53,    51,    54,    48,    58,    26,    50,    51,
      53,    51,    54,    26,    48,    48,    21,    21,     3,    21,
      57,    39,    25,    26,    26,    26,    21,    26,    26,    25,
      44,    49,    21,    21,    16,    21,    44,    48,    26,     1,
      13,    33,    38,    41,    42,    43,    45,    46,    47,    28,
       3,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    29,    30,    31,    31,    32,    32,    33,    33,    34,
      34,    35,    35,    36,    36,    37,    39,    38,    38,    40,
      40,    41,    41,    41,    41,    41,    41,    41,    42,    42,
      43,    43,    43,    44,    44,    44,    44,    44,    44,    45,
      46,    47,    47,    47,    47,    48,    48,    49,    49,    50,
      50,    51,    51,    52,    52,    53,    53,    54,    54,    54,
      54,    54,    54,    54,    55,    55,    56,    57,    57,    58,
      58,    59,    59
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     2,     6,
       1,     1,     0,     3,     1,     2,     0,     4,     1,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       7,     5,     3,     1,     1,     1,     1,     1,     1,     9,
       3,     5,     5,     3,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     2,     2,     4,     1,     1,     1,
       0,     3,     1
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
#line 104 "./src/cipl_syn.y"
                  {
    (yyval.node) = (yyvsp[0].node);
    root = (yyval.node);
  }
#line 1981 "cipl_syn.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 110 "./src/cipl_syn.y"
                              {
    (yyval.node) = createNode("invisible node");
    (yyval.node)->children[0] = (yyvsp[-1].node);
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 1991 "cipl_syn.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 115 "./src/cipl_syn.y"
                { (yyval.node) = (yyvsp[0].node); 
  }
#line 1998 "cipl_syn.tab.c"
    break;

  case 5: /* declaration: variableDeclaration  */
#line 119 "./src/cipl_syn.y"
                      { (yyval.node) = (yyvsp[0].node); }
#line 2004 "cipl_syn.tab.c"
    break;

  case 6: /* declaration: functionDeclaration  */
#line 120 "./src/cipl_syn.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 2010 "cipl_syn.tab.c"
    break;

  case 7: /* variableDeclaration: TYPE ID SEMICOLON  */
#line 123 "./src/cipl_syn.y"
                    {
    newSymbol((yyvsp[-1].token).content, (yyvsp[-2].token).content, 0, currentScope->id, table);
    (yyval.node) = createNode("variable declaration");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token), -1);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), getSymbolType(table, (yyvsp[-1].token).content, currentScope));
  }
#line 2021 "cipl_syn.tab.c"
    break;

  case 8: /* variableDeclaration: error ';'  */
#line 129 "./src/cipl_syn.y"
              {yyerrok;}
#line 2027 "cipl_syn.tab.c"
    break;

  case 9: /* functionDeclaration: TYPE ID OPEN_PAREN params CLOSE_PAREN compoundStmt  */
#line 133 "./src/cipl_syn.y"
                                                      {
    newSymbol((yyvsp[-4].token).content,  (yyvsp[-5].token).content, 1, currentScope->id, table);
    (yyval.node) = createNode("function declaration");
    (yyval.node)->children[0] = addLeaf((yyvsp[-5].token), -1);
    (yyval.node)->children[1] = addLeaf((yyvsp[-4].token), getSymbolType(table, (yyvsp[-4].token).content, currentScope));
    (yyval.node)->children[2] = (yyvsp[-2].node);
    (yyval.node)->children[3] = (yyvsp[0].node);
  }
#line 2040 "cipl_syn.tab.c"
    break;

  case 10: /* functionDeclaration: error  */
#line 141 "./src/cipl_syn.y"
          {yyerrok;}
#line 2046 "cipl_syn.tab.c"
    break;

  case 11: /* params: paramList  */
#line 144 "./src/cipl_syn.y"
            { (yyval.node) = (yyvsp[0].node); }
#line 2052 "cipl_syn.tab.c"
    break;

  case 12: /* params: %empty  */
#line 145 "./src/cipl_syn.y"
            { (yyval.node) = NULL; }
#line 2058 "cipl_syn.tab.c"
    break;

  case 13: /* paramList: paramList COMMA param  */
#line 148 "./src/cipl_syn.y"
                        {
    (yyval.node) = createNode("invisible node");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 2068 "cipl_syn.tab.c"
    break;

  case 14: /* paramList: param  */
#line 153 "./src/cipl_syn.y"
          { (yyval.node) = (yyvsp[0].node); }
#line 2074 "cipl_syn.tab.c"
    break;

  case 15: /* param: TYPE ID  */
#line 156 "./src/cipl_syn.y"
          {
    newSymbol((yyvsp[0].token).content,  (yyvsp[-1].token).content, 2, scopeCounting+1, table);
    (yyval.node) = createNode("param");
    (yyval.node)->children[0] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[1] = addLeaf((yyvsp[0].token), stringToType((yyvsp[-1].token).content));
  }
#line 2085 "cipl_syn.tab.c"
    break;

  case 16: /* @1: %empty  */
#line 164 "./src/cipl_syn.y"
                                 {
    (yyval.node) = createNode("invisible node");
    (yyval.node)->children[0] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[1] = (yyvsp[0].node);    
  }
#line 2095 "cipl_syn.tab.c"
    break;

  case 17: /* compoundStmt: OPEN_CURLY statementList @1 CLOSE_CURLY  */
#line 168 "./src/cipl_syn.y"
                { 
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->children[2] = addLeaf((yyvsp[0].token), -1);
    // Return scope
    currentScope = currentScope->parent;
  }
#line 2106 "cipl_syn.tab.c"
    break;

  case 18: /* compoundStmt: error  */
#line 174 "./src/cipl_syn.y"
          {yyerrok;}
#line 2112 "cipl_syn.tab.c"
    break;

  case 19: /* statementList: statementList statement  */
#line 177 "./src/cipl_syn.y"
                          {
    (yyval.node) = createNode("invisible node");
    (yyval.node)->children[0] = (yyvsp[-1].node);
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 2122 "cipl_syn.tab.c"
    break;

  case 20: /* statementList: %empty  */
#line 182 "./src/cipl_syn.y"
            { (yyval.node) = NULL; }
#line 2128 "cipl_syn.tab.c"
    break;

  case 21: /* statement: expressionStmt  */
#line 185 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2134 "cipl_syn.tab.c"
    break;

  case 22: /* statement: compoundStmt  */
#line 186 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2140 "cipl_syn.tab.c"
    break;

  case 23: /* statement: conditionalStmt  */
#line 187 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2146 "cipl_syn.tab.c"
    break;

  case 24: /* statement: loopStmt  */
#line 188 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2152 "cipl_syn.tab.c"
    break;

  case 25: /* statement: returnStmt  */
#line 189 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2158 "cipl_syn.tab.c"
    break;

  case 26: /* statement: variableDeclaration  */
#line 190 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2164 "cipl_syn.tab.c"
    break;

  case 27: /* statement: inOutStmt  */
#line 191 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2170 "cipl_syn.tab.c"
    break;

  case 28: /* expressionStmt: expression SEMICOLON  */
#line 194 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[-1].node); }
#line 2176 "cipl_syn.tab.c"
    break;

  case 29: /* expressionStmt: SEMICOLON  */
#line 195 "./src/cipl_syn.y"
                          { (yyval.node) = NULL; }
#line 2182 "cipl_syn.tab.c"
    break;

  case 30: /* conditionalStmt: IF OPEN_PAREN expression CLOSE_PAREN conditionalBody ELSE conditionalBody  */
#line 198 "./src/cipl_syn.y"
                                                                            {
    (yyval.node) = createNode("if else statment");
    (yyval.node)->children[0] = addLeaf((yyvsp[-6].token), -1);
    (yyval.node)->children[1] = (yyvsp[-4].node);
    (yyval.node)->children[2] = (yyvsp[-2].node);
    (yyval.node)->children[3] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[4] = (yyvsp[0].node);
  }
#line 2195 "cipl_syn.tab.c"
    break;

  case 31: /* conditionalStmt: IF OPEN_PAREN expression CLOSE_PAREN conditionalBody  */
#line 206 "./src/cipl_syn.y"
                                                         {
    (yyval.node) = createNode("if statment");
    (yyval.node)->children[0] = addLeaf((yyvsp[-4].token), -1);
    (yyval.node)->children[1] = (yyvsp[-2].node);
    (yyval.node)->children[2] = (yyvsp[0].node);
  }
#line 2206 "cipl_syn.tab.c"
    break;

  case 32: /* conditionalStmt: IF error CLOSE_PAREN  */
#line 212 "./src/cipl_syn.y"
                         {yyerrok;}
#line 2212 "cipl_syn.tab.c"
    break;

  case 33: /* conditionalBody: expressionStmt  */
#line 215 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2218 "cipl_syn.tab.c"
    break;

  case 34: /* conditionalBody: compoundStmt  */
#line 216 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2224 "cipl_syn.tab.c"
    break;

  case 35: /* conditionalBody: conditionalStmt  */
#line 217 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2230 "cipl_syn.tab.c"
    break;

  case 36: /* conditionalBody: loopStmt  */
#line 218 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2236 "cipl_syn.tab.c"
    break;

  case 37: /* conditionalBody: returnStmt  */
#line 219 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2242 "cipl_syn.tab.c"
    break;

  case 38: /* conditionalBody: inOutStmt  */
#line 220 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2248 "cipl_syn.tab.c"
    break;

  case 39: /* loopStmt: FOR OPEN_PAREN expression SEMICOLON logicExpression SEMICOLON expression CLOSE_PAREN statement  */
#line 223 "./src/cipl_syn.y"
                                                                                                 {
    (yyval.node) = createNode("for statment");
    (yyval.node)->children[0] = addLeaf((yyvsp[-8].token), -1);
    (yyval.node)->children[1] = (yyvsp[-6].node);
    (yyval.node)->children[2] = (yyvsp[-4].node);
    (yyval.node)->children[3] = (yyvsp[-2].node);
    (yyval.node)->children[4] = (yyvsp[0].node);
  }
#line 2261 "cipl_syn.tab.c"
    break;

  case 40: /* returnStmt: RETURN expression SEMICOLON  */
#line 233 "./src/cipl_syn.y"
                              {
    (yyval.node) = createNode("return statment");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token), -1);
    (yyval.node)->children[1] = (yyvsp[-1].node);
    // TODO: check return type
  }
#line 2272 "cipl_syn.tab.c"
    break;

  case 41: /* inOutStmt: INPUT OPEN_PAREN ID CLOSE_PAREN SEMICOLON  */
#line 241 "./src/cipl_syn.y"
                                            {
    (yyval.node) = createNode("input");
    (yyval.node)->children[0] = addLeaf((yyvsp[-4].token), -1);
    (yyval.node)->children[1] = addLeaf((yyvsp[-2].token), getSymbolType(table, (yyvsp[-2].token).content, currentScope));
    checkIOArgs((yyval.node));
  }
#line 2283 "cipl_syn.tab.c"
    break;

  case 42: /* inOutStmt: OUTPUT OPEN_PAREN outputArgs CLOSE_PAREN SEMICOLON  */
#line 247 "./src/cipl_syn.y"
                                                        {
    (yyval.node) = createNode("output");
    (yyval.node)->children[0] = addLeaf((yyvsp[-4].token), -1);
    (yyval.node)->children[1] = (yyvsp[-2].node);
    checkIOArgs((yyval.node));
  }
#line 2294 "cipl_syn.tab.c"
    break;

  case 43: /* inOutStmt: INPUT error SEMICOLON  */
#line 253 "./src/cipl_syn.y"
                          {yyerrok;}
#line 2300 "cipl_syn.tab.c"
    break;

  case 44: /* inOutStmt: OUTPUT error SEMICOLON  */
#line 254 "./src/cipl_syn.y"
                           {yyerrok;}
#line 2306 "cipl_syn.tab.c"
    break;

  case 45: /* expression: ID OP_ASSIG expression  */
#line 257 "./src/cipl_syn.y"
                          {
    (yyval.node) = createNode("assign expression");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token), getSymbolType(table, (yyvsp[-2].token).content, currentScope));
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveType((yyvsp[-1].token), (yyval.node)->children[0], (yyvsp[0].node));
  }
#line 2318 "cipl_syn.tab.c"
    break;

  case 46: /* expression: logicExpression  */
#line 264 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2324 "cipl_syn.tab.c"
    break;

  case 47: /* logicExpression: logicExpression OP_LOGIC relatExpression  */
#line 267 "./src/cipl_syn.y"
                                            {
    (yyval.node) = createNode("logic expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = 0; // always integer
  }
#line 2336 "cipl_syn.tab.c"
    break;

  case 48: /* logicExpression: relatExpression  */
#line 274 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2342 "cipl_syn.tab.c"
    break;

  case 49: /* relatExpression: relatExpression OP_RELAT listExpression  */
#line 277 "./src/cipl_syn.y"
                                            {
    (yyval.node) = createNode("relational expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveType((yyvsp[-1].token), (yyvsp[-2].node), (yyvsp[0].node));
  }
#line 2354 "cipl_syn.tab.c"
    break;

  case 50: /* relatExpression: listExpression  */
#line 284 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2360 "cipl_syn.tab.c"
    break;

  case 51: /* listExpression: addExpression OP_LIST listExpression  */
#line 287 "./src/cipl_syn.y"
                                            {
    (yyval.node) = createNode("list expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveType((yyvsp[-1].token), (yyvsp[-2].node), (yyvsp[0].node));
  }
#line 2372 "cipl_syn.tab.c"
    break;

  case 52: /* listExpression: addExpression  */
#line 294 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2378 "cipl_syn.tab.c"
    break;

  case 53: /* addExpression: addExpression OP_ADD mulExpression  */
#line 297 "./src/cipl_syn.y"
                                     {
    (yyval.node) = createNode("additive expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveType((yyvsp[-1].token), (yyvsp[-2].node), (yyvsp[0].node));
  }
#line 2390 "cipl_syn.tab.c"
    break;

  case 54: /* addExpression: mulExpression  */
#line 304 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2396 "cipl_syn.tab.c"
    break;

  case 55: /* mulExpression: mulExpression OP_MUL factor  */
#line 307 "./src/cipl_syn.y"
                              {
    (yyval.node) = createNode("multiplicative expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveType((yyvsp[-1].token), (yyvsp[-2].node), (yyvsp[0].node));
  }
#line 2408 "cipl_syn.tab.c"
    break;

  case 56: /* mulExpression: factor  */
#line 314 "./src/cipl_syn.y"
           { (yyval.node) = (yyvsp[0].node); }
#line 2414 "cipl_syn.tab.c"
    break;

  case 57: /* factor: OPEN_PAREN expression CLOSE_PAREN  */
#line 317 "./src/cipl_syn.y"
                                    {
    (yyval.node) = createNode("parenthesis expression");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token), -1);
    (yyval.node)->children[1] = (yyvsp[-1].node);
    (yyval.node)->children[2] = addLeaf((yyvsp[0].token), -1);
    (yyval.node)->nodeType = (yyvsp[-1].node)->nodeType;
  }
#line 2426 "cipl_syn.tab.c"
    break;

  case 58: /* factor: unaryExpression  */
#line 324 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2432 "cipl_syn.tab.c"
    break;

  case 59: /* factor: call  */
#line 325 "./src/cipl_syn.y"
         { (yyval.node) = (yyvsp[0].node); }
#line 2438 "cipl_syn.tab.c"
    break;

  case 60: /* factor: ID  */
#line 326 "./src/cipl_syn.y"
       {
    (yyval.node) = addLeaf((yyvsp[0].token), getSymbolType(table, (yyvsp[0].token).content, currentScope));
  }
#line 2446 "cipl_syn.tab.c"
    break;

  case 61: /* factor: FLOAT  */
#line 329 "./src/cipl_syn.y"
          {
    (yyval.node) = addLeaf((yyvsp[0].token), 1);
  }
#line 2454 "cipl_syn.tab.c"
    break;

  case 62: /* factor: INT  */
#line 332 "./src/cipl_syn.y"
        {
    (yyval.node) = addLeaf((yyvsp[0].token), 0);
  }
#line 2462 "cipl_syn.tab.c"
    break;

  case 63: /* factor: NIL  */
#line 335 "./src/cipl_syn.y"
        {
    (yyval.node) = addLeaf((yyvsp[0].token), 4);
  }
#line 2470 "cipl_syn.tab.c"
    break;

  case 64: /* unaryExpression: UN_OP factor  */
#line 340 "./src/cipl_syn.y"
               {
    (yyval.node) = createNode("unary expression");
    (yyval.node)->children[0] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[1] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveUnaryType((yyvsp[-1].token), (yyvsp[0].node));
  }
#line 2481 "cipl_syn.tab.c"
    break;

  case 65: /* unaryExpression: OP_ADD factor  */
#line 346 "./src/cipl_syn.y"
                  {
    (yyval.node) = createNode("signed expression");
    (yyval.node)->children[0] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[1] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveUnaryType((yyvsp[-1].token), (yyvsp[0].node));
  }
#line 2492 "cipl_syn.tab.c"
    break;

  case 66: /* call: ID OPEN_PAREN args CLOSE_PAREN  */
#line 354 "./src/cipl_syn.y"
                                 {
    (yyval.node) = createNode("function call");
    int type = getSymbolType(table, (yyvsp[-3].token).content, currentScope);
    (yyval.node)->children[0] = addLeaf((yyvsp[-3].token), type);
    (yyval.node)->children[1] = (yyvsp[-1].node);
    (yyval.node)->nodeType = type;
  }
#line 2504 "cipl_syn.tab.c"
    break;

  case 67: /* outputArgs: expression  */
#line 363 "./src/cipl_syn.y"
             { (yyval.node) = (yyvsp[0].node); }
#line 2510 "cipl_syn.tab.c"
    break;

  case 68: /* outputArgs: STRING  */
#line 364 "./src/cipl_syn.y"
           {
    (yyval.node) = addLeaf((yyvsp[0].token), 5);
  }
#line 2518 "cipl_syn.tab.c"
    break;

  case 69: /* args: argList  */
#line 369 "./src/cipl_syn.y"
          { (yyval.node) = (yyvsp[0].node); }
#line 2524 "cipl_syn.tab.c"
    break;

  case 70: /* args: %empty  */
#line 370 "./src/cipl_syn.y"
            { (yyval.node) = NULL; }
#line 2530 "cipl_syn.tab.c"
    break;

  case 71: /* argList: argList COMMA expression  */
#line 373 "./src/cipl_syn.y"
                           {
    (yyval.node) = createNode("arguments list");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 2540 "cipl_syn.tab.c"
    break;

  case 72: /* argList: expression  */
#line 378 "./src/cipl_syn.y"
               { (yyval.node) = (yyvsp[0].node); }
#line 2546 "cipl_syn.tab.c"
    break;


#line 2550 "cipl_syn.tab.c"

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

#line 380 "./src/cipl_syn.y"


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
      if (totalErrors == 0) {
        printf(PRINT_CYAN "There's no errors.\n" PRINT_RESET);
      }
      printf("\nAbstract Syntax Tree:\n");
      printTree(root, 1);
      freeTree(root);

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
