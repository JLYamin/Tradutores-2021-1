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
  extern scopeNode* currentScope;

  tableNode* table;
  treeNode* root;

#line 93 "cipl_syn.tab.c"

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
  YYSYMBOL_conditionalBody = 43,           /* conditionalBody  */
  YYSYMBOL_loopStmt = 44,                  /* loopStmt  */
  YYSYMBOL_returnStmt = 45,                /* returnStmt  */
  YYSYMBOL_inOutStmt = 46,                 /* inOutStmt  */
  YYSYMBOL_expression = 47,                /* expression  */
  YYSYMBOL_logicExpression = 48,           /* logicExpression  */
  YYSYMBOL_relatExpression = 49,           /* relatExpression  */
  YYSYMBOL_listExpression = 50,            /* listExpression  */
  YYSYMBOL_addExpression = 51,             /* addExpression  */
  YYSYMBOL_mulExpression = 52,             /* mulExpression  */
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
#define YYLAST   2594

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  259

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
       0,   105,   105,   111,   116,   120,   121,   124,   130,   134,
     142,   145,   146,   149,   154,   157,   165,   171,   174,   179,
     182,   183,   184,   185,   186,   187,   188,   191,   192,   195,
     203,   209,   212,   213,   214,   215,   216,   217,   220,   230,
     238,   244,   250,   251,   254,   261,   264,   271,   274,   281,
     284,   291,   294,   301,   304,   311,   314,   321,   322,   323,
     326,   329,   332,   337,   343,   351,   360,   361,   366,   367,
     370,   375
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
  "conditionalStmt", "conditionalBody", "loopStmt", "returnStmt",
  "inOutStmt", "expression", "logicExpression", "relatExpression",
  "listExpression", "addExpression", "mulExpression", "factor",
  "unaryExpression", "call", "outputArgs", "args", "argList", YY_NULLPTR
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

#define YYPACT_NINF (-115)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-72)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     126,     8,    15,    20,    70,   197,   348,   371,   501,   -11,
    -115,   523,   551,    59,    24,    -7,    40,   110,   116,    63,
      44,   578,   264,   589,   118,   376,   650,   604,   318,  2223,
     307,   307,   122,  2488,     4,    90,   456,    13,    16,  1401,
     483,   616,  1426,  1451,  1476,  1501,  1526,  1551,  1576,  1601,
     114,    74,   286,   639,  2244,  2499,  2505,  2516,  2522,   456,
      55,  2480,  2533,  2539,   120,   124,   483,   456,   146,   192,
     180,   200,    19,   193,  1626,   307,   307,   307,   307,   307,
     205,   121,   206,   154,  1651,   207,   214,  1676,  1701,   220,
    1726,   226,   228,   236,  2550,   677,   702,  2556,   727,  2567,
    2573,   526,   542,   307,   243,   245,   168,   676,   701,   726,
     751,   776,   801,   826,    81,  1751,  1776,  2199,   483,  1801,
     248,  2151,  1826,   264,  1851,  2230,   198,  2387,   580,   580,
    2399,   483,    79,   235,   294,   359,  2408,  2415,  2421,  2429,
     102,  2240,  2252,  2221,  2221,  2261,   483,    72,    66,   111,
     445,  2273,  2282,  2294,  2303,  1876,   851,    25,   194,   456,
      28,    54,   876,   264,   265,  1901,  1926,  1951,  1976,  2001,
    2026,  2051,  2076,   483,    55,  2315,  2437,  2443,   271,   580,
     580,   580,   580,   580,   526,    55,   249,  2324,  2336,   289,
    2221,  2221,  2221,  2221,  2221,   291,   483,   456,   302,   309,
     334,   317,    19,  2101,   901,  2126,   314,   325,  2450,   400,
     457,  2459,   468,  2466,   173,   333,  2345,   203,   292,  2357,
     411,  2366,   926,   336,   339,   951,   976,   343,  1001,   347,
    1026,  2472,  2378,   542,   307,   354,   355,  1051,    83,  1076,
    1101,   542,   483,  1126,   357,  2175,   618,   404,  1151,  1176,
    1201,  1226,  1251,  1276,  1301,  1326,  1351,   382,  1376
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,  -115,  -115,   406,     0,  -115,  -115,  -115,   395,   -18,
    -107,  -114,   -72,   -63,  -111,   -54,   -52,   -49,   -25,   424,
     403,   256,   326,   232,   -28,    57,   162,   216,   -78,  -115
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    42,     7,    15,    16,    17,    43,
      25,    44,    45,    46,   110,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    93,    82,    83
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    23,    62,    63,     6,    65,   119,   122,   -10,   -10,
      12,    68,   137,    13,    69,    73,   172,    71,     9,    19,
      10,   -10,   125,   126,   127,   128,   195,    18,    66,   199,
     108,   129,   152,   130,    80,    81,     8,    70,   137,   109,
      72,    85,    86,   131,   137,   167,    91,    92,   111,   196,
     112,    99,   200,   113,   168,   201,   203,    14,   140,   141,
     142,   143,    20,   169,    21,   170,   -11,   144,   171,   145,
      -2,     1,    14,   152,   -47,   191,   106,   164,   202,   146,
     190,   -69,    75,     2,   107,   -12,    22,   179,   -47,    75,
     137,    75,   -47,   120,   -45,   -45,   207,   138,   -45,   166,
     176,   177,   118,   137,   242,   -45,   178,   215,   -59,   -59,
     -59,   -59,   184,   -59,    67,   187,   188,   153,   137,   -49,
     -49,   189,   237,   138,   -59,    64,   185,     1,   -59,   138,
     243,   250,   -14,   -49,   198,    74,   -14,   -49,   -15,     2,
     -13,   155,   -15,   -71,   -13,   137,   152,   -71,   206,    81,
      84,   137,   137,   137,   137,   213,   152,   152,   153,   214,
      81,   108,   152,   152,   152,   152,   221,    87,   137,   108,
     109,   223,   224,   251,   137,   138,   101,    92,   109,   111,
     -68,   112,   252,    89,   113,   138,   138,   111,   138,   112,
     -70,   253,   113,   254,   -70,   -44,   255,    -4,    -4,   -44,
     153,   153,   139,   138,   -61,   -61,   -61,   -61,   164,   -61,
      -4,   -46,   191,    88,   137,   107,   164,   244,   197,    94,
     164,    90,   154,   107,   -61,   -46,   -44,   249,   139,   -46,
     138,   153,   100,   102,   139,   103,   138,   138,   138,   138,
     138,   153,   153,   -47,   180,   248,   104,   153,   153,   153,
     153,   153,   -67,   138,   -66,   -59,   -59,   -59,   -59,   138,
     -59,   -47,   105,   154,   115,   -19,   116,   -19,   -19,   -19,
     -19,   -59,   136,   185,   121,   -59,   -19,   -19,   -19,   -19,
     139,   -19,   -19,   -19,   -19,   -19,   204,   -19,   -19,   -19,
     139,   139,   151,   139,   -47,    76,   134,   208,   136,   138,
     -48,   -48,   -49,   -49,   136,   154,   154,   -47,   139,    97,
      61,    28,    29,    30,   -48,   216,   149,   222,   -48,    31,
     -49,    33,   134,   225,   -61,   -61,   -61,   -61,   134,   -61,
     226,    40,    96,   151,    98,   139,   154,   227,   228,   -61,
     -44,   139,   139,   139,   139,   139,   154,   154,    -5,    -5,
     136,   231,   154,   154,   154,   154,   154,   149,   139,   232,
     234,    -5,   233,   136,   139,   181,   135,   -51,   -51,   235,
     182,    -6,    -6,   236,   134,   239,   240,    26,   136,    27,
      28,    29,    30,   245,    -6,   -51,   150,   134,    31,    32,
      33,    34,   135,    35,    36,    37,    38,    39,   135,   123,
      40,    41,   134,   258,   139,   136,   151,   257,   -46,   180,
      11,   136,   136,   211,   136,    24,   151,   151,   229,   -50,
     -50,     0,   151,   151,   219,   151,   -46,   150,   136,   134,
     149,     0,     0,   -50,   136,   134,   210,   -50,   212,     0,
     149,   149,     0,   133,   135,     0,   149,   218,     0,   220,
       0,   192,   134,   -51,   -51,     0,   193,   135,   134,    27,
      28,    29,    30,   148,   132,   -48,   -48,   -51,    31,   133,
      33,   -51,   135,     0,   136,   133,   -50,   -50,    95,     0,
      40,     0,     0,   -48,   147,     0,   125,   126,   127,   128,
     132,     0,     0,     0,   -50,   129,   132,   130,   134,   135,
     150,    -8,    -8,     0,   148,   135,   135,   131,   135,     0,
     150,   150,     0,     0,    -8,     0,   150,   150,     0,   150,
       0,   133,   135,    -3,    -3,   147,     0,   114,   135,   140,
     141,   142,   143,     0,   133,     0,    -3,     0,   144,     0,
     145,     0,   132,   156,     0,    27,    28,    29,    30,   133,
     146,    -7,    -7,     0,    31,   132,    33,   157,     0,   158,
     159,   160,   161,   162,    -7,   163,    40,     0,   135,     0,
     132,     0,     0,     0,     0,     0,   133,   148,   -17,   -17,
       0,     0,   209,   175,   126,   127,   128,   148,   148,    -9,
      -9,   -17,   129,   217,   130,     0,     0,   132,   147,   133,
       0,     0,    -9,     0,   131,   133,     0,     0,   147,   147,
     -59,   -59,   -59,   -59,    59,   -59,   -16,   -16,     0,   -17,
     132,   -17,   -17,   -17,   -17,   -59,   132,     0,    60,   -16,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
       0,   -17,   -17,   -17,     0,   133,   256,   -49,   -49,     0,
       0,   -17,     0,   -17,   -17,   -17,   -17,     0,   238,     0,
     -49,     0,   -17,   -17,   -17,   -17,   132,   -17,   -17,   -17,
     -17,   -17,     0,   -17,   -17,   -17,     0,   -33,   124,   -33,
     -33,   -33,   -33,     0,     0,   -46,    76,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -46,   -33,
     -33,   -33,   -32,     0,   -32,   -32,   -32,   -32,     0,     0,
     -48,   -48,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -48,   -32,   -32,   -32,   -34,     0,   -34,
     -34,   -34,   -34,     0,     0,   -50,   -50,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -50,   -34,
     -34,   -34,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,
       0,     0,     0,   -30,   -30,   -30,   -30,   117,   -30,   -30,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -35,     0,   -35,
     -35,   -35,   -35,     0,     0,     0,     0,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,   -35,   -36,     0,   -36,   -36,   -36,   -36,     0,     0,
       0,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   -36,   -36,   -37,     0,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,   -37,   -17,     0,   -17,   -17,   -17,   -17,     0,     0,
       0,     0,     0,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,     0,   -17,   -17,   -17,   -28,     0,   -28,
     -28,   -28,   -28,     0,     0,     0,     0,     0,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,
     -28,   -28,   -27,     0,   -27,   -27,   -27,   -27,     0,     0,
       0,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -31,     0,   -31,
     -31,   -31,   -31,     0,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,
     -31,   -31,   -39,     0,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,   -42,     0,   -42,
     -42,   -42,   -42,     0,     0,     0,     0,     0,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,   -42,   -43,     0,   -43,   -43,   -43,   -43,     0,     0,
       0,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,   -43,   -16,     0,   -16,
     -16,   -16,   -16,     0,     0,     0,     0,     0,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,     0,   -16,
     -16,   -16,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,
       0,     0,     0,   -30,   -30,   -30,   -30,   241,   -30,   -30,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -40,     0,   -40,
     -40,   -40,   -40,     0,     0,     0,     0,     0,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,   -40,   -41,     0,   -41,   -41,   -41,   -41,     0,     0,
       0,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   -41,   -41,   -29,     0,   -29,
     -29,   -29,   -29,     0,     0,     0,     0,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -25,     0,   -25,   -25,   -25,   -25,     0,     0,
       0,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -21,     0,   -21,
     -21,   -21,   -21,     0,     0,     0,     0,     0,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,
     -21,   -21,   -38,     0,   -38,   -38,   -38,   -38,     0,     0,
       0,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -38,   -38,   -20,     0,   -20,
     -20,   -20,   -20,     0,     0,     0,     0,     0,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,
     -20,   -20,   -22,     0,   -22,   -22,   -22,   -22,     0,     0,
       0,     0,     0,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,     0,   -22,   -22,   -22,   -23,     0,   -23,
     -23,   -23,   -23,     0,     0,     0,     0,     0,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,
     -23,   -23,   -24,     0,   -24,   -24,   -24,   -24,     0,     0,
       0,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,   -24,   -26,     0,   -26,
     -26,   -26,   -26,     0,     0,     0,     0,     0,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -26,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,
       0,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,     0,    -8,    -8,    -8,    -7,     0,    -7,
      -7,    -7,    -7,     0,     0,     0,     0,     0,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,
      -7,    -7,   -28,     0,   -28,   -28,   -28,   -28,     0,     0,
       0,     0,     0,   -28,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,   -28,   -25,     0,   -25,
     -25,   -25,   -25,     0,     0,     0,     0,     0,   -25,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -21,     0,   -21,   -21,   -21,   -21,     0,     0,
       0,     0,     0,   -21,   -21,   -21,   -21,     0,   -21,   -21,
     -21,   -21,   -21,     0,   -21,   -21,   -21,   -18,     0,   -18,
     -18,   -18,   -18,     0,     0,     0,     0,     0,   -18,   -18,
     -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,     0,   -18,
     -18,   -18,   -20,     0,   -20,   -20,   -20,   -20,     0,     0,
       0,     0,     0,   -20,   -20,   -20,   -20,     0,   -20,   -20,
     -20,   -20,   -20,     0,   -20,   -20,   -20,   -22,     0,   -22,
     -22,   -22,   -22,     0,     0,     0,     0,     0,   -22,   -22,
     -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,     0,   -22,
     -22,   -22,   -23,     0,   -23,   -23,   -23,   -23,     0,     0,
       0,     0,     0,   -23,   -23,   -23,   -23,     0,   -23,   -23,
     -23,   -23,   -23,     0,   -23,   -23,   -23,   -24,     0,   -24,
     -24,   -24,   -24,     0,     0,     0,     0,     0,   -24,   -24,
     -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -26,     0,   -26,   -26,   -26,   -26,     0,     0,
       0,     0,     0,   -26,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -27,     0,   -27,
     -27,   -27,   -27,     0,     0,     0,     0,     0,   -27,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -31,     0,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,     0,   -31,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -39,     0,   -39,
     -39,   -39,   -39,     0,     0,     0,     0,     0,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,   -39,
     -39,   -39,   -42,     0,   -42,   -42,   -42,   -42,     0,     0,
       0,     0,     0,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,   -42,   -43,     0,   -43,
     -43,   -43,   -43,     0,     0,     0,     0,     0,   -43,   -43,
     -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -40,     0,   -40,   -40,   -40,   -40,     0,     0,
       0,     0,     0,   -40,   -40,   -40,   -40,     0,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   -40,   -40,   -41,     0,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,     0,   -41,   -41,
     -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   -41,   -29,     0,   -29,   -29,   -29,   -29,     0,     0,
       0,     0,     0,   -29,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -38,     0,   -38,
     -38,   -38,   -38,     0,     0,     0,     0,     0,   -38,   -38,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,   -38,
     -38,   -38,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,
       0,     0,     0,    -8,    -8,    -8,    -8,     0,    -8,    -8,
      -8,    -8,    -8,     0,    -8,    -8,    -8,    -7,     0,    -7,
      -7,    -7,    -7,     0,     0,     0,     0,     0,    -7,    -7,
      -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,     0,    -7,
      -7,    -7,   -17,     0,   -17,   -17,   -17,   -17,     0,     0,
       0,     0,     0,   -17,   -17,   -17,   -17,     0,   -17,   -17,
     -17,   -17,   -17,     0,   -17,   -17,   -17,   -33,     0,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -32,     0,   -32,   -32,   -32,   -32,     0,     0,
       0,     0,     0,   -32,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -34,     0,   -34,
     -34,   -34,   -34,     0,     0,     0,     0,     0,   -34,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -35,     0,   -35,   -35,   -35,   -35,     0,     0,
       0,     0,     0,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -36,     0,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,     0,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,
     -36,   -36,   -37,     0,   -37,   -37,   -37,   -37,     0,     0,
       0,     0,     0,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,    26,     0,    27,
      28,    29,    30,     0,     0,     0,     0,     0,    31,    32,
      33,    34,     0,    35,    36,    37,    38,    39,     0,   123,
      40,   205,    26,     0,    27,    28,    29,    30,     0,     0,
       0,     0,     0,    31,    32,    33,    34,     0,    35,    36,
      37,    38,    39,     0,   123,    40,   230,   -16,     0,   -16,
     -16,   -16,   -16,     0,     0,     0,     0,     0,   -16,   -16,
     -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,     0,   -16,
     -16,   -16,    26,     0,    27,    28,    29,    30,     0,     0,
       0,     0,     0,    31,    32,    33,    34,     0,    35,    36,
      37,    38,    39,     0,   123,    40,   246,     0,    27,    28,
      29,    30,     0,     0,     0,     0,     0,    31,   247,    33,
     157,     0,   158,   159,   160,   161,   162,     0,   163,    40,
     165,     0,    27,    28,    29,    30,     0,     0,     0,     0,
       0,    31,     0,    33,    34,     0,    35,    36,    37,    38,
      39,     0,   123,    40,   186,   141,   142,   143,     0,   -60,
     -60,   -60,   -60,   144,   -60,   145,   -59,   -59,   -59,   -59,
     173,   -59,     0,     0,   -60,   146,   -61,   -61,   -61,   -61,
      77,   -61,   -51,   -51,   174,    78,   -59,     0,   -60,   -60,
     -60,   -60,   -61,   -60,     0,   -51,   -61,   -62,   -62,   -62,
     -62,     0,   -62,     0,   -60,     0,     0,     0,   -60,   -53,
     194,   -53,   -53,   -62,   -53,     0,     0,   -62,   -55,   -55,
     -55,   -55,     0,   -55,     0,   -53,     0,     0,     0,   -53,
     -57,   -57,   -57,   -57,   -55,   -57,     0,     0,   -55,   -58,
     -58,   -58,   -58,     0,   -58,     0,   -57,     0,     0,     0,
     -57,   -59,   -59,   -59,   -59,   -58,   -59,     0,     0,   -58,
     -64,   -64,   -64,   -64,     0,   -64,     0,     0,     0,   174,
       0,   -59,   -63,   -63,   -63,   -63,   -64,   -63,     0,     0,
     -64,   -56,   -56,   -56,   -56,     0,   -56,     0,   -63,     0,
       0,     0,   -63,   -52,   194,   -52,   -52,   -56,   -52,     0,
       0,   -56,   -54,   -54,   -54,   -54,     0,   -54,     0,   -52,
       0,     0,     0,   -52,   -65,   -65,   -65,   -65,   -54,   -65,
       0,     0,   -54,   -60,   -60,   -60,   -60,     0,   -60,     0,
     -65,     0,     0,     0,   -65,   -62,   -62,   -62,   -62,     0,
     -62,     0,     0,   -60,   -53,   183,   -53,   -53,     0,   -53,
       0,   -55,   -55,   -55,   -55,   -62,   -55,   -57,   -57,   -57,
     -57,     0,   -57,     0,   -53,   -58,   -58,   -58,   -58,     0,
     -58,   -55,     0,   -64,   -64,   -64,   -64,   -57,   -64,   -63,
     -63,   -63,   -63,     0,   -63,   -58,   -56,   -56,   -56,   -56,
       0,   -56,     0,   -64,     0,   -52,   183,   -52,   -52,   -63,
     -52,     0,   -54,   -54,   -54,   -54,   -56,   -54,   -65,   -65,
     -65,   -65,     0,   -65,     0,   -52,   -59,   -59,   -59,   -59,
       0,   -59,   -54,     0,   -62,   -62,   -62,   -62,   -65,   -62,
       0,   -59,     0,     0,    60,   -53,    79,   -53,   -53,   -62,
     -53,   -55,   -55,   -55,   -55,     0,   -55,     0,     0,     0,
     -53,     0,   -57,   -57,   -57,   -57,   -55,   -57,   -58,   -58,
     -58,   -58,     0,   -58,     0,     0,     0,   -57,     0,   -64,
     -64,   -64,   -64,   -58,   -64,   -63,   -63,   -63,   -63,     0,
     -63,     0,     0,     0,   -64,     0,   -56,   -56,   -56,   -56,
     -63,   -56,   -52,    79,   -52,   -52,     0,   -52,     0,     0,
       0,   -56,     0,   -54,   -54,   -54,   -54,   -52,   -54,   -65,
     -65,   -65,   -65,     0,   -65,     0,     0,     0,   -54,     0,
       0,     0,     0,     0,   -65
};

static const yytype_int16 yycheck[] =
{
       0,    19,    30,    31,     4,     1,   117,   121,     0,     1,
      21,    36,    40,    24,     1,    40,   123,     1,     3,    26,
       0,    13,     3,     4,     5,     6,     1,     3,    24,     1,
     102,    12,    60,    14,    59,    60,    28,    24,    66,   102,
      24,    66,    67,    24,    72,   117,    27,    72,   102,    24,
     102,    79,    24,   102,   117,     1,   163,    13,     3,     4,
       5,     6,    22,   117,     1,   117,    26,    12,   117,    14,
       0,     1,    13,   101,     8,     9,   101,   102,    24,    24,
       8,    26,     8,    13,   102,    26,    23,     8,    22,     8,
     118,     8,    26,   118,    22,    21,   174,    40,    26,   117,
     128,   129,    21,   131,    21,    26,   131,   185,     6,     7,
       8,     9,    10,    11,    24,   143,   144,    60,   146,     8,
       9,   146,   233,    66,    22,     3,    24,     1,    26,    72,
     241,   245,    22,    22,   159,    21,    26,    26,    22,    13,
      22,    21,    26,    22,    26,   173,   174,    26,   173,   174,
      26,   179,   180,   181,   182,   183,   184,   185,   101,   184,
     185,   233,   190,   191,   192,   193,   194,    21,   196,   241,
     233,   196,   197,   245,   202,   118,    22,   202,   241,   233,
      26,   233,   245,     3,   233,   128,   129,   241,   131,   241,
      22,   245,   241,   245,    26,    22,   245,     0,     1,    26,
     143,   144,    40,   146,     6,     7,     8,     9,   233,    11,
      13,     8,     9,    21,   242,   233,   241,   242,    24,    26,
     245,    21,    60,   241,    26,    22,    21,   245,    66,    26,
     173,   174,    26,    26,    72,    21,   179,   180,   181,   182,
     183,   184,   185,     8,     9,   245,    26,   190,   191,   192,
     193,   194,    26,   196,    26,     6,     7,     8,     9,   202,
      11,    26,    26,   101,    21,     1,    21,     3,     4,     5,
       6,    22,    40,    24,    26,    26,    12,    13,    14,    15,
     118,    17,    18,    19,    20,    21,    21,    23,    24,    25,
     128,   129,    60,   131,     8,     9,    40,    26,    66,   242,
       8,     9,     8,     9,    72,   143,   144,    21,   146,    77,
       3,     4,     5,     6,    22,    26,    60,    26,    26,    12,
      26,    14,    66,    21,     6,     7,     8,     9,    72,    11,
      21,    24,    76,   101,    78,   173,   174,     3,    21,    21,
      26,   179,   180,   181,   182,   183,   184,   185,     0,     1,
     118,    26,   190,   191,   192,   193,   194,   101,   196,    26,
      21,    13,    26,   131,   202,     6,    40,     8,     9,    26,
      11,     0,     1,    26,   118,    21,    21,     1,   146,     3,
       4,     5,     6,    26,    13,    26,    60,   131,    12,    13,
      14,    15,    66,    17,    18,    19,    20,    21,    72,    23,
      24,    25,   146,    21,   242,   173,   174,     3,     8,     9,
       4,   179,   180,   181,   182,    20,   184,   185,   202,     8,
       9,    -1,   190,   191,   192,   193,    26,   101,   196,   173,
     174,    -1,    -1,    22,   202,   179,   180,    26,   182,    -1,
     184,   185,    -1,    40,   118,    -1,   190,   191,    -1,   193,
      -1,     6,   196,     8,     9,    -1,    11,   131,   202,     3,
       4,     5,     6,    60,    40,     8,     9,    22,    12,    66,
      14,    26,   146,    -1,   242,    72,     8,     9,    75,    -1,
      24,    -1,    -1,    26,    60,    -1,     3,     4,     5,     6,
      66,    -1,    -1,    -1,    26,    12,    72,    14,   242,   173,
     174,     0,     1,    -1,   101,   179,   180,    24,   182,    -1,
     184,   185,    -1,    -1,    13,    -1,   190,   191,    -1,   193,
      -1,   118,   196,     0,     1,   101,    -1,   103,   202,     3,
       4,     5,     6,    -1,   131,    -1,    13,    -1,    12,    -1,
      14,    -1,   118,     1,    -1,     3,     4,     5,     6,   146,
      24,     0,     1,    -1,    12,   131,    14,    15,    -1,    17,
      18,    19,    20,    21,    13,    23,    24,    -1,   242,    -1,
     146,    -1,    -1,    -1,    -1,    -1,   173,   174,     0,     1,
      -1,    -1,   179,     3,     4,     5,     6,   184,   185,     0,
       1,    13,    12,   190,    14,    -1,    -1,   173,   174,   196,
      -1,    -1,    13,    -1,    24,   202,    -1,    -1,   184,   185,
       6,     7,     8,     9,    10,    11,     0,     1,    -1,     1,
     196,     3,     4,     5,     6,    21,   202,    -1,    24,    13,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,   242,    28,     8,     9,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,   234,    -1,
      21,    -1,    12,    13,    14,    15,   242,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,    -1,     1,    28,     3,
       4,     5,     6,    -1,    -1,     8,     9,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    21,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       8,     9,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    21,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     8,     9,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    21,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
       1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    14,    15,    -1,    17,    18,    19,    20,
      21,    -1,    23,    24,     3,     4,     5,     6,    -1,     6,
       7,     8,     9,    12,    11,    14,     6,     7,     8,     9,
      10,    11,    -1,    -1,    21,    24,     6,     7,     8,     9,
       6,    11,     8,     9,    24,    11,    26,    -1,     6,     7,
       8,     9,    22,    11,    -1,    21,    26,     6,     7,     8,
       9,    -1,    11,    -1,    22,    -1,    -1,    -1,    26,     6,
       7,     8,     9,    22,    11,    -1,    -1,    26,     6,     7,
       8,     9,    -1,    11,    -1,    22,    -1,    -1,    -1,    26,
       6,     7,     8,     9,    22,    11,    -1,    -1,    26,     6,
       7,     8,     9,    -1,    11,    -1,    22,    -1,    -1,    -1,
      26,     6,     7,     8,     9,    22,    11,    -1,    -1,    26,
       6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,    24,
      -1,    26,     6,     7,     8,     9,    22,    11,    -1,    -1,
      26,     6,     7,     8,     9,    -1,    11,    -1,    22,    -1,
      -1,    -1,    26,     6,     7,     8,     9,    22,    11,    -1,
      -1,    26,     6,     7,     8,     9,    -1,    11,    -1,    22,
      -1,    -1,    -1,    26,     6,     7,     8,     9,    22,    11,
      -1,    -1,    26,     6,     7,     8,     9,    -1,    11,    -1,
      22,    -1,    -1,    -1,    26,     6,     7,     8,     9,    -1,
      11,    -1,    -1,    26,     6,     7,     8,     9,    -1,    11,
      -1,     6,     7,     8,     9,    26,    11,     6,     7,     8,
       9,    -1,    11,    -1,    26,     6,     7,     8,     9,    -1,
      11,    26,    -1,     6,     7,     8,     9,    26,    11,     6,
       7,     8,     9,    -1,    11,    26,     6,     7,     8,     9,
      -1,    11,    -1,    26,    -1,     6,     7,     8,     9,    26,
      11,    -1,     6,     7,     8,     9,    26,    11,     6,     7,
       8,     9,    -1,    11,    -1,    26,     6,     7,     8,     9,
      -1,    11,    26,    -1,     6,     7,     8,     9,    26,    11,
      -1,    21,    -1,    -1,    24,     6,     7,     8,     9,    21,
      11,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      21,    -1,     6,     7,     8,     9,    21,    11,     6,     7,
       8,     9,    -1,    11,    -1,    -1,    -1,    21,    -1,     6,
       7,     8,     9,    21,    11,     6,     7,     8,     9,    -1,
      11,    -1,    -1,    -1,    21,    -1,     6,     7,     8,     9,
      21,    11,     6,     7,     8,     9,    -1,    11,    -1,    -1,
      -1,    21,    -1,     6,     7,     8,     9,    21,    11,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    13,    30,    31,    32,    33,    34,    28,     3,
       0,    32,    21,    24,    13,    35,    36,    37,     3,    26,
      22,     1,    23,    38,    37,    39,     1,     3,     4,     5,
       6,    12,    13,    14,    15,    17,    18,    19,    20,    21,
      24,    25,    33,    38,    40,    41,    42,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    10,
      24,     3,    53,    53,     3,     1,    24,    24,    47,     1,
      24,     1,    24,    47,    21,     8,     9,     6,    11,     7,
      47,    47,    57,    58,    26,    47,    47,    21,    21,     3,
      21,    27,    47,    56,    26,    49,    50,    52,    50,    53,
      26,    22,    26,    21,    26,    26,    47,    38,    41,    42,
      43,    44,    45,    46,    48,    21,    21,    16,    21,    43,
      47,    26,    40,    23,    28,     3,     4,     5,     6,    12,
      14,    24,    48,    49,    50,    51,    52,    53,    54,    55,
       3,     4,     5,     6,    12,    14,    24,    48,    49,    50,
      51,    52,    53,    54,    55,    21,     1,    15,    17,    18,
      19,    20,    21,    23,    47,     1,    38,    41,    42,    44,
      45,    46,    39,    10,    24,     3,    53,    53,    47,     8,
       9,     6,    11,     7,    10,    24,     3,    53,    53,    47,
       8,     9,     6,    11,     7,     1,    24,    24,    47,     1,
      24,     1,    24,    39,    21,    25,    47,    57,    26,    49,
      50,    52,    50,    53,    47,    57,    26,    49,    50,    52,
      50,    53,    26,    47,    47,    21,    21,     3,    21,    56,
      25,    26,    26,    26,    21,    26,    26,    43,    48,    21,
      21,    16,    21,    43,    47,    26,     1,    13,    33,    38,
      40,    41,    42,    44,    45,    46,    28,     3,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    29,    30,    31,    31,    32,    32,    33,    33,    34,
      34,    35,    35,    36,    36,    37,    38,    38,    39,    39,
      40,    40,    40,    40,    40,    40,    40,    41,    41,    42,
      42,    42,    43,    43,    43,    43,    43,    43,    44,    45,
      46,    46,    46,    46,    47,    47,    48,    48,    49,    49,
      50,    50,    51,    51,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    54,    54,    55,    56,    56,    57,    57,
      58,    58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     2,     6,
       1,     1,     0,     3,     1,     2,     3,     1,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     7,
       5,     3,     1,     1,     1,     1,     1,     1,     9,     3,
       5,     5,     3,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
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
#line 105 "./src/cipl_syn.y"
                  {
    (yyval.node) = (yyvsp[0].node);
    root = (yyval.node);
  }
#line 1984 "cipl_syn.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 111 "./src/cipl_syn.y"
                              {
    (yyval.node) = createNode("invisible node");
    (yyval.node)->children[0] = (yyvsp[-1].node);
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 1994 "cipl_syn.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 116 "./src/cipl_syn.y"
                { (yyval.node) = (yyvsp[0].node); 
  }
#line 2001 "cipl_syn.tab.c"
    break;

  case 5: /* declaration: variableDeclaration  */
#line 120 "./src/cipl_syn.y"
                      { (yyval.node) = (yyvsp[0].node); }
#line 2007 "cipl_syn.tab.c"
    break;

  case 6: /* declaration: functionDeclaration  */
#line 121 "./src/cipl_syn.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 2013 "cipl_syn.tab.c"
    break;

  case 7: /* variableDeclaration: TYPE ID SEMICOLON  */
#line 124 "./src/cipl_syn.y"
                    {
    newSymbol((yyvsp[-1].token).content, (yyvsp[-2].token).content, 0, currentScope->id, table);
    (yyval.node) = createNode("variable declaration");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token), -1);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), getSymbolType(table, (yyvsp[-1].token).content, currentScope->id));
  }
#line 2024 "cipl_syn.tab.c"
    break;

  case 8: /* variableDeclaration: error ';'  */
#line 130 "./src/cipl_syn.y"
              {yyerrok;}
#line 2030 "cipl_syn.tab.c"
    break;

  case 9: /* functionDeclaration: TYPE ID OPEN_PAREN params CLOSE_PAREN compoundStmt  */
#line 134 "./src/cipl_syn.y"
                                                      {
    newSymbol((yyvsp[-4].token).content,  (yyvsp[-5].token).content, 1, currentScope->id, table);
    (yyval.node) = createNode("function declaration");
    (yyval.node)->children[0] = addLeaf((yyvsp[-5].token), -1);
    (yyval.node)->children[1] = addLeaf((yyvsp[-4].token), getSymbolType(table, (yyvsp[-4].token).content, currentScope->id));
    (yyval.node)->children[2] = (yyvsp[-2].node);
    (yyval.node)->children[3] = (yyvsp[0].node);
  }
#line 2043 "cipl_syn.tab.c"
    break;

  case 10: /* functionDeclaration: error  */
#line 142 "./src/cipl_syn.y"
          {yyerrok;}
#line 2049 "cipl_syn.tab.c"
    break;

  case 11: /* params: paramList  */
#line 145 "./src/cipl_syn.y"
            { (yyval.node) = (yyvsp[0].node); }
#line 2055 "cipl_syn.tab.c"
    break;

  case 12: /* params: %empty  */
#line 146 "./src/cipl_syn.y"
            { (yyval.node) = NULL; }
#line 2061 "cipl_syn.tab.c"
    break;

  case 13: /* paramList: paramList COMMA param  */
#line 149 "./src/cipl_syn.y"
                        {
    (yyval.node) = createNode("invisible node");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 2071 "cipl_syn.tab.c"
    break;

  case 14: /* paramList: param  */
#line 154 "./src/cipl_syn.y"
          { (yyval.node) = (yyvsp[0].node); }
#line 2077 "cipl_syn.tab.c"
    break;

  case 15: /* param: TYPE ID  */
#line 157 "./src/cipl_syn.y"
          {
    newSymbol((yyvsp[0].token).content,  (yyvsp[-1].token).content, 2, scopeCounting+1, table);
    (yyval.node) = createNode("param");
    (yyval.node)->children[0] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[1] = addLeaf((yyvsp[0].token), getSymbolType(table, (yyvsp[0].token).content, currentScope->id+1));
  }
#line 2088 "cipl_syn.tab.c"
    break;

  case 16: /* compoundStmt: OPEN_CURLY statementList CLOSE_CURLY  */
#line 165 "./src/cipl_syn.y"
                                        {
    (yyval.node) = createNode("invisible node");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token), -1);
    (yyval.node)->children[1] = (yyvsp[-1].node);
    (yyval.node)->children[2] = addLeaf((yyvsp[0].token), -1);
  }
#line 2099 "cipl_syn.tab.c"
    break;

  case 17: /* compoundStmt: error  */
#line 171 "./src/cipl_syn.y"
          {yyerrok;}
#line 2105 "cipl_syn.tab.c"
    break;

  case 18: /* statementList: statementList statement  */
#line 174 "./src/cipl_syn.y"
                          {
    (yyval.node) = createNode("invisible node");
    (yyval.node)->children[0] = (yyvsp[-1].node);
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 2115 "cipl_syn.tab.c"
    break;

  case 19: /* statementList: %empty  */
#line 179 "./src/cipl_syn.y"
            { (yyval.node) = NULL; }
#line 2121 "cipl_syn.tab.c"
    break;

  case 20: /* statement: expressionStmt  */
#line 182 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2127 "cipl_syn.tab.c"
    break;

  case 21: /* statement: compoundStmt  */
#line 183 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2133 "cipl_syn.tab.c"
    break;

  case 22: /* statement: conditionalStmt  */
#line 184 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2139 "cipl_syn.tab.c"
    break;

  case 23: /* statement: loopStmt  */
#line 185 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2145 "cipl_syn.tab.c"
    break;

  case 24: /* statement: returnStmt  */
#line 186 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2151 "cipl_syn.tab.c"
    break;

  case 25: /* statement: variableDeclaration  */
#line 187 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2157 "cipl_syn.tab.c"
    break;

  case 26: /* statement: inOutStmt  */
#line 188 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2163 "cipl_syn.tab.c"
    break;

  case 27: /* expressionStmt: expression SEMICOLON  */
#line 191 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[-1].node); }
#line 2169 "cipl_syn.tab.c"
    break;

  case 28: /* expressionStmt: SEMICOLON  */
#line 192 "./src/cipl_syn.y"
                          { (yyval.node) = NULL; }
#line 2175 "cipl_syn.tab.c"
    break;

  case 29: /* conditionalStmt: IF OPEN_PAREN expression CLOSE_PAREN conditionalBody ELSE conditionalBody  */
#line 195 "./src/cipl_syn.y"
                                                                            {
    (yyval.node) = createNode("if else statment");
    (yyval.node)->children[0] = addLeaf((yyvsp[-6].token), -1);
    (yyval.node)->children[1] = (yyvsp[-4].node);
    (yyval.node)->children[2] = (yyvsp[-2].node);
    (yyval.node)->children[3] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[4] = (yyvsp[0].node);
  }
#line 2188 "cipl_syn.tab.c"
    break;

  case 30: /* conditionalStmt: IF OPEN_PAREN expression CLOSE_PAREN conditionalBody  */
#line 203 "./src/cipl_syn.y"
                                                         {
    (yyval.node) = createNode("if statment");
    (yyval.node)->children[0] = addLeaf((yyvsp[-4].token), -1);
    (yyval.node)->children[1] = (yyvsp[-2].node);
    (yyval.node)->children[2] = (yyvsp[0].node);
  }
#line 2199 "cipl_syn.tab.c"
    break;

  case 31: /* conditionalStmt: IF error CLOSE_PAREN  */
#line 209 "./src/cipl_syn.y"
                         {yyerrok;}
#line 2205 "cipl_syn.tab.c"
    break;

  case 32: /* conditionalBody: expressionStmt  */
#line 212 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2211 "cipl_syn.tab.c"
    break;

  case 33: /* conditionalBody: compoundStmt  */
#line 213 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2217 "cipl_syn.tab.c"
    break;

  case 34: /* conditionalBody: conditionalStmt  */
#line 214 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2223 "cipl_syn.tab.c"
    break;

  case 35: /* conditionalBody: loopStmt  */
#line 215 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2229 "cipl_syn.tab.c"
    break;

  case 36: /* conditionalBody: returnStmt  */
#line 216 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2235 "cipl_syn.tab.c"
    break;

  case 37: /* conditionalBody: inOutStmt  */
#line 217 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2241 "cipl_syn.tab.c"
    break;

  case 38: /* loopStmt: FOR OPEN_PAREN expression SEMICOLON logicExpression SEMICOLON expression CLOSE_PAREN statement  */
#line 220 "./src/cipl_syn.y"
                                                                                                 {
    (yyval.node) = createNode("for statment");
    (yyval.node)->children[0] = addLeaf((yyvsp[-8].token), -1);
    (yyval.node)->children[1] = (yyvsp[-6].node);
    (yyval.node)->children[2] = (yyvsp[-4].node);
    (yyval.node)->children[3] = (yyvsp[-2].node);
    (yyval.node)->children[4] = (yyvsp[0].node);
  }
#line 2254 "cipl_syn.tab.c"
    break;

  case 39: /* returnStmt: RETURN expression SEMICOLON  */
#line 230 "./src/cipl_syn.y"
                              {
    (yyval.node) = createNode("return statment");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token), -1);
    (yyval.node)->children[1] = (yyvsp[-1].node);
    // TODO: check return type
  }
#line 2265 "cipl_syn.tab.c"
    break;

  case 40: /* inOutStmt: INPUT OPEN_PAREN ID CLOSE_PAREN SEMICOLON  */
#line 238 "./src/cipl_syn.y"
                                            {
    (yyval.node) = createNode("input");
    (yyval.node)->children[0] = addLeaf((yyvsp[-4].token), -1);
    (yyval.node)->children[1] = addLeaf((yyvsp[-2].token), getSymbolType(table, (yyvsp[-2].token).content, currentScope->id));
    // TODO: check io args
  }
#line 2276 "cipl_syn.tab.c"
    break;

  case 41: /* inOutStmt: OUTPUT OPEN_PAREN outputArgs CLOSE_PAREN SEMICOLON  */
#line 244 "./src/cipl_syn.y"
                                                        {
    (yyval.node) = createNode("output");
    (yyval.node)->children[1] = addLeaf((yyvsp[-4].token), -1);
    (yyval.node)->children[2] = (yyvsp[-2].node);
    // TODO: check io args
  }
#line 2287 "cipl_syn.tab.c"
    break;

  case 42: /* inOutStmt: INPUT error SEMICOLON  */
#line 250 "./src/cipl_syn.y"
                          {yyerrok;}
#line 2293 "cipl_syn.tab.c"
    break;

  case 43: /* inOutStmt: OUTPUT error SEMICOLON  */
#line 251 "./src/cipl_syn.y"
                           {yyerrok;}
#line 2299 "cipl_syn.tab.c"
    break;

  case 44: /* expression: ID OP_ASSIG expression  */
#line 254 "./src/cipl_syn.y"
                          {
    (yyval.node) = createNode("assign expression");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token), getSymbolType(table, (yyvsp[-2].token).content, currentScope->id));
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveType((yyvsp[-1].token), (yyval.node)->children[0], (yyvsp[0].node));
  }
#line 2311 "cipl_syn.tab.c"
    break;

  case 45: /* expression: logicExpression  */
#line 261 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2317 "cipl_syn.tab.c"
    break;

  case 46: /* logicExpression: logicExpression OP_LOGIC relatExpression  */
#line 264 "./src/cipl_syn.y"
                                            {
    (yyval.node) = createNode("logic expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = 0; // always integer
  }
#line 2329 "cipl_syn.tab.c"
    break;

  case 47: /* logicExpression: relatExpression  */
#line 271 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2335 "cipl_syn.tab.c"
    break;

  case 48: /* relatExpression: relatExpression OP_RELAT listExpression  */
#line 274 "./src/cipl_syn.y"
                                            {
    (yyval.node) = createNode("relational expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveType((yyvsp[-1].token), (yyvsp[-2].node), (yyvsp[0].node));
  }
#line 2347 "cipl_syn.tab.c"
    break;

  case 49: /* relatExpression: listExpression  */
#line 281 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2353 "cipl_syn.tab.c"
    break;

  case 50: /* listExpression: addExpression OP_LIST listExpression  */
#line 284 "./src/cipl_syn.y"
                                            {
    (yyval.node) = createNode("list expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveType((yyvsp[-1].token), (yyvsp[-2].node), (yyvsp[0].node));
  }
#line 2365 "cipl_syn.tab.c"
    break;

  case 51: /* listExpression: addExpression  */
#line 291 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2371 "cipl_syn.tab.c"
    break;

  case 52: /* addExpression: addExpression OP_ADD mulExpression  */
#line 294 "./src/cipl_syn.y"
                                     {
    (yyval.node) = createNode("additive expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveType((yyvsp[-1].token), (yyvsp[-2].node), (yyvsp[0].node));
  }
#line 2383 "cipl_syn.tab.c"
    break;

  case 53: /* addExpression: mulExpression  */
#line 301 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2389 "cipl_syn.tab.c"
    break;

  case 54: /* mulExpression: mulExpression OP_MUL factor  */
#line 304 "./src/cipl_syn.y"
                              {
    (yyval.node) = createNode("multiplicative expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[2] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveType((yyvsp[-1].token), (yyvsp[-2].node), (yyvsp[0].node));
  }
#line 2401 "cipl_syn.tab.c"
    break;

  case 55: /* mulExpression: factor  */
#line 311 "./src/cipl_syn.y"
           { (yyval.node) = (yyvsp[0].node); }
#line 2407 "cipl_syn.tab.c"
    break;

  case 56: /* factor: OPEN_PAREN expression CLOSE_PAREN  */
#line 314 "./src/cipl_syn.y"
                                    {
    (yyval.node) = createNode("parenthesis expression");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token), -1);
    (yyval.node)->children[1] = (yyvsp[-1].node);
    (yyval.node)->children[2] = addLeaf((yyvsp[0].token), -1);
    (yyval.node)->nodeType = (yyvsp[-1].node)->nodeType;
  }
#line 2419 "cipl_syn.tab.c"
    break;

  case 57: /* factor: unaryExpression  */
#line 321 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2425 "cipl_syn.tab.c"
    break;

  case 58: /* factor: call  */
#line 322 "./src/cipl_syn.y"
         { (yyval.node) = (yyvsp[0].node); }
#line 2431 "cipl_syn.tab.c"
    break;

  case 59: /* factor: ID  */
#line 323 "./src/cipl_syn.y"
       {
    (yyval.node) = addLeaf((yyvsp[0].token), getSymbolType(table, (yyvsp[0].token).content, currentScope->id));
  }
#line 2439 "cipl_syn.tab.c"
    break;

  case 60: /* factor: FLOAT  */
#line 326 "./src/cipl_syn.y"
          {
    (yyval.node) = addLeaf((yyvsp[0].token), 1);
  }
#line 2447 "cipl_syn.tab.c"
    break;

  case 61: /* factor: INT  */
#line 329 "./src/cipl_syn.y"
        {
    (yyval.node) = addLeaf((yyvsp[0].token), 0);
  }
#line 2455 "cipl_syn.tab.c"
    break;

  case 62: /* factor: NIL  */
#line 332 "./src/cipl_syn.y"
        {
    (yyval.node) = addLeaf((yyvsp[0].token), 4);
  }
#line 2463 "cipl_syn.tab.c"
    break;

  case 63: /* unaryExpression: UN_OP factor  */
#line 337 "./src/cipl_syn.y"
               {
    (yyval.node) = createNode("unary expression");
    (yyval.node)->children[0] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[1] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveUnaryType((yyvsp[-1].token), (yyvsp[0].node));
  }
#line 2474 "cipl_syn.tab.c"
    break;

  case 64: /* unaryExpression: OP_ADD factor  */
#line 343 "./src/cipl_syn.y"
                  {
    (yyval.node) = createNode("signed expression");
    (yyval.node)->children[0] = addLeaf((yyvsp[-1].token), -1);
    (yyval.node)->children[1] = (yyvsp[0].node);
    (yyval.node)->nodeType = solveUnaryType((yyvsp[-1].token), (yyvsp[0].node));
  }
#line 2485 "cipl_syn.tab.c"
    break;

  case 65: /* call: ID OPEN_PAREN args CLOSE_PAREN  */
#line 351 "./src/cipl_syn.y"
                                 {
    (yyval.node) = createNode("function call");
    int type = getSymbolType(table, (yyvsp[-3].token).content, currentScope->id);
    (yyval.node)->children[0] = addLeaf((yyvsp[-3].token), type);
    (yyval.node)->children[1] = (yyvsp[-1].node);
    (yyval.node)->nodeType = type;
  }
#line 2497 "cipl_syn.tab.c"
    break;

  case 66: /* outputArgs: expression  */
#line 360 "./src/cipl_syn.y"
             { (yyval.node) = (yyvsp[0].node); }
#line 2503 "cipl_syn.tab.c"
    break;

  case 67: /* outputArgs: STRING  */
#line 361 "./src/cipl_syn.y"
           {
    (yyval.node) = addLeaf((yyvsp[0].token), 5);
  }
#line 2511 "cipl_syn.tab.c"
    break;

  case 68: /* args: argList  */
#line 366 "./src/cipl_syn.y"
          { (yyval.node) = (yyvsp[0].node); }
#line 2517 "cipl_syn.tab.c"
    break;

  case 69: /* args: %empty  */
#line 367 "./src/cipl_syn.y"
            { (yyval.node) = NULL; }
#line 2523 "cipl_syn.tab.c"
    break;

  case 70: /* argList: argList COMMA expression  */
#line 370 "./src/cipl_syn.y"
                           {
    (yyval.node) = createNode("arguments list");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 2533 "cipl_syn.tab.c"
    break;

  case 71: /* argList: expression  */
#line 375 "./src/cipl_syn.y"
               { (yyval.node) = (yyvsp[0].node); }
#line 2539 "cipl_syn.tab.c"
    break;


#line 2543 "cipl_syn.tab.c"

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

#line 377 "./src/cipl_syn.y"


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
