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
#define YYLAST   2197

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  245

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
       0,   107,   107,   113,   118,   122,   123,   126,   132,   136,
     144,   147,   148,   151,   156,   159,   167,   173,   176,   181,
     184,   185,   186,   187,   188,   189,   190,   193,   194,   197,
     205,   211,   214,   224,   231,   236,   241,   242,   245,   251,
     254,   260,   263,   269,   272,   278,   281,   287,   290,   296,
     299,   305,   306,   307,   310,   313,   316,   321,   326,   333,
     340,   341,   346,   347,   350,   355
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

#define YYPACT_NINF (-158)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-66)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     187,     8,    17,    29,    92,    94,   166,   176,   322,    43,
    -158,   439,   465,    37,    50,    52,   147,   210,   218,     1,
      72,   471,  1158,   634,   235,  1183,   542,   645,   275,  2077,
      77,    77,    85,  2083,     6,    75,   264,     9,    10,  1208,
     394,   692,  1233,  1258,  1283,  1308,  1333,  1358,  1383,  1408,
      95,    18,   386,   401,  2176,  2094,  2100,  2111,  2117,   264,
     133,  2058,  2128,  2134,   110,    70,   394,   264,   111,   113,
     143,   172,    13,   177,  1433,    77,    77,    77,    77,    77,
     193,   265,   212,   331,  1458,   223,   198,  1483,  1508,   225,
    1533,   226,   232,   233,  2145,   709,   734,  2151,   759,  2162,
    2168,   409,  1783,    77,   214,   251,   333,   599,   127,  1558,
    1583,  1807,   394,  1608,   253,  1807,  1633,  1158,  1658,   526,
    1964,  1970,   423,   423,  1980,   394,    40,     5,   132,   584,
    1986,  1992,  2002,  2008,   565,   501,   572,   477,   477,  1832,
     394,    64,    49,    51,   338,  1838,  1859,  1865,  1871,  1683,
     105,   195,    21,   256,   264,    27,    31,   625,  1158,   658,
     683,   708,   733,   758,   783,   808,   277,  1708,   394,   133,
    1892,  2014,  2024,   259,   423,   423,   423,   423,   423,   409,
     133,  1826,  1898,  1904,   271,   477,   477,   477,   477,   477,
     833,   286,   282,   394,   264,   288,   294,   314,   304,    13,
    1733,   858,  1758,   307,   317,  2030,   196,   220,  2036,   247,
    2046,   350,   324,  1925,   201,   416,  1931,   451,  1937,   883,
     908,   330,   340,   933,   958,   341,   983,   349,  1008,  2052,
    1958,  1783,    77,   362,   365,  1033,   209,  1058,  1083,  1783,
     394,  1108,   363,  1783,  1133
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,  -158,  -158,   387,     0,  -158,  -158,  -158,   346,   -18,
    -114,   -59,   -56,   -53,   -37,   -32,   -23,     2,   428,   345,
     276,   318,   194,   -25,   125,   152,   197,  -157,  -158
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
       6,    23,    21,   167,     6,    62,    63,    65,   -10,   -10,
      69,    71,   204,   -41,   175,   131,   119,   120,   121,   122,
       9,   -10,   192,   212,    22,   123,    75,   124,   196,    10,
      66,   -41,   198,    70,    72,   146,     8,   125,    68,   -39,
      91,   131,    73,   107,   200,   193,   161,   131,   174,   162,
      14,   197,   113,    18,    99,   199,   116,   -41,   186,   -43,
     -43,    80,    81,   -12,    12,   163,   -39,    13,    85,    86,
     164,   -41,   185,   -43,    92,   -41,   146,   -43,    19,   165,
      61,    28,    29,    30,   160,    14,   -39,   131,    64,    31,
     -39,    33,    -2,     1,    -4,    -4,    84,   171,   172,    67,
     131,    40,   159,   106,   166,     2,   -17,    -4,   -17,   -17,
     -17,   -17,   182,   183,   114,   131,    74,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   173,   -17,   -17,
     -17,   149,    87,   190,    88,    75,   134,   135,   136,   137,
     -43,   -43,   184,   131,   146,   138,    89,   139,   112,   131,
     131,   131,   131,   210,   146,   146,   195,   140,   -43,   -63,
     146,   146,   146,   146,   218,   132,    -5,    -5,   131,    20,
     203,    81,   235,   -11,   131,   161,    -6,    -6,   162,    -5,
     241,   211,    81,   161,   244,   147,   162,   161,     1,    -6,
     162,   132,   133,    90,   163,   221,   222,   132,   191,   164,
       2,    92,   163,    94,   -40,   175,   163,   164,   165,   -40,
     186,   164,   148,   160,   -38,   131,   165,    75,   133,   103,
     165,   160,   -40,   -40,   133,   160,   147,   -40,   -42,   -42,
     240,   159,   -14,   166,   130,   109,   -14,   132,   100,   159,
     -15,   166,   242,   159,   -15,   166,   -42,   132,   132,   102,
     132,   104,   -61,   148,   145,   -44,   -44,   -13,   -60,   105,
     130,   -13,   147,   147,   133,   132,   130,    27,    28,    29,
      30,    97,   110,   -44,   133,   133,    31,   133,    33,   115,
     194,   -55,   -55,   -55,   -55,   205,   -55,   -65,    40,   148,
     148,   -65,   133,   132,   147,   145,   -55,   213,   201,   132,
     132,   132,   132,   132,   147,   147,   130,   219,   220,   223,
     147,   147,   147,   147,   147,   224,   128,   225,   132,   130,
     133,   148,    -8,    -8,   132,   226,   133,   133,   133,   133,
     133,   148,   148,   -38,   130,    -8,   143,   148,   148,   148,
     148,   148,   128,   229,   187,   133,   -45,   -45,   128,   188,
     230,   133,    96,   101,    98,   -64,   231,   -62,   129,   -64,
     -45,   232,   130,   145,   -45,   132,    24,   233,   130,   130,
     208,   130,   -38,   145,   145,   234,   -38,   143,   144,   145,
     145,   216,   145,   237,   129,   127,   238,   130,   128,   243,
     129,    11,   133,   130,   -41,    76,   227,   119,   120,   121,
     122,   128,     0,     0,     0,   142,   123,   -41,   124,   -43,
     -43,   127,   134,   135,   136,   137,   128,   127,   125,   144,
      95,   138,   -43,   139,   -42,   -42,   170,   120,   121,   122,
     129,     0,     0,   140,   130,   123,     0,   124,   -42,    -3,
      -3,     0,   -42,   129,   128,   143,   142,   125,     0,     0,
     128,   207,    -3,   209,     0,   143,   143,   127,   129,   -44,
     -44,   143,   215,     0,   217,    -7,    -7,     0,   126,   128,
     127,   -17,   -17,   -44,     0,   128,     0,   -44,    -7,     0,
     181,   135,   136,   137,   -17,   127,   129,   144,   141,   138,
       0,   139,   129,   129,   126,   129,     0,   144,   144,     0,
     126,   140,     0,   144,   144,     0,   144,   -55,   -55,   -55,
     -55,   129,   -55,   127,   142,     0,   128,   129,     0,   206,
       0,     0,     0,   -55,   142,   142,     0,   -55,     0,   141,
     214,   108,   -53,   -53,   -53,   -53,   168,   -53,   127,     0,
     126,     0,     0,   -17,   127,   -17,   -17,   -17,   -17,     0,
     169,     0,   -53,   126,   -17,   -17,   -17,   -17,   129,   -17,
     -17,   -17,   -17,   -17,     0,   -17,   -17,   -17,   126,     0,
     118,   -53,   -53,   -53,   -53,   179,   -53,     0,   -54,   -54,
     -54,   -54,     0,   -54,     0,   127,     0,   -53,     0,   180,
     176,   -53,   -45,   -45,   -54,   177,   126,   141,   -54,     0,
     -30,     0,   -30,   -30,   -30,   -30,     0,   141,   141,     0,
     -45,   -30,   -30,   -30,   -30,   111,   -30,   -30,   -30,   -30,
     -30,   126,   -30,   -30,   -30,     0,   -28,   126,   -28,   -28,
     -28,   -28,     0,     0,    -9,    -9,     0,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,    -9,   -28,   -28,
     -28,   -53,   -53,   -53,   -53,    59,   -53,     0,     0,   -25,
     236,   -25,   -25,   -25,   -25,     0,   -53,     0,   126,    60,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
       0,   -25,   -25,   -25,   -21,     0,   -21,   -21,   -21,   -21,
       0,     0,   -16,   -16,     0,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,   -16,   -21,   -21,   -21,   -20,
       0,   -20,   -20,   -20,   -20,     0,     0,   -40,    76,     0,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
     -40,   -20,   -20,   -20,   -22,     0,   -22,   -22,   -22,   -22,
       0,     0,   -42,   -42,     0,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -42,   -22,   -22,   -22,   -23,
       0,   -23,   -23,   -23,   -23,     0,     0,   -44,   -44,     0,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     -44,   -23,   -23,   -23,   -24,     0,   -24,   -24,   -24,   -24,
       0,     0,     0,     0,     0,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -26,
       0,   -26,   -26,   -26,   -26,     0,     0,     0,     0,     0,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,    -8,     0,    -8,    -8,    -8,    -8,
       0,     0,     0,     0,     0,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,   -27,
       0,   -27,   -27,   -27,   -27,     0,     0,     0,     0,     0,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,   -27,   -27,   -27,    -7,     0,    -7,    -7,    -7,    -7,
       0,     0,     0,     0,     0,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,   -31,
       0,   -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -33,     0,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -36,
       0,   -36,   -36,   -36,   -36,     0,     0,     0,     0,     0,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -37,     0,   -37,   -37,   -37,   -37,
       0,     0,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -16,
       0,   -16,   -16,   -16,   -16,     0,     0,     0,     0,     0,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
       0,   -16,   -16,   -16,   -30,     0,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,     0,   -30,   -30,   -30,   -30,   239,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -34,
       0,   -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -35,     0,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -29,
       0,   -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -32,     0,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -19,
       0,   -19,   -19,   -19,   -19,     0,     0,     0,     0,     0,
     -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,
       0,   -19,   -19,   -19,    26,     0,    27,    28,    29,    30,
       0,     0,     0,     0,     0,    31,    32,    33,    34,     0,
      35,    36,    37,    38,    39,     0,   117,    40,    41,   -28,
       0,   -28,   -28,   -28,   -28,     0,     0,     0,     0,     0,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -25,     0,   -25,   -25,   -25,   -25,
       0,     0,     0,     0,     0,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -21,
       0,   -21,   -21,   -21,   -21,     0,     0,     0,     0,     0,
     -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,
       0,   -21,   -21,   -21,   -18,     0,   -18,   -18,   -18,   -18,
       0,     0,     0,     0,     0,   -18,   -18,   -18,   -18,     0,
     -18,   -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -20,
       0,   -20,   -20,   -20,   -20,     0,     0,     0,     0,     0,
     -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,
       0,   -20,   -20,   -20,   -22,     0,   -22,   -22,   -22,   -22,
       0,     0,     0,     0,     0,   -22,   -22,   -22,   -22,     0,
     -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -23,
       0,   -23,   -23,   -23,   -23,     0,     0,     0,     0,     0,
     -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,
       0,   -23,   -23,   -23,   -24,     0,   -24,   -24,   -24,   -24,
       0,     0,     0,     0,     0,   -24,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -26,
       0,   -26,   -26,   -26,   -26,     0,     0,     0,     0,     0,
     -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,   -27,     0,   -27,   -27,   -27,   -27,
       0,     0,     0,     0,     0,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -31,
       0,   -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -33,     0,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,     0,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -36,
       0,   -36,   -36,   -36,   -36,     0,     0,     0,     0,     0,
     -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -37,     0,   -37,   -37,   -37,   -37,
       0,     0,     0,     0,     0,   -37,   -37,   -37,   -37,     0,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -34,
       0,   -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -35,     0,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -29,
       0,   -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,
     -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -32,     0,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,    -8,
       0,    -8,    -8,    -8,    -8,     0,     0,     0,     0,     0,
      -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,
       0,    -8,    -8,    -8,    -7,     0,    -7,    -7,    -7,    -7,
       0,     0,     0,     0,     0,    -7,    -7,    -7,    -7,     0,
      -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,    26,
       0,    27,    28,    29,    30,     0,     0,     0,     0,     0,
      31,    32,    33,    34,     0,    35,    36,    37,    38,    39,
       0,   117,    40,   202,    26,     0,    27,    28,    29,    30,
       0,     0,     0,     0,     0,    31,    32,    33,    34,     0,
      35,    36,    37,    38,    39,     0,   117,    40,   228,   -16,
       0,   -16,   -16,   -16,   -16,     0,     0,     0,     0,     0,
     -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,
       0,   -16,   -16,   -16,   150,     0,    27,    28,    29,    30,
       0,     0,     0,     0,     0,    31,   151,    33,   152,     0,
     153,   154,   155,   156,   157,     0,   158,    40,    26,     0,
      27,    28,    29,    30,     0,     0,     0,     0,     0,    31,
      32,    33,    34,     0,    35,    36,    37,    38,    39,     0,
     117,    40,   -53,   -53,   -53,   -53,     0,   -53,   -56,   -56,
     -56,   -56,     0,   -56,   -47,   189,   -47,   -47,   -53,   -47,
     180,     0,   -53,     0,   -56,     0,     0,     0,   -56,     0,
     -47,     0,     0,     0,   -47,   -49,   -49,   -49,   -49,     0,
     -49,   -51,   -51,   -51,   -51,     0,   -51,   -52,   -52,   -52,
     -52,   -49,   -52,     0,     0,   -49,     0,   -51,     0,     0,
       0,   -51,     0,   -52,     0,     0,     0,   -52,   -53,   -53,
     -53,   -53,     0,   -53,   -58,   -58,   -58,   -58,     0,   -58,
     -57,   -57,   -57,   -57,     0,   -57,   169,     0,   -53,     0,
     -58,     0,     0,     0,   -58,     0,   -57,     0,     0,     0,
     -57,   -50,   -50,   -50,   -50,     0,   -50,   -46,   189,   -46,
     -46,     0,   -46,   -48,   -48,   -48,   -48,   -50,   -48,     0,
       0,   -50,     0,   -46,     0,     0,     0,   -46,     0,   -48,
       0,     0,     0,   -48,   -59,   -59,   -59,   -59,     0,   -59,
     -55,   -55,   -55,   -55,     0,   -55,   -54,   -54,   -54,   -54,
     -59,   -54,     0,     0,   -59,     0,   -56,   -56,   -56,   -56,
     -55,   -56,   -47,   178,   -47,   -47,   -54,   -47,   -49,   -49,
     -49,   -49,     0,   -49,     0,     0,   -56,     0,   -51,   -51,
     -51,   -51,   -47,   -51,   -52,   -52,   -52,   -52,   -49,   -52,
     -58,   -58,   -58,   -58,     0,   -58,     0,     0,   -51,     0,
     -57,   -57,   -57,   -57,   -52,   -57,   -50,   -50,   -50,   -50,
     -58,   -50,   -46,   178,   -46,   -46,     0,   -46,     0,     0,
     -57,     0,   -48,   -48,   -48,   -48,   -50,   -48,   -59,   -59,
     -59,   -59,   -46,   -59,   -53,   -53,   -53,   -53,     0,   -53,
       0,     0,   -48,     0,     0,     0,     0,     0,   -59,   -53,
       0,     0,    60,   -54,   -54,   -54,   -54,     0,   -54,   -56,
     -56,   -56,   -56,     0,   -56,     0,     0,     0,   -54,     0,
     -47,    79,   -47,   -47,   -56,   -47,   -49,   -49,   -49,   -49,
       0,   -49,     0,     0,     0,   -47,     0,   -51,   -51,   -51,
     -51,   -49,   -51,   -52,   -52,   -52,   -52,     0,   -52,     0,
       0,     0,   -51,     0,   -58,   -58,   -58,   -58,   -52,   -58,
     -57,   -57,   -57,   -57,     0,   -57,     0,     0,     0,   -58,
       0,   -50,   -50,   -50,   -50,   -57,   -50,   -46,    79,   -46,
     -46,     0,   -46,     0,     0,     0,   -50,     0,   -48,   -48,
     -48,   -48,   -46,   -48,   -59,   -59,   -59,   -59,     0,   -59,
       0,     0,    77,   -48,   -45,   -45,     0,    78,     0,   -59,
       0,     0,     0,     0,     0,     0,     0,   -45
};

static const yytype_int16 yycheck[] =
{
       0,    19,     1,   117,     4,    30,    31,     1,     0,     1,
       1,     1,   169,     8,     9,    40,     3,     4,     5,     6,
       3,    13,     1,   180,    23,    12,     8,    14,     1,     0,
      24,    26,     1,    24,    24,    60,    28,    24,    36,    21,
      27,    66,    40,   102,   158,    24,   102,    72,     8,   102,
      13,    24,   111,     3,    79,    24,   115,     8,     9,     8,
       9,    59,    60,    26,    21,   102,    26,    24,    66,    67,
     102,    22,     8,    22,    72,    26,   101,    26,    26,   102,
       3,     4,     5,     6,   102,    13,    22,   112,     3,    12,
      26,    14,     0,     1,     0,     1,    26,   122,   123,    24,
     125,    24,   102,   101,   102,    13,     1,    13,     3,     4,
       5,     6,   137,   138,   112,   140,    21,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,   125,    23,    24,
      25,    21,    21,    28,    21,     8,     3,     4,     5,     6,
       8,     9,   140,   168,   169,    12,     3,    14,    21,   174,
     175,   176,   177,   178,   179,   180,   154,    24,    26,    26,
     185,   186,   187,   188,   189,    40,     0,     1,   193,    22,
     168,   169,   231,    26,   199,   231,     0,     1,   231,    13,
     239,   179,   180,   239,   243,    60,   239,   243,     1,    13,
     243,    66,    40,    21,   231,   193,   194,    72,     3,   231,
      13,   199,   239,    26,     8,     9,   243,   239,   231,     8,
       9,   243,    60,   231,    21,   240,   239,     8,    66,    21,
     243,   239,    26,    22,    72,   243,   101,    26,     8,     9,
      21,   231,    22,   231,    40,    21,    26,   112,    26,   239,
      22,   239,   240,   243,    26,   243,    26,   122,   123,    26,
     125,    26,    26,   101,    60,     8,     9,    22,    26,    26,
      66,    26,   137,   138,   112,   140,    72,     3,     4,     5,
       6,    77,    21,    26,   122,   123,    12,   125,    14,    26,
      24,     6,     7,     8,     9,    26,    11,    22,    24,   137,
     138,    26,   140,   168,   169,   101,    21,    26,    21,   174,
     175,   176,   177,   178,   179,   180,   112,    21,    26,    21,
     185,   186,   187,   188,   189,    21,    40,     3,   193,   125,
     168,   169,     0,     1,   199,    21,   174,   175,   176,   177,
     178,   179,   180,    26,   140,    13,    60,   185,   186,   187,
     188,   189,    66,    26,     6,   193,     8,     9,    72,    11,
      26,   199,    76,    22,    78,    22,    26,    26,    40,    26,
      22,    21,   168,   169,    26,   240,    20,    26,   174,   175,
     176,   177,    22,   179,   180,    26,    26,   101,    60,   185,
     186,   187,   188,    21,    66,    40,    21,   193,   112,    26,
      72,     4,   240,   199,     8,     9,   199,     3,     4,     5,
       6,   125,    -1,    -1,    -1,    60,    12,    21,    14,     8,
       9,    66,     3,     4,     5,     6,   140,    72,    24,   101,
      75,    12,    21,    14,     8,     9,     3,     4,     5,     6,
     112,    -1,    -1,    24,   240,    12,    -1,    14,    22,     0,
       1,    -1,    26,   125,   168,   169,   101,    24,    -1,    -1,
     174,   175,    13,   177,    -1,   179,   180,   112,   140,     8,
       9,   185,   186,    -1,   188,     0,     1,    -1,    40,   193,
     125,     0,     1,    22,    -1,   199,    -1,    26,    13,    -1,
       3,     4,     5,     6,    13,   140,   168,   169,    60,    12,
      -1,    14,   174,   175,    66,   177,    -1,   179,   180,    -1,
      72,    24,    -1,   185,   186,    -1,   188,     6,     7,     8,
       9,   193,    11,   168,   169,    -1,   240,   199,    -1,   174,
      -1,    -1,    -1,    22,   179,   180,    -1,    26,    -1,   101,
     185,   103,     6,     7,     8,     9,    10,    11,   193,    -1,
     112,    -1,    -1,     1,   199,     3,     4,     5,     6,    -1,
      24,    -1,    26,   125,    12,    13,    14,    15,   240,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,   140,    -1,
      28,     6,     7,     8,     9,    10,    11,    -1,     6,     7,
       8,     9,    -1,    11,    -1,   240,    -1,    22,    -1,    24,
       6,    26,     8,     9,    22,    11,   168,   169,    26,    -1,
       1,    -1,     3,     4,     5,     6,    -1,   179,   180,    -1,
      26,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   193,    23,    24,    25,    -1,     1,   199,     3,     4,
       5,     6,    -1,    -1,     0,     1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    13,    23,    24,
      25,     6,     7,     8,     9,    10,    11,    -1,    -1,     1,
     232,     3,     4,     5,     6,    -1,    21,    -1,   240,    24,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     0,     1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    13,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     8,     9,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      21,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
      -1,    -1,     8,     9,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    21,    23,    24,    25,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     8,     9,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      21,    23,    24,    25,     1,    -1,     3,     4,     5,     6,
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
      17,    18,    19,    20,    21,    -1,    23,    24,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,     6,     7,     8,     9,    -1,    11,     6,     7,
       8,     9,    -1,    11,     6,     7,     8,     9,    22,    11,
      24,    -1,    26,    -1,    22,    -1,    -1,    -1,    26,    -1,
      22,    -1,    -1,    -1,    26,     6,     7,     8,     9,    -1,
      11,     6,     7,     8,     9,    -1,    11,     6,     7,     8,
       9,    22,    11,    -1,    -1,    26,    -1,    22,    -1,    -1,
      -1,    26,    -1,    22,    -1,    -1,    -1,    26,     6,     7,
       8,     9,    -1,    11,     6,     7,     8,     9,    -1,    11,
       6,     7,     8,     9,    -1,    11,    24,    -1,    26,    -1,
      22,    -1,    -1,    -1,    26,    -1,    22,    -1,    -1,    -1,
      26,     6,     7,     8,     9,    -1,    11,     6,     7,     8,
       9,    -1,    11,     6,     7,     8,     9,    22,    11,    -1,
      -1,    26,    -1,    22,    -1,    -1,    -1,    26,    -1,    22,
      -1,    -1,    -1,    26,     6,     7,     8,     9,    -1,    11,
       6,     7,     8,     9,    -1,    11,     6,     7,     8,     9,
      22,    11,    -1,    -1,    26,    -1,     6,     7,     8,     9,
      26,    11,     6,     7,     8,     9,    26,    11,     6,     7,
       8,     9,    -1,    11,    -1,    -1,    26,    -1,     6,     7,
       8,     9,    26,    11,     6,     7,     8,     9,    26,    11,
       6,     7,     8,     9,    -1,    11,    -1,    -1,    26,    -1,
       6,     7,     8,     9,    26,    11,     6,     7,     8,     9,
      26,    11,     6,     7,     8,     9,    -1,    11,    -1,    -1,
      26,    -1,     6,     7,     8,     9,    26,    11,     6,     7,
       8,     9,    26,    11,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    26,    21,
      -1,    -1,    24,     6,     7,     8,     9,    -1,    11,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    21,    -1,
       6,     7,     8,     9,    21,    11,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    21,    -1,     6,     7,     8,
       9,    21,    11,     6,     7,     8,     9,    -1,    11,    -1,
      -1,    -1,    21,    -1,     6,     7,     8,     9,    21,    11,
       6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,    21,
      -1,     6,     7,     8,     9,    21,    11,     6,     7,     8,
       9,    -1,    11,    -1,    -1,    -1,    21,    -1,     6,     7,
       8,     9,    21,    11,     6,     7,     8,     9,    -1,    11,
      -1,    -1,     6,    21,     8,     9,    -1,    11,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21
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
      21,    27,    46,    55,    26,    48,    49,    51,    49,    52,
      26,    22,    26,    21,    26,    26,    46,    40,    47,    21,
      21,    16,    21,    40,    46,    26,    40,    23,    28,     3,
       4,     5,     6,    12,    14,    24,    47,    48,    49,    50,
      51,    52,    53,    54,     3,     4,     5,     6,    12,    14,
      24,    47,    48,    49,    50,    51,    52,    53,    54,    21,
       1,    13,    15,    17,    18,    19,    20,    21,    23,    33,
      38,    41,    42,    43,    44,    45,    46,    39,    10,    24,
       3,    52,    52,    46,     8,     9,     6,    11,     7,    10,
      24,     3,    52,    52,    46,     8,     9,     6,    11,     7,
      28,     3,     1,    24,    24,    46,     1,    24,     1,    24,
      39,    21,    25,    46,    56,    26,    48,    49,    51,    49,
      52,    46,    56,    26,    48,    49,    51,    49,    52,    21,
      26,    46,    46,    21,    21,     3,    21,    55,    25,    26,
      26,    26,    21,    26,    26,    40,    47,    21,    21,    16,
      21,    40,    46,    26,    40
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
#line 107 "./src/cipl_syn.y"
                  {
    (yyval.node) = (yyvsp[0].node);
    root = (yyval.node);
  }
#line 1896 "cipl_syn.tab.c"
    break;

  case 3: /* declarationList: declarationList declaration  */
#line 113 "./src/cipl_syn.y"
                              {
    (yyval.node) = createNode("invisible node");
    (yyval.node)->children[0] = (yyvsp[-1].node);
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 1906 "cipl_syn.tab.c"
    break;

  case 4: /* declarationList: declaration  */
#line 118 "./src/cipl_syn.y"
                { (yyval.node) = (yyvsp[0].node); 
  }
#line 1913 "cipl_syn.tab.c"
    break;

  case 5: /* declaration: variableDeclaration  */
#line 122 "./src/cipl_syn.y"
                      { (yyval.node) = (yyvsp[0].node); }
#line 1919 "cipl_syn.tab.c"
    break;

  case 6: /* declaration: functionDeclaration  */
#line 123 "./src/cipl_syn.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1925 "cipl_syn.tab.c"
    break;

  case 7: /* variableDeclaration: TYPE ID SEMICOLON  */
#line 126 "./src/cipl_syn.y"
                    {
    (yyval.node) = createNode("variable declaration");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token));
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token));
    newSymbol((yyvsp[-1].token).content, (yyvsp[-2].token).content, 0, currentScope->id, table);
  }
#line 1936 "cipl_syn.tab.c"
    break;

  case 8: /* variableDeclaration: error ';'  */
#line 132 "./src/cipl_syn.y"
              {yyerrok;}
#line 1942 "cipl_syn.tab.c"
    break;

  case 9: /* functionDeclaration: TYPE ID OPEN_PAREN params CLOSE_PAREN compoundStmt  */
#line 136 "./src/cipl_syn.y"
                                                      {
    (yyval.node) = createNode("function declaration");
    (yyval.node)->children[0] = addLeaf((yyvsp[-5].token));
    (yyval.node)->children[1] = addLeaf((yyvsp[-4].token));
    (yyval.node)->children[2] = (yyvsp[-2].node);
    (yyval.node)->children[3] = (yyvsp[0].node);
    newSymbol((yyvsp[-4].token).content,  (yyvsp[-5].token).content, 1, currentScope->id, table);
  }
#line 1955 "cipl_syn.tab.c"
    break;

  case 10: /* functionDeclaration: error  */
#line 144 "./src/cipl_syn.y"
          {yyerrok;}
#line 1961 "cipl_syn.tab.c"
    break;

  case 11: /* params: paramList  */
#line 147 "./src/cipl_syn.y"
            { (yyval.node) = (yyvsp[0].node); }
#line 1967 "cipl_syn.tab.c"
    break;

  case 12: /* params: %empty  */
#line 148 "./src/cipl_syn.y"
            { (yyval.node) = NULL; }
#line 1973 "cipl_syn.tab.c"
    break;

  case 13: /* paramList: paramList COMMA param  */
#line 151 "./src/cipl_syn.y"
                        {
    (yyval.node) = createNode("invisible node");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 1983 "cipl_syn.tab.c"
    break;

  case 14: /* paramList: param  */
#line 156 "./src/cipl_syn.y"
          { (yyval.node) = (yyvsp[0].node); }
#line 1989 "cipl_syn.tab.c"
    break;

  case 15: /* param: TYPE ID  */
#line 159 "./src/cipl_syn.y"
          {
    (yyval.node) = createNode("param");
    (yyval.node)->children[0] = addLeaf((yyvsp[-1].token));
    (yyval.node)->children[1] = addLeaf((yyvsp[0].token));
    newSymbol((yyvsp[0].token).content,  (yyvsp[-1].token).content, 2, scopeCounting+1, table);
  }
#line 2000 "cipl_syn.tab.c"
    break;

  case 16: /* compoundStmt: OPEN_CURLY statementList CLOSE_CURLY  */
#line 167 "./src/cipl_syn.y"
                                        {
    (yyval.node) = createNode("invisible node");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token));
    (yyval.node)->children[1] = (yyvsp[-1].node);
    (yyval.node)->children[2] = addLeaf((yyvsp[0].token));
  }
#line 2011 "cipl_syn.tab.c"
    break;

  case 17: /* compoundStmt: error  */
#line 173 "./src/cipl_syn.y"
          {yyerrok;}
#line 2017 "cipl_syn.tab.c"
    break;

  case 18: /* statementList: statementList statement  */
#line 176 "./src/cipl_syn.y"
                          {
    (yyval.node) = createNode("invisible node");
    (yyval.node)->children[0] = (yyvsp[-1].node);
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 2027 "cipl_syn.tab.c"
    break;

  case 19: /* statementList: %empty  */
#line 181 "./src/cipl_syn.y"
            { (yyval.node) = NULL; }
#line 2033 "cipl_syn.tab.c"
    break;

  case 20: /* statement: expressionStmt  */
#line 184 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2039 "cipl_syn.tab.c"
    break;

  case 21: /* statement: compoundStmt  */
#line 185 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2045 "cipl_syn.tab.c"
    break;

  case 22: /* statement: conditionalStmt  */
#line 186 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2051 "cipl_syn.tab.c"
    break;

  case 23: /* statement: loopStmt  */
#line 187 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2057 "cipl_syn.tab.c"
    break;

  case 24: /* statement: returnStmt  */
#line 188 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2063 "cipl_syn.tab.c"
    break;

  case 25: /* statement: variableDeclaration  */
#line 189 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2069 "cipl_syn.tab.c"
    break;

  case 26: /* statement: inOutStmt  */
#line 190 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 2075 "cipl_syn.tab.c"
    break;

  case 27: /* expressionStmt: expression SEMICOLON  */
#line 193 "./src/cipl_syn.y"
                          { (yyval.node) = (yyvsp[-1].node); }
#line 2081 "cipl_syn.tab.c"
    break;

  case 28: /* expressionStmt: SEMICOLON  */
#line 194 "./src/cipl_syn.y"
                          { (yyval.node) = addLeaf((yyvsp[0].token)); }
#line 2087 "cipl_syn.tab.c"
    break;

  case 29: /* conditionalStmt: IF OPEN_PAREN expression CLOSE_PAREN statement ELSE statement  */
#line 197 "./src/cipl_syn.y"
                                                                {
    (yyval.node) = createNode("if else statment");
    (yyval.node)->children[0] = addLeaf((yyvsp[-6].token));
    (yyval.node)->children[1] = (yyvsp[-4].node);
    (yyval.node)->children[2] = (yyvsp[-2].node);
    (yyval.node)->children[3] = addLeaf((yyvsp[-1].token));
    (yyval.node)->children[4] = (yyvsp[0].node);
  }
#line 2100 "cipl_syn.tab.c"
    break;

  case 30: /* conditionalStmt: IF OPEN_PAREN expression CLOSE_PAREN statement  */
#line 205 "./src/cipl_syn.y"
                                                   {
    (yyval.node) = createNode("if statment");
    (yyval.node)->children[0] = addLeaf((yyvsp[-4].token));
    (yyval.node)->children[1] = (yyvsp[-2].node);
    (yyval.node)->children[2] = (yyvsp[0].node);
  }
#line 2111 "cipl_syn.tab.c"
    break;

  case 31: /* conditionalStmt: IF error CLOSE_PAREN  */
#line 211 "./src/cipl_syn.y"
                         {yyerrok;}
#line 2117 "cipl_syn.tab.c"
    break;

  case 32: /* loopStmt: FOR OPEN_PAREN expression SEMICOLON logicExpression SEMICOLON expression CLOSE_PAREN statement  */
#line 214 "./src/cipl_syn.y"
                                                                                                 {
    (yyval.node) = createNode("for statment");
    (yyval.node)->children[0] = addLeaf((yyvsp[-8].token));
    (yyval.node)->children[1] = (yyvsp[-6].node);
    (yyval.node)->children[2] = (yyvsp[-4].node);
    (yyval.node)->children[3] = (yyvsp[-2].node);
    (yyval.node)->children[4] = (yyvsp[0].node);
  }
#line 2130 "cipl_syn.tab.c"
    break;

  case 33: /* returnStmt: RETURN expression SEMICOLON  */
#line 224 "./src/cipl_syn.y"
                              {
    (yyval.node) = createNode("return statment");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token));
    (yyval.node)->children[1] = (yyvsp[-1].node);
  }
#line 2140 "cipl_syn.tab.c"
    break;

  case 34: /* inOutStmt: INPUT OPEN_PAREN ID CLOSE_PAREN SEMICOLON  */
#line 231 "./src/cipl_syn.y"
                                            {
    (yyval.node) = createNode("input");
    (yyval.node)->children[0] = addLeaf((yyvsp[-4].token));
    (yyval.node)->children[1] = addLeaf((yyvsp[-2].token));
  }
#line 2150 "cipl_syn.tab.c"
    break;

  case 35: /* inOutStmt: OUTPUT OPEN_PAREN outputArgs CLOSE_PAREN SEMICOLON  */
#line 236 "./src/cipl_syn.y"
                                                        {
    (yyval.node) = createNode("output");
    (yyval.node)->children[1] = addLeaf((yyvsp[-4].token));
    (yyval.node)->children[2] = (yyvsp[-2].node);
  }
#line 2160 "cipl_syn.tab.c"
    break;

  case 36: /* inOutStmt: INPUT error SEMICOLON  */
#line 241 "./src/cipl_syn.y"
                          {yyerrok;}
#line 2166 "cipl_syn.tab.c"
    break;

  case 37: /* inOutStmt: OUTPUT error SEMICOLON  */
#line 242 "./src/cipl_syn.y"
                           {yyerrok;}
#line 2172 "cipl_syn.tab.c"
    break;

  case 38: /* expression: ID OP_ASSIG expression  */
#line 245 "./src/cipl_syn.y"
                          {
    (yyval.node) = createNode("assign expression");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token));
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token));
    (yyval.node)->children[2] = (yyvsp[0].node);
  }
#line 2183 "cipl_syn.tab.c"
    break;

  case 39: /* expression: logicExpression  */
#line 251 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2189 "cipl_syn.tab.c"
    break;

  case 40: /* logicExpression: logicExpression OP_LOGIC relatExpression  */
#line 254 "./src/cipl_syn.y"
                                            {
    (yyval.node) = createNode("logic expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token));
    (yyval.node)->children[2] = (yyvsp[0].node);
  }
#line 2200 "cipl_syn.tab.c"
    break;

  case 41: /* logicExpression: relatExpression  */
#line 260 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2206 "cipl_syn.tab.c"
    break;

  case 42: /* relatExpression: relatExpression OP_RELAT listExpression  */
#line 263 "./src/cipl_syn.y"
                                            {
    (yyval.node) = createNode("relational expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token));
    (yyval.node)->children[2] = (yyvsp[0].node);
  }
#line 2217 "cipl_syn.tab.c"
    break;

  case 43: /* relatExpression: listExpression  */
#line 269 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2223 "cipl_syn.tab.c"
    break;

  case 44: /* listExpression: addExpression OP_LIST listExpression  */
#line 272 "./src/cipl_syn.y"
                                            {
    (yyval.node) = createNode("list expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token));
    (yyval.node)->children[2] = (yyvsp[0].node);
  }
#line 2234 "cipl_syn.tab.c"
    break;

  case 45: /* listExpression: addExpression  */
#line 278 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2240 "cipl_syn.tab.c"
    break;

  case 46: /* addExpression: addExpression OP_ADD mulExpression  */
#line 281 "./src/cipl_syn.y"
                                     {
    (yyval.node) = createNode("additive expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token));
    (yyval.node)->children[2] = (yyvsp[0].node);
  }
#line 2251 "cipl_syn.tab.c"
    break;

  case 47: /* addExpression: mulExpression  */
#line 287 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2257 "cipl_syn.tab.c"
    break;

  case 48: /* mulExpression: mulExpression OP_MUL factor  */
#line 290 "./src/cipl_syn.y"
                              {
    (yyval.node) = createNode("multiplicative expression");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = addLeaf((yyvsp[-1].token));
    (yyval.node)->children[2] = (yyvsp[0].node);
  }
#line 2268 "cipl_syn.tab.c"
    break;

  case 49: /* mulExpression: factor  */
#line 296 "./src/cipl_syn.y"
           { (yyval.node) = (yyvsp[0].node); }
#line 2274 "cipl_syn.tab.c"
    break;

  case 50: /* factor: OPEN_PAREN expression CLOSE_PAREN  */
#line 299 "./src/cipl_syn.y"
                                    {
    (yyval.node) = createNode("parenthesis expression");
    (yyval.node)->children[0] = addLeaf((yyvsp[-2].token));
    (yyval.node)->children[1] = (yyvsp[-1].node);
    (yyval.node)->children[2] = addLeaf((yyvsp[0].token));
  }
#line 2285 "cipl_syn.tab.c"
    break;

  case 51: /* factor: unaryExpression  */
#line 305 "./src/cipl_syn.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2291 "cipl_syn.tab.c"
    break;

  case 52: /* factor: call  */
#line 306 "./src/cipl_syn.y"
         { (yyval.node) = (yyvsp[0].node); }
#line 2297 "cipl_syn.tab.c"
    break;

  case 53: /* factor: ID  */
#line 307 "./src/cipl_syn.y"
       {
    (yyval.node) = addLeaf((yyvsp[0].token));
  }
#line 2305 "cipl_syn.tab.c"
    break;

  case 54: /* factor: FLOAT  */
#line 310 "./src/cipl_syn.y"
          {
    (yyval.node) = addLeaf((yyvsp[0].token));
  }
#line 2313 "cipl_syn.tab.c"
    break;

  case 55: /* factor: INT  */
#line 313 "./src/cipl_syn.y"
        {
    (yyval.node) = addLeaf((yyvsp[0].token));
  }
#line 2321 "cipl_syn.tab.c"
    break;

  case 56: /* factor: NIL  */
#line 316 "./src/cipl_syn.y"
        {
    (yyval.node) = addLeaf((yyvsp[0].token));
  }
#line 2329 "cipl_syn.tab.c"
    break;

  case 57: /* unaryExpression: UN_OP factor  */
#line 321 "./src/cipl_syn.y"
               {
    (yyval.node) = createNode("unary expression");
    (yyval.node)->children[0] = addLeaf((yyvsp[-1].token));
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 2339 "cipl_syn.tab.c"
    break;

  case 58: /* unaryExpression: OP_ADD factor  */
#line 326 "./src/cipl_syn.y"
                  {
    (yyval.node) = createNode("signed expression");
    (yyval.node)->children[0] = addLeaf((yyvsp[-1].token));
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 2349 "cipl_syn.tab.c"
    break;

  case 59: /* call: ID OPEN_PAREN args CLOSE_PAREN  */
#line 333 "./src/cipl_syn.y"
                                 {
    (yyval.node) = createNode("function call");
    (yyval.node)->children[0] = addLeaf((yyvsp[-3].token));
    (yyval.node)->children[1] = (yyvsp[-1].node);
  }
#line 2359 "cipl_syn.tab.c"
    break;

  case 60: /* outputArgs: expression  */
#line 340 "./src/cipl_syn.y"
             { (yyval.node) = (yyvsp[0].node); }
#line 2365 "cipl_syn.tab.c"
    break;

  case 61: /* outputArgs: STRING  */
#line 341 "./src/cipl_syn.y"
           {
    (yyval.node) = addLeaf((yyvsp[0].token));
  }
#line 2373 "cipl_syn.tab.c"
    break;

  case 62: /* args: argList  */
#line 346 "./src/cipl_syn.y"
          { (yyval.node) = (yyvsp[0].node); }
#line 2379 "cipl_syn.tab.c"
    break;

  case 63: /* args: %empty  */
#line 347 "./src/cipl_syn.y"
            { (yyval.node) = NULL; }
#line 2385 "cipl_syn.tab.c"
    break;

  case 64: /* argList: argList COMMA expression  */
#line 350 "./src/cipl_syn.y"
                           {
    (yyval.node) = createNode("arguments list");
    (yyval.node)->children[0] = (yyvsp[-2].node);
    (yyval.node)->children[1] = (yyvsp[0].node);
  }
#line 2395 "cipl_syn.tab.c"
    break;

  case 65: /* argList: expression  */
#line 355 "./src/cipl_syn.y"
               { (yyval.node) = (yyvsp[0].node); }
#line 2401 "cipl_syn.tab.c"
    break;


#line 2405 "cipl_syn.tab.c"

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

#line 357 "./src/cipl_syn.y"


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
