
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "bison.y"

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include "quads.h"

char tmp[20] ;
char tmp1[20] ;
float valid;
extern int yylineno;
 

char buffer[20];
char buffer2[20];



/* Line 189 of yacc.c  */
#line 92 "bison.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     pl = 258,
     mn = 259,
     mc_import = 260,
     mc_public = 261,
     mc_protected = 262,
     mc_class = 263,
     mc_main = 264,
     type_integer = 265,
     mc_const = 266,
     type_real = 267,
     type_str = 268,
     deferent = 269,
     ou_logique = 270,
     mc_while = 271,
     mc_for = 272,
     point_egale = 273,
     mc_in = 274,
     mc_out = 275,
     sup_egal = 276,
     inf_egal = 277,
     chaine_formats = 278,
     val_real = 279,
     chaine = 280,
     nombre_signe = 281,
     val_real_signe = 282,
     nombre = 283,
     idf = 284,
     mc_libs = 285,
     OU = 286,
     ET = 287
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 19 "bison.y"

 char* chaine; /* identifiant et chaine de caractere et le nom de bib*/
 int entier;  /* INTEGER */
 float real;  /* REAL */ 




/* Line 214 of yacc.c  */
#line 169 "bison.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 181 "bison.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNRULES -- Number of states.  */
#define YYNSTATES  190

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,    30,     2,     2,     2,    32,     2,
      27,    28,    29,     2,    24,     2,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    12,
      35,    46,    33,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    17,     2,    18,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    10,     2,    11,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    13,    14,    15,    16,    19,
      20,    21,    22,    23,    25,    26,    34,    36,    38,    39,
      40,    41,    42,    43,    44,    45,    47,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    11,    16,    17,    21,    25,    28,
      31,    34,    37,    38,    42,    49,    53,    55,    59,    61,
      68,    73,    77,    84,    88,    90,    94,    96,   101,   108,
     112,   119,   123,   130,   132,   136,   138,   143,   150,   155,
     157,   160,   162,   163,   168,   173,   178,   186,   188,   191,
     194,   196,   198,   200,   202,   204,   206,   208,   212,   214,
     218,   222,   226,   230,   242,   246,   248,   250,   252,   254,
     256,   258,   261,   262,   268,   272,   276,   278,   280,   282,
     284,   286,   288,   290,   292,   296,   300,   307,   314,   318
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    -1,    51,    52,    10,    53,    63,    11,
      -1,     5,    45,    12,    51,    -1,    -1,     6,     8,    44,
      -1,     7,     8,    44,    -1,     8,    44,    -1,    54,    53,
      -1,    57,    53,    -1,    60,    53,    -1,    -1,    13,    55,
      12,    -1,    14,    13,    44,    23,    75,    12,    -1,    13,
      56,    12,    -1,    44,    -1,    44,    24,    55,    -1,    56,
      -1,    44,    17,    43,    18,    24,    55,    -1,    44,    17,
      43,    18,    -1,    15,    58,    12,    -1,    14,    15,    44,
      23,    77,    12,    -1,    15,    59,    12,    -1,    44,    -1,
      44,    24,    58,    -1,    59,    -1,    44,    17,    43,    18,
      -1,    44,    17,    43,    18,    24,    58,    -1,    16,    61,
      12,    -1,    14,    16,    44,    23,    40,    12,    -1,    16,
      62,    12,    -1,    14,    16,    44,    23,    38,    12,    -1,
      44,    -1,    44,    24,    61,    -1,    62,    -1,    44,    17,
      43,    18,    -1,    44,    17,    43,    18,    24,    61,    -1,
       9,    10,    64,    11,    -1,    65,    -1,    66,    65,    -1,
      66,    -1,    -1,    44,    23,    67,    12,    -1,    44,    23,
      40,    12,    -1,    44,    23,    38,    12,    -1,    44,    17,
      43,    18,    23,    67,    12,    -1,    73,    -1,    84,    12,
      -1,    85,    12,    -1,    68,    -1,    75,    -1,    76,    -1,
      69,    -1,    70,    -1,    71,    -1,    72,    -1,    27,    68,
      28,    -1,    44,    -1,    68,     3,    68,    -1,    68,     4,
      68,    -1,    68,    29,    68,    -1,    68,    31,    68,    -1,
      22,    27,    74,    12,    78,    12,    83,    28,    10,    65,
      11,    -1,    44,    23,    43,    -1,    43,    -1,    41,    -1,
      39,    -1,    42,    -1,    75,    -1,    76,    -1,    79,    80,
      -1,    -1,    44,    81,    43,    82,    80,    -1,    44,    81,
      43,    -1,    27,    80,    28,    -1,    33,    -1,    34,    -1,
      35,    -1,    36,    -1,    46,    -1,    19,    -1,    32,    -1,
      20,    -1,    44,     3,     3,    -1,    44,     4,     4,    -1,
      25,    27,    38,    24,    86,    28,    -1,    26,    27,    38,
      24,    86,    28,    -1,    44,    24,    86,    -1,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    61,    61,    61,    65,    65,    70,    70,    71,    80,
      80,    80,    80,    85,    85,    86,    88,    88,    88,    90,
      90,    96,    96,    96,    98,    98,    98,   100,   100,   106,
     106,   106,   107,   109,   109,   109,   111,   111,   120,   123,
     126,   126,   126,   128,   137,   146,   156,   163,   163,   163,
     167,   171,   171,   171,   171,   171,   171,   172,   172,   175,
     177,   179,   181,   190,   193,   199,   199,   201,   201,   203,
     203,   207,   210,   213,   214,   219,   223,   223,   223,   224,
     224,   224,   227,   227,   230,   233,   242,   247,   252,   252
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "pl", "mn", "mc_import", "mc_public",
  "mc_protected", "mc_class", "mc_main", "'{'", "'}'", "';'",
  "type_integer", "mc_const", "type_real", "type_str", "'['", "']'",
  "deferent", "ou_logique", "mc_while", "mc_for", "point_egale", "','",
  "mc_in", "mc_out", "'('", "')'", "'*'", "'\"'", "'/'", "'&'", "'>'",
  "sup_egal", "'<'", "inf_egal", "'!'", "chaine_formats", "val_real",
  "chaine", "nombre_signe", "val_real_signe", "nombre", "idf", "mc_libs",
  "'='", "OU", "ET", "$accept", "S", "par_import", "par_class",
  "par_declaration", "dec_Integer", "I", "dec_tab_int", "dec_Real", "R",
  "dec_tab_r", "dec_Str", "str", "dec_tab_str", "par_main", "pi", "inst",
  "par_instrections", "ex", "Calcul", "Add", "Moins", "Fois", "Divise",
  "Boucle", "aff_for", "nombres", "reales", "nombres_reales", "condition",
  "Sauv_BR", "cond", "opComp", "op_logique", "regle", "Lecture",
  "Ecriture", "idfs", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     123,   125,    59,   265,   266,   267,   268,    91,    93,   269,
     270,   271,   272,   273,    44,   274,   275,    40,    41,    42,
      34,    47,    38,    62,   276,    60,   277,    33,   278,   279,
     280,   281,   282,   283,   284,   285,    61,   286,   287
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    50,    51,    51,    52,    52,    52,    53,
      53,    53,    53,    54,    54,    54,    55,    55,    55,    56,
      56,    57,    57,    57,    58,    58,    58,    59,    59,    60,
      60,    60,    60,    61,    61,    61,    62,    62,    63,    64,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      67,    68,    68,    68,    68,    68,    68,    68,    68,    69,
      70,    71,    72,    73,    74,    75,    75,    76,    76,    77,
      77,    78,    79,    80,    80,    80,    81,    81,    81,    81,
      81,    81,    82,    82,    83,    83,    84,    85,    86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     6,     4,     0,     3,     3,     2,     2,
       2,     2,     0,     3,     6,     3,     1,     3,     1,     6,
       4,     3,     6,     3,     1,     3,     1,     4,     6,     3,
       6,     3,     6,     1,     3,     1,     4,     6,     4,     1,
       2,     1,     0,     4,     4,     4,     7,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       3,     3,     3,    11,     3,     1,     1,     1,     1,     1,
       1,     2,     0,     5,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     6,     6,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       5,     0,     0,     8,    12,     4,     6,     7,     0,     0,
       0,     0,     0,    12,    12,    12,    16,     0,     0,     0,
       0,     0,    24,     0,     0,    33,     0,     0,     0,     0,
       9,    10,    11,     0,     0,    13,    15,     0,     0,     0,
       0,     0,    21,    23,     0,     0,    29,    31,    42,     3,
       0,    17,    18,     0,     0,     0,     0,    25,    26,     0,
      34,    35,     0,     0,     0,     0,     0,    39,    41,    47,
       0,     0,    20,    66,    65,     0,    67,    68,    69,    70,
       0,     0,     0,    27,    36,     0,     0,     0,     0,     0,
      38,    40,    48,    49,     0,    14,    22,    32,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,    50,    53,    54,    55,    56,    51,    52,    19,    28,
      37,     0,    72,     0,     0,     0,     0,    45,    44,    43,
       0,     0,     0,     0,    64,     0,     0,    89,     0,     0,
       0,    57,    59,    60,    61,    62,     0,     0,     0,    71,
       0,    86,    87,     0,     0,     0,     0,    81,    76,    77,
      78,    79,    80,     0,    88,    46,     0,     0,     0,    75,
      74,    84,    85,    42,    83,    82,     0,     0,    73,    63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     9,    22,    23,    27,    62,    24,    33,
      68,    25,    36,    71,    39,    76,    77,    78,   120,   121,
     122,   123,   124,   125,    79,   112,   126,   127,    90,   145,
     146,   159,   173,   186,   165,    80,    81,   148
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -154
static const yytype_int16 yypact[] =
{
      45,   -32,    36,    57,    34,  -154,    46,    51,    31,    75,
      92,    54,    55,  -154,    67,  -154,  -154,  -154,    56,    71,
      58,    59,    95,    67,    67,    67,    -5,    89,    94,    64,
      66,    68,    -3,    97,    99,    -1,   101,   102,   105,    96,
    -154,  -154,  -154,    73,    56,  -154,  -154,    98,   100,   103,
      74,    58,  -154,  -154,    76,    59,  -154,  -154,    22,  -154,
     104,  -154,  -154,    14,    10,    53,   106,  -154,  -154,   107,
    -154,  -154,    91,    93,   108,     1,   116,  -154,    22,  -154,
     117,   118,   109,  -154,  -154,   119,  -154,  -154,  -154,  -154,
     120,   122,   124,   113,   114,    84,   110,   111,   112,    29,
    -154,  -154,  -154,  -154,    56,  -154,  -154,  -154,  -154,    58,
      59,   121,   127,   123,   126,   125,    35,   128,   129,  -154,
     130,     6,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,   115,  -154,   131,   131,   133,     3,  -154,  -154,  -154,
      35,    35,    35,    35,  -154,   134,   -22,   135,   132,   136,
      35,  -154,    63,    63,  -154,  -154,   137,   -22,    -8,  -154,
     131,  -154,  -154,   139,    26,   138,   140,  -154,  -154,  -154,
    -154,  -154,  -154,   141,  -154,  -154,   142,   148,   143,  -154,
     -12,  -154,  -154,    22,  -154,  -154,   -22,   146,  -154,  -154
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,   144,  -154,    65,  -154,   -43,   145,  -154,   -49,
     147,  -154,   -52,   149,  -154,  -154,   -78,  -154,    11,  -101,
    -154,  -154,  -154,  -154,  -154,  -154,    32,   150,  -154,  -154,
    -154,  -153,  -154,  -154,  -154,  -154,  -154,  -117
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
     101,    61,    67,    70,   166,   157,   140,   141,   184,   140,
     141,   167,    43,     4,    50,   136,    54,   149,    98,    44,
     185,    51,   158,    55,    99,   168,   169,   170,   171,   176,
     177,   151,   142,   188,   143,   142,     5,   143,   172,   152,
     153,   154,   155,   174,    72,    -2,    10,    73,    74,    86,
       1,    83,    87,    84,    11,    83,   116,    84,   130,    12,
     129,   128,   116,     6,     7,     8,    75,   117,    86,   118,
      83,    87,    84,   119,    86,    13,    83,    87,    84,   119,
      18,    19,    20,    21,    29,    14,    30,    31,    40,    41,
      42,    91,   142,    92,   143,    85,    88,     1,    16,    17,
      26,    45,    32,    35,    38,   187,    46,    59,    47,    52,
      48,    53,    49,    56,    57,    58,    60,    66,    95,    69,
      96,    63,    82,    64,    93,    94,    65,   100,   111,   102,
     103,   105,   106,   104,   107,    97,   108,   109,   110,   132,
     137,   138,   139,   135,   131,   181,   156,   133,   113,   114,
     134,   175,   182,   183,    15,   115,   150,   189,   144,   160,
     161,   163,     0,    28,   162,     0,   178,    34,   179,     0,
      37,     0,     0,     0,     0,   147,     0,     0,     0,     0,
       0,   164,     0,     0,   180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89
};

static const yytype_int16 yycheck[] =
{
      78,    44,    51,    55,   157,    27,     3,     4,    20,     3,
       4,    19,    17,    45,    17,   116,    17,   134,    17,    24,
      32,    24,    44,    24,    23,    33,    34,    35,    36,     3,
       4,    28,    29,   186,    31,    29,     0,    31,    46,   140,
     141,   142,   143,   160,    22,     0,    12,    25,    26,    39,
       5,    41,    42,    43,     8,    41,    27,    43,   110,     8,
     109,   104,    27,     6,     7,     8,    44,    38,    39,    40,
      41,    42,    43,    44,    39,    44,    41,    42,    43,    44,
      13,    14,    15,    16,    13,    10,    15,    16,    23,    24,
      25,    38,    29,    40,    31,    63,    64,     5,    44,    44,
      44,    12,    44,    44,     9,   183,    12,    11,    44,    12,
      44,    12,    44,    12,    12,    10,    43,    43,    27,    43,
      27,    23,    18,    23,    18,    18,    23,    11,    44,    12,
      12,    12,    12,    24,    12,    27,    12,    24,    24,    12,
      12,    12,    12,    18,    23,     3,    12,    24,    38,    38,
      24,    12,     4,    10,    10,    43,    23,    11,    43,    24,
      28,   150,    -1,    18,    28,    -1,    28,    20,    28,    -1,
      21,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    50,    51,    45,     0,     6,     7,     8,    52,
      12,     8,     8,    44,    10,    51,    44,    44,    13,    14,
      15,    16,    53,    54,    57,    60,    44,    55,    56,    13,
      15,    16,    44,    58,    59,    44,    61,    62,     9,    63,
      53,    53,    53,    17,    24,    12,    12,    44,    44,    44,
      17,    24,    12,    12,    17,    24,    12,    12,    10,    11,
      43,    55,    56,    23,    23,    23,    43,    58,    59,    43,
      61,    62,    22,    25,    26,    44,    64,    65,    66,    73,
      84,    85,    18,    41,    43,    75,    39,    42,    75,    76,
      77,    38,    40,    18,    18,    27,    27,    27,    17,    23,
      11,    65,    12,    12,    24,    12,    12,    12,    12,    24,
      24,    44,    74,    38,    38,    43,    27,    38,    40,    44,
      67,    68,    69,    70,    71,    72,    75,    76,    55,    58,
      61,    23,    12,    24,    24,    18,    68,    12,    12,    12,
       3,     4,    29,    31,    43,    78,    79,    44,    86,    86,
      23,    28,    68,    68,    68,    68,    12,    27,    44,    80,
      24,    28,    28,    67,    44,    83,    80,    19,    33,    34,
      35,    36,    46,    81,    86,    12,     3,     4,    28,    28,
      43,     3,     4,    10,    20,    32,    82,    65,    80,    11
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 61 "bison.y"
    {YYACCEPT;;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 61 "bison.y"
    { printf("\n ---------  Code correct :)  ---------- \n"); YYACCEPT; ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 65 "bison.y"
    { import_bib((yyvsp[(2) - (4)].chaine),yylineno); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 70 "bison.y"
    {inserer(&tab,(yyvsp[(3) - (3)].chaine),"idf",-1,0,0,yylineno); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 70 "bison.y"
    {inserer(&tab,(yyvsp[(3) - (3)].chaine),"idf",-1,0,0,yylineno); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 71 "bison.y"
    {inserer(&tab,(yyvsp[(2) - (2)].chaine),"idf",-1,0,0,yylineno);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 85 "bison.y"
    {inserer(&tab,(yyvsp[(3) - (6)].chaine),"idf",1,1,1,yylineno);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 88 "bison.y"
    {inserer(&tab,(yyvsp[(1) - (1)].chaine),"idf",1,0,1,yylineno);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 88 "bison.y"
    {inserer(&tab,(yyvsp[(1) - (3)].chaine),"idf",1,0,1,yylineno);;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 90 "bison.y"
    {inserer(&tab,(yyvsp[(1) - (6)].chaine),"idf",1,0,(yyvsp[(3) - (6)].entier),yylineno);;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 90 "bison.y"
    {inserer(&tab,(yyvsp[(1) - (4)].chaine),"idf",1,0,(yyvsp[(3) - (4)].entier),yylineno);;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 96 "bison.y"
    {inserer(&tab,(yyvsp[(3) - (6)].chaine),"idf",2,1,1,yylineno);;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 98 "bison.y"
    {inserer(&tab,(yyvsp[(1) - (1)].chaine),"idf",2,0,1,yylineno); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 98 "bison.y"
    {inserer(&tab,(yyvsp[(1) - (3)].chaine),"idf",2,0,1,yylineno);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 100 "bison.y"
    {inserer(&tab,(yyvsp[(1) - (4)].chaine),"idf",2,0,(yyvsp[(3) - (4)].entier),yylineno); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 100 "bison.y"
    {inserer(&tab,(yyvsp[(1) - (6)].chaine),"idf",2,0,(yyvsp[(3) - (6)].entier),yylineno); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 106 "bison.y"
    {inserer(&tab,(yyvsp[(3) - (6)].chaine),"idf",3,1,1,yylineno);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 107 "bison.y"
    {inserer(&tab,(yyvsp[(3) - (6)].chaine),"idf",3,1,1,yylineno);;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 109 "bison.y"
    {inserer(&tab,(yyvsp[(1) - (1)].chaine),"idf",3,0,1,yylineno); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 109 "bison.y"
    {inserer(&tab,(yyvsp[(1) - (3)].chaine),"idf",3,0,1,yylineno);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 111 "bison.y"
    {inserer(&tab,(yyvsp[(1) - (4)].chaine),"idf",3,0,(yyvsp[(3) - (4)].entier),yylineno); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 111 "bison.y"
    {inserer(&tab,(yyvsp[(1) - (6)].chaine),"idf",3,0,(yyvsp[(3) - (6)].entier),yylineno); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 124 "bison.y"
    { if(importMiniL_lang==0) { printf("Erreur semantique  -- La bib MiniL.lang est non imprte --\n");};}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 129 "bison.y"
    {
                     if(Rechercher(&tab,(yyvsp[(1) - (4)].chaine))==0){ printf("Erreur semantique a la ligne %d la idf %s n'est pas declare \n",yylineno,(yyvsp[(1) - (4)].chaine)); }
                     if(Rechercher(&tab,(yyvsp[(1) - (4)].chaine))==1) {
                     if(R->type ==3 ) { printf("Erreur semantique a la ligne %d compatibilite des types -- type %s != de STR\n",yylineno,(yyvsp[(1) - (4)].chaine)); }
                     if(R->varOUconst){printf("On peut pas affecter un valeur a une  Constante\n");}
                     strcpy(R->valeur,(yyvsp[(3) - (4)].chaine)); quad(&quadc,"=",(yyvsp[(1) - (4)].chaine),(yyvsp[(3) - (4)].chaine),"vide"); }  
                  ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 138 "bison.y"
    {
                  if(Rechercher(&tab,(yyvsp[(1) - (4)].chaine))==1){
                  if(R->type !=3 ){printf("Erreur semantique a la ligne %d compatibilite des types -- %s est de type STR\n",yylineno,(yyvsp[(1) - (4)].chaine));} 
	              else if(R->varOUconst){printf("On peut pas affecter un valeur a une  Constante\n");}
                  else { quad(&quadc,"=",(yyvsp[(1) - (4)].chaine),(yyvsp[(3) - (4)].chaine),"vide");  strcpy(R->valeur,(yyvsp[(3) - (4)].chaine)); }  }
                 ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 147 "bison.y"
    {
                  if(Rechercher(&tab,(yyvsp[(1) - (4)].chaine))==1){
                  if(R->type !=3 ){printf("Erreur semantique a la ligne %d compatibilite des types -- %s est de type STR\n",yylineno,(yyvsp[(1) - (4)].chaine));} 
	              else if(R->varOUconst){printf("On peut pas affecter un valeur a une  Constante\n");}
                  else { quad(&quadc,"=",(yyvsp[(1) - (4)].chaine),(yyvsp[(3) - (4)].chaine),"vide");  strcpy(R->valeur,(yyvsp[(3) - (4)].chaine)); }  }
                 ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 157 "bison.y"
    { if(Rechercher(&tab,(yyvsp[(1) - (7)].chaine))==1){
                    if((yyvsp[(3) - (7)].entier)>R->taille){ printf("Erreur semantique A la ligne %d Depacement de capacite du tableau %s \n",yylineno,(yyvsp[(1) - (7)].chaine));}
                    
                    }
                    else{ printf("Erruer semantique a la ligne %d idf %s non declare \n",yylineno,(yyvsp[(1) - (7)].chaine)); };}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 167 "bison.y"
    {sprintf(tmp,"%f",(yyvsp[(1) - (1)].real));(yyval.chaine)=strdup(tmp);;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 171 "bison.y"
    { (yyval.real) = atoi((yyvsp[(1) - (1)].chaine)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 171 "bison.y"
    { (yyval.real) = atof((yyvsp[(1) - (1)].chaine)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 171 "bison.y"
    { (yyval.real) = (yyvsp[(1) - (1)].real); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 171 "bison.y"
    { (yyval.real) = (yyvsp[(1) - (1)].real); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 171 "bison.y"
    { (yyval.real) = (yyvsp[(1) - (1)].real); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 171 "bison.y"
    { (yyval.real) = (yyvsp[(1) - (1)].real); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 172 "bison.y"
    { (yyval.real) = (yyvsp[(2) - (3)].real); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 172 "bison.y"
    { if(Rechercher(&tab,(yyvsp[(1) - (1)].chaine))==1){ (yyval.real)=atof(R->valeur); } ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 175 "bison.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) + (yyvsp[(3) - (3)].real); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 177 "bison.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) - (yyvsp[(3) - (3)].real); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 179 "bison.y"
    { (yyval.real) = (yyvsp[(1) - (3)].real) * (yyvsp[(3) - (3)].real); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 181 "bison.y"
    {  if((yyvsp[(3) - (3)].real)==0.0){printf("div par 0 imp"); return 1; }else{(yyval.real) = (yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].real);}  ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 190 "bison.y"
    { quad(&quadc,"BR","","vide","vide");  Maj_Bz(&quadc); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 193 "bison.y"
    {
         if(Rechercher(&tab,(yyvsp[(1) - (3)].chaine))==0){printf("Erreur semantique a la ligne %d idf %s non declare \n",yylineno,(yyvsp[(1) - (3)].chaine)); }else{
         sprintf(buffer,"%d",(yyvsp[(3) - (3)].entier));  quad(&quadc,"=",(yyvsp[(1) - (3)].chaine),buffer,"vide"); sprintf(buffer,"%d",(yyvsp[(3) - (3)].entier)); strcpy(R->valeur,buffer); };}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 199 "bison.y"
    {sprintf(buffer,"%d",(yyvsp[(1) - (1)].entier)); (yyval.chaine)=buffer; ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 199 "bison.y"
    {sprintf(buffer,"%d",(yyvsp[(1) - (1)].entier));(yyval.chaine)=buffer; ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 201 "bison.y"
    {sprintf(buffer,"%f",(yyvsp[(1) - (1)].real)); (yyval.chaine)=buffer;;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 201 "bison.y"
    {sprintf(buffer,"%f",(yyvsp[(1) - (1)].real));(yyval.chaine)=buffer; ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 207 "bison.y"
    { sprintf(buffer,"%d",(yyvsp[(2) - (2)].entier)); quad(&quadc,"BZ","",buffer,"vide"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 210 "bison.y"
    { sauv_pos_BR(); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 213 "bison.y"
    { ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 215 "bison.y"
    {if(Rechercher(&tab,(yyvsp[(1) - (3)].chaine))==1)
     { sprintf(buffer,"%d",(yyvsp[(3) - (3)].entier)); sprintf(buffer2,"%d",cal_comp((yyvsp[(2) - (3)].chaine),R->valeur,buffer));
     quad(&quadc,(yyvsp[(2) - (3)].chaine),(yyvsp[(1) - (3)].chaine),buffer,buffer2);  (yyval.entier)=cal_comp((yyvsp[(2) - (3)].chaine),R->valeur,buffer); }
   else{ printf("Erreur semantique a la ligne %d idf %s non declare\n",yylineno,(yyvsp[(1) - (3)].chaine)); } ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 223 "bison.y"
    { (yyval.chaine)=">"; ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 223 "bison.y"
    { (yyval.chaine)=">="; ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 223 "bison.y"
    { (yyval.chaine)="<"; ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 224 "bison.y"
    {(yyval.chaine)="<="; ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 224 "bison.y"
    { (yyval.chaine)="="; ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 224 "bison.y"
    { (yyval.chaine)="!="; ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 230 "bison.y"
    {
         if(Rechercher(&tab,(yyvsp[(1) - (3)].chaine))==0){printf("Erreur semantique a la ligne %d idf %s non declare \n",yylineno,(yyvsp[(1) - (3)].chaine)); }else{
        sprintf(buffer2,"%d",cal_op_int("+",R->valeur,"1"));  quad(&quadc,"+",(yyvsp[(1) - (3)].chaine),"1",buffer2);  };}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 233 "bison.y"
    {
         if(Rechercher(&tab,(yyvsp[(1) - (3)].chaine))==0){printf("Erreur semantique a la ligne %d idf %s non declare \n",yylineno,(yyvsp[(1) - (3)].chaine)); }else{
        sprintf(buffer2,"%d",cal_op_int("-",R->valeur,"1")); quad(&quadc,"-",(yyvsp[(1) - (3)].chaine),"1",buffer2);  };}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 243 "bison.y"
    { if(importMiniL_io==0){ printf("Erreur semantique a la ligne %d La fonction in est inconnu --- La bib MiniL.io est non imprte ---\n",yylineno);};}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 248 "bison.y"
    { if(importMiniL_io==0){ printf("Erreur semantique a la ligne %d La fonction out est inconnu -- La bib MiniL.io est non imprte --\n",yylineno);};}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 252 "bison.y"
    {(yyval.chaine)=(yyvsp[(1) - (3)].chaine); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 252 "bison.y"
    {(yyval.chaine)=(yyvsp[(1) - (1)].chaine); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2005 "bison.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 257 "bison.y"
 // il s'arret apres la premiere errore syntaxique !!!!!
int yyerror(char* msg){
printf("%s a la ligne  %d",msg,yylineno);
return 1;
}

main() {
yyparse();
Afficher(&tab);
AfficherQUAD(&quadc);
}



