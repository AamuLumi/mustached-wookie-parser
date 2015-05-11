/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "c-grammar.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdbool.h>
	#include "c-grammar.tab.h"

	extern int xxlex();
	extern int xxparse();

	extern int yylex();
	extern int yyparse();

	extern int zzlex();
	extern int zzparse();

	extern FILE* xxin;
	extern FILE* xxout;
	extern FILE* yyin;
	extern FILE* yyout;
	extern FILE* zzin;
	extern FILE* zzout;

#line 88 "c-grammar.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "c-grammar.tab.h".  */
#ifndef YY_YY_C_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_C_GRAMMAR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    I_CONSTANT = 259,
    F_CONSTANT = 260,
    STRING_LITERAL = 261,
    FUNC_NAME = 262,
    SIZEOF = 263,
    PTR_OP = 264,
    INC_OP = 265,
    DEC_OP = 266,
    LEFT_OP = 267,
    RIGHT_OP = 268,
    LE_OP = 269,
    GE_OP = 270,
    EQ_OP = 271,
    NE_OP = 272,
    AND_OP = 273,
    OR_OP = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MOD_ASSIGN = 277,
    ADD_ASSIGN = 278,
    SUB_ASSIGN = 279,
    LEFT_ASSIGN = 280,
    RIGHT_ASSIGN = 281,
    AND_ASSIGN = 282,
    XOR_ASSIGN = 283,
    OR_ASSIGN = 284,
    TYPEDEF_NAME = 285,
    ENUMERATION_CONSTANT = 286,
    TYPEDEF = 287,
    EXTERN = 288,
    STATIC = 289,
    AUTO = 290,
    REGISTER = 291,
    INLINE = 292,
    CONST = 293,
    RESTRICT = 294,
    VOLATILE = 295,
    BOOL = 296,
    CHAR = 297,
    SHORT = 298,
    INT = 299,
    LONG = 300,
    SIGNED = 301,
    UNSIGNED = 302,
    FLOAT = 303,
    DOUBLE = 304,
    VOID = 305,
    COMPLEX = 306,
    IMAGINARY = 307,
    STRUCT = 308,
    UNION = 309,
    ENUM = 310,
    ELLIPSIS = 311,
    CASE = 312,
    DEFAULT = 313,
    IF = 314,
    ELSE = 315,
    SWITCH = 316,
    WHILE = 317,
    DO = 318,
    FOR = 319,
    GOTO = 320,
    CONTINUE = 321,
    BREAK = 322,
    RETURN = 323,
    ALIGNAS = 324,
    ALIGNOF = 325,
    ATOMIC = 326,
    GENERIC = 327,
    NORETURN = 328,
    STATIC_ASSERT = 329,
    THREAD_LOCAL = 330
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_C_GRAMMAR_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 215 "c-grammar.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2359

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  305
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  515

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,     2,     2,    92,    85,     2,
      76,    77,    86,    87,    78,    88,    82,    91,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    99,
      93,    98,    94,    97,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    95,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    96,    84,    89,     2,     2,     2,
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
      75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    45,    46,    47,    48,    52,    53,    54,
      58,    62,    63,    67,    71,    72,    76,    77,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    94,    95,
      99,   100,   101,   102,   103,   104,   105,   109,   110,   111,
     112,   113,   114,   118,   119,   123,   124,   125,   126,   130,
     131,   132,   136,   137,   138,   142,   143,   144,   145,   146,
     150,   151,   152,   156,   157,   161,   162,   166,   167,   171,
     172,   176,   177,   181,   182,   186,   187,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   205,   206,
     210,   214,   215,   216,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   233,   234,   238,   239,   243,   244,
     245,   246,   247,   248,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     271,   272,   273,   277,   278,   282,   283,   287,   288,   289,
     293,   294,   295,   296,   300,   301,   305,   306,   307,   311,
     312,   313,   314,   315,   319,   320,   324,   325,   329,   333,
     334,   335,   336,   340,   341,   345,   346,   350,   351,   355,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   370,   370,   371,   372,   376,   377,   378,   379,
     383,   384,   389,   390,   394,   395,   399,   400,   401,   405,
     406,   410,   411,   415,   416,   417,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   445,   446,   447,
     451,   452,   453,   454,   458,   462,   463,   467,   468,   472,
     476,   477,   478,   479,   480,   481,   485,   486,   487,   488,
     489,   493,   494,   495,   499,   503,   504,   508,   509,   513,
     514,   518,   519,   523,   524,   528,   529,   533,   534,   538,
     539,   540,   544,   545,   549,   553,   554,   558,   559,   563,
     564,   568,   569,   573,   574,   578,   579,   580,   581,   582,
     583,   587,   588,   589,   590,   591,   595,   596,   600,   601,
     605,   609,   612,   613,   617,   618
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "STRING_LITERAL", "FUNC_NAME", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPEDEF_NAME", "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE",
  "BOOL", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT",
  "DOUBLE", "VOID", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM",
  "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO",
  "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF",
  "ATOMIC", "GENERIC", "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "'('",
  "')'", "','", "':'", "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "'='", "';'", "$accept", "primary_expression", "constant",
  "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "identifier_declarator",
  "direct_declarator", "$@1", "$@2", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "statement_no_compound",
  "labeled_statement", "open_compound", "compound_statement",
  "block_item_list", "block_item", "expression_statement", "if_expression",
  "else_expression", "switch_expression", "selection_statement",
  "while_expression", "do_no_compound", "do_while_expression", "for_ee",
  "for_eee", "for_des", "for_de", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_declaration_long",
  "function_declaration_short", "function_definition", "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    40,    41,    44,    58,
      91,    93,    46,   123,   125,    38,    42,    43,    45,   126,
      33,    47,    37,    60,    62,    94,   124,    63,    61,    59
};
# endif

#define YYPACT_NINF -356

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-356)))

#define YYTABLE_NINF -302

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2089,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,  -356,    13,     8,    26,  -356,    28,
    -356,  -356,    98,  2179,  2179,  -356,    35,  -356,  -356,  2179,
    2179,  2179,  -356,  1828,  -356,   -16,   -16,  -356,   -16,  -356,
     135,   913,  2288,  1661,  -356,    90,    24,  -356,   -45,  -356,
    1874,  -356,   -10,    39,  -356,  -356,   -16,  2217,  -356,  -356,
    -356,  -356,  -356,   500,  -356,  -356,   135,  -356,   -26,    -9,
    -356,  -356,  -356,  -356,  -356,  -356,  1683,  1705,  1705,  -356,
      82,    89,   913,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,   247,  -356,  1661,  -356,   119,   181,   275,
      68,   274,    95,   100,    94,   188,    30,  -356,   131,  2288,
     102,  2288,   142,   146,   151,   154,  -356,  -356,  -356,    24,
      90,  -356,  1419,  -356,    98,  2089,    31,  1001,   -10,  2217,
     444,  -356,    73,  -356,   170,  1661,   172,   177,   185,   190,
     733,   194,   261,   193,   195,   777,  -356,  -356,   251,  -356,
    -356,   -21,  -356,  -356,  -356,  -356,   590,  -356,  -356,   248,
    -356,  -356,  -356,   258,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,     2,  1661,    19,  -356,   913,  -356,   913,  -356,  -356,
    2288,  1661,   221,   236,   323,  -356,  -356,  1441,  1661,   325,
    -356,  1661,  1661,  1661,  1661,  1661,  1661,  1661,  1661,  1661,
    1661,  1661,  1661,  1661,  1661,  1661,  1661,  1661,  1661,  1661,
    -356,  -356,  1941,  1023,   123,  -356,   163,  -356,  -356,  -356,
     324,  -356,  -356,  -356,  -356,   238,  -356,  -356,  1397,  -356,
    -356,  -356,  2179,   227,  1265,  -356,   253,   262,  1045,  1990,
    -356,  -356,  1661,  -356,    69,  -356,   260,   733,   266,   733,
    1661,  1661,  1661,  -356,  -356,   288,  -356,  -356,  -356,  -356,
     680,   264,  -356,  -356,  -356,    99,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,  -356,  -356,  -356,  1661,  1661,  -356,
    -356,  -356,   733,  -356,   284,    29,  -356,  -356,  -356,  -356,
     292,   311,   317,   319,  -356,  1529,  -356,  -356,   229,  -356,
     182,  -356,  -356,  -356,  -356,   119,   119,   181,   181,   275,
     275,   275,   275,    68,    68,   274,    95,   100,    94,   188,
     233,  -356,    87,   326,   327,  -356,   330,  1265,  -356,   321,
     331,  1133,   163,  2043,  1155,   334,  1661,   401,  -356,    50,
    1419,   -24,  -356,  -356,  -356,   430,   354,  1265,  -356,  -356,
    1661,  -356,   357,   358,  -356,  -356,   176,  -356,  1661,  -356,
     733,  -356,   240,   289,   297,   364,   823,   823,  -356,  -356,
    -356,  -356,  -356,  -356,  1661,  -356,   361,   361,  -356,  2254,
    1397,  -356,  -356,  1661,  -356,  1661,  1771,  -356,   161,  -356,
    -356,  2135,  -356,   360,  1265,  -356,  -356,  1661,  -356,   365,
    -356,   368,  1265,  -356,   366,   367,  1177,   350,   369,  -356,
    1287,  -356,  -356,  -356,  -356,   375,  -356,  -356,   372,   376,
    -356,  -356,  -356,  -356,  -356,   733,   733,   733,  1661,  1551,
    1573,   299,   377,   301,  -356,   380,   143,  -356,  -356,  -356,
    -356,  -356,   379,   382,  -356,  -356,   383,  1265,  -356,  -356,
    1661,  -356,   384,  -356,  -356,  -356,  -356,  1419,  -356,  -356,
    -356,  -356,  -356,  -356,  -356,  -356,  -356,   303,   733,   305,
     733,   308,   370,  1661,  -356,  2254,  1661,  1309,  -356,  -356,
    -356,  -356,   386,   387,  -356,  -356,   371,  -356,  -356,   733,
    -356,  -356,   733,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,  -356
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   129,   108,   109,   110,   112,   113,   163,   159,   160,
     161,   123,   115,   116,   117,   118,   121,   122,   119,   120,
     114,   124,   125,   133,   134,     0,     0,   162,   164,     0,
     111,   299,     0,    95,    97,   127,     0,   128,   126,    99,
     101,   103,    93,     0,   296,     0,     0,   298,   153,   254,
       0,     0,     0,     0,   169,     0,   189,    91,     0,   104,
     107,   170,   168,     0,    94,    96,   132,     0,    98,   100,
     102,     1,   297,     0,   302,   303,     0,    10,   157,     0,
     154,     2,     7,     8,    11,    12,     0,     0,     0,     9,
       0,     0,     0,    37,    38,    39,    40,    41,    42,    18,
       3,     4,     6,    30,    43,     0,    45,    49,    52,    55,
      60,    63,    65,    67,    69,    71,    73,    90,     0,   141,
     202,   143,     0,     0,     0,     0,   162,   190,   188,   187,
       0,    92,     0,   304,     0,   300,   181,     0,   167,     0,
       0,   135,     0,   139,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,   261,    43,    75,
      88,     0,   259,   260,   240,   241,     0,   257,   242,   270,
     271,   243,   285,     0,   286,   287,   288,   289,   290,   244,
     245,     0,     0,     0,   149,     0,    34,     0,    31,    32,
       0,     0,     0,     0,     0,    24,    25,     0,     0,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,   140,     0,     0,   204,   201,   205,   142,   165,   158,
       0,   171,   191,   186,   105,   107,   229,   106,     0,   305,
     199,   184,     0,     0,     0,   172,    38,     0,     0,     0,
     130,   136,     0,   137,     0,   144,   148,     0,     0,     0,
       0,     0,     0,   274,   246,     0,   247,   248,   249,   250,
       0,     0,   292,   293,   294,     0,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    77,     0,     0,   262,
     256,   258,     0,   269,     0,     0,   151,   156,   150,   155,
       0,     0,     0,     0,     5,     0,    23,    20,     0,    28,
       0,    22,    46,    47,    48,    50,    51,    53,    54,    58,
      59,    56,    57,    61,    62,    64,    66,    68,    70,    72,
       0,   223,   198,     0,   193,   194,     0,     0,   207,    38,
       0,     0,   203,     0,     0,     0,     0,     0,   231,     0,
       0,     0,   235,   182,   185,     0,     0,     0,   173,   180,
       0,   179,    38,     0,   131,   146,     0,   138,     0,   251,
       0,   253,     0,     0,     0,     0,     0,     0,   291,   295,
      76,    89,   266,   265,     0,   152,    35,     0,    36,     0,
       0,    44,    21,     0,    19,     0,     0,   196,   204,   197,
     224,     0,   206,     0,     0,   208,   214,     0,   213,     0,
     225,     0,     0,   215,    38,     0,     0,     0,     0,   238,
       0,   227,   230,   234,   236,     0,   200,   175,     0,     0,
     176,   178,   145,   147,   252,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,     0,    29,    74,   192,
     195,   210,     0,     0,   212,   226,     0,     0,   216,   222,
       0,   221,     0,   239,   237,   228,   233,     0,   183,   174,
     177,   264,   263,   268,   267,   273,   272,     0,     0,     0,
       0,     0,     0,     0,    13,     0,     0,     0,    26,   209,
     211,   218,     0,     0,   219,   232,     0,   282,   281,     0,
     278,   277,     0,   276,    17,    15,    16,    27,   217,   220,
     275,   284,   283,   280,   279
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -356,  -356,  -356,  -356,  -356,  -356,  -356,   -14,  -356,  -356,
     214,  -356,   -46,   148,   183,    75,   187,   259,   257,   263,
     283,   291,  -356,   -22,    -6,  -356,   -68,   -36,   -30,    12,
    -356,   345,  -356,   -42,  -356,  -356,   337,  -105,     1,  -356,
     112,  -356,   425,  -170,  -356,   -48,  -356,  -356,   -18,  -356,
     -58,  -356,  -356,   -35,  -109,  -222,  -356,   101,  -356,    -4,
    -114,  -209,  -125,   122,  -355,  -356,   162,   -40,  -220,  -266,
     -37,   -25,   -44,  -356,   348,   -55,  -356,  -356,  -356,   -33,
    -356,  -356,  -356,  -356,  -356,  -356,  -356,   -13,   -12,  -356,
     473,  -356,  -356,  -356,  -356
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    99,   100,    78,   101,   102,   443,   444,   103,   308,
     158,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   159,   160,   287,   161,   118,    31,   134,
      58,    59,    33,    34,    35,    36,   140,   141,   120,   254,
     255,    37,    79,    80,    38,    39,    40,    41,   125,    61,
      62,   242,   425,    63,   129,   333,   334,   335,   243,   445,
     336,   226,   348,   349,   350,   351,   352,    42,   163,   263,
     264,    73,   165,   166,   167,   266,   169,   293,   170,   267,
     172,   173,   174,   175,   176,   177,   178,   268,   269,    43,
      44,    45,    46,    47,   135
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    74,    75,   121,   121,   138,   225,   237,   127,   119,
     119,    67,    32,   299,    60,   342,    48,   124,   168,   121,
     353,   128,    77,    76,   192,   119,   382,   143,   248,   117,
     133,   117,    77,   130,   240,   251,   164,   369,    66,   371,
     171,   139,    54,   162,   121,    64,    65,   122,   123,   218,
     119,    68,    69,    70,   131,    32,   346,   288,   347,   200,
     179,   180,     8,     9,    10,   467,   136,    49,   142,   183,
     137,   121,   182,   121,   423,   184,    54,   119,   289,   119,
     295,   232,   208,   209,    51,   224,   296,   275,   193,   127,
      54,   121,   121,    54,   233,   126,    49,   119,   119,   143,
     143,    54,    52,   298,    53,   239,   265,   238,   241,   258,
      56,   168,   235,   385,   341,    55,   235,   192,    49,   192,
     221,   411,   227,   117,   256,   299,   236,   219,   420,   164,
     310,   247,   467,   171,   421,   357,   162,   121,    77,   121,
     142,   142,   121,   119,   251,   119,   297,   366,   119,    55,
     434,   330,   252,   179,   180,   312,   313,   314,   190,    56,
     117,   210,   211,   396,    54,   191,    55,   223,   367,   471,
     473,   475,   253,    56,    55,   127,    56,   288,   222,    54,
     214,   300,   223,   301,    56,   303,   302,   224,    56,   342,
     216,   309,   372,   373,   374,   215,   127,    57,   379,   222,
     232,   121,   168,   223,   168,   201,   217,   119,   220,   143,
     202,   203,   497,   238,   500,   377,   365,   340,   399,   228,
     164,   487,   164,   229,   171,   422,   171,   488,   404,   230,
     117,   231,   236,   511,   332,   416,   513,   396,   356,   343,
     376,   223,   363,   344,   179,   180,   179,   180,   383,   257,
     142,   259,    55,   260,   332,   252,   194,   195,   196,   391,
     288,   261,    56,   394,   271,   104,   262,   104,   204,   205,
     270,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   380,   381,   319,   320,   321,   322,   206,   207,   127,
     212,   213,   272,   232,   273,   466,   127,   398,   304,   288,
     186,   188,   189,   457,   354,   355,   392,   393,   292,   232,
     418,   288,   395,   305,   397,   168,   441,   435,   288,   104,
     294,   439,   440,   197,   117,   238,   306,   198,   311,   199,
     345,   403,   433,   164,   358,   409,   132,   171,   415,   368,
     138,   121,   495,   359,   236,   370,   117,   119,   256,   286,
     375,   428,   315,   316,   429,   332,   232,   179,   180,   104,
     384,   398,   466,   378,   127,   238,   436,   288,   232,   386,
     477,   479,   481,   448,   437,   288,   482,   288,   484,   485,
     496,   288,   499,   288,   236,   502,   288,   447,   387,   317,
     318,   472,   474,   476,   388,   238,   104,   389,   452,   323,
     324,   453,   405,   400,   419,   401,   456,   402,   332,   232,
     462,   417,   406,   332,   236,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   426,   498,   427,   501,   121,   430,   431,
     438,   451,   238,   119,   390,   455,   454,   458,   459,   463,
     464,   492,   468,   469,   493,   512,   483,   470,   514,   486,
     489,   236,   238,   490,   491,   494,   104,   508,   509,   503,
     510,   505,   326,   325,     1,   234,   249,   504,   432,   327,
     506,   236,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     328,   181,   450,   144,    82,    83,    84,    85,    86,   329,
      87,    88,   446,   424,   291,    27,    72,     0,    29,   104,
       0,     0,     0,     0,     0,     0,     0,     0,   250,     0,
       1,    89,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,   145,   146,   147,
     104,   148,   149,   150,   151,   152,   153,   154,   155,    26,
      90,    27,    91,    28,    29,    30,    92,     0,     0,     0,
       0,     0,   104,    49,   156,    93,    94,    95,    96,    97,
      98,     0,     0,   144,    82,    83,    84,    85,    86,   157,
      87,    88,     0,     0,     0,     0,     0,     0,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,    89,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,   145,   146,   147,
       0,   148,   149,   150,   151,   152,   153,   154,   155,    26,
      90,    27,    91,    28,    29,    30,    92,     0,     0,     0,
       0,     0,     0,    49,   290,    93,    94,    95,    96,    97,
      98,     0,     0,    81,    82,    83,    84,    85,    86,   157,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,    89,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   144,    82,    83,    84,
      85,    86,     0,    87,    88,     0,     0,     0,     0,    26,
      90,    27,    91,    28,    29,    30,    92,     0,     0,     0,
       0,     0,     0,     0,    89,    93,    94,    95,    96,    97,
      98,     0,     0,     0,     0,     0,     0,     0,     0,   157,
      81,    82,    83,    84,    85,    86,     0,    87,    88,     0,
     145,   146,   147,     0,   148,   149,   150,   151,   152,   153,
     154,   155,     0,    90,     0,    91,     0,     0,    89,    92,
       0,     0,     0,     0,     0,     0,    49,     0,    93,    94,
      95,    96,    97,    98,     0,     0,    81,    82,    83,    84,
      85,    86,   157,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,    91,
       0,     0,     0,    92,    89,     0,     0,     0,     0,     0,
       0,     0,    93,    94,    95,    96,    97,    98,     0,     0,
       0,     0,     0,     0,     0,     0,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,     0,    91,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,    97,    98,     0,     0,    81,    82,    83,    84,
      85,    86,   157,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,    89,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    27,    91,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,    97,    98,    81,    82,    83,    84,    85,    86,
       0,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,    89,    87,    88,   244,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,    81,    82,
      83,    84,    85,    86,    89,    87,    88,   337,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,    90,   126,    91,     0,     0,    89,    92,     0,   360,
       0,     0,   245,     8,     9,    10,    93,   246,    95,    96,
      97,    98,     0,    90,   126,    91,     0,     0,     0,    92,
       0,     0,     0,     0,   338,     0,     0,     0,    93,   339,
      95,    96,    97,    98,     0,    90,   126,    91,     0,     0,
       0,    92,     0,     0,     0,     0,   361,     0,     0,     0,
      93,   362,    95,    96,    97,    98,    81,    82,    83,    84,
      85,    86,     0,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,    82,
      83,    84,    85,    86,    89,    87,    88,   407,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,    89,    87,    88,   412,
       0,     0,     0,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     0,    90,   126,    91,     0,     0,    89,    92,
       0,   460,     0,     0,   408,     8,     9,    10,    93,    94,
      95,    96,    97,    98,     0,    90,   126,    91,     0,     0,
       0,    92,     0,     0,     0,     0,   413,     0,     0,     0,
      93,   414,    95,    96,    97,    98,     0,    90,   126,    91,
       0,     0,     0,    92,     0,     0,     0,     0,   461,     0,
       0,     0,    93,    94,    95,    96,    97,    98,    81,    82,
      83,    84,    85,    86,     0,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,    89,    87,    88,     0,
       0,     0,     0,     8,     9,    10,     0,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    89,    87,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,   126,    91,     0,     0,
      89,    92,     0,     0,     0,     0,     0,     0,     0,     0,
      93,    94,    95,    96,    97,    98,     0,    90,     0,    91,
       0,     0,     0,    92,     0,     0,     0,   346,     0,   347,
      49,   465,    93,    94,    95,    96,    97,    98,     0,    90,
       0,    91,     0,     0,     0,    92,     0,     0,     0,   346,
       0,   347,    49,   507,    93,    94,    95,    96,    97,    98,
      81,    82,    83,    84,    85,    86,     0,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    89,    87,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
      89,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,    91,
       0,     0,    89,    92,     0,     0,     0,   346,     0,   347,
      49,     0,    93,    94,    95,    96,    97,    98,     0,    90,
       0,    91,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,    49,     0,    93,    94,    95,    96,    97,    98,
       0,    90,     0,    91,     0,     0,     0,    92,   307,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,    98,    81,    82,    83,    84,    85,    86,     0,    87,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
      89,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,    89,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,    91,     0,     0,    89,    92,     0,     0,     0,     0,
       0,     0,   390,     0,    93,    94,    95,    96,    97,    98,
       0,    90,     0,    91,     0,     0,     0,    92,   478,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,    98,     0,    90,     0,    91,     0,     0,     0,    92,
     480,     0,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,    97,    98,    81,    82,    83,    84,    85,    86,
       0,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,    89,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,    82,
      83,    84,    85,    86,    89,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,    91,     0,     0,    89,    92,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,    98,     0,    90,     0,    91,     0,     0,     0,   185,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,    97,    98,    54,    90,     0,    91,     0,     0,
       0,   187,     0,     0,     0,     0,     0,     0,     0,     0,
      93,    94,    95,    96,    97,    98,     0,     0,     0,     0,
       0,     1,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,     0,    30,   396,   331,     0,
       0,   223,     0,     0,     0,     0,     0,    56,     1,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,    29,    30,     1,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,  -301,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,   132,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,     0,    30,   222,   331,     0,
       1,   223,     0,     0,     0,     0,     0,    56,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     1,   364,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,     0,    30,     1,
     410,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,    29,    30,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   449,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     1,
      30,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,    26,     0,
      27,     0,    28,     0,    30,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     0,    27,     0,
       0,    29,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,   442,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,    27,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      25,    45,    46,    51,    52,    63,   120,   132,    56,    51,
      52,    36,     0,   183,    32,   224,     3,    53,    73,    67,
     242,    56,     3,    48,    92,    67,   292,    67,   137,    51,
      60,    53,     3,    78,     3,   140,    73,   257,     3,   259,
      73,    66,     3,    73,    92,    33,    34,    51,    52,    19,
      92,    39,    40,    41,    99,    43,    80,    78,    82,   105,
      73,    73,    38,    39,    40,   420,    76,    83,    67,    78,
      80,   119,    98,   121,    98,    84,     3,   119,    99,   121,
      78,   129,    14,    15,    76,   120,    84,   155,    92,   137,
       3,   139,   140,     3,   129,    71,    83,   139,   140,   139,
     140,     3,    76,    84,    76,   135,   150,   132,    77,   145,
      86,   166,   130,    84,   223,    76,   134,   185,    83,   187,
     119,   343,   121,   145,   142,   295,   132,    97,    78,   166,
     198,   137,   487,   166,    84,   244,   166,   185,     3,   187,
     139,   140,   190,   185,   249,   187,   182,    78,   190,    76,
     370,   219,    79,   166,   166,   201,   202,   203,    76,    86,
     182,    93,    94,    76,     3,    76,    76,    80,    99,   435,
     436,   437,    99,    86,    76,   223,    86,    78,    76,     3,
      85,   185,    80,   187,    86,   191,   190,   222,    86,   398,
      96,   197,   260,   261,   262,    95,   244,    99,    99,    76,
     248,   249,   257,    80,   259,    86,    18,   249,    77,   249,
      91,    92,   478,   238,   480,   270,   252,   223,   332,    77,
     257,    78,   259,    77,   257,   350,   259,    84,   337,    78,
     252,    77,   238,   499,   222,   344,   502,    76,   244,    76,
     270,    80,   248,    80,   257,   257,   259,   259,   292,    79,
     249,    79,    76,    76,   242,    79,     9,    10,    11,   305,
      78,    76,    86,    81,     3,    51,    76,    53,    87,    88,
      76,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,   287,   288,   208,   209,   210,   211,    12,    13,   337,
      16,    17,    99,   341,    99,   420,   344,   332,    77,    78,
      86,    87,    88,   412,    77,    78,    77,    78,    60,   357,
     346,    78,    79,    77,   332,   370,   384,    77,    78,   105,
      62,   376,   377,    76,   346,   350,     3,    80,     3,    82,
       6,   337,   368,   370,    81,   341,    98,   370,   344,    79,
     398,   389,   467,    81,   350,    79,   368,   389,   366,    98,
      62,   357,   204,   205,   360,   343,   404,   370,   370,   145,
      76,   396,   487,    99,   412,   390,    77,    78,   416,    77,
     438,   439,   440,   395,    77,    78,    77,    78,    77,    78,
      77,    78,    77,    78,   390,    77,    78,   393,    77,   206,
     207,   435,   436,   437,    77,   420,   182,    78,   404,   212,
     213,   407,    81,    77,     3,    78,   412,    77,   396,   457,
     416,    77,    81,   401,   420,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,     3,   478,    81,   480,   485,    81,    81,
      76,    81,   467,   485,    83,    77,    81,    81,    81,    99,
      81,   457,    77,    81,   460,   499,    79,    81,   502,    79,
      81,   467,   487,    81,    81,    81,   252,    81,    81,    99,
      99,   485,   215,   214,    30,   130,   139,   483,   366,   216,
     486,   487,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
     217,    76,   401,     3,     4,     5,     6,     7,     8,   218,
      10,    11,   390,   351,   166,    71,    43,    -1,    74,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
     346,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,   368,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,     3,     4,     5,     6,     7,     8,    99,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,     3,     4,     5,     6,     7,     8,    99,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    -1,    72,    -1,    -1,    31,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    89,    90,    -1,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    31,    76,    -1,    34,
      -1,    -1,    81,    38,    39,    40,    85,    86,    87,    88,
      89,    90,    -1,    70,    71,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    31,    76,
      -1,    34,    -1,    -1,    81,    38,    39,    40,    85,    86,
      87,    88,    89,    90,    -1,    70,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    31,    76,    -1,    -1,    -1,    80,    -1,    82,
      83,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,     3,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,     0,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    76,    77,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    74,    75,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    98,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    76,    77,    -1,
      30,    80,    -1,    -1,    -1,    -1,    -1,    86,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    84,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    30,
      77,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    74,    75,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    30,
      75,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    69,    -1,
      71,    -1,    73,    -1,    75,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    71,    -1,
      -1,    74,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   128,   129,   132,   133,   134,   135,   141,   144,   145,
     146,   147,   167,   189,   190,   191,   192,   193,     3,    83,
     171,    76,    76,    76,     3,    76,    86,    99,   130,   131,
     148,   149,   150,   153,   129,   129,     3,   171,   129,   129,
     129,     0,   190,   171,   172,   172,   171,     3,   103,   142,
     143,     3,     4,     5,     6,     7,     8,    10,    11,    31,
      70,    72,    76,    85,    86,    87,    88,    89,    90,   101,
     102,   104,   105,   108,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   127,   133,
     138,   145,   159,   159,   127,   148,    71,   145,   153,   154,
      78,    99,    98,   128,   129,   194,    76,    80,   150,   171,
     136,   137,   138,   167,     3,    57,    58,    59,    61,    62,
      63,    64,    65,    66,    67,    68,    84,    99,   110,   123,
     124,   126,   128,   168,   170,   172,   173,   174,   175,   176,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   142,    98,    78,    84,    76,   110,    76,   110,   110,
      76,    76,   126,   159,     9,    10,    11,    76,    80,    82,
     112,    86,    91,    92,    87,    88,    12,    13,    14,    15,
      93,    94,    16,    17,    85,    95,    96,    18,    19,    97,
      77,   138,    76,    80,   153,   160,   161,   138,    77,    77,
      78,    77,   145,   153,   131,   148,   124,   162,   171,   128,
       3,    77,   151,   158,    34,    81,    86,   124,   154,   136,
      84,   137,    79,    99,   139,   140,   148,    79,   127,    79,
      76,    76,    76,   169,   170,   172,   175,   179,   187,   188,
      76,     3,    99,    99,    99,   126,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    98,   125,    78,    99,
      84,   174,    60,   177,    62,    78,    84,   127,    84,   143,
     159,   159,   159,   124,    77,    77,     3,    77,   109,   124,
     126,     3,   112,   112,   112,   113,   113,   114,   114,   115,
     115,   115,   115,   116,   116,   117,   118,   119,   120,   121,
     126,    77,   129,   155,   156,   157,   160,    34,    81,    86,
     124,   154,   161,    76,    80,     6,    80,    82,   162,   163,
     164,   165,   166,   155,    77,    78,   124,   154,    81,    81,
      34,    81,    86,   124,    84,   127,    78,    99,    79,   168,
      79,   168,   126,   126,   126,    62,   128,   175,    99,    99,
     124,   124,   169,   172,    76,    84,    77,    77,    77,    78,
      83,   112,    77,    78,    81,    79,    76,   148,   153,   160,
      77,    78,    77,   124,   154,    81,    81,    34,    81,   124,
      77,   155,    34,    81,    86,   124,   154,    77,   127,     3,
      78,    84,   162,    98,   166,   152,     3,    81,   124,   124,
      81,    81,   140,   127,   168,    77,    77,    77,    76,   175,
     175,   126,    58,   106,   107,   159,   163,   124,   123,    56,
     157,    81,   124,   124,    81,    77,   124,   154,    81,    81,
      34,    81,   124,    99,    81,    84,   162,   164,    77,    81,
      81,   169,   172,   169,   172,   169,   172,   126,    77,   126,
      77,   126,    77,    79,    77,    78,    79,    78,    84,    81,
      81,    81,   124,   124,    81,   162,    77,   169,   172,    77,
     169,   172,    77,    99,   124,   107,   124,    84,    81,    81,
      99,   169,   172,   169,   172
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   104,   104,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   113,   113,   113,   114,
     114,   114,   115,   115,   115,   116,   116,   116,   116,   116,
     117,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   128,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   132,   132,   132,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     134,   134,   134,   135,   135,   136,   136,   137,   137,   137,
     138,   138,   138,   138,   139,   139,   140,   140,   140,   141,
     141,   141,   141,   141,   142,   142,   143,   143,   144,   145,
     145,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   151,   152,   150,   150,   150,   153,   153,   153,   153,
     154,   154,   155,   155,   156,   156,   157,   157,   157,   158,
     158,   159,   159,   160,   160,   160,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   162,   162,   162,
     163,   163,   163,   163,   164,   165,   165,   166,   166,   167,
     168,   168,   168,   168,   168,   168,   169,   169,   169,   169,
     169,   170,   170,   170,   171,   172,   172,   173,   173,   174,
     174,   175,   175,   176,   176,   177,   177,   178,   178,   179,
     179,   179,   180,   180,   181,   182,   182,   183,   183,   184,
     184,   185,   185,   186,   186,   187,   187,   187,   187,   187,
     187,   188,   188,   188,   188,   188,   189,   189,   190,   190,
     191,   192,   193,   193,   194,   194
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     2,     1,     1,     1,     2,     2,     3,     1,
       2,     1,     2,     1,     1,     3,     2,     3,     1,     4,
       5,     5,     6,     2,     1,     3,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     4,     4,     2,     1,     1,
       1,     3,     3,     4,     6,     5,     5,     6,     5,     4,
       4,     0,     0,     6,     3,     4,     3,     2,     2,     1,
       1,     2,     3,     1,     1,     3,     2,     2,     1,     1,
       3,     2,     1,     2,     1,     1,     3,     2,     3,     5,
       4,     5,     4,     3,     3,     3,     4,     6,     5,     5,
       6,     4,     4,     2,     3,     3,     4,     3,     4,     1,
       2,     1,     4,     3,     2,     1,     2,     3,     2,     7,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     1,     2,     3,     1,     2,     1,
       1,     1,     2,     5,     5,     2,     2,     5,     5,     2,
       1,     1,     5,     5,     2,     7,     6,     6,     6,     7,
       7,     6,     6,     7,     7,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     2,     3,     1,     2,     1,     1,
       3,     2,     2,     2,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 169:
#line 355 "c-grammar.y" /* yacc.c:1646  */
    {fprintf(yyout, "=<=identifier-declaration=<=");}
#line 2070 "c-grammar.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 370 "c-grammar.y" /* yacc.c:1646  */
    {fprintf(yyout, "<declaration>");}
#line 2076 "c-grammar.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 370 "c-grammar.y" /* yacc.c:1646  */
    {fprintf(yyout, "</declaration>");}
#line 2082 "c-grammar.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 499 "c-grammar.y" /* yacc.c:1646  */
    {fprintf(yyout, "=<=block-beg=<=");}
#line 2088 "c-grammar.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 524 "c-grammar.y" /* yacc.c:1646  */
    {fprintf(yyout, "=<=block-line=<=");}
#line 2094 "c-grammar.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 529 "c-grammar.y" /* yacc.c:1646  */
    {fprintf(yyout, "=<=block-line=<=");}
#line 2100 "c-grammar.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 534 "c-grammar.y" /* yacc.c:1646  */
    {fprintf(yyout, "=<=block-line=<=");}
#line 2106 "c-grammar.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 545 "c-grammar.y" /* yacc.c:1646  */
    {fprintf(yyout, "=<=block-line=<=");}
#line 2112 "c-grammar.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 549 "c-grammar.y" /* yacc.c:1646  */
    {fprintf(yyout, "=<=block-line=<=");}
#line 2118 "c-grammar.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 559 "c-grammar.y" /* yacc.c:1646  */
    {fprintf(yyout, "=<=block-line=<=");}
#line 2124 "c-grammar.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 564 "c-grammar.y" /* yacc.c:1646  */
    {fprintf(yyout, "=<=block-line=<=");}
#line 2130 "c-grammar.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 569 "c-grammar.y" /* yacc.c:1646  */
    {fprintf(yyout, "=<=block-line=<=");}
#line 2136 "c-grammar.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 574 "c-grammar.y" /* yacc.c:1646  */
    {fprintf(yyout, "=<=block-line=<=");}
#line 2142 "c-grammar.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 605 "c-grammar.y" /* yacc.c:1646  */
    {fprintf(yyout, "=<=fun-declaration=<=");}
#line 2148 "c-grammar.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 609 "c-grammar.y" /* yacc.c:1646  */
    {fprintf(yyout, "=<=fun-declaration=<=");}
#line 2154 "c-grammar.tab.c" /* yacc.c:1646  */
    break;


#line 2158 "c-grammar.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 621 "c-grammar.y" /* yacc.c:1906  */

#include <stdio.h>

int yyerror(const char *s)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", s);
}

void createHTMLBeginFile(FILE * fichier)
{
    fprintf(fichier, "%s\n", "<html>");

    fprintf(fichier, "%s\n", "<head>");
    fprintf(fichier, "%s\n", "<script src=\"js/jquery-1.11.2.min.js\"></script>");
    fprintf(fichier, "%s\n", "<link rel=\"stylesheet\" type=\"text/css\" href=\"css/bootstrap.min.css\">");
    fprintf(fichier, "%s\n", "<link rel=\"stylesheet\" type=\"text/css\" href=\"css/documentation.css\">");
    fprintf(fichier, "%s\n", "<meta name=\"viewport\" content=\"width=device-width, initial-scale=0.5\">");
    fprintf(fichier, "%s\n", "<title>Code Example</title>");
    fprintf(fichier, "%s\n", "</head>");
    fprintf(fichier, "%s\n", "<body>");
    fprintf(fichier, "%s\n", "<div class=\"page-header\">");
    fprintf(fichier, "%s\n", "<div class=\"container\">");
    fprintf(fichier, "%s\n", "<span class=\"title\">test.c</span>");
    fprintf(fichier, "%s\n", "<br>");
    fprintf(fichier, "%s\n", "<span class=\"description\">Code</span>");
    fprintf(fichier, "%s\n", "<a href=\"./test.c.doc.html\">Go to Documentation</a>");
    fprintf(fichier, "%s\n", "</div>");
    fprintf(fichier, "%s\n", "</div>");
    fprintf(fichier, "%s\n", "<div class=\"container\">");
    fprintf(fichier, "%s\n", "<div class=\"mainContent row\">");
    fprintf(fichier, "%s\n", "<div class=\"col-xs-1 lineNumber\"></div>");
    fprintf(fichier, "%s\n", "<div class=\"col-xs-11\">");
    fprintf(fichier, "%s\n", "<div class=\"code-style\">");

 }

void createHTMLEndFile(FILE * fichier)
{
    fprintf(fichier, "%s\n", "</div>");
    fprintf(fichier, "%s\n", "</div>");
    fprintf(fichier, "%s\n",  "</div>");
    fprintf(fichier, "%s\n", "</div>");
    fprintf(fichier, "%s\n", "<script src=\"js/codeScript.js\"></script>");
    fprintf(fichier, "%s\n", "</body>");

    fprintf(fichier, "%s\n","</html>");
}

int main(int argc, char* argv[]){
    if (argc < 3){
        fprintf(stderr, "Usage : ./parser fileToAnalyze.c fileToCreate.html");
        return -1;
    }
    
    yyin = fopen(argv[1], "r");
    yyout = fopen("tmp.txt", "w");
    
    fflush(stdout);
    createHTMLBeginFile(yyout);

    fflush(stdout);
    yyparse();
    
    createHTMLEndFile(yyout);
    
    fclose(yyin);
    fclose(yyout);

    fflush(stdout);
    zzin = fopen("tmp.txt", "r");
    zzout = fopen("tmp2.txt", "w");

    zzlex();
    
    fclose(zzin);
    fclose(zzout);

    xxin = fopen("tmp2.txt", "r");
    xxout = fopen(argv[2], "w");

    xxlex();
    
    fclose(xxin);
    fclose(xxout);
    
    return 0;
}
