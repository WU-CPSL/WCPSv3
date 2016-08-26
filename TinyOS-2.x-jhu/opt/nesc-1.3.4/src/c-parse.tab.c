
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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 33 "c-parse.y"

#include <stdio.h>
#include <errno.h>
#include <setjmp.h>

#include "parser.h"
#include "c-parse.h"
#include "c-lex.h"
#include "c-lex-int.h"
#include "semantics.h"
#include "expr.h"
#include "stmt.h"
#include "init.h"
#include "nesc-semantics.h"
#include "nesc-interface.h"
#include "nesc-component.h"
#include "nesc-configuration.h"
#include "nesc-module.h"
#include "nesc-env.h"
#include "nesc-c.h"
#include "nesc-attributes.h"
#include "nesc-task.h"
#include "nesc-cpp.h"
#include "attributes.h"
#include "machine.h"

int yyparse(void) deletes;

void yyerror();

/* Like YYERROR but do call yyerror.  */
#define YYERROR1 { yyerror ("syntax error"); YYERROR; }

/* Cause the `yydebug' variable to be defined.  */
#define YYDEBUG 1

/* Line 189 of yacc.c  */
#line 248 "c-parse.y"

/* Region in which to allocate parse structures. Idea: the AST user can set
   this to different regions at appropriate junctures depending on what's
   being done with the AST */
region parse_region;
/* We'll see this a LOT below */
#define pr parse_region

/* Number of statements (loosely speaking) and compound statements 
   seen so far.  */
static int stmt_count;
static int compstmt_count;
  
#ifdef RC_ADJUST
static size_t rc_adjust_yystype(void *x, int by) 
{
  struct yystype *p = x;
  RC_ADJUST_PREAMBLE;

  RC_ADJUST(p->u.ptr, by);
  RC_ADJUST(p->idtoken.location.filename, by);
  RC_ADJUST(p->idtoken.id.data, by);
  RC_ADJUST(p->idtoken.decl, by);

  return sizeof *p;
}

static void rc_update_yystype(struct yystype *old, struct yystype *new)
{
  regionid base = regionidof(old);

  RC_UPDATE(base, old->u.ptr, new->u.ptr);
  RC_UPDATE(base, old->idtoken.location.filename, new->idtoken.location.filename);
  RC_UPDATE(base, old->idtoken.id.data, new->idtoken.id.data);
  RC_UPDATE(base, old->idtoken.decl, new->idtoken.decl);
}
#endif

/* A stack of declspecs and attributes for use during parsing */
typedef struct spec_stack *spec_stack;
struct spec_stack { 
  type_element parentptr declspecs;
  attribute parentptr attributes;
  spec_stack sameregion next;
};

struct parse_state 
{
  /* Stack of saved values of current_declspecs and prefix_attributes.  */
  /* In an ideal world, we would be able to eliminate most rc ops for
     declspec_stack and ds_region assignments. Seems tricky though. */
  spec_stack declspec_stack;
  region ds_region;

  /* List of types and structure classes of the current declaration.  */
  type_element declspecs;
  attribute attributes;

  /* >0 if currently parsing an expression that will not be evaluated (argument
     to alignof, sizeof. Currently not typeof though that could be considered
     a bug) */
  int unevaluated_expression;
} pstate;

bool unevaluated_expression(void)
{
  return pstate.unevaluated_expression != 0;
}

/* Pop top entry of declspec_stack back into current_declspecs,
   prefix_attributes */
static void pop_declspec_stack(void) deletes
{
  pstate.declspecs = pstate.declspec_stack->declspecs;
  pstate.attributes = pstate.declspec_stack->attributes;
  pstate.declspec_stack = pstate.declspec_stack->next;
}

static void push_declspec_stack(void)
{
  spec_stack news;

  news = ralloc(pstate.ds_region, struct spec_stack);
  news->declspecs = pstate.declspecs;
  news->attributes = pstate.attributes;
  news->next = pstate.declspec_stack;
  pstate.declspec_stack = news;
}

static node parse_tree;

node parse(void) deletes
{
  int result, old_errorcount = errorcount;
  struct parse_state old_pstate = pstate;

  pstate.declspecs = NULL;
  pstate.attributes = NULL;
  pstate.unevaluated_expression = 0;
  pstate.declspec_stack = NULL;
  pstate.ds_region = newsubregion(parse_region);
  parse_tree = NULL;
  result = yyparse();
  if (result)
    parse_tree = NULL;
  deleteregion_ptr(&pstate.ds_region);

  if (result != 0 && errorcount == old_errorcount)
    fprintf(stderr, "Errors detected in input file (your bison.simple is out of date)");

  pstate = old_pstate;

  return parse_tree;
}

static void set_nesc_ast(void *tree)
{
  nesc_declaration cdecl = current.container;
  nesc_decl nd = CAST(nesc_decl, tree);

  nd->cdecl = cdecl;
  cdecl->ast = nd;
}

static void set_nesc_parse_tree(void *tree)
{
  set_nesc_ast(tree);
  parse_tree = CAST(node, tree);
}

static void set_nesc_impl(implementation impl)
{
  nesc_declaration cdecl = current.container;

  CAST(component, cdecl->ast)->implementation = impl;
  parse_tree = CAST(node, cdecl->ast);
}

void refuse_asm(asm_stmt s)
{
  if (s)
    error_with_location(s->location, "unexpected asm statement");
}

/* Merge the attributes in front of a declaration (but which aren't part
   of the declspecs) with the attributes after the declaration.
   We're pretending they all came after */
attribute prefix_attr(attribute post_attr)
{
  return attribute_chain(pstate.attributes, post_attr);
}

/* Simple build functions */
declaration make_data_decl(type_element modifiers, declaration decls)
{
  location l = modifiers ? modifiers->location : decls->location;

  data_decl dd = new_data_decl(parse_region, l, modifiers, decls);

  pop_declspec_stack();

  if (decls == NULL && current.spec_section != spec_normal)
    error("provides/uses must be followed by a command, event or interface");

  return CAST(declaration, dd);
}

declaration make_error_decl(void)
{
  return new_error_decl(pr, dummy_location);
}

declaration make_extension_decl(int old_pedantic, location l, declaration d)
{ 
  pedantic = old_pedantic; 
  return CAST(declaration, new_extension_decl(pr, l, d));
}

word make_cword(location l, const char *s)
{
  return new_word(pr, l, str2cstring(pr, s));
}

declarator make_qualified_declarator(location l, declarator d, type_element quals)
{
  if (quals)
    return CAST(declarator, new_qualified_declarator(pr, l, d, quals));
  else
    return d;
}

declarator make_pointer_declarator(location l, declarator d, type_element quals)
{
  d = make_qualified_declarator(l, d, quals);

  return CAST(declarator, new_pointer_declarator(pr, l, d));
}

declarator make_identifier_declarator(location l, cstring id)
{
  return CAST(declarator, new_identifier_declarator(pr, l, id));
}

statement make_error_stmt(void)
{
  return new_error_stmt(pr, dummy_location);
}

/* Tell yyparse how to print a token's value, if yydebug is set.  */

#define YYPRINT(FILE,YYCHAR,YYLVAL) yyprint(FILE,YYCHAR,YYLVAL)
void yyprint();


/* Line 189 of yacc.c  */
#line 326 "c-parse.tab.c"

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
     IDENTIFIER = 258,
     TYPENAME = 259,
     COMPONENTREF = 260,
     SCSPEC = 261,
     TYPESPEC = 262,
     TYPE_QUAL = 263,
     FN_QUAL = 264,
     CONSTANT = 265,
     STRING = 266,
     MAGIC_STRING = 267,
     ELLIPSIS = 268,
     SIZEOF = 269,
     ENUM = 270,
     STRUCT = 271,
     UNION = 272,
     IF = 273,
     ELSE = 274,
     WHILE = 275,
     DO = 276,
     FOR = 277,
     SWITCH = 278,
     CASE = 279,
     DEFAULT = 280,
     BREAK = 281,
     CONTINUE = 282,
     RETURN = 283,
     GOTO = 284,
     ASM_KEYWORD = 285,
     TYPEOF = 286,
     ALIGNOF = 287,
     ATTRIBUTE = 288,
     EXTENSION = 289,
     LABEL = 290,
     REALPART = 291,
     IMAGPART = 292,
     VA_ARG = 293,
     OFFSETOF = 294,
     ASSIGN = 295,
     OROR = 296,
     ANDAND = 297,
     EQCOMPARE = 298,
     ARITHCOMPARE = 299,
     RSHIFT = 300,
     LSHIFT = 301,
     MINUSMINUS = 302,
     PLUSPLUS = 303,
     POINTSAT = 304,
     DISPATCH_C = 305,
     DISPATCH_NESC = 306,
     DISPATCH_PARM = 307,
     DISPATCH_TYPE = 308,
     ATOMIC = 309,
     USES = 310,
     INTERFACE = 311,
     COMPONENTS = 312,
     PROVIDES = 313,
     MODULE = 314,
     INCLUDES = 315,
     CONFIGURATION = 316,
     AS = 317,
     TASTNIOP = 318,
     IMPLEMENTATION = 319,
     CALL = 320,
     SIGNAL = 321,
     POST = 322,
     GENERIC = 323,
     NEW = 324,
     NX_STRUCT = 325,
     NX_UNION = 326,
     ABSTRACT = 327,
     COMPONENT = 328,
     EXTENDS = 329,
     TARGET_ATTRIBUTE0 = 330,
     TARGET_ATTRIBUTE1 = 331,
     TARGET_DEF = 332
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 444 "c-parse.tab.c"

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
#define YYFINAL  78
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4209

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  103
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  262
/* YYNRULES -- Number of rules.  */
#define YYNRULES  633
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1038

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   332

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,     2,     2,     2,    59,    48,     2,
      63,   101,    57,    55,    98,    56,    62,    58,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,    69,
      50,    40,    51,    42,   102,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,   100,    47,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,    46,    99,    66,     2,     2,     2,
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
      35,    36,    37,    38,    39,    41,    44,    45,    49,    52,
      53,    54,    60,    61,    65,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    14,    17,    20,    23,
      26,    27,    30,    32,    35,    36,    40,    42,    46,    47,
      48,    59,    60,    64,    66,    70,    73,    75,    78,    80,
      81,    85,    88,    91,    94,    97,   100,   101,   102,   114,
     115,   116,   117,   130,   131,   132,   141,   143,   144,   145,
     149,   150,   152,   154,   158,   163,   168,   173,   176,   178,
     181,   182,   184,   186,   187,   190,   191,   195,   196,   200,
     202,   206,   209,   211,   213,   217,   222,   224,   228,   231,
     232,   239,   241,   245,   246,   252,   256,   260,   262,   264,
     268,   270,   276,   277,   279,   281,   285,   287,   289,   291,
     294,   295,   297,   299,   301,   306,   311,   316,   320,   322,
     324,   329,   330,   336,   337,   340,   341,   345,   347,   349,
     355,   358,   362,   364,   369,   374,   378,   381,   384,   386,
     388,   394,   399,   404,   408,   409,   410,   417,   419,   421,
     423,   425,   427,   429,   431,   433,   435,   437,   439,   441,
     443,   445,   446,   448,   450,   452,   456,   458,   460,   462,
     464,   467,   470,   473,   476,   479,   482,   487,   490,   495,
     497,   499,   501,   506,   507,   515,   517,   521,   525,   529,
     533,   537,   541,   545,   549,   553,   557,   561,   565,   569,
     573,   577,   581,   587,   588,   594,   598,   602,   604,   606,
     608,   612,   616,   617,   622,   624,   631,   638,   643,   647,
     651,   654,   657,   659,   663,   668,   670,   672,   673,   675,
     678,   680,   683,   688,   693,   697,   700,   702,   704,   707,
     710,   711,   713,   718,   723,   727,   731,   735,   738,   740,
     743,   746,   749,   752,   755,   757,   760,   762,   765,   768,
     771,   774,   777,   780,   782,   785,   788,   791,   794,   797,
     800,   803,   806,   809,   812,   815,   818,   821,   824,   827,
     830,   832,   835,   838,   841,   844,   847,   850,   853,   856,
     859,   862,   865,   868,   871,   874,   877,   880,   883,   886,
     889,   892,   895,   898,   901,   904,   907,   910,   913,   916,
     919,   922,   925,   928,   931,   934,   937,   940,   943,   946,
     949,   952,   955,   958,   961,   964,   966,   968,   970,   972,
     974,   976,   978,   980,   982,   984,   986,   988,   990,   992,
     994,   996,   998,  1000,  1002,  1004,  1006,  1008,  1010,  1012,
    1014,  1016,  1018,  1020,  1022,  1024,  1026,  1028,  1030,  1032,
    1034,  1036,  1037,  1039,  1041,  1043,  1045,  1047,  1049,  1051,
    1053,  1057,  1062,  1067,  1069,  1071,  1073,  1078,  1080,  1085,
    1086,  1091,  1092,  1099,  1103,  1104,  1111,  1115,  1116,  1118,
    1120,  1121,  1124,  1126,  1129,  1136,  1138,  1140,  1142,  1145,
    1148,  1150,  1152,  1156,  1158,  1162,  1163,  1165,  1170,  1177,
    1182,  1188,  1193,  1195,  1197,  1199,  1201,  1203,  1205,  1207,
    1208,  1213,  1215,  1216,  1219,  1221,  1225,  1229,  1232,  1233,
    1238,  1240,  1241,  1246,  1248,  1250,  1252,  1255,  1258,  1264,
    1268,  1269,  1270,  1278,  1279,  1280,  1288,  1290,  1292,  1295,
    1299,  1304,  1306,  1310,  1313,  1317,  1319,  1322,  1326,  1331,
    1333,  1337,  1339,  1343,  1347,  1348,  1357,  1358,  1368,  1374,
    1375,  1385,  1386,  1394,  1396,  1398,  1400,  1402,  1403,  1405,
    1406,  1408,  1410,  1413,  1414,  1418,  1421,  1425,  1428,  1432,
    1435,  1437,  1440,  1442,  1447,  1449,  1454,  1457,  1462,  1466,
    1469,  1474,  1478,  1480,  1484,  1486,  1488,  1492,  1493,  1497,
    1498,  1500,  1502,  1504,  1506,  1510,  1513,  1517,  1522,  1525,
    1527,  1529,  1531,  1533,  1535,  1540,  1544,  1548,  1552,  1555,
    1557,  1559,  1562,  1565,  1566,  1568,  1571,  1572,  1573,  1575,
    1577,  1580,  1584,  1586,  1589,  1591,  1595,  1602,  1608,  1614,
    1617,  1620,  1625,  1626,  1631,  1633,  1636,  1638,  1640,  1641,
    1645,  1647,  1649,  1651,  1654,  1655,  1660,  1662,  1666,  1667,
    1668,  1676,  1682,  1685,  1686,  1687,  1688,  1701,  1702,  1709,
    1712,  1715,  1718,  1722,  1729,  1738,  1749,  1762,  1766,  1771,
    1773,  1775,  1779,  1785,  1788,  1791,  1792,  1794,  1795,  1797,
    1798,  1800,  1802,  1806,  1811,  1819,  1821,  1825,  1826,  1829,
    1832,  1833,  1838,  1841,  1842,  1844,  1846,  1850,  1852,  1856,
    1861,  1866,  1870,  1875,  1880,  1884,  1889,  1890,  1891,  1894,
    1896,  1899,  1901,  1905,  1907,  1909,  1913,  1914,  1916,  1918,
    1920,  1922,  1924,  1926
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     104,     0,    -1,    71,   110,    -1,    71,   121,    -1,    70,
     169,    -1,    70,    -1,    72,   351,    -1,    72,     1,    -1,
      73,   298,    -1,    73,     1,    -1,    -1,   106,   107,    -1,
     169,    -1,   107,   108,    -1,    -1,    80,   109,    69,    -1,
     180,    -1,   109,    98,   180,    -1,    -1,    -1,   105,    76,
     182,   111,   113,   249,   112,    68,   117,    99,    -1,    -1,
      50,   114,    51,    -1,   115,    -1,   114,    98,   115,    -1,
     116,   249,    -1,     3,    -1,   117,   174,    -1,   174,    -1,
      -1,    64,   119,   120,    -1,   350,   100,    -1,     1,   100,
      -1,   105,   122,    -1,   105,   125,    -1,   105,   129,    -1,
      -1,    -1,   132,    79,   182,   123,   133,   249,   124,    68,
     137,    99,   167,    -1,    -1,    -1,    -1,   132,    81,   182,
     126,   133,   249,   127,    68,   137,    99,   128,   152,    -1,
      -1,    -1,    93,   182,   130,   249,   131,    68,   137,    99,
      -1,    88,    -1,    -1,    -1,    63,   134,   101,    -1,    -1,
     135,    -1,   136,    -1,   135,    98,   136,    -1,   224,   352,
     276,   247,    -1,   224,   352,   278,   247,    -1,   225,   352,
     278,   247,    -1,   224,   352,    -1,   138,    -1,   138,   139,
      -1,    -1,   141,    -1,   143,    -1,    -1,   140,   174,    -1,
      -1,    75,   142,   145,    -1,    -1,    78,   144,   145,    -1,
     147,    -1,    68,   146,    99,    -1,   146,   147,    -1,   147,
      -1,   174,    -1,   148,   249,    69,    -1,   148,   118,   249,
      69,    -1,   149,    -1,   149,    82,   182,    -1,    76,   182,
      -1,    -1,    76,   182,   150,    50,   151,    51,    -1,   161,
      -1,   151,    98,   161,    -1,    -1,    84,   153,    68,   162,
      99,    -1,    77,   155,    69,    -1,   155,    98,   156,    -1,
     156,    -1,   157,    -1,   157,    82,   182,    -1,   182,    -1,
      89,   182,    63,   158,   101,    -1,    -1,   159,    -1,   160,
      -1,   159,    98,   160,    -1,   194,    -1,   161,    -1,   298,
      -1,   162,   163,    -1,    -1,   164,    -1,   174,    -1,   154,
      -1,   165,    40,   165,    69,    -1,   165,    65,   165,    69,
      -1,   165,    83,   165,    69,    -1,   165,    62,   166,    -1,
     166,    -1,   182,    -1,   182,    64,   186,   100,    -1,    -1,
      84,   168,    68,   169,    99,    -1,    -1,   170,   172,    -1,
      -1,   169,   171,   172,    -1,   176,    -1,   173,    -1,    30,
      63,   184,   101,    69,    -1,   360,   172,    -1,   205,   239,
      69,    -1,   174,    -1,   225,   205,   239,    69,    -1,   224,
     205,   238,    69,    -1,   231,   205,    69,    -1,     1,    69,
      -1,     1,    99,    -1,    69,    -1,   175,    -1,    97,   180,
      40,   184,    69,    -1,   224,   205,   275,   177,    -1,   225,
     205,   278,   177,    -1,   205,   278,   177,    -1,    -1,    -1,
     242,   247,   178,   201,   179,   318,    -1,     3,    -1,     4,
      -1,   180,    -1,   180,    -1,    48,    -1,    56,    -1,    55,
      -1,    61,    -1,    60,    -1,    66,    -1,    67,    -1,    36,
      -1,    37,    -1,   186,    -1,    -1,   186,    -1,   187,    -1,
     194,    -1,   187,    98,   194,    -1,    85,    -1,    86,    -1,
      87,    -1,   196,    -1,   188,   199,    -1,    57,   192,    -1,
     360,   192,    -1,   183,   192,    -1,    45,   181,    -1,   190,
     189,    -1,   190,    63,   298,   101,    -1,   191,   189,    -1,
     191,    63,   298,   101,    -1,    14,    -1,    32,    -1,   189,
      -1,    63,   298,   101,   192,    -1,    -1,    63,   298,   101,
      68,   193,   261,    99,    -1,   192,    -1,   194,    55,   194,
      -1,   194,    56,   194,    -1,   194,    57,   194,    -1,   194,
      58,   194,    -1,   194,    59,   194,    -1,   194,    54,   194,
      -1,   194,    53,   194,    -1,   194,    52,   194,    -1,   194,
      50,   194,    -1,   194,    51,   194,    -1,   194,    49,   194,
      -1,   194,    48,   194,    -1,   194,    46,   194,    -1,   194,
      47,   194,    -1,   194,    45,   194,    -1,   194,    44,   194,
      -1,   194,    42,   184,    43,   194,    -1,    -1,   194,    42,
     195,    43,   194,    -1,   194,    40,   194,    -1,   194,    41,
     194,    -1,     3,    -1,    10,    -1,   200,    -1,    63,   184,
     101,    -1,    63,     1,   101,    -1,    -1,    63,   197,   320,
     101,    -1,   199,    -1,    38,    63,   194,    98,   298,   101,
      -1,    39,    63,   298,    98,   198,   101,    -1,   196,    64,
     186,   100,    -1,   196,    62,   180,    -1,   196,    65,   180,
      -1,   196,    61,    -1,   196,    60,    -1,   180,    -1,   198,
      62,   180,    -1,   196,    63,   185,   101,    -1,    11,    -1,
      12,    -1,    -1,   202,    -1,   202,    13,    -1,   203,    -1,
     202,   203,    -1,   226,   205,   238,    69,    -1,   227,   205,
     239,    69,    -1,   226,   205,    69,    -1,   227,    69,    -1,
     207,    -1,   313,    -1,   204,   207,    -1,   207,   313,    -1,
      -1,   247,    -1,   224,   205,   238,    69,    -1,   225,   205,
     239,    69,    -1,   224,   205,   269,    -1,   225,   205,   272,
      -1,   231,   205,    69,    -1,   360,   207,    -1,   362,    -1,
     208,   362,    -1,   209,   362,    -1,   208,   248,    -1,   210,
     362,    -1,   211,   362,    -1,   248,    -1,   210,   248,    -1,
     233,    -1,   212,   362,    -1,   213,   362,    -1,   212,   235,
      -1,   213,   235,    -1,   208,   233,    -1,   209,   233,    -1,
     234,    -1,   212,   248,    -1,   212,   236,    -1,   213,   236,
      -1,   208,   234,    -1,   209,   234,    -1,   214,   362,    -1,
     215,   362,    -1,   214,   235,    -1,   215,   235,    -1,   210,
     233,    -1,   211,   233,    -1,   214,   248,    -1,   214,   236,
      -1,   215,   236,    -1,   210,   234,    -1,   211,   234,    -1,
     361,    -1,   216,   362,    -1,   217,   362,    -1,   208,   361,
      -1,   209,   361,    -1,   216,   361,    -1,   217,   361,    -1,
     216,   248,    -1,   218,   362,    -1,   219,   362,    -1,   210,
     361,    -1,   211,   361,    -1,   218,   361,    -1,   219,   361,
      -1,   218,   248,    -1,   220,   362,    -1,   221,   362,    -1,
     220,   235,    -1,   221,   235,    -1,   216,   233,    -1,   217,
     233,    -1,   212,   361,    -1,   213,   361,    -1,   220,   361,
      -1,   221,   361,    -1,   220,   248,    -1,   220,   236,    -1,
     221,   236,    -1,   216,   234,    -1,   217,   234,    -1,   222,
     362,    -1,   223,   362,    -1,   222,   235,    -1,   223,   235,
      -1,   218,   233,    -1,   219,   233,    -1,   214,   361,    -1,
     215,   361,    -1,   222,   361,    -1,   223,   361,    -1,   222,
     248,    -1,   222,   236,    -1,   223,   236,    -1,   218,   234,
      -1,   219,   234,    -1,   212,    -1,   213,    -1,   214,    -1,
     215,    -1,   220,    -1,   221,    -1,   222,    -1,   223,    -1,
     208,    -1,   209,    -1,   210,    -1,   211,    -1,   216,    -1,
     217,    -1,   218,    -1,   219,    -1,   212,    -1,   213,    -1,
     220,    -1,   221,    -1,   208,    -1,   209,    -1,   216,    -1,
     217,    -1,   212,    -1,   213,    -1,   214,    -1,   215,    -1,
     208,    -1,   209,    -1,   210,    -1,   211,    -1,   228,    -1,
     229,    -1,   224,    -1,   225,    -1,    -1,   229,    -1,   235,
      -1,   237,    -1,   236,    -1,   364,    -1,   280,    -1,   281,
      -1,     4,    -1,     5,    62,   180,    -1,    31,    63,   184,
     101,    -1,    31,    63,   298,   101,    -1,   240,    -1,   241,
      -1,   243,    -1,   240,    98,   206,   243,    -1,   245,    -1,
     241,    98,   206,   243,    -1,    -1,    30,    63,    11,   101,
      -1,    -1,   275,   242,   247,    40,   244,   259,    -1,   275,
     242,   247,    -1,    -1,   278,   242,   247,    40,   246,   259,
      -1,   278,   242,   247,    -1,    -1,   250,    -1,   250,    -1,
      -1,   249,   256,    -1,   251,    -1,   250,   251,    -1,    33,
      63,    63,   254,   101,   101,    -1,   252,    -1,   256,    -1,
      95,    -1,    96,   253,    -1,   102,   253,    -1,    10,    -1,
     200,    -1,    63,   184,   101,    -1,   255,    -1,   254,    98,
     255,    -1,    -1,   258,    -1,   258,    63,     3,   101,    -1,
     258,    63,     3,    98,   186,   101,    -1,   258,    63,   185,
     101,    -1,   102,   257,    63,   261,   101,    -1,   102,   257,
       1,   101,    -1,   182,    -1,   182,    -1,   361,    -1,   364,
      -1,   362,    -1,    86,    -1,   194,    -1,    -1,    68,   260,
     261,    99,    -1,     1,    -1,    -1,   262,   287,    -1,   263,
      -1,   262,    98,   263,    -1,   267,    40,   265,    -1,   268,
     265,    -1,    -1,   180,    43,   264,   265,    -1,   265,    -1,
      -1,    68,   266,   261,    99,    -1,   194,    -1,     1,    -1,
     268,    -1,   267,   268,    -1,    62,   180,    -1,    64,   194,
      13,   194,   100,    -1,    64,   194,   100,    -1,    -1,    -1,
     275,   242,   247,   270,   201,   271,   320,    -1,    -1,    -1,
     278,   242,   247,   273,   201,   274,   320,    -1,   276,    -1,
     278,    -1,   276,   305,    -1,    57,   232,   276,    -1,    63,
     247,   276,   101,    -1,     4,    -1,     4,    62,   180,    -1,
     277,   305,    -1,    57,   232,   277,    -1,     4,    -1,   278,
     305,    -1,    57,   232,   278,    -1,    63,   247,   278,   101,
      -1,     3,    -1,     3,    62,   180,    -1,   180,    -1,   286,
     279,   249,    -1,    15,   279,   249,    -1,    -1,   286,   279,
     249,    68,   282,   289,    99,   247,    -1,    -1,    16,   102,
     279,   249,    68,   283,   289,    99,   247,    -1,   286,    68,
     289,    99,   247,    -1,    -1,    15,   279,   249,    68,   284,
     296,   288,    99,   247,    -1,    -1,    15,    68,   285,   296,
     288,    99,   247,    -1,    16,    -1,    17,    -1,    90,    -1,
      91,    -1,    -1,    98,    -1,    -1,    98,    -1,   290,    -1,
     290,   291,    -1,    -1,   290,   291,    69,    -1,   290,    69,
      -1,   228,   205,   292,    -1,   228,   205,    -1,   229,   205,
     293,    -1,   229,   205,    -1,     1,    -1,   360,   291,    -1,
     294,    -1,   292,    98,   206,   294,    -1,   295,    -1,   293,
      98,   206,   295,    -1,   275,   247,    -1,   275,    43,   194,
     247,    -1,    43,   194,   247,    -1,   278,   247,    -1,   278,
      43,   194,   247,    -1,    43,   194,   247,    -1,   297,    -1,
     296,    98,   297,    -1,     1,    -1,   180,    -1,   180,    40,
     194,    -1,    -1,   230,   299,   300,    -1,    -1,   301,    -1,
     303,    -1,   302,    -1,   304,    -1,    57,   232,   302,    -1,
      57,   232,    -1,    57,   232,   303,    -1,    63,   247,   301,
     101,    -1,   304,   306,    -1,   306,    -1,   307,    -1,   309,
      -1,   308,    -1,   309,    -1,   118,    63,   355,   359,    -1,
      63,   353,   359,    -1,    63,   345,   359,    -1,    64,   184,
     100,    -1,    64,   100,    -1,   311,    -1,   326,    -1,   311,
     326,    -1,   311,   313,    -1,    -1,   310,    -1,     1,    69,
      -1,    -1,    -1,   316,    -1,   317,    -1,   316,   317,    -1,
      35,   358,    69,    -1,   320,    -1,     1,   320,    -1,    68,
      -1,   319,   314,    99,    -1,   319,   314,   315,   204,   312,
      99,    -1,   319,   314,   315,     1,    99,    -1,   319,   314,
     315,   310,    99,    -1,   322,   325,    -1,   322,     1,    -1,
      18,    63,   184,   101,    -1,    -1,    21,   324,   325,    20,
      -1,   330,    -1,   338,   325,    -1,   330,    -1,   338,    -1,
      -1,    74,   328,   329,    -1,   330,    -1,     1,    -1,   320,
      -1,   184,    69,    -1,    -1,   321,    19,   331,   325,    -1,
     321,    -1,   321,    19,     1,    -1,    -1,    -1,    20,   332,
      63,   184,   101,   333,   325,    -1,   323,    63,   184,   101,
      69,    -1,   323,     1,    -1,    -1,    -1,    -1,    22,    63,
     340,    69,   334,   340,    69,   335,   340,   101,   336,   325,
      -1,    -1,    23,    63,   184,   101,   337,   325,    -1,    26,
      69,    -1,    27,    69,    -1,    28,    69,    -1,    28,   184,
      69,    -1,    30,   339,    63,   184,   101,    69,    -1,    30,
     339,    63,   184,    43,   341,   101,    69,    -1,    30,   339,
      63,   184,    43,   341,    43,   341,   101,    69,    -1,    30,
     339,    63,   184,    43,   341,    43,   341,    43,   344,   101,
      69,    -1,    29,   181,    69,    -1,    29,    57,   184,    69,
      -1,   327,    -1,    69,    -1,    24,   194,    43,    -1,    24,
     194,    13,   194,    43,    -1,    25,    43,    -1,   181,    43,
      -1,    -1,   362,    -1,    -1,   184,    -1,    -1,   342,    -1,
     343,    -1,   342,    98,   343,    -1,    11,    63,   184,   101,
      -1,    64,   182,   100,    11,    63,   184,   101,    -1,    11,
      -1,   344,    98,    11,    -1,    -1,   346,   347,    -1,   349,
     101,    -1,    -1,   350,    69,   348,   347,    -1,     1,   101,
      -1,    -1,    13,    -1,   350,    -1,   350,    98,    13,    -1,
     351,    -1,   350,    98,   351,    -1,   224,   352,   277,   247,
      -1,   224,   352,   278,   247,    -1,   224,   352,   300,    -1,
     224,   352,   302,   250,    -1,   225,   352,   278,   247,    -1,
     225,   352,   300,    -1,   225,   352,   302,   250,    -1,    -1,
      -1,   354,   355,    -1,   347,    -1,   356,   101,    -1,   357,
      -1,   356,    98,   357,    -1,     3,    -1,   181,    -1,   358,
      98,   181,    -1,    -1,   363,    -1,    34,    -1,     6,    -1,
      25,    -1,     8,    -1,     9,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   465,   465,   466,   467,   470,   471,   472,   473,   474,
     478,   478,   479,   487,   488,   492,   496,   498,   505,   509,
     503,   524,   525,   543,   544,   549,   554,   558,   559,   562,
     562,   566,   571,   575,   576,   577,   582,   587,   581,   601,
     607,   611,   600,   622,   626,   621,   637,   638,   643,   651,
     670,   671,   675,   676,   685,   687,   689,   691,   696,   701,
     703,   707,   708,   709,   709,   713,   713,   718,   718,   723,
     724,   728,   730,   734,   735,   740,   750,   751,   755,   761,
     760,   769,   770,   774,   774,   782,   786,   787,   791,   792,
     796,   798,   804,   805,   809,   810,   814,   816,   820,   824,
     825,   829,   830,   831,   835,   837,   839,   844,   848,   853,
     855,   859,   859,   869,   869,   870,   870,   875,   876,   877,
     882,   887,   894,   898,   900,   902,   905,   906,   907,   911,
     915,   920,   921,   922,   926,   937,   925,   944,   945,   949,
     953,   956,   958,   960,   962,   964,   966,   968,   970,   972,
     976,   985,   986,   990,   995,   997,  1002,  1003,  1004,  1008,
    1009,  1041,  1044,  1047,  1054,  1059,  1069,  1072,  1075,  1081,
    1085,  1089,  1090,  1093,  1092,  1111,  1112,  1114,  1116,  1118,
    1120,  1122,  1124,  1126,  1128,  1130,  1132,  1134,  1136,  1138,
    1140,  1142,  1144,  1147,  1146,  1152,  1154,  1159,  1165,  1166,
    1167,  1169,  1172,  1171,  1186,  1204,  1206,  1208,  1210,  1212,
    1215,  1217,  1222,  1223,  1227,  1231,  1232,  1236,  1237,  1238,
    1250,  1251,  1259,  1261,  1263,  1267,  1277,  1278,  1279,  1280,
    1288,  1299,  1304,  1306,  1308,  1311,  1314,  1317,  1373,  1374,
    1376,  1381,  1386,  1388,  1393,  1394,  1398,  1399,  1401,  1403,
    1405,  1407,  1409,  1414,  1415,  1417,  1419,  1421,  1423,  1428,
    1430,  1432,  1434,  1436,  1438,  1443,  1445,  1447,  1449,  1451,
    1456,  1457,  1459,  1461,  1463,  1465,  1467,  1472,  1477,  1479,
    1481,  1483,  1485,  1487,  1492,  1497,  1499,  1501,  1503,  1505,
    1507,  1509,  1511,  1513,  1515,  1520,  1522,  1524,  1526,  1528,
    1533,  1535,  1537,  1539,  1541,  1543,  1545,  1547,  1549,  1551,
    1556,  1558,  1560,  1562,  1564,  1570,  1571,  1572,  1573,  1574,
    1575,  1576,  1577,  1581,  1582,  1583,  1584,  1585,  1586,  1587,
    1588,  1592,  1593,  1594,  1595,  1599,  1600,  1601,  1602,  1606,
    1607,  1608,  1609,  1613,  1614,  1615,  1616,  1620,  1621,  1625,
    1626,  1632,  1633,  1658,  1659,  1663,  1667,  1668,  1672,  1676,
    1680,  1685,  1687,  1693,  1697,  1701,  1702,  1707,  1708,  1714,
    1715,  1722,  1721,  1729,  1737,  1736,  1744,  1752,  1753,  1758,
    1762,  1763,  1768,  1770,  1775,  1777,  1778,  1782,  1785,  1788,
    1794,  1795,  1796,  1800,  1802,  1808,  1809,  1811,  1814,  1818,
    1824,  1826,  1831,  1839,  1840,  1842,  1844,  1846,  1853,  1855,
    1854,  1858,  1865,  1868,  1872,  1873,  1879,  1883,  1888,  1887,
    1893,  1898,  1897,  1902,  1904,  1908,  1909,  1913,  1918,  1922,
    1928,  1938,  1927,  1951,  1961,  1950,  1976,  1977,  1983,  1985,
    1987,  1989,  1990,  2001,  2003,  2005,  2014,  2016,  2018,  2020,
    2022,  2029,  2033,  2036,  2043,  2042,  2049,  2048,  2054,  2059,
    2058,  2063,  2062,  2069,  2070,  2071,  2072,  2075,  2077,  2080,
    2082,  2087,  2089,  2096,  2097,  2099,  2115,  2117,  2122,  2124,
    2129,  2131,  2136,  2137,  2144,  2145,  2150,  2153,  2156,  2162,
    2165,  2168,  2174,  2175,  2177,  2183,  2185,  2191,  2190,  2198,
    2199,  2203,  2204,  2208,  2209,  2214,  2216,  2221,  2223,  2225,
    2230,  2231,  2235,  2236,  2240,  2243,  2249,  2255,  2257,  2266,
    2282,  2283,  2285,  2290,  2291,  2294,  2299,  2305,  2306,  2313,
    2314,  2318,  2325,  2326,  2330,  2334,  2336,  2339,  2342,  2348,
    2351,  2355,  2366,  2365,  2377,  2379,  2384,  2386,  2391,  2391,
    2411,  2412,  2417,  2419,  2423,  2422,  2431,  2440,  2443,  2445,
    2442,  2454,  2461,  2464,  2465,  2467,  2464,  2474,  2473,  2482,
    2487,  2492,  2495,  2498,  2503,  2508,  2512,  2516,  2521,  2528,
    2529,  2536,  2539,  2542,  2545,  2554,  2555,  2560,  2561,  2568,
    2569,  2573,  2574,  2579,  2581,  2586,  2588,  2595,  2595,  2603,
    2605,  2604,  2611,  2618,  2619,  2629,  2631,  2636,  2637,  2644,
    2646,  2648,  2650,  2652,  2654,  2656,  2660,  2666,  2666,  2673,
    2674,  2679,  2681,  2686,  2691,  2692,  2699,  2700,  2704,  2711,
    2713,  2718,  2723,  2728
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPENAME", "COMPONENTREF",
  "SCSPEC", "TYPESPEC", "TYPE_QUAL", "FN_QUAL", "CONSTANT", "STRING",
  "MAGIC_STRING", "ELLIPSIS", "SIZEOF", "ENUM", "STRUCT", "UNION", "IF",
  "ELSE", "WHILE", "DO", "FOR", "SWITCH", "CASE", "DEFAULT", "BREAK",
  "CONTINUE", "RETURN", "GOTO", "ASM_KEYWORD", "TYPEOF", "ALIGNOF",
  "ATTRIBUTE", "EXTENSION", "LABEL", "REALPART", "IMAGPART", "VA_ARG",
  "OFFSETOF", "'='", "ASSIGN", "'?'", "':'", "OROR", "ANDAND", "'|'",
  "'^'", "'&'", "EQCOMPARE", "'<'", "'>'", "ARITHCOMPARE", "RSHIFT",
  "LSHIFT", "'+'", "'-'", "'*'", "'/'", "'%'", "MINUSMINUS", "PLUSPLUS",
  "'.'", "'('", "'['", "POINTSAT", "'~'", "'!'", "'{'", "';'",
  "DISPATCH_C", "DISPATCH_NESC", "DISPATCH_PARM", "DISPATCH_TYPE",
  "ATOMIC", "USES", "INTERFACE", "COMPONENTS", "PROVIDES", "MODULE",
  "INCLUDES", "CONFIGURATION", "AS", "TASTNIOP", "IMPLEMENTATION", "CALL",
  "SIGNAL", "POST", "GENERIC", "NEW", "NX_STRUCT", "NX_UNION", "ABSTRACT",
  "COMPONENT", "EXTENDS", "TARGET_ATTRIBUTE0", "TARGET_ATTRIBUTE1",
  "TARGET_DEF", "','", "'}'", "']'", "')'", "'@'", "$accept", "dispatch",
  "ncheader", "$@1", "includes_list", "includes", "include_list",
  "interface", "$@2", "$@3", "interface_parms", "interface_parm_list",
  "interface_parm", "type_parm", "datadef_list", "parameters", "$@4",
  "parameters1", "component", "module", "$@5", "$@6", "configuration",
  "$@7", "$@8", "$@9", "binary_component", "$@10", "$@11", "generic",
  "component_parms", "template_parms", "template_parmlist",
  "template_parm", "requires_or_provides_list",
  "requires_or_provides_list_", "requires_or_provides", "$@12", "requires",
  "$@13", "provides", "$@14", "parameterised_interface_list",
  "parameterised_interfaces", "parameterised_interface", "interface_ref",
  "interface_type", "$@15", "typelist", "iconfiguration", "@16", "cuses",
  "component_list", "component_ref", "component_ref2", "generic_args",
  "generic_arglist", "generic_arg", "generic_type", "configuration_decls",
  "configuration_decl", "connection", "endpoint",
  "parameterised_identifier", "imodule", "@17", "extdefs", "@18", "@19",
  "extdef", "datadef", "just_datadef", "target_def", "fndef", "fndef2",
  "$@20", "$@21", "identifier", "id_label", "idword", "unop", "expr",
  "exprlist", "nonnull_exprlist", "nonnull_exprlist_", "callkind",
  "unary_expr", "sizeof", "alignof", "cast_expr", "$@22", "expr_no_commas",
  "$@23", "primary", "$@24", "fieldlist", "function_call", "string",
  "old_style_parm_decls", "datadecls", "datadecl", "decls", "setspecs",
  "maybe_resetattrs", "decl", "declspecs_nosc_nots_nosa_noea",
  "declspecs_nosc_nots_nosa_ea", "declspecs_nosc_nots_sa_noea",
  "declspecs_nosc_nots_sa_ea", "declspecs_nosc_ts_nosa_noea",
  "declspecs_nosc_ts_nosa_ea", "declspecs_nosc_ts_sa_noea",
  "declspecs_nosc_ts_sa_ea", "declspecs_sc_nots_nosa_noea",
  "declspecs_sc_nots_nosa_ea", "declspecs_sc_nots_sa_noea",
  "declspecs_sc_nots_sa_ea", "declspecs_sc_ts_nosa_noea",
  "declspecs_sc_ts_nosa_ea", "declspecs_sc_ts_sa_noea",
  "declspecs_sc_ts_sa_ea", "declspecs_ts", "declspecs_nots",
  "declspecs_ts_nosa", "declspecs_nots_nosa", "declspecs_nosc_ts",
  "declspecs_nosc_nots", "declspecs_nosc", "declspecs",
  "maybe_type_quals_attrs", "type_spec_nonattr", "type_spec_attr",
  "type_spec_reserved_nonattr", "type_spec_reserved_attr",
  "type_spec_nonreserved_nonattr", "initdecls", "notype_initdecls",
  "initdecls_", "notype_initdecls_", "maybeasm", "initdcl", "@25",
  "notype_initdcl", "@26", "maybe_attribute", "eattributes",
  "nesc_attributes", "attributes", "attribute", "target_attribute",
  "restricted_expr", "attribute_list", "attrib", "nattrib", "nastart",
  "any_word", "init", "$@27", "initlist_maybe_comma", "initlist1",
  "initelt", "@28", "initval", "$@29", "designator_list", "designator",
  "nested_function", "$@30", "$@31", "notype_nested_function", "$@32",
  "$@33", "declarator", "after_type_declarator", "parm_declarator",
  "notype_declarator", "tag", "structuse", "structdef", "@34", "@35",
  "@36", "@37", "structkind", "maybecomma", "maybecomma_warn",
  "component_decl_list", "component_decl_list2", "component_decl",
  "components", "components_notype", "component_declarator",
  "component_notype_declarator", "enumlist", "enumerator", "typename",
  "$@38", "absdcl", "absdcl1", "absdcl1_noea", "absdcl1_ea",
  "direct_absdcl1", "array_or_fn_declarator", "array_or_absfn_declarator",
  "fn_declarator", "absfn_declarator", "array_declarator", "stmts",
  "stmt_or_labels", "xstmts", "errstmt", "pushlevel", "maybe_label_decls",
  "label_decls", "label_decl", "compstmt_or_error", "compstmt_start",
  "compstmt", "simple_if", "if_prefix", "do_stmt_start", "@39",
  "labeled_stmt", "stmt_or_label", "atomic_stmt", "$@40", "stmt_or_error",
  "stmt", "$@41", "$@42", "@43", "$@44", "$@45", "@46", "@47", "label",
  "maybe_type_qual", "xexpr", "asm_operands", "nonnull_asm_operands",
  "asm_operand", "asm_clobbers", "parmlist", "$@48", "parmlist_1", "$@49",
  "parmlist_2", "parms", "parm", "xreferror", "parmlist_or_identifiers",
  "$@50", "parmlist_or_identifiers_1", "identifiers", "old_parameter",
  "identifiers_or_typenames", "fn_quals", "extension", "scspec",
  "type_qual", "fn_qual", "type_spec", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      61,   295,    63,    58,   296,   297,   124,    94,    38,   298,
      60,    62,   299,   300,   301,    43,    45,    42,    47,    37,
     302,   303,    46,    40,    91,   304,   126,    33,   123,    59,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,    44,   125,
      93,    41,    64
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   103,   104,   104,   104,   104,   104,   104,   104,   104,
     106,   105,   105,   107,   107,   108,   109,   109,   111,   112,
     110,   113,   113,   114,   114,   115,   116,   117,   117,   119,
     118,   120,   120,   121,   121,   121,   123,   124,   122,   126,
     127,   128,   125,   130,   131,   129,   132,   132,   133,   133,
     134,   134,   135,   135,   136,   136,   136,   136,   137,   138,
     138,   139,   139,   140,   139,   142,   141,   144,   143,   145,
     145,   146,   146,   147,   147,   147,   148,   148,   149,   150,
     149,   151,   151,   153,   152,   154,   155,   155,   156,   156,
     157,   157,   158,   158,   159,   159,   160,   160,   161,   162,
     162,   163,   163,   163,   164,   164,   164,   165,   165,   166,
     166,   168,   167,   170,   169,   171,   169,   172,   172,   172,
     172,   173,   173,   174,   174,   174,   174,   174,   174,   174,
     175,   176,   176,   176,   178,   179,   177,   180,   180,   181,
     182,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     184,   185,   185,   186,   187,   187,   188,   188,   188,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   190,
     191,   192,   192,   193,   192,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   195,   194,   194,   194,   196,   196,   196,
     196,   196,   197,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   198,   198,   199,   200,   200,   201,   201,   201,
     202,   202,   203,   203,   203,   203,   204,   204,   204,   204,
     205,   206,   207,   207,   207,   207,   207,   207,   208,   208,
     208,   209,   210,   210,   211,   211,   212,   212,   212,   212,
     212,   212,   212,   213,   213,   213,   213,   213,   213,   214,
     214,   214,   214,   214,   214,   215,   215,   215,   215,   215,
     216,   216,   216,   216,   216,   216,   216,   217,   218,   218,
     218,   218,   218,   218,   219,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   221,   221,   221,   221,   221,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     223,   223,   223,   223,   223,   224,   224,   224,   224,   224,
     224,   224,   224,   225,   225,   225,   225,   225,   225,   225,
     225,   226,   226,   226,   226,   227,   227,   227,   227,   228,
     228,   228,   228,   229,   229,   229,   229,   230,   230,   231,
     231,   232,   232,   233,   233,   234,   235,   235,   236,   237,
     237,   237,   237,   238,   239,   240,   240,   241,   241,   242,
     242,   244,   243,   243,   246,   245,   245,   247,   247,   248,
     249,   249,   250,   250,   251,   251,   251,   252,   252,   252,
     253,   253,   253,   254,   254,   255,   255,   255,   255,   255,
     256,   256,   257,   258,   258,   258,   258,   258,   259,   260,
     259,   259,   261,   261,   262,   262,   263,   263,   264,   263,
     263,   266,   265,   265,   265,   267,   267,   268,   268,   268,
     270,   271,   269,   273,   274,   272,   275,   275,   276,   276,
     276,   276,   276,   277,   277,   277,   278,   278,   278,   278,
     278,   279,   280,   280,   282,   281,   283,   281,   281,   284,
     281,   285,   281,   286,   286,   286,   286,   287,   287,   288,
     288,   289,   289,   290,   290,   290,   291,   291,   291,   291,
     291,   291,   292,   292,   293,   293,   294,   294,   294,   295,
     295,   295,   296,   296,   296,   297,   297,   299,   298,   300,
     300,   301,   301,   302,   302,   303,   303,   304,   304,   304,
     305,   305,   306,   306,   307,   307,   308,   309,   309,   310,
     311,   311,   311,   312,   312,   313,   314,   315,   315,   316,
     316,   317,   318,   318,   319,   320,   320,   320,   320,   321,
     321,   322,   324,   323,   325,   325,   326,   326,   328,   327,
     329,   329,   330,   330,   331,   330,   330,   330,   332,   333,
     330,   330,   330,   334,   335,   336,   330,   337,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   338,   338,   338,   338,   339,   339,   340,   340,   341,
     341,   342,   342,   343,   343,   344,   344,   346,   345,   347,
     348,   347,   347,   349,   349,   349,   349,   350,   350,   351,
     351,   351,   351,   351,   351,   351,   352,   354,   353,   355,
     355,   356,   356,   357,   358,   358,   359,   359,   360,   361,
     361,   362,   363,   364
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     2,     2,     2,     2,
       0,     2,     1,     2,     0,     3,     1,     3,     0,     0,
      10,     0,     3,     1,     3,     2,     1,     2,     1,     0,
       3,     2,     2,     2,     2,     2,     0,     0,    11,     0,
       0,     0,    12,     0,     0,     8,     1,     0,     0,     3,
       0,     1,     1,     3,     4,     4,     4,     2,     1,     2,
       0,     1,     1,     0,     2,     0,     3,     0,     3,     1,
       3,     2,     1,     1,     3,     4,     1,     3,     2,     0,
       6,     1,     3,     0,     5,     3,     3,     1,     1,     3,
       1,     5,     0,     1,     1,     3,     1,     1,     1,     2,
       0,     1,     1,     1,     4,     4,     4,     3,     1,     1,
       4,     0,     5,     0,     2,     0,     3,     1,     1,     5,
       2,     3,     1,     4,     4,     3,     2,     2,     1,     1,
       5,     4,     4,     3,     0,     0,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     3,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     4,     2,     4,     1,
       1,     1,     4,     0,     7,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     0,     5,     3,     3,     1,     1,     1,
       3,     3,     0,     4,     1,     6,     6,     4,     3,     3,
       2,     2,     1,     3,     4,     1,     1,     0,     1,     2,
       1,     2,     4,     4,     3,     2,     1,     1,     2,     2,
       0,     1,     4,     4,     3,     3,     3,     2,     1,     2,
       2,     2,     2,     2,     1,     2,     1,     2,     2,     2,
       2,     2,     2,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     4,     1,     1,     1,     4,     1,     4,     0,
       4,     0,     6,     3,     0,     6,     3,     0,     1,     1,
       0,     2,     1,     2,     6,     1,     1,     1,     2,     2,
       1,     1,     3,     1,     3,     0,     1,     4,     6,     4,
       5,     4,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     1,     0,     2,     1,     3,     3,     2,     0,     4,
       1,     0,     4,     1,     1,     1,     2,     2,     5,     3,
       0,     0,     7,     0,     0,     7,     1,     1,     2,     3,
       4,     1,     3,     2,     3,     1,     2,     3,     4,     1,
       3,     1,     3,     3,     0,     8,     0,     9,     5,     0,
       9,     0,     7,     1,     1,     1,     1,     0,     1,     0,
       1,     1,     2,     0,     3,     2,     3,     2,     3,     2,
       1,     2,     1,     4,     1,     4,     2,     4,     3,     2,
       4,     3,     1,     3,     1,     1,     3,     0,     3,     0,
       1,     1,     1,     1,     3,     2,     3,     4,     2,     1,
       1,     1,     1,     1,     4,     3,     3,     3,     2,     1,
       1,     2,     2,     0,     1,     2,     0,     0,     1,     1,
       2,     3,     1,     2,     1,     3,     6,     5,     5,     2,
       2,     4,     0,     4,     1,     2,     1,     1,     0,     3,
       1,     1,     1,     2,     0,     4,     1,     3,     0,     0,
       7,     5,     2,     0,     0,     0,    12,     0,     6,     2,
       2,     2,     3,     6,     8,    10,    12,     3,     4,     1,
       1,     3,     5,     2,     2,     0,     1,     0,     1,     0,
       1,     1,     3,     4,     7,     1,     3,     0,     2,     2,
       0,     4,     2,     0,     1,     1,     3,     1,     3,     4,
       4,     3,     4,     4,     3,     4,     0,     0,     2,     1,
       2,     1,     3,     1,     1,     3,     0,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   113,   113,     0,     0,     0,   115,     0,    47,    14,
       2,     3,   115,     7,   359,     0,   629,   633,   631,     0,
     463,   464,   630,     0,     0,   465,   466,   387,     0,     0,
     323,   324,   325,   326,   315,   316,   317,   318,   327,   328,
     329,   330,   319,   320,   321,   322,   616,   616,   246,   253,
     353,   355,   354,   244,   379,   382,   385,   386,   357,   358,
       0,     6,   270,   238,   356,     9,   343,   344,   345,   346,
     339,   340,   341,   342,   347,   348,   497,     8,     1,     0,
       0,     0,   628,   128,     0,   114,   118,   122,   129,   117,
       0,   230,   230,   230,     0,     0,    46,     0,    33,    34,
      35,     0,    11,     0,   137,   138,   461,   451,   380,     0,
       0,     0,   390,   215,   216,     0,   391,   388,   140,   402,
     389,     0,   251,   257,   241,   273,   239,   252,   258,   274,
     240,   263,   268,   245,   280,   242,   264,   269,   281,   243,
     249,   255,   254,   291,   247,   250,   256,   292,   248,   261,
     266,   265,   306,   259,   262,   267,   307,   260,   289,   298,
     277,   275,   271,   290,   299,   276,   272,   304,   313,   284,
     282,   278,   305,   314,   283,   279,   287,   296,   295,   293,
     285,   288,   297,   294,   286,   302,   311,   310,   308,   300,
     303,   312,   309,   301,   499,   499,   383,   473,   380,   499,
     116,   126,   127,     0,     0,   449,   351,   377,     0,   364,
     367,   369,     0,     0,     0,   120,    18,    43,     0,     0,
       0,    13,   360,     0,   453,   380,   197,   198,   169,   170,
     148,   149,     0,     0,     0,   141,   143,   142,     0,   145,
     144,     0,   146,   147,   156,   157,   158,     0,     0,   150,
     153,     0,   171,     0,     0,   175,   154,   159,   204,   199,
       0,     0,   395,     0,     0,     0,   445,   351,   597,     0,
     377,   377,   611,   500,   502,   501,   503,   509,   512,   513,
     351,   377,   614,   502,     0,     0,   452,   351,   597,   498,
     502,     0,     0,     0,   343,   344,   345,   346,   352,     0,
       0,   378,   121,   377,     0,   617,    29,     0,   133,   377,
     446,   510,   511,   441,   351,   377,     0,   363,   365,   369,
     436,   437,     0,   369,   125,    21,   380,    36,    39,     0,
      16,   494,   495,   469,   492,   459,     0,   381,     0,     0,
       0,   139,   164,   161,     0,     0,     0,     0,   163,   361,
       0,     0,     0,   160,     0,   165,     0,   167,     0,     0,
     193,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   211,   210,     0,
     151,     0,     0,   362,   162,   407,   403,     0,   393,   396,
     404,   406,   405,   392,   401,   424,   197,     0,     0,   421,
       0,   423,     0,   467,   414,   420,     0,     0,   505,     0,
     626,     0,   518,     0,   609,   443,   610,   612,   597,   508,
     505,   613,   615,   377,   480,   475,   230,   230,   472,     0,
     454,   505,     0,     0,     0,   450,   447,     0,     0,   231,
       0,   626,     0,     0,     0,   134,     0,     0,     0,   124,
     377,   131,   377,   438,   123,   132,     0,   380,    44,    48,
      48,    15,     0,     0,   470,     0,     0,   456,     0,     0,
     201,   200,   534,   526,     0,     0,   155,     0,     0,   195,
     196,     0,     0,   191,   190,   188,   189,   187,   186,   184,
     185,   183,   182,   181,   176,   177,   178,   179,   180,   208,
       0,   152,     0,   209,   395,     0,   151,   427,     0,     0,
     418,   400,     0,   413,     0,   426,   417,   444,   504,   506,
       0,   632,   516,   627,     0,   604,   598,     0,   605,   607,
     517,   458,   477,   479,   474,   481,   473,   119,   130,   448,
     368,   369,     0,   515,   623,   619,   618,     0,   621,     0,
      30,     0,   626,   374,   217,   442,   439,     0,     0,   134,
      26,     0,    23,   380,    19,     0,    50,   380,   380,    17,
     496,   493,   377,   469,   473,     0,     0,   527,   203,   173,
     172,   166,   168,     0,     0,   214,   207,   394,   384,   197,
       0,     0,   429,     0,     0,   415,   416,   507,   602,   599,
     600,     0,     0,   377,   476,   482,     0,   377,   478,   484,
       0,   377,   370,     0,   620,    32,     0,    31,   514,     0,
     135,   218,   220,   335,   336,   331,   332,   337,   338,   333,
     334,   230,   230,   440,   366,   371,    22,     0,    25,     0,
      60,     0,    51,    52,   616,   616,    37,    40,   462,     0,
       0,     0,   212,     0,     0,   535,     0,   528,   529,     0,
     192,   194,     0,   397,   399,     0,   422,   419,     0,   606,
     608,   377,     0,   486,   377,   377,     0,   489,   377,   377,
     373,   622,   411,   409,   408,   375,     0,   219,   221,     0,
     225,     0,     0,    24,     0,     0,    63,    49,     0,    57,
       0,     0,     0,   377,   377,   205,     0,   206,   624,     0,
       0,   359,     0,   558,   542,     0,     0,     0,   630,     0,
       0,     0,     0,   585,   580,   548,     0,     0,   523,     0,
     230,   230,   230,     0,     0,   227,   552,   556,     0,     0,
     520,   579,   546,   547,     0,   530,     0,     0,   428,   601,
     488,   377,     0,   491,   377,     0,   455,     0,     0,   136,
     532,   224,     0,     0,   369,   372,     0,    28,   230,   230,
      45,    65,    67,    59,     0,    61,    62,    53,   377,   377,
     377,    60,    60,   460,   457,   213,   531,     0,   525,   537,
       0,     0,     0,   587,     0,     0,   583,   569,   570,   571,
       0,     0,     0,     0,   586,     0,   584,   553,   228,   524,
       0,     0,   229,     0,     0,     0,   538,     0,   522,   521,
       0,   540,   539,   544,     0,   562,     0,   237,   174,   398,
     487,   483,   490,   485,     0,   533,   222,   223,   377,    20,
      27,     0,     0,     0,     0,    64,    54,    55,    56,     0,
       0,   625,     0,     0,     0,   588,     0,     0,     0,   581,
     572,     0,   577,     0,   551,   549,   550,   536,     0,   234,
     369,     0,   235,   369,   236,   557,     0,   545,     0,   410,
     376,     0,     0,    66,    69,   380,    76,    73,    68,     0,
      41,   541,     0,   543,   563,   567,     0,   578,     0,   232,
     377,   233,   377,   555,     0,     0,    72,    78,    29,   380,
       0,     0,   111,    38,     0,   559,   587,     0,   582,   589,
       0,   430,   433,   561,    70,    71,     0,     0,    74,    77,
       0,    83,    42,     0,     0,   568,     0,     0,     0,   590,
     591,   573,   217,   217,     0,    75,   113,     0,   560,   564,
       0,     0,   589,     0,     0,   431,   434,     0,    81,    98,
     115,   100,   587,     0,     0,     0,   574,   592,     0,     0,
      80,     0,   112,     0,     0,   593,     0,     0,     0,   432,
     435,    82,     0,    84,   103,    99,   101,     0,   108,   102,
     109,   565,     0,   595,     0,   575,     0,     0,    87,    88,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,     0,   107,     0,     0,     0,   566,
     594,   596,   576,    92,    86,    89,   104,   105,   106,   110,
       0,    93,    94,    97,    96,    91,     0,    95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     8,     9,   102,   221,   329,    10,   325,   639,
     457,   561,   562,   563,   766,   307,   443,   550,    11,    98,
     459,   701,    99,   460,   702,   914,   100,   326,   565,   101,
     567,   641,   642,   643,   695,   696,   773,   774,   775,   843,
     776,   844,   883,   905,   884,   885,   886,   926,   957,   932,
     947,   984,   997,   998,   999,  1030,  1031,  1032,  1033,   973,
     985,   986,   987,   988,   913,   930,     6,     7,    79,    85,
      86,   887,    88,    89,   308,   554,   686,   118,   726,   990,
     247,   727,   500,   249,   250,   251,   252,   253,   254,   255,
     659,   256,   482,   257,   346,   653,   258,   259,   620,   621,
     622,   728,    90,   438,   729,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   631,   632,    74,    75,    76,    93,   299,
      48,    49,    50,    51,    52,   316,   322,   317,   209,   309,
     318,   692,   210,   619,   439,    53,   224,    54,    55,    56,
     117,   387,   388,    57,   121,   389,   685,   757,   402,   403,
     404,   594,   405,   509,   406,   407,   869,   942,   968,   872,
     943,   969,   541,   320,   270,   321,   108,    58,    59,   536,
     574,   466,   223,    60,   513,   465,   284,   285,   428,   604,
     608,   605,   609,   333,   334,   959,   199,   272,   273,   290,
     275,   276,   310,   277,   311,   278,   312,   733,   734,   810,
     735,   577,   656,   657,   658,   759,   473,   736,   737,   738,
     739,   792,   822,   740,   741,   805,   865,   823,   876,   791,
     933,   916,   962,  1006,   917,   824,   803,   856,   938,   939,
     940,   994,   410,   411,   545,   668,   527,   528,   529,   194,
     441,   442,   546,   547,   548,   709,   522,   261,    62,    63,
     523,    64
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -729
static const yytype_int16 yypact[] =
{
     560,   204,   583,  2204,  2276,   251,   311,  1317,   536,  -729,
    -729,  -729,   534,  -729,  -729,   273,  -729,  -729,  -729,    76,
     215,  -729,  -729,    52,   367,  -729,  -729,  -729,   322,   544,
    2947,   630,  2947,   630,  1209,   760,  1209,   760,  2947,   630,
    2947,   630,  1209,   760,  1209,   760,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,   115,  -729,  -729,  -729,  -729,  -729,
     168,  -729,  -729,  -729,  -729,  -729,  2966,   731,  2966,   731,
    1093,   386,  1093,   386,  -729,  -729,  -729,  -729,  -729,  1317,
     323,   407,  -729,  -729,   605,  -729,  -729,  -729,  -729,  -729,
     343,   352,   389,  -729,  1317,   605,  -729,   605,  -729,  -729,
    -729,   441,   421,   605,  -729,  -729,  -729,  -729,  -729,   605,
    2695,   468,  -729,  -729,  -729,  3807,  -729,  -729,  -729,  -729,
    -729,    69,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,   317,   402,  -729,  -729,  -729,   446,
    -729,  -729,  -729,  3807,   499,   514,    83,   115,   480,   491,
    -729,   160,   334,   343,   529,  -729,  -729,  -729,   605,   605,
     605,  -729,  -729,   565,   123,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,   538,   586,   605,  -729,  -729,  -729,  3807,  -729,
    -729,  1439,  -729,  -729,  -729,  -729,  -729,  3807,   552,  -729,
     569,   469,  -729,  3866,  3925,  -729,  1498,   848,  -729,  -729,
     573,  3807,   589,   576,   579,  2440,  -729,    83,   410,  3041,
     741,   741,  -729,  -729,   115,  -729,     9,  -729,  -729,  -729,
      83,   741,  -729,   115,   607,   482,   129,    83,   615,  -729,
    -729,   608,  3807,   605,    83,   705,    83,   705,  -729,   343,
     343,   115,  -729,   115,   655,  -729,  3041,   659,  -729,   115,
    -729,  -729,  -729,   664,    83,   115,   658,   632,  -729,   698,
     578,   578,   674,   160,  -729,   694,  -729,  -729,  -729,   117,
    -729,  -729,   693,   651,  -729,  -729,   605,  -729,   145,  3807,
    2966,  -729,  -729,  -729,   656,   662,   684,   663,  -729,  -729,
    3807,  3434,   848,   939,  1439,  -729,  1439,  -729,  3807,  3807,
    3807,  3807,  3807,  3807,  3807,  3807,  3807,  3807,  3807,  3807,
    3807,  3807,  3807,  3807,  3807,  3807,  3807,  -729,  -729,   605,
    3807,  3807,   605,  -729,  -729,  -729,  -729,   395,  -729,   696,
    -729,  -729,  -729,  -729,  -729,  -729,   713,   605,  3807,  -729,
     717,  1498,   669,   675,  -729,  -729,   350,  3366,   317,   402,
     763,  1569,  -729,   678,  -729,  -729,  -729,   115,  -729,  -729,
     402,  -729,   115,   115,  -729,  -729,  -729,  -729,   720,  2256,
    -729,   446,   446,   721,   723,  -729,   578,   278,   334,  -729,
     771,   763,  1999,  2237,  1999,     2,   605,   334,   334,  -729,
     115,  -729,   115,  -729,  -729,  -729,   783,  -729,   691,   733,
     733,  -729,   605,  3807,   605,   695,   565,  -729,  4091,   699,
    -729,  -729,  -729,  -729,   702,  3687,  1498,   706,   707,  1498,
    1498,   772,   775,  2026,  2264,  1149,  1460,  1863,  1380,   878,
     878,   878,   797,   797,   599,   599,  -729,  -729,  -729,  -729,
     722,  -729,   724,  -729,   589,   726,  3984,  -729,  3098,  2860,
    -729,  -729,  2372,  -729,  3495,  -729,  -729,   578,  -729,  -729,
     729,  -729,  -729,  -729,   730,  -729,  -729,   743,   349,  -729,
    -729,  -729,   844,    98,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,   698,   744,  -729,  -729,  -729,  -729,   445,  -729,   725,
    -729,   523,   763,  -729,   630,  -729,   578,   399,   334,   384,
    -729,     1,  -729,  -729,   691,   774,  2947,  -729,  -729,  -729,
    1498,  -729,   115,   651,  -729,  2966,   605,    85,  -729,  -729,
    -729,  -729,  -729,  3807,  3807,  -729,  -729,  -729,  -729,   459,
     748,  3807,  -729,   761,  3495,  -729,  -729,  -729,  -729,  -729,
    -729,  2925,  3807,   137,   765,  -729,  3807,   738,   766,  -729,
     767,   115,  -729,   868,  -729,  -729,  2947,  -729,  -729,  3556,
    -729,   118,  -729,  2947,   630,  1209,   760,  2947,   630,  1209,
     760,  -729,   790,  -729,  -729,  -729,  -729,   783,   691,   804,
    -729,   773,   777,  -729,  -729,  -729,   691,   691,  -729,   780,
     781,   782,  -729,   244,   605,  -729,  1734,   841,  -729,  2860,
    1201,  1201,  3807,  -729,  -729,  4052,  -729,  -729,  1569,  -729,
    -729,  4032,  3807,  -729,   115,  4032,  3807,  -729,   115,   115,
     845,  -729,  -729,  -729,  1498,  -729,    34,  -729,  -729,   240,
    -729,   343,  3556,  -729,  2137,   794,   393,  -729,  2947,   334,
     343,   813,   821,   115,   115,  -729,   605,  -729,  -729,   358,
     346,   755,   834,  -729,  -729,   836,   840,  3807,   861,   846,
     847,  3746,   325,   705,  -729,  -729,   862,   849,  2528,  1606,
     352,   389,  -729,   822,  2791,  -729,  -729,   901,  3157,    87,
    -729,  -729,  -729,  -729,  2628,  -729,   824,   826,  -729,  -729,
    -729,  4032,   844,  -729,  4032,    98,  -729,  2860,   684,  -729,
    -729,  -729,   860,   876,   160,  -729,  2035,  -729,   352,   389,
    -729,  -729,  -729,  -729,  2137,  -729,  -729,  -729,   741,   741,
     741,  -729,  -729,  -729,  -729,  -729,  -729,   605,  -729,  -729,
    3807,   897,  3626,  3807,  3807,  4113,  -729,  -729,  -729,  -729,
     892,  3807,   899,   903,  -729,  3305,  -729,  -729,  -729,  -729,
     870,   904,  -729,   334,   343,   905,  -729,   861,  -729,  -729,
    3235,  -729,  -729,  -729,  3626,  -729,  3807,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,   873,  -729,  -729,  -729,   115,  -729,
    -729,   334,   343,  1869,  1869,  -729,  -729,  -729,  -729,   881,
     884,  -729,   883,  3807,   957,  -729,   916,   887,  3807,  -729,
    -729,   922,  -729,  3807,  -729,  -729,  -729,  -729,   925,  -729,
     698,   927,  -729,   160,  -729,  -729,  3626,  -729,   896,  -729,
     885,  2102,   605,  -729,  -729,   941,   924,  -729,  -729,   923,
    -729,  -729,   908,  -729,  -729,  -729,  4150,  -729,   149,  -729,
     115,  -729,   115,  -729,   943,  1968,  -729,   963,  -729,  -729,
     114,   605,  -729,  -729,   930,  -729,  3807,  3626,  -729,    49,
     946,   384,     2,  -729,  -729,  -729,   967,   255,  -729,  -729,
     950,  -729,  -729,  3626,   951,  -729,   958,   605,   157,   926,
    -729,  -729,   630,   630,  2966,  -729,  -729,   960,  -729,  -729,
    3807,   929,    49,   964,    49,  -729,  -729,   124,  -729,  -729,
     938,  -729,  3807,   937,  1030,   169,  -729,  -729,   684,   684,
    -729,  2966,  -729,  1834,   944,  -729,   983,  1037,   980,  -729,
    -729,  -729,    58,  -729,  -729,  -729,  -729,   369,  -729,  -729,
     987,  -729,  3807,  -729,   487,  -729,   605,   366,  -729,   970,
    -729,   605,   605,   605,   605,  3807,  3626,   952,  1043,   988,
     993,  -729,    58,   605,   246,  -729,   416,   426,   977,  -729,
    -729,  -729,  -729,  2695,  -729,  -729,  -729,  -729,  -729,  -729,
     959,   982,  -729,  -729,  1498,  -729,  2695,  -729
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,   444,  -729,  -729,   193,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
     622,  -729,  -729,   385,  -116,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,   241,  -729,  -646,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,    75,  -729,  -729,  -729,    54,  -644,  -729,
    -729,  -729,  -385,    91,  -729,  -729,    12,  -729,  -729,   344,
    -729,    13,  -729,  -729,    53,  -729,  -729,    78,  -228,   -20,
    -729,   163,   588,  -355,  -729,  -729,   447,  -729,  -729,  -211,
    -729,   700,  -729,   851,  -729,  -729,   853,   670,  -227,  -729,
     474,  -729,   -28,  -413,  -641,    -4,    -1,     0,     8,     4,
       7,    11,    19,  -547,  -535,  -729,  -729,  -532,  -523,  -729,
    -729,    14,    25,  -729,  -729,  -275,  -111,  -729,  -616,   224,
      16,   127,   184,   492,  -729,  -636,   -89,  -729,  -729,  -303,
    -405,  -729,  -729,  -729,   818,   856,  -180,   558,    22,  -729,
    1067,  -729,   593,  -196,  -729,  -729,   413,  -729,  -458,  -729,
     600,  -729,  -341,  -729,  -729,   710,  -729,  -729,  -729,  -729,
    -729,  -729,  -207,  -409,   703,   -31,    18,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,   546,  -493,  -729,   728,  -729,
    -729,   368,   373,   657,   660,    30,  -729,   326,   -83,  -126,
     110,  -729,  -226,   855,  -729,  -729,   683,   401,  -729,  -729,
    -280,  -729,  -729,  -729,   475,  -729,  -729,  -317,  -729,  -729,
    -729,  -729,  -687,   417,  -729,  -729,  -729,  -598,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -589,  -729,  -728,   201,  -729,
     200,  -729,  -729,  -729,  -394,  -729,  -729,   715,    10,   -45,
    -729,  -729,   716,  -729,   549,  -729,  -400,    17,   652,  1104,
    -729,  -232
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -604
static const yytype_int16 yytable[] =
{
      66,   208,   195,    67,    68,   319,   342,   627,    70,   119,
     426,    71,    69,    61,    12,    72,   452,   526,   286,   628,
      87,    91,   629,    73,    94,   501,   502,   343,   337,   474,
     392,   630,    92,   540,    77,   758,   348,   558,   556,   557,
     732,   543,   553,   610,   415,   338,   122,   127,   131,   136,
     384,   593,   636,   762,   158,   163,   167,   172,   742,   211,
     936,   104,   105,   212,   213,   214,   516,   743,   274,   283,
     264,  -376,   418,   269,   627,   216,   196,   217,   198,   104,
     105,   650,   122,   127,   131,   136,   628,   808,   825,   629,
     337,    18,    87,    91,   453,   298,    94,   107,   630,   637,
    -376,   205,   472,   827,    92,   854,    66,    87,    91,    67,
      68,    94,   732,   937,    70,   110,    24,    71,    69,    92,
     654,    72,    14,    15,    16,    17,    18,   225,   732,    73,
     742,   687,   265,    19,    20,    21,   742,   877,   107,   743,
     260,   606,   337,    22,   106,   743,   458,   996,    24,    23,
     826,   501,   618,   634,   426,   206,   298,   123,   128,   132,
     137,   207,   204,   271,   281,   159,   164,   168,   173,   298,
      24,   104,   105,   596,   427,   970,   298,   868,    27,    28,
     672,   222,   323,   928,   655,    29,   461,   107,   934,   903,
     304,   335,   919,   123,   128,   132,   137,   430,   327,   328,
     952,   746,   294,   298,    -5,   295,   296,   866,    25,    26,
      27,    28,   977,   467,   297,   462,   336,    29,   140,   145,
     149,   154,   971,   305,   306,   336,   176,   181,   185,   190,
     935,   336,    27,    28,   974,   906,   197,    66,   611,    29,
      67,    68,   386,   205,   313,    70,   948,   336,    71,    69,
     920,    78,    72,   667,   140,   145,   149,   154,   953,   925,
      73,   752,   337,   294,   580,   755,   295,   296,   436,   437,
     978,   347,   392,   248,   749,   297,   294,   564,   263,   295,
     296,    66,   518,   294,    67,    68,   295,   296,   297,    70,
     778,   415,    71,    69,   518,   297,    72,   314,   330,   834,
     958,   332,   429,   315,    73,   518,   706,   747,  1002,   761,
     294,    -4,   341,   295,   296,  1026,   119,   109,   427,  1019,
     205,   266,   297,   196,   945,   603,   520,   981,   104,   105,
     453,   453,   112,   113,   114,   103,    66,   205,   313,    67,
      68,   305,   306,   400,    70,   707,   205,    71,    69,   520,
      66,    72,    66,    67,    68,    67,    68,   336,    70,    73,
      70,    71,    69,    71,    69,    72,   291,    72,   337,   760,
     469,   435,   451,    73,   267,    73,   455,   436,   437,   539,
     268,   269,   801,   638,   477,   115,   478,   646,   647,   436,
     514,   314,   201,    17,    18,   627,   627,   315,   532,   533,
     206,    19,    20,    21,   345,   205,   207,   628,   628,  1001,
     629,   629,   397,  -377,   398,   788,   436,   437,   600,   630,
     630,  -349,   202,   200,   635,    66,   708,   786,    67,    68,
     111,  1002,   413,    70,  1003,  1011,    71,    69,   215,   196,
      72,   835,   337,    24,   196,   789,   429,   601,    73,   812,
     337,   337,  1004,  -373,   818,   434,   787,   499,  -350,   280,
     503,   838,   305,   306,  1012,   268,   269,  -377,   771,   413,
     203,   772,   226,  -377,  -377,   507,    25,    26,  1002,   227,
     113,   114,  -373,   424,   386,  1027,    14,    15,  1002,    17,
      18,   408,   -58,   504,   802,  1028,   505,    19,    20,    21,
     633,   220,   607,   287,   420,    27,    28,   232,   233,   288,
     269,   431,    29,    23,   345,    24,    82,   345,   519,   345,
     218,   282,   219,   481,   555,   289,   141,   146,   150,   155,
     519,   262,   351,   384,   177,   182,   186,   191,   447,   292,
     569,   519,   332,   613,   332,   603,   614,   104,   105,   302,
     623,   425,   453,   624,   112,   113,   114,   662,   625,   851,
     663,   626,   141,   146,   150,   155,   331,   900,   104,   105,
     902,    66,    25,    26,    67,    68,   293,    27,    28,    70,
     644,  -471,    71,    69,    29,  1008,    72,   400,  1009,   303,
     400,   645,   104,   105,    73,    16,    17,    18,   324,   699,
     700,   339,   763,   689,   691,   651,   870,   115,   104,   105,
     -12,   670,    95,   -12,    22,   -12,  1014,   623,  1016,  1017,
     624,   616,   -12,   617,    96,   625,   670,   -12,   626,    97,
       1,     2,     3,     4,    14,    15,    16,    17,    18,   122,
     127,   305,   306,   158,   163,    19,    20,    21,    24,   340,
    1018,   979,   980,   349,   652,    22,   374,   375,   376,   -10,
     764,    23,   -10,   -10,   -10,   849,   850,   350,   779,   780,
     730,   -10,  -377,   744,   383,   385,   -10,   393,  -377,  -377,
     394,   731,   125,   129,   134,   138,   143,   147,   152,   156,
     161,   165,   170,   174,   179,   183,   188,   192,   116,   116,
     355,   357,   813,   814,   815,   910,   423,   767,   768,   433,
      27,    28,   644,    18,   337,   955,   956,    29,   440,   769,
      25,    26,   444,   645,   607,   871,   446,   449,   304,   927,
     450,   337,   341,   463,   341,    14,    15,   400,    17,    18,
     841,   842,   730,   454,   456,   744,    19,    20,    21,   464,
     123,   128,   472,   731,   159,   164,  -137,   470,   730,   506,
     510,   744,    23,   471,   475,   301,    16,    17,    18,   731,
     511,    24,   521,   512,    24,    19,    20,    21,   530,   840,
     768,   676,   542,   873,   785,    22,   560,   845,   768,   534,
     537,   769,   538,   336,   572,  -138,   566,   576,  -138,   769,
     341,   305,   306,   578,   305,   306,   341,   581,   582,   140,
     145,   764,   341,   176,   181,   583,   341,  -138,   584,  -138,
    -138,    25,    26,   585,   586,   615,   301,   588,   301,   301,
     597,   598,   417,    27,    28,   400,    27,    28,  -138,   301,
      29,   422,   640,    29,   599,   612,   301,   205,   313,   664,
      25,    26,   372,   373,   374,   375,   376,   768,   768,   690,
     666,   301,   907,   674,   678,   341,   679,   301,   769,   769,
     341,   544,   694,   301,   697,   698,   654,   279,   279,   703,
     704,   781,   279,   705,   800,   635,   124,   602,   133,   782,
     142,   929,   151,   770,   160,   768,   169,   790,   178,   793,
     187,   314,   341,   794,   796,   806,   769,   315,   377,   378,
     379,   380,   381,   382,   390,   797,   798,   951,   807,   768,
     820,   816,   124,   828,   133,   553,   142,   829,   151,   836,
     769,   370,   371,   372,   373,   374,   375,   376,   623,   623,
      66,   624,   624,    67,    68,   837,   625,   625,    70,   626,
     626,    71,    69,   852,   341,    72,   855,   857,   960,   279,
     853,   860,  1000,    73,   861,   401,   863,    66,   862,   867,
      67,    68,   879,   788,   874,    70,  1010,   893,    71,    69,
     889,   301,    72,   890,   891,   894,   989,   768,   895,   878,
      73,   897,  1000,  1025,   899,   341,   901,   904,   769,  -204,
    -204,  -204,  -204,  -204,  -204,   908,   911,   912,   301,   915,
     301,   341,   923,   -79,   931,   941,   892,   944,   946,    66,
     949,   950,    67,    68,   954,   300,   898,    70,   961,   964,
      71,    69,    66,   966,    72,    67,    68,   972,   975,   468,
      70,   976,    73,    71,    69,   991,   992,    72,   993,   995,
     476,  1005,  1013,  1020,  1021,    73,  1023,  1022,   479,   480,
    1035,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,  1029,   909,   855,
    1036,   693,   568,   777,   341,   888,   409,  1024,   414,   416,
    1037,   279,   279,  1015,   590,   688,   120,   587,   508,   421,
      17,    18,   352,   279,   353,   765,   432,   401,    19,    20,
      21,   517,   595,   963,   279,   279,   515,   141,   146,   649,
     831,   177,   182,   573,   571,   855,    24,   445,   833,   809,
     301,   419,   745,   448,   126,   130,   135,   139,   144,   148,
     153,   157,   162,   166,   171,   175,   180,   184,   189,   193,
     124,   819,   133,   965,   967,  1007,   390,   535,   551,     0,
     552,   301,   681,   570,     0,   301,     0,     0,     0,   301,
     126,   130,   135,   139,   144,   148,   153,   157,     0,     0,
       0,     0,     0,    25,    26,     0,     0,     0,    27,    28,
       0,     0,     0,     0,     0,    29,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   401,
       0,     0,   401,     0,   401,    16,    17,    18,     0,     0,
       0,     0,     0,     0,    19,    20,    21,     0,     0,   301,
       0,     0,   301,   301,    22,     0,   301,   301,     0,     0,
       0,   531,    24,   360,     0,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   301,   301,     0,     0,     0,     0,     0,     0,     0,
     559,     0,     0,     0,     0,   125,   129,   143,   147,   161,
     165,   179,   183,   660,   661,     0,     0,     0,     0,     0,
       0,   665,     0,     0,   401,     0,     0,     0,     0,    25,
      26,     0,   671,     0,    27,    28,   675,     0,     0,   301,
       0,    29,   301,     0,     0,     0,     0,     0,    80,   684,
    -230,    14,    15,    16,    17,    18,     0,     0,     0,     0,
       0,     0,    19,    20,    21,     0,   301,   301,   301,     0,
       0,     0,    22,     0,     0,     0,     0,    81,    23,     0,
      24,    82,     0,     0,     0,     0,     0,     0,     0,   401,
       0,     0,     0,     0,     0,     0,   391,     0,     0,     0,
       0,     0,   751,     0,  -230,     0,   754,     0,     0,     0,
    -230,     0,     0,     0,     0,     0,    83,     0,     0,     0,
     648,     0,   684,     0,     0,     0,   301,     0,   126,   130,
     135,   139,     0,     0,     0,     0,     0,    25,    26,     0,
       0,     0,    27,    28,    84,     0,     0,   795,     0,    29,
       0,   673,     0,     0,     0,   677,     0,     0,     0,   680,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     344,     0,   226,    14,    15,     0,    17,    18,     0,   227,
     113,   114,     0,   228,    19,    20,    21,   401,   301,     0,
     301,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,   229,    24,    82,     0,   230,   231,   232,   233,   124,
       0,   142,     0,   160,   234,   178,     0,   235,     0,   750,
       0,     0,     0,   753,   236,   237,   238,   756,     0,   239,
     240,     0,   241,     0,     0,   242,   243,  -202,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
       0,   783,   784,     0,   244,   245,   246,     0,     0,    25,
      26,     0,     0,     0,    27,    28,     0,     0,   358,   359,
     360,    29,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   896,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   830,
     524,     0,   832,    14,    15,    16,    17,    18,     0,     0,
       0,     0,   525,     0,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,    22,     0,   846,   847,   848,     0,
      23,     0,    24,     0,     0,     0,     0,   811,   391,  -226,
    -226,  -226,  -226,  -226,  -226,     0,  -226,  -226,  -226,     0,
    -226,  -226,  -226,  -226,  -226,     0,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,     0,  -226,  -226,  -226,  -226,     0,     0,     0,     0,
       0,  -226,     0,     0,  -226,     0,   880,     0,     0,    25,
      26,  -226,  -226,  -226,    27,    28,  -226,  -226,     0,  -226,
    -603,    29,  -226,  -226,  -226,  -226,     0,     0,     0,     0,
    -226,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -226,  -226,  -226,     0,     0,  -226,  -226,     0,     0,
       0,  -226,  -226,     0,     0,  -226,     0,     0,  -226,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   921,     0,
     922,     0,     0,  1034,     0,     0,     0,   126,   130,   144,
     148,   162,   166,   180,   184,   710,  1034,   396,   711,    15,
      16,    17,    18,     0,   227,   113,   114,     0,   228,    19,
      20,    21,   712,     0,   713,   714,   715,   716,   717,   718,
     719,   720,   721,   722,   723,    23,   229,    24,    82,     0,
     230,   231,   232,   233,     0,     0,     0,     0,     0,   234,
       0,     0,   235,     0,     0,     0,     0,     0,     0,   236,
     237,   238,     0,     0,   239,   240,     0,   241,     0,     0,
     242,   243,   472,   724,     0,     0,     0,     0,   725,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   244,
     245,   246,     0,     0,    25,    26,     0,   804,     0,    27,
      28,     0,     0,     0,     0,    80,    29,   104,   711,    15,
      16,    17,    18,     0,     0,     0,     0,     0,     0,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,    23,     0,    24,     0,     0,
      80,     0,     0,    14,    15,    16,    17,    18,     0,     0,
       0,     0,     0,     0,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
      23,     0,    24,    83,     0,     0,     0,     0,     0,     0,
       0,   982,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,     0,    25,    26,     0,     0,     0,    27,
      28,    84,     0,   983,     0,     0,    29,   881,    83,     0,
       0,     0,     0,     0,     0,   882,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,    27,    28,    84,     0,     0,    80,
       0,    29,    14,    15,    16,    17,    18,     0,     0,     0,
       0,     0,     0,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,    23,
     524,    24,   544,    14,    15,    16,    17,    18,     0,     0,
       0,     0,   525,     0,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
      23,     0,    24,     0,     0,     0,    80,    83,     0,    14,
      15,    16,    17,    18,   882,     0,     0,     0,     0,     0,
      19,    20,    21,     0,     0,     0,     0,     0,    25,    26,
      22,     0,     0,    27,    28,    84,    23,   924,    24,     0,
      29,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,     0,     0,     0,    25,
      26,     0,     0,     0,    27,    28,     0,     0,     0,     0,
    -603,    29,     0,    80,    83,     0,    14,    15,    16,    17,
      18,     0,     0,     0,     0,     0,     0,    19,    20,    21,
       0,     0,     0,     0,     0,    25,    26,    22,     0,     0,
      27,    28,    84,    23,   839,    24,     0,    29,    80,     0,
       0,    14,    15,    16,    17,    18,     0,     0,     0,     0,
       0,     0,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,    23,     0,
      24,    83,     0,     0,     0,     0,     0,     0,   882,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    26,     0,     0,     0,    27,    28,    84,
       0,     0,     0,     0,    29,    13,    83,     0,    14,    15,
      16,    17,    18,     0,     0,     0,     0,     0,     0,    19,
      20,    21,     0,     0,     0,     0,     0,    25,    26,    22,
       0,     0,    27,    28,    84,    23,     0,    24,   549,    29,
       0,    14,    15,    16,    17,    18,     0,     0,     0,     0,
       0,     0,    19,    20,    21,     0,     0,   424,     0,     0,
      14,    15,    22,    17,    18,     0,     0,     0,    23,     0,
      24,    19,    20,    21,     0,     0,     0,    65,     0,     0,
      14,    15,     0,    17,    18,     0,     0,    23,     0,    24,
      82,    19,    20,    21,    25,    26,     0,     0,     0,    27,
      28,     0,     0,     0,     0,     0,    29,    23,     0,    24,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,     0,     0,     0,    25,    26,     0,
       0,     0,    27,    28,     0,     0,     0,     0,     0,    29,
       0,     0,     0,     0,     0,     0,    25,    26,     0,     0,
       0,    27,    28,     0,     0,     0,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,    25,    26,     0,     0,
       0,    27,    28,   395,     0,   396,   105,     0,    29,     0,
       0,     0,   227,   113,   114,     0,   228,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   229,     0,    82,     0,   230,   231,
     232,   233,     0,     0,     0,     0,     0,   234,     0,     0,
     235,     0,     0,     0,     0,     0,     0,   236,   237,   238,
       0,     0,   239,   240,   397,   241,   398,     0,   242,   243,
     399,   395,     0,   396,   105,     0,     0,     0,     0,     0,
     227,   113,   114,     0,   228,     0,     0,   244,   245,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -468,   229,  -468,    82,     0,   230,   231,   232,   233,
       0,     0,     0,     0,     0,   234,     0,     0,   235,     0,
       0,     0,     0,     0,     0,   236,   237,   238,     0,     0,
     239,   240,   397,   241,   398,     0,   242,   243,   399,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   244,   245,   246,     0,     0,
       0,   396,   711,    15,    16,    17,    18,     0,   227,   113,
     114,  -412,   228,    19,    20,    21,   712,     0,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,    23,
     229,    24,    82,     0,   230,   231,   232,   233,     0,     0,
       0,     0,     0,   234,     0,     0,   235,     0,     0,     0,
       0,     0,     0,   236,   237,   238,     0,     0,   239,   240,
       0,   241,     0,     0,   242,   243,   472,   724,     0,     0,
       0,     0,   725,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   244,   245,   246,     0,     0,    25,    26,
       0,     0,     0,    27,    28,     0,     0,     0,     0,     0,
      29,   226,    14,    15,    16,    17,    18,     0,   227,   113,
     114,     0,   228,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,    23,
     229,    24,    82,     0,   230,   231,   232,   233,     0,     0,
       0,     0,     0,   234,     0,     0,   235,     0,     0,     0,
       0,     0,     0,   236,   237,   238,     0,     0,   239,   240,
       0,   241,     0,     0,   242,   243,     0,     0,   226,    14,
      15,     0,    17,    18,     0,   227,   113,   114,     0,   228,
      19,    20,    21,   244,   245,   246,     0,     0,    25,    26,
       0,     0,     0,    27,    28,     0,    23,   229,    24,    82,
      29,   230,   231,   232,   233,     0,     0,     0,     0,     0,
     234,     0,     0,   235,     0,     0,     0,     0,     0,     0,
     236,   237,   238,     0,     0,   239,   240,     0,   241,     0,
       0,   242,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,   245,   246,     0,     0,    25,    26,     0,     0,     0,
      27,    28,   811,     0,   396,   105,     0,    29,     0,     0,
       0,   227,   113,   114,     0,   228,     0,     0,     0,   712,
       0,   713,   714,   715,   716,   717,   817,   719,   720,   721,
     722,   723,     0,   229,     0,    82,     0,   230,   231,   232,
     233,     0,     0,     0,     0,     0,   234,     0,     0,   235,
       0,     0,     0,     0,     0,     0,   236,   237,   238,     0,
       0,   239,   240,     0,   241,     0,     0,   242,   243,   472,
     724,   395,     0,   396,   105,   725,     0,     0,     0,     0,
     227,   113,   114,     0,   228,     0,   244,   245,   246,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -519,     0,   229,     0,    82,     0,   230,   231,   232,   233,
       0,     0,     0,     0,     0,   234,     0,     0,   235,     0,
       0,     0,     0,     0,     0,   236,   237,   238,     0,     0,
     239,   240,   397,   241,   398,     0,   242,   243,   399,    14,
      15,    16,    17,    18,     0,     0,     0,     0,   669,     0,
      19,    20,    21,     0,     0,   244,   245,   246,     0,     0,
      22,    14,    15,    16,    17,    18,    23,     0,    24,  -412,
       0,     0,    19,    20,    21,     0,     0,     0,     0,     0,
      14,    15,    22,    17,    18,     0,     0,     0,    23,     0,
      24,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,     0,     0,     0,
      27,    28,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,     0,
       0,     0,    27,    28,   226,     0,     0,     0,     0,    29,
       0,   227,   113,   114,     0,   228,    25,    26,     0,     0,
       0,    27,    28,     0,     0,     0,     0,     0,    29,     0,
       0,     0,     0,   229,     0,    82,     0,   230,   231,   232,
     233,     0,     0,     0,     0,     0,   234,     0,     0,   235,
       0,     0,     0,     0,     0,     0,   236,   237,   238,     0,
       0,   239,   240,     0,   241,     0,     0,   242,   243,     0,
       0,   591,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   244,   245,   246,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   358,   359,
     360,   412,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   821,     0,
     396,   105,     0,     0,     0,     0,     0,   227,   113,   114,
       0,   228,     0,     0,     0,   712,     0,   713,   714,   715,
     716,   717,   817,   719,   720,   721,   722,   723,     0,   229,
       0,    82,     0,   230,   231,   232,   233,     0,   592,     0,
       0,     0,   234,     0,     0,   235,     0,     0,     0,     0,
       0,     0,   236,   237,   238,     0,     0,   239,   240,     0,
     241,     0,     0,   242,   243,   472,   724,     0,     0,     0,
       0,   725,     0,     0,     0,     0,   875,     0,  -554,  -554,
       0,     0,   244,   245,   246,  -554,  -554,  -554,     0,  -554,
       0,     0,     0,  -554,     0,  -554,  -554,  -554,  -554,  -554,
    -554,  -554,  -554,  -554,  -554,  -554,     0,  -554,     0,  -554,
       0,  -554,  -554,  -554,  -554,     0,     0,     0,     0,     0,
    -554,     0,     0,  -554,     0,     0,     0,     0,     0,     0,
    -554,  -554,  -554,     0,     0,  -554,  -554,     0,  -554,     0,
       0,  -554,  -554,  -554,  -554,     0,   864,     0,   226,  -554,
       0,     0,     0,     0,     0,   227,   113,   114,     0,   228,
    -554,  -554,  -554,   712,     0,   713,   714,   715,   716,     0,
       0,   719,   720,   721,   722,   723,     0,   229,     0,    82,
       0,   230,   231,   232,   233,     0,     0,     0,     0,     0,
     234,     0,     0,   235,     0,     0,     0,     0,     0,     0,
     236,   237,   238,     0,     0,   239,   240,   395,   241,   226,
       0,   242,   243,   472,   724,     0,   227,   113,   114,   725,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,   245,   246,     0,     0,     0,     0,     0,   229,     0,
      82,     0,   230,   231,   232,   233,  -425,     0,     0,     0,
       0,   234,     0,     0,   235,     0,     0,     0,     0,     0,
       0,   236,   237,   238,     0,     0,   239,   240,  -425,   241,
    -425,     0,   242,   243,   399,   344,     0,   226,     0,     0,
       0,     0,     0,     0,   227,   113,   114,     0,   228,     0,
       0,   244,   245,   246,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   229,     0,    82,     0,
     230,   231,   232,   233,     0,     0,     0,     0,     0,   234,
       0,     0,   235,     0,     0,     0,     0,     0,     0,   236,
     237,   238,     0,     0,   239,   240,   395,   241,   226,     0,
     242,   243,  -202,     0,     0,   227,   113,   114,     0,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   244,
     245,   246,     0,     0,     0,     0,     0,   229,     0,    82,
       0,   230,   231,   232,   233,     0,     0,     0,     0,     0,
     234,     0,     0,   235,     0,     0,     0,     0,     0,     0,
     236,   237,   238,     0,     0,   239,   240,   682,   241,   226,
       0,   242,   243,   399,     0,     0,   227,   113,   114,     0,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,   245,   246,     0,     0,     0,     0,     0,   229,     0,
      82,     0,   230,   231,   232,   233,     0,     0,     0,     0,
       0,   234,     0,     0,   235,     0,     0,     0,     0,     0,
       0,   236,   237,   238,     0,     0,   239,   240,     0,   241,
       0,     0,   242,   243,   683,     0,     0,     0,     0,   396,
     105,     0,     0,     0,     0,     0,   227,   113,   114,     0,
     228,   244,   245,   246,   712,     0,   713,   714,   715,   716,
     717,   817,   719,   720,   721,   722,   723,     0,   229,     0,
      82,     0,   230,   231,   232,   233,     0,     0,     0,     0,
       0,   234,     0,     0,   235,     0,     0,     0,     0,     0,
       0,   236,   237,   238,     0,     0,   239,   240,     0,   241,
     226,     0,   242,   243,   472,   724,     0,   227,   113,   114,
     725,   228,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,   245,   246,     0,     0,     0,     0,     0,   229,
       0,    82,     0,   230,   231,   232,   233,     0,     0,     0,
       0,     0,   234,     0,     0,   235,     0,     0,     0,     0,
       0,     0,   236,   237,   238,     0,     0,   239,   240,   226,
     241,     0,     0,   242,   243,   579,   227,   113,   114,     0,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   244,   245,   246,     0,     0,     0,   229,     0,
      82,     0,   230,   231,   232,   233,     0,     0,     0,     0,
       0,   234,     0,     0,   235,     0,     0,     0,     0,     0,
       0,   236,   237,   238,     0,     0,   239,   240,     0,   241,
     226,     0,   242,   243,     0,   799,     0,   227,   113,   114,
       0,   228,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,   245,   246,     0,     0,     0,     0,     0,   229,
       0,    82,     0,   230,   231,   232,   233,     0,     0,     0,
       0,     0,   234,     0,     0,   235,     0,     0,     0,     0,
       0,     0,   236,   237,   238,     0,     0,   239,   240,   226,
     241,     0,     0,   242,   243,     0,   227,   113,   114,     0,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   244,   245,   246,     0,     0,     0,   229,     0,
      82,     0,   230,   231,   232,   233,     0,     0,     0,     0,
       0,   234,     0,     0,   235,     0,     0,     0,     0,     0,
       0,   236,   237,   238,     0,     0,   239,   240,   226,   354,
       0,     0,   242,   243,     0,   227,   113,   114,     0,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,   245,   246,     0,     0,     0,   229,     0,    82,
       0,   230,   231,   232,   233,     0,     0,     0,     0,     0,
     234,     0,     0,   235,     0,     0,     0,     0,     0,     0,
     236,   237,   238,     0,     0,   239,   240,   589,   356,     0,
       0,   242,   243,     0,   227,   113,   114,     0,   228,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,   245,   246,     0,     0,     0,   229,     0,    82,     0,
     230,   231,   232,   233,     0,     0,     0,     0,     0,   234,
       0,     0,   235,     0,     0,     0,     0,     0,     0,   236,
     237,   238,     0,     0,   239,   240,     0,   241,     0,     0,
     242,   243,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,   244,
     245,   246,   358,   359,   360,     0,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   358,   359,   360,     0,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   858,    27,    28,     0,
       0,   358,   359,   360,    29,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,     0,   748,   358,   359,   360,   859,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   575,
     358,   359,   360,   918,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376
};

static const yytype_int16 yycheck[] =
{
       4,    90,    47,     4,     4,   212,   234,   554,     4,    29,
     285,     4,     4,     3,     2,     4,   319,   411,   198,   554,
       7,     7,   554,     4,     7,   380,   381,   238,   224,   346,
     262,   554,     7,   438,     4,     1,   247,   450,   447,   448,
     656,   441,    40,   536,   270,   225,    30,    31,    32,    33,
     261,   509,    51,   689,    38,    39,    40,    41,   656,    90,
      11,     3,     4,    91,    92,    93,   407,   656,   194,   195,
       1,    69,    63,    64,   621,    95,    54,    97,    60,     3,
       4,   574,    66,    67,    68,    69,   621,   728,     1,   621,
     286,     8,    79,    79,   320,   206,    79,    19,   621,    98,
      98,     3,    68,   744,    79,   792,   110,    94,    94,   110,
     110,    94,   728,    64,   110,    63,    33,   110,   110,    94,
      35,   110,     4,     5,     6,     7,     8,   109,   744,   110,
     728,    13,    63,    15,    16,    17,   734,   824,    60,   728,
     110,    43,   338,    25,    68,   734,   326,    89,    33,    31,
      63,   506,   552,   558,   429,    57,   267,    30,    31,    32,
      33,    63,    84,   194,   195,    38,    39,    40,    41,   280,
      33,     3,     4,   514,   285,    51,   287,   813,    95,    96,
      43,   103,   213,    69,    99,   102,    69,   109,   916,   876,
      30,    68,    43,    66,    67,    68,    69,    68,   218,   219,
      43,   659,   206,   314,     0,   206,   206,   805,    90,    91,
      95,    96,    43,    68,   206,    98,   102,   102,    34,    35,
      36,    37,    98,    63,    64,   102,    42,    43,    44,    45,
     917,   102,    95,    96,   962,   881,    68,   241,   541,   102,
     241,   241,   262,     3,     4,   241,   933,   102,   241,   241,
     101,     0,   241,   594,    70,    71,    72,    73,   101,   905,
     241,   674,   458,   267,   475,   678,   267,   267,   299,   300,
     101,   241,   504,   110,   668,   267,   280,   457,   115,   280,
     280,   285,   408,   287,   285,   285,   287,   287,   280,   285,
     699,   517,   285,   285,   420,   287,   285,    57,   220,   757,
     944,   223,   285,    63,   285,   431,    62,   662,    62,    69,
     314,     0,   234,   314,   314,    69,   336,   102,   429,  1006,
       3,     4,   314,   301,    69,   532,   409,   971,     3,     4,
     556,   557,    10,    11,    12,    62,   340,     3,     4,   340,
     340,    63,    64,   265,   340,   101,     3,   340,   340,   432,
     354,   340,   356,   354,   354,   356,   356,   102,   354,   340,
     356,   354,   354,   356,   356,   354,   203,   356,   564,   686,
     340,   293,   319,   354,    57,   356,   323,   408,   409,   101,
      63,    64,    57,   563,   354,    63,   356,   567,   568,   420,
      40,    57,    69,     7,     8,   942,   943,    63,   426,   427,
      57,    15,    16,    17,   241,     3,    63,   942,   943,    40,
     942,   943,    62,     3,    64,    69,   447,   448,    69,   942,
     943,    69,    99,    79,    40,   429,   654,    69,   429,   429,
      63,    62,   269,   429,    65,    69,   429,   429,    94,   417,
     429,   758,   638,    33,   422,    99,   429,    98,   429,   729,
     646,   647,    83,    69,   734,   292,    98,   379,    69,    57,
     382,   764,    63,    64,    98,    63,    64,    57,    75,   306,
      63,    78,     3,    63,    64,   397,    90,    91,    62,    10,
      11,    12,    98,     1,   504,    69,     4,     5,    62,     7,
       8,   267,    99,    98,   722,    69,   101,    15,    16,    17,
     101,    80,   533,    57,   280,    95,    96,    38,    39,    63,
      64,   287,   102,    31,   351,    33,    34,   354,   408,   356,
      79,   195,    81,   360,   446,   199,    34,    35,    36,    37,
     420,    63,    63,   744,    42,    43,    44,    45,   314,    40,
     462,   431,   464,    98,   466,   752,   101,     3,     4,    69,
     554,    69,   778,   554,    10,    11,    12,    98,   554,   787,
     101,   554,    70,    71,    72,    73,     1,   870,     3,     4,
     873,   575,    90,    91,   575,   575,    62,    95,    96,   575,
     566,    99,   575,   575,   102,    98,   575,   509,   101,    98,
     512,   566,     3,     4,   575,     6,     7,     8,    69,   644,
     645,    63,   691,   631,   632,   575,   813,    63,     3,     4,
      76,   601,    76,    79,    25,    81,  1001,   621,  1003,  1004,
     621,    98,    88,   100,    88,   621,   616,    93,   621,    93,
      70,    71,    72,    73,     4,     5,     6,     7,     8,   623,
     624,    63,    64,   627,   628,    15,    16,    17,    33,    63,
    1005,   968,   969,   101,   576,    25,    57,    58,    59,    76,
     691,    31,    79,    80,    81,   781,   782,    98,   699,   700,
     656,    88,    57,   656,   101,    86,    93,   101,    63,    64,
     101,   656,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    28,    29,
     253,   254,   730,   731,   732,   885,    99,   694,   694,   101,
      95,    96,   698,     8,   910,   942,   943,   102,    63,   694,
      90,    91,    63,   698,   755,   814,    62,    69,    30,   909,
      98,   927,   654,    40,   656,     4,     5,   659,     7,     8,
     768,   769,   728,    69,    50,   728,    15,    16,    17,    98,
     623,   624,    68,   728,   627,   628,    43,   101,   744,    63,
      43,   744,    31,   101,   101,   207,     6,     7,     8,   744,
     101,    33,     9,    98,    33,    15,    16,    17,   100,   766,
     766,    43,    11,   814,   706,    25,     3,   774,   774,    69,
      69,   766,    69,   102,    99,    40,    63,    98,    43,   774,
     722,    63,    64,   101,    63,    64,   728,   101,   101,   625,
     626,   842,   734,   629,   630,    43,   738,    62,    43,    64,
      65,    90,    91,   101,   100,   100,   268,   101,   270,   271,
     101,   101,   274,    95,    96,   757,    95,    96,    83,   281,
     102,   283,    68,   102,   101,   101,   288,     3,     4,   101,
      90,    91,    55,    56,    57,    58,    59,   843,   844,    69,
      99,   303,   882,    98,    98,   787,    99,   309,   843,   844,
     792,     3,    68,   315,   101,    98,    35,   194,   195,    99,
      99,    68,   199,   101,   721,    40,    30,    43,    32,    68,
      34,   911,    36,    99,    38,   881,    40,    63,    42,    63,
      44,    57,   824,    63,    43,    43,   881,    63,    60,    61,
      62,    63,    64,    65,   262,    69,    69,   937,    69,   905,
      19,    99,    66,    99,    68,    40,    70,   101,    72,    69,
     905,    53,    54,    55,    56,    57,    58,    59,   942,   943,
     944,   942,   943,   944,   944,    69,   942,   943,   944,   942,
     943,   944,   944,   790,   876,   944,   793,   794,   946,   276,
      63,    69,   982,   944,   801,   265,    63,   971,    69,    99,
     971,   971,    99,    69,    69,   971,   996,    20,   971,   971,
      99,   423,   971,    99,   101,    69,   973,   973,   101,   826,
     971,    69,  1012,  1013,    69,   917,    69,   101,   973,    60,
      61,    62,    63,    64,    65,    64,    82,    84,   450,   101,
     452,   933,    69,    50,    84,    69,   853,    50,    68,  1023,
      69,    63,  1023,  1023,    98,   207,   863,  1023,    68,   100,
    1023,  1023,  1036,    69,  1023,  1036,  1036,    99,   101,   339,
    1036,    11,  1023,  1036,  1036,   101,    63,  1036,    11,    69,
     350,    64,    82,   101,    11,  1036,    63,    69,   358,   359,
     101,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   100,   885,   916,
      98,   637,   460,   698,  1006,   844,   268,  1012,   270,   271,
    1036,   408,   409,  1002,   506,   621,    29,   504,   398,   281,
       7,     8,   251,   420,   251,   692,   288,   407,    15,    16,
      17,   408,   512,   950,   431,   432,   406,   625,   626,   573,
     752,   629,   630,   466,   464,   962,    33,   309,   755,   728,
     572,   276,   657,   315,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
     294,   734,   296,   952,   954,   992,   504,   429,   443,    -1,
     444,   603,   613,   463,    -1,   607,    -1,    -1,    -1,   611,
      66,    67,    68,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,   102,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,   509,
      -1,    -1,   512,    -1,   514,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    -1,    -1,   671,
      -1,    -1,   674,   675,    25,    -1,   678,   679,    -1,    -1,
      -1,   423,    33,    42,    -1,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,   703,   704,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     452,    -1,    -1,    -1,    -1,   623,   624,   625,   626,   627,
     628,   629,   630,   583,   584,    -1,    -1,    -1,    -1,    -1,
      -1,   591,    -1,    -1,   594,    -1,    -1,    -1,    -1,    90,
      91,    -1,   602,    -1,    95,    96,   606,    -1,    -1,   751,
      -1,   102,   754,    -1,    -1,    -1,    -1,    -1,     1,   619,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    -1,   778,   779,   780,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    31,    -1,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   659,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,    -1,
      -1,    -1,   672,    -1,    57,    -1,   676,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
     572,    -1,   692,    -1,    -1,    -1,   838,    -1,   294,   295,
     296,   297,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    95,    96,    97,    -1,    -1,   717,    -1,   102,
      -1,   603,    -1,    -1,    -1,   607,    -1,    -1,    -1,   611,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
       1,    -1,     3,     4,     5,    -1,     7,     8,    -1,    10,
      11,    12,    -1,    14,    15,    16,    17,   757,   900,    -1,
     902,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,   623,
      -1,   625,    -1,   627,    45,   629,    -1,    48,    -1,   671,
      -1,    -1,    -1,   675,    55,    56,    57,   679,    -1,    60,
      61,    -1,    63,    -1,    -1,    66,    67,    68,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,   703,   704,    -1,    85,    86,    87,    -1,    -1,    90,
      91,    -1,    -1,    -1,    95,    96,    -1,    -1,    40,    41,
      42,   102,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,   858,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   751,
       1,    -1,   754,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    -1,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,   778,   779,   780,    -1,
      31,    -1,    33,    -1,    -1,    -1,    -1,     1,   504,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,    -1,   838,    -1,    -1,    90,
      91,    55,    56,    57,    95,    96,    60,    61,    -1,    63,
     101,   102,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    -1,    -1,    90,    91,    -1,    -1,
      -1,    95,    96,    -1,    -1,    99,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   900,    -1,
     902,    -1,    -1,  1023,    -1,    -1,    -1,   623,   624,   625,
     626,   627,   628,   629,   630,     1,  1036,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    -1,    -1,    60,    61,    -1,    63,    -1,    -1,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    -1,    -1,    90,    91,    -1,   723,    -1,    95,
      96,    -1,    -1,    -1,    -1,     1,   102,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    33,    -1,    -1,
       1,    -1,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    33,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    90,    91,    -1,    -1,    -1,    95,
      96,    97,    -1,    99,    -1,    -1,   102,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    -1,    -1,    -1,    95,    96,    97,    -1,    -1,     1,
      -1,   102,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    31,
       1,    33,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    -1,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    33,    -1,    -1,    -1,     1,    69,    -1,     4,
       5,     6,     7,     8,    76,    -1,    -1,    -1,    -1,    -1,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    90,    91,
      25,    -1,    -1,    95,    96,    97,    31,    99,    33,    -1,
     102,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    -1,    90,
      91,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,
     101,   102,    -1,     1,    69,    -1,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    90,    91,    25,    -1,    -1,
      95,    96,    97,    31,    99,    33,    -1,   102,     1,    -1,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      33,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    -1,    -1,    -1,    95,    96,    97,
      -1,    -1,    -1,    -1,   102,     1,    69,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    90,    91,    25,
      -1,    -1,    95,    96,    97,    31,    -1,    33,     1,   102,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    -1,    -1,     1,    -1,    -1,
       4,     5,    25,     7,     8,    -1,    -1,    -1,    31,    -1,
      33,    15,    16,    17,    -1,    -1,    -1,     1,    -1,    -1,
       4,     5,    -1,     7,     8,    -1,    -1,    31,    -1,    33,
      34,    15,    16,    17,    90,    91,    -1,    -1,    -1,    95,
      96,    -1,    -1,    -1,    -1,    -1,   102,    31,    -1,    33,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,
      -1,    95,    96,    -1,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,
      -1,    95,    96,     1,    -1,     3,     4,    -1,   102,    -1,
      -1,    -1,    10,    11,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      -1,    -1,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    -1,    14,    -1,    -1,    85,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    32,   101,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,   101,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    -1,    -1,    60,    61,
      -1,    63,    -1,    -1,    66,    67,    68,    69,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    -1,    -1,    90,    91,
      -1,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,
     102,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    -1,    -1,    60,    61,
      -1,    63,    -1,    -1,    66,    67,    -1,    -1,     3,     4,
       5,    -1,     7,     8,    -1,    10,    11,    12,    -1,    14,
      15,    16,    17,    85,    86,    87,    -1,    -1,    90,    91,
      -1,    -1,    -1,    95,    96,    -1,    31,    32,    33,    34,
     102,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    -1,    -1,    60,    61,    -1,    63,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    -1,    -1,    90,    91,    -1,    -1,    -1,
      95,    96,     1,    -1,     3,     4,    -1,   102,    -1,    -1,
      -1,    10,    11,    12,    -1,    14,    -1,    -1,    -1,    18,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    60,    61,    -1,    63,    -1,    -1,    66,    67,    68,
      69,     1,    -1,     3,     4,    74,    -1,    -1,    -1,    -1,
      10,    11,    12,    -1,    14,    -1,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    32,    -1,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    -1,    85,    86,    87,    -1,    -1,
      25,     4,     5,     6,     7,     8,    31,    -1,    33,    99,
      -1,    -1,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
       4,     5,    25,     7,     8,    -1,    -1,    -1,    31,    -1,
      33,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,
      95,    96,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    95,    96,     3,    -1,    -1,    -1,    -1,   102,
      -1,    10,    11,    12,    -1,    14,    90,    91,    -1,    -1,
      -1,    95,    96,    -1,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    32,    -1,    34,    -1,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    60,    61,    -1,    63,    -1,    -1,    66,    67,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,   100,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,     1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      -1,    34,    -1,    36,    37,    38,    39,    -1,   100,    -1,
      -1,    -1,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    -1,    60,    61,    -1,
      63,    -1,    -1,    66,    67,    68,    69,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
      -1,    -1,    85,    86,    87,    10,    11,    12,    -1,    14,
      -1,    -1,    -1,    18,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    -1,    -1,    60,    61,    -1,    63,    -1,
      -1,    66,    67,    68,    69,    -1,     1,    -1,     3,    74,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    -1,    14,
      85,    86,    87,    18,    -1,    20,    21,    22,    23,    -1,
      -1,    26,    27,    28,    29,    30,    -1,    32,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    -1,    -1,    60,    61,     1,    63,     3,
      -1,    66,    67,    68,    69,    -1,    10,    11,    12,    74,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,     1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    -1,    14,    -1,
      -1,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    -1,    -1,    60,    61,     1,    63,     3,    -1,
      66,    67,    68,    -1,    -1,    10,    11,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    -1,    -1,    60,    61,     1,    63,     3,
      -1,    66,    67,    68,    -1,    -1,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    60,    61,    -1,    63,
      -1,    -1,    66,    67,    68,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    -1,
      14,    85,    86,    87,    18,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    60,    61,    -1,    63,
       3,    -1,    66,    67,    68,    69,    -1,    10,    11,    12,
      74,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    -1,    60,    61,     3,
      63,    -1,    -1,    66,    67,    68,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    -1,    -1,    -1,    32,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    60,    61,    -1,    63,
       3,    -1,    66,    67,    -1,    69,    -1,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    -1,    60,    61,     3,
      63,    -1,    -1,    66,    67,    -1,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    -1,    -1,    -1,    32,    -1,
      34,    -1,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    60,    61,     3,    63,
      -1,    -1,    66,    67,    -1,    10,    11,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    -1,    -1,    -1,    32,    -1,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    -1,    -1,    60,    61,     3,    63,    -1,
      -1,    66,    67,    -1,    10,    11,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    -1,    -1,    -1,    32,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    -1,    -1,    60,    61,    -1,    63,    -1,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    85,
      86,    87,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    95,    96,    -1,
      -1,    40,    41,    42,   102,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,   100,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    70,    71,    72,    73,   104,   169,   170,   105,   106,
     110,   121,   169,     1,     4,     5,     6,     7,     8,    15,
      16,    17,    25,    31,    33,    90,    91,    95,    96,   102,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   233,   234,
     235,   236,   237,   248,   250,   251,   252,   256,   280,   281,
     286,   351,   361,   362,   364,     1,   208,   209,   210,   211,
     212,   213,   214,   215,   228,   229,   230,   298,     0,   171,
       1,    30,    34,    69,    97,   172,   173,   174,   175,   176,
     205,   224,   225,   231,   360,    76,    88,    93,   122,   125,
     129,   132,   107,    62,     3,     4,    68,   180,   279,   102,
      63,    63,    10,    11,    12,    63,   200,   253,   180,   182,
     253,   257,   233,   234,   248,   361,   362,   233,   234,   361,
     362,   233,   234,   248,   361,   362,   233,   234,   361,   362,
     235,   236,   248,   361,   362,   235,   236,   361,   362,   235,
     236,   248,   361,   362,   235,   236,   361,   362,   233,   234,
     248,   361,   362,   233,   234,   361,   362,   233,   234,   248,
     361,   362,   233,   234,   361,   362,   235,   236,   248,   361,
     362,   235,   236,   361,   362,   235,   236,   248,   361,   362,
     235,   236,   361,   362,   352,   352,   251,    68,   279,   299,
     172,    69,    99,    63,   180,     3,    57,    63,   239,   241,
     245,   278,   205,   205,   205,   172,   182,   182,    79,    81,
      80,   108,   180,   285,   249,   279,     3,    10,    14,    32,
      36,    37,    38,    39,    45,    48,    55,    56,    57,    60,
      61,    63,    66,    67,    85,    86,    87,   183,   184,   186,
     187,   188,   189,   190,   191,   192,   194,   196,   199,   200,
     298,   360,    63,   184,     1,    63,     4,    57,    63,    64,
     277,   278,   300,   301,   302,   303,   304,   306,   308,   309,
      57,   278,   300,   302,   289,   290,   249,    57,    63,   300,
     302,   184,    40,    62,   208,   209,   210,   211,   229,   232,
     247,   250,    69,    98,    30,    63,    64,   118,   177,   242,
     305,   307,   309,     4,    57,    63,   238,   240,   243,   275,
     276,   278,   239,   278,    69,   111,   130,   182,   182,   109,
     180,     1,   180,   296,   297,    68,   102,   256,   249,    63,
      63,   180,   181,   192,     1,   184,   197,   298,   192,   101,
      98,    63,   196,   199,    63,   189,    63,   189,    40,    41,
      42,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,   101,   192,    86,   182,   254,   255,   258,
     361,   362,   364,   101,   101,     1,     3,    62,    64,    68,
     180,   194,   261,   262,   263,   265,   267,   268,   232,   247,
     345,   346,   100,   184,   247,   305,   247,   250,    63,   306,
     232,   247,   250,    99,     1,    69,   228,   229,   291,   360,
      68,   232,   247,   101,   184,   180,   278,   278,   206,   247,
      63,   353,   354,   119,    63,   247,    62,   232,   247,    69,
      98,   177,   242,   305,    69,   177,    50,   113,   249,   123,
     126,    69,    98,    40,    98,   288,   284,    68,   194,   298,
     101,   101,    68,   319,   320,   101,   194,   298,   298,   194,
     194,   184,   195,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   180,
     185,   186,   186,   180,    98,   101,    63,   180,   194,   266,
      43,   101,    98,   287,    40,   268,   265,   277,   302,   303,
     301,     9,   359,   363,     1,    13,   347,   349,   350,   351,
     100,   247,   205,   205,    69,   291,   282,    69,    69,   101,
     243,   275,    11,   359,     3,   347,   355,   356,   357,     1,
     120,   350,   355,    40,   178,   180,   276,   276,   206,   247,
       3,   114,   115,   116,   249,   131,    63,   133,   133,   180,
     194,   297,    99,   296,   283,    98,    98,   314,   101,    68,
     192,   101,   101,    43,    43,   101,   100,   255,   101,     3,
     185,    13,   100,   261,   264,   263,   265,   101,   101,   101,
      69,    98,    43,   275,   292,   294,    43,   278,   293,   295,
     289,   242,   101,    98,   101,   100,    98,   100,   359,   246,
     201,   202,   203,   208,   209,   212,   213,   216,   217,   220,
     221,   226,   227,   101,   243,    40,    51,    98,   249,   112,
      68,   134,   135,   136,   224,   225,   249,   249,   247,   288,
     289,   298,   180,   198,    35,    99,   315,   316,   317,   193,
     194,   194,    98,   101,   101,   194,    99,   265,   348,    13,
     351,   194,    43,   247,    98,   194,    43,   247,    98,    99,
     247,   357,     1,    68,   194,   259,   179,    13,   203,   205,
      69,   205,   244,   115,    68,   137,   138,   101,    98,   352,
     352,   124,   127,    99,    99,   101,    62,   101,   181,   358,
       1,     4,    18,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    69,    74,   181,   184,   204,   207,
     224,   225,   231,   310,   311,   313,   320,   321,   322,   323,
     326,   327,   330,   338,   360,   317,   261,   186,   100,   347,
     247,   194,   206,   247,   194,   206,   247,   260,     1,   318,
     320,    69,   238,   239,   278,   259,   117,   174,   224,   225,
      99,    75,    78,   139,   140,   141,   143,   136,   276,   278,
     278,    68,    68,   247,   247,   180,    69,    98,    69,    99,
      63,   332,   324,    63,    63,   194,    43,    69,    69,    69,
     184,    57,   181,   339,   362,   328,    43,    69,   207,   310,
     312,     1,   313,   205,   205,   205,    99,    25,   313,   326,
      19,     1,   325,   330,   338,     1,    63,   207,    99,   101,
     247,   294,   247,   295,   261,   320,    69,    69,   242,    99,
     174,   205,   205,   142,   144,   174,   247,   247,   247,   137,
     137,   181,   184,    63,   325,   184,   340,   184,    13,    43,
      69,   184,    69,    63,     1,   329,   330,    99,   238,   269,
     275,   239,   272,   278,    69,     1,   331,   325,   184,    99,
     247,    68,    76,   145,   147,   148,   149,   174,   145,    99,
      99,   101,   184,    20,    69,   101,   194,    69,   184,    69,
     242,    69,   242,   325,   101,   146,   147,   182,    64,   118,
     249,    82,    84,   167,   128,   101,   334,   337,    43,    43,
     101,   247,   247,    69,    99,   147,   150,   249,    69,   182,
     168,    84,   152,   333,   340,   325,    11,    64,   341,   342,
     343,    69,   270,   273,    50,    69,    68,   153,   325,    69,
      63,   182,    43,   101,    98,   201,   201,   151,   161,   298,
     169,    68,   335,   184,   100,   341,    69,   343,   271,   274,
      51,    98,    99,   162,   340,   101,    11,    43,   101,   320,
     320,   161,    77,    99,   154,   163,   164,   165,   166,   174,
     182,   101,    63,    11,   344,    69,    89,   155,   156,   157,
     182,    40,    62,    65,    83,    64,   336,   184,    98,   101,
     182,    69,    98,    82,   165,   166,   165,   165,   186,   325,
     101,    11,    69,    63,   156,   182,    69,    69,    69,   100,
     158,   159,   160,   161,   194,   101,    98,   160
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
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
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

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
#line 465 "c-parse.y"
    { ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 466 "c-parse.y"
    { ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 467 "c-parse.y"
    {
	    declaration cdecls = declaration_reverse((yyvsp[(2) - (2)].u.decl)); 
	    parse_tree = CAST(node, cdecls); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 470 "c-parse.y"
    { parse_tree = NULL; ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 471 "c-parse.y"
    { parse_tree = CAST(node, (yyvsp[(2) - (2)].u.decl)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 472 "c-parse.y"
    { parse_tree = CAST(node, make_error_decl()); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 473 "c-parse.y"
    { parse_tree = CAST(node, (yyvsp[(2) - (2)].u.type)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 474 "c-parse.y"
    { parse_tree = NULL; ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 478 "c-parse.y"
    { end_macro_saving(); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 480 "c-parse.y"
    { 
		    end_macro_saving(); 
		    add_cdecls(declaration_reverse((yyvsp[(1) - (1)].u.decl)));
		  ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 492 "c-parse.y"
    { ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 497 "c-parse.y"
    { require_c((yyvsp[(1) - (1)].idtoken).location, (yyvsp[(1) - (1)].idtoken).id.data); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 499 "c-parse.y"
    { require_c((yyvsp[(3) - (3)].idtoken).location, (yyvsp[(3) - (3)].idtoken).id.data); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 505 "c-parse.y"
    { 
		  start_nesc_entity(l_interface, (yyvsp[(3) - (3)].u.word));
		;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 509 "c-parse.y"
    {
		  handle_nescdecl_attributes((yyvsp[(6) - (6)].u.attribute), current.container);
		;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 513 "c-parse.y"
    {
		  interface intf = new_interface(pr, (yyvsp[(2) - (10)].u.itoken).location, (yyvsp[(3) - (10)].u.word), (yyvsp[(6) - (10)].u.attribute), declaration_reverse((yyvsp[(9) - (10)].u.decl)));

		  set_nesc_parse_tree(intf);

		  if (intf->cdecl->abstract)
		    poplevel();
		;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 524 "c-parse.y"
    { (yyval.u.decl) = NULL; ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 526 "c-parse.y"
    {
		  nesc_declaration intf = current.container;

		  intf->parameters = (yyvsp[(2) - (3)].u.decl);
		  intf->parameter_env = current.env;
		  (yyval.u.decl) = (yyvsp[(2) - (3)].u.decl);

		  /* Template intfs need a new level for the actual intf */
		  pushlevel(FALSE);
		  /* The interface env counts as global */
		  current.env->global_level = TRUE;
		  intf->env = current.env;
		  intf->abstract = TRUE;
		;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 545 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(1) - (3)].u.decl), (yyvsp[(3) - (3)].u.decl)); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 550 "c-parse.y"
    { (yyval.u.decl) = declare_type_parameter((yyvsp[(1) - (2)].idtoken).location, (yyvsp[(1) - (2)].idtoken).id, (yyvsp[(2) - (2)].u.attribute), NULL); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 554 "c-parse.y"
    { (yyval.idtoken) = (yyvsp[(1) - (1)].idtoken); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 558 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(2) - (2)].u.decl), (yyvsp[(1) - (2)].u.decl)); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 562 "c-parse.y"
    { pushlevel(TRUE); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 563 "c-parse.y"
    { /* poplevel done in users of parameters */ (yyval.u.decl) = (yyvsp[(3) - (3)].u.decl); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 567 "c-parse.y"
    {
		  (yyval.u.decl) = declaration_reverse((yyvsp[(1) - (2)].u.decl));
		  check_interface_parameter_types((yyval.u.decl)); 
		;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 571 "c-parse.y"
    { (yyval.u.decl) = make_error_decl(); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 582 "c-parse.y"
    { 
		  start_nesc_entity(l_component, (yyvsp[(3) - (3)].u.word));
		  current.container->abstract = (yyvsp[(1) - (3)].abstract); 
		;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 587 "c-parse.y"
    {
		  handle_nescdecl_attributes((yyvsp[(6) - (6)].u.attribute), current.container);
		;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 592 "c-parse.y"
    {
		  declaration intfs = 
		    declaration_chain(declaration_reverse((yyvsp[(9) - (11)].u.decl)), all_tasks);
		  set_nesc_parse_tree(new_component(pr, (yyvsp[(2) - (11)].u.itoken).location, (yyvsp[(3) - (11)].u.word), (yyvsp[(6) - (11)].u.attribute), (yyvsp[(1) - (11)].abstract), (yyvsp[(5) - (11)].u.decl), intfs, (yyvsp[(11) - (11)].u.impl)));
	        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 601 "c-parse.y"
    { 
		  start_nesc_entity(l_component, (yyvsp[(3) - (3)].u.word));
		  current.container->abstract = (yyvsp[(1) - (3)].abstract); 
		  current.container->configuration = TRUE;
		;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 607 "c-parse.y"
    {
		  handle_nescdecl_attributes((yyvsp[(6) - (6)].u.attribute), current.container);
		;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 611 "c-parse.y"
    {
		  set_nesc_ast(new_component(pr, (yyvsp[(2) - (10)].u.itoken).location, (yyvsp[(3) - (10)].u.word), (yyvsp[(6) - (10)].u.attribute), (yyvsp[(1) - (10)].abstract), (yyvsp[(5) - (10)].u.decl), declaration_reverse((yyvsp[(9) - (10)].u.decl)), NULL));
		;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 615 "c-parse.y"
    {
		  set_nesc_impl((yyvsp[(12) - (12)].u.impl));
	        ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 622 "c-parse.y"
    { 
		  start_nesc_entity(l_component, (yyvsp[(2) - (2)].u.word));
		;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 626 "c-parse.y"
    {
		  handle_nescdecl_attributes((yyvsp[(4) - (4)].u.attribute), current.container);
		;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 630 "c-parse.y"
    { 
		  binary_component dummy = new_binary_component(pr, (yyvsp[(1) - (8)].u.itoken).location, start_implementation());
		  component c = new_component(pr, (yyvsp[(1) - (8)].u.itoken).location, (yyvsp[(2) - (8)].u.word), (yyvsp[(4) - (8)].u.attribute), FALSE, NULL, declaration_reverse((yyvsp[(7) - (8)].u.decl)), CAST(implementation, dummy));
		  set_nesc_parse_tree(c);
	        ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 637 "c-parse.y"
    { (yyval.abstract) = TRUE; ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 638 "c-parse.y"
    { (yyval.abstract) = FALSE; ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 643 "c-parse.y"
    {
		  if (current.container->abstract)
		    error("generic components require a parameter list");
		    /* We don't create the extra environment level for this
		       generic component as nothing actually requires its 
		       existence */
		  (yyval.u.decl) = NULL;
		;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 652 "c-parse.y"
    {
		  nesc_declaration comp = current.container;

		  if (!comp->abstract)
		    error("only generic components can have a parameter list");
		  comp->parameters = (yyvsp[(2) - (3)].u.decl);
		  comp->parameter_env = current.env;
		  (yyval.u.decl) = (yyvsp[(2) - (3)].u.decl);

		  /* generic components need a new level for the 
		     specification */
		  pushlevel(FALSE);
		  current.env->global_level = TRUE;
		  comp->env = current.env;
		;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 670 "c-parse.y"
    { (yyval.u.decl) = NULL; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 677 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(1) - (3)].u.decl), (yyvsp[(3) - (3)].u.decl)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 686 "c-parse.y"
    { (yyval.u.decl) = declare_template_parameter((yyvsp[(3) - (4)].u.declarator), (yyvsp[(1) - (4)].u.telement), (yyvsp[(4) - (4)].u.attribute)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 688 "c-parse.y"
    { (yyval.u.decl) = declare_template_parameter((yyvsp[(3) - (4)].u.declarator), (yyvsp[(1) - (4)].u.telement), (yyvsp[(4) - (4)].u.attribute)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 690 "c-parse.y"
    { (yyval.u.decl) = declare_template_parameter((yyvsp[(3) - (4)].u.declarator), (yyvsp[(1) - (4)].u.telement), (yyvsp[(4) - (4)].u.attribute)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 692 "c-parse.y"
    { (yyval.u.decl) = declare_template_parameter(NULL, (yyvsp[(1) - (2)].u.telement), NULL); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 697 "c-parse.y"
    { current.spec_section = spec_normal; ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 702 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(2) - (2)].u.decl), (yyvsp[(1) - (2)].u.decl)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 703 "c-parse.y"
    { (yyval.u.decl) = NULL; ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 709 "c-parse.y"
    { current.spec_section = spec_normal; ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 709 "c-parse.y"
    { (yyval.u.decl) = (yyvsp[(2) - (2)].u.decl); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 713 "c-parse.y"
    { current.spec_section = spec_uses; ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 715 "c-parse.y"
    { (yyval.u.decl) = CAST(declaration, new_rp_interface(pr, (yyvsp[(1) - (3)].u.itoken).location, TRUE, declaration_reverse((yyvsp[(3) - (3)].u.decl)))); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 718 "c-parse.y"
    { current.spec_section = spec_provides; ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 720 "c-parse.y"
    { (yyval.u.decl) = CAST(declaration, new_rp_interface(pr, (yyvsp[(1) - (3)].u.itoken).location, FALSE, declaration_reverse((yyvsp[(3) - (3)].u.decl)))); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 724 "c-parse.y"
    { (yyval.u.decl) = (yyvsp[(2) - (3)].u.decl); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 729 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(2) - (2)].u.decl), (yyvsp[(1) - (2)].u.decl)); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 736 "c-parse.y"
    {
		  declare_interface_ref((yyvsp[(1) - (3)].u.iref), NULL, current.env, (yyvsp[(2) - (3)].u.attribute));
		  (yyval.u.decl) = CAST(declaration, (yyvsp[(1) - (3)].u.iref));
		;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 741 "c-parse.y"
    { 
		  (yyvsp[(1) - (4)].u.iref)->gparms = (yyvsp[(2) - (4)].u.decl);
		  poplevel();
		  declare_interface_ref((yyvsp[(1) - (4)].u.iref), (yyvsp[(2) - (4)].u.decl), current.env, (yyvsp[(3) - (4)].u.attribute));
		  (yyval.u.decl) = CAST(declaration, (yyvsp[(1) - (4)].u.iref));
		;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 751 "c-parse.y"
    { (yyval.u.iref) = (yyvsp[(1) - (3)].u.iref); (yyval.u.iref)->word2 = (yyvsp[(3) - (3)].u.word); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 756 "c-parse.y"
    { 
		  preload(l_interface, (yyvsp[(1) - (2)].u.itoken).location, (yyvsp[(2) - (2)].u.word)->cstring.data);
		  (yyval.u.iref) = new_interface_ref(pr, (yyvsp[(1) - (2)].u.itoken).location, (yyvsp[(2) - (2)].u.word), NULL, NULL, NULL, NULL, NULL); 
		;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 761 "c-parse.y"
    { 
		  preload(l_interface, (yyvsp[(1) - (2)].u.itoken).location, (yyvsp[(2) - (2)].u.word)->cstring.data);
		;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 765 "c-parse.y"
    { (yyval.u.iref) = new_interface_ref(pr, (yyvsp[(1) - (6)].u.itoken).location, (yyvsp[(2) - (6)].u.word), (yyvsp[(5) - (6)].u.expr), NULL, NULL, NULL, NULL); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 770 "c-parse.y"
    { (yyval.u.expr) = expression_chain((yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 774 "c-parse.y"
    { (yyval.u.env) = start_implementation(); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 778 "c-parse.y"
    { (yyval.u.impl) = CAST(implementation, new_configuration(pr, (yyvsp[(1) - (5)].u.itoken).location, (yyvsp[(2) - (5)].u.env), declaration_reverse((yyvsp[(4) - (5)].u.decl))));
		;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 782 "c-parse.y"
    { (yyval.u.cref) = (yyvsp[(2) - (3)].u.cref); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 786 "c-parse.y"
    { (yyval.u.cref) = component_ref_chain((yyvsp[(3) - (3)].u.cref), (yyvsp[(1) - (3)].u.cref)); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 791 "c-parse.y"
    { (yyval.u.cref) = require_component((yyvsp[(1) - (1)].u.cref), NULL); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 792 "c-parse.y"
    { (yyval.u.cref) = require_component((yyvsp[(1) - (3)].u.cref), (yyvsp[(3) - (3)].u.word)); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 796 "c-parse.y"
    { (yyval.u.cref) = new_component_ref(pr, (yyvsp[(1) - (1)].u.word)->location, (yyvsp[(1) - (1)].u.word), NULL,
					  FALSE, NULL); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 799 "c-parse.y"
    { (yyval.u.cref) = new_component_ref(pr, (yyvsp[(1) - (5)].u.itoken).location, (yyvsp[(2) - (5)].u.word), NULL,
					  TRUE, (yyvsp[(4) - (5)].u.expr)); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 804 "c-parse.y"
    { (yyval.u.expr) = NULL; ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 810 "c-parse.y"
    { (yyval.u.expr) = expression_chain((yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 815 "c-parse.y"
    { (yyval.u.expr) = (yyvsp[(1) - (1)].u.expr); (yyval.u.expr)->type = default_conversion_for_assignment((yyval.u.expr)); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 820 "c-parse.y"
    { (yyval.u.expr) = make_type_argument((yyvsp[(1) - (1)].u.type)); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 824 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(2) - (2)].u.decl), (yyvsp[(1) - (2)].u.decl)); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 825 "c-parse.y"
    { (yyval.u.decl) = NULL; ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 829 "c-parse.y"
    { (yyval.u.decl) = CAST(declaration, (yyvsp[(1) - (1)].u.conn)); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 831 "c-parse.y"
    { (yyval.u.decl) = CAST(declaration, (yyvsp[(1) - (1)].u.cref)); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 836 "c-parse.y"
    { (yyval.u.conn) = CAST(connection, new_eq_connection(pr, (yyvsp[(2) - (4)].u.itoken).location, (yyvsp[(1) - (4)].u.ep), (yyvsp[(3) - (4)].u.ep))); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 838 "c-parse.y"
    { (yyval.u.conn) = CAST(connection, new_rp_connection(pr, (yyvsp[(2) - (4)].u.itoken).location, (yyvsp[(3) - (4)].u.ep), (yyvsp[(1) - (4)].u.ep))); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 840 "c-parse.y"
    { (yyval.u.conn) = CAST(connection, new_rp_connection(pr, (yyvsp[(2) - (4)].u.itoken).location, (yyvsp[(1) - (4)].u.ep), (yyvsp[(3) - (4)].u.ep))); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 845 "c-parse.y"
    { (yyval.u.ep) = (yyvsp[(1) - (3)].u.ep);
		  (yyval.u.ep)->ids = parameterised_identifier_chain((yyval.u.ep)->ids, (yyvsp[(3) - (3)].u.pid));
		;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 849 "c-parse.y"
    { (yyval.u.ep) = new_endpoint(parse_region, (yyvsp[(1) - (1)].u.pid)->location, (yyvsp[(1) - (1)].u.pid)); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 854 "c-parse.y"
    { (yyval.u.pid) = new_parameterised_identifier(pr, (yyvsp[(1) - (1)].u.word)->location, (yyvsp[(1) - (1)].u.word), NULL); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 856 "c-parse.y"
    { (yyval.u.pid) = new_parameterised_identifier(pr, (yyvsp[(1) - (4)].u.word)->location, (yyvsp[(1) - (4)].u.word), (yyvsp[(3) - (4)].u.expr)); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 859 "c-parse.y"
    { (yyval.u.env) = start_implementation(); all_tasks = NULL; ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 860 "c-parse.y"
    { 
		  (yyval.u.impl) = CAST(implementation, new_module(pr, (yyvsp[(1) - (5)].u.itoken).location, (yyvsp[(2) - (5)].u.env), declaration_reverse((yyvsp[(4) - (5)].u.decl)))); 
		;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 869 "c-parse.y"
    { (yyval.u.telement) = NULL; ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 869 "c-parse.y"
    { (yyval.u.decl) = (yyvsp[(2) - (2)].u.decl); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 870 "c-parse.y"
    { (yyval.u.telement) = NULL; ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 871 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(3) - (3)].u.decl), (yyvsp[(1) - (3)].u.decl)); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 878 "c-parse.y"
    { 
		  (yyval.u.decl) = CAST(declaration, new_asm_decl
		    (pr, (yyvsp[(1) - (5)].u.itoken).location,
		     new_asm_stmt(pr, (yyvsp[(1) - (5)].u.itoken).location, (yyvsp[(3) - (5)].u.expr), NULL, NULL, NULL, NULL))); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 883 "c-parse.y"
    { (yyval.u.decl) = make_extension_decl((yyvsp[(1) - (2)].u.itoken).i, (yyvsp[(1) - (2)].u.itoken).location, (yyvsp[(2) - (2)].u.decl)); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 888 "c-parse.y"
    { if (pedantic)
		    error("ANSI C forbids data definition with no type or storage class");
		  else if (!flag_traditional)
		    warning("data definition has no type or storage class"); 

		  (yyval.u.decl) = make_data_decl(NULL, (yyvsp[(2) - (3)].u.decl)); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 899 "c-parse.y"
    { (yyval.u.decl) = make_data_decl((yyvsp[(1) - (4)].u.telement), (yyvsp[(3) - (4)].u.decl)); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 901 "c-parse.y"
    { (yyval.u.decl) = make_data_decl((yyvsp[(1) - (4)].u.telement), (yyvsp[(3) - (4)].u.decl)); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 903 "c-parse.y"
    { shadow_tag((yyvsp[(1) - (3)].u.telement)); 
	    	  (yyval.u.decl) = make_data_decl((yyvsp[(1) - (3)].u.telement), NULL); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 905 "c-parse.y"
    { (yyval.u.decl) = make_error_decl(); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 906 "c-parse.y"
    { (yyval.u.decl) = make_error_decl(); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 908 "c-parse.y"
    { if (pedantic)
		    pedwarn("ANSI C does not allow extra `;' outside of a function");
		  (yyval.u.decl) = NULL; ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 916 "c-parse.y"
    { (yyval.u.decl) = target->keilc_definition((yyvsp[(1) - (5)].idtoken).location, (yyvsp[(1) - (5)].idtoken).id, (yyvsp[(2) - (5)].idtoken).id, (yyvsp[(4) - (5)].u.expr)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 920 "c-parse.y"
    { (yyval.u.decl) = (yyvsp[(4) - (4)].u.decl); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 921 "c-parse.y"
    { (yyval.u.decl) = (yyvsp[(4) - (4)].u.decl); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 922 "c-parse.y"
    { (yyval.u.decl) = (yyvsp[(3) - (3)].u.decl); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 926 "c-parse.y"
    { 
		  /* maybeasm is only here to avoid a s/r conflict */
		  refuse_asm((yyvsp[(1) - (2)].u.asm_stmt));

		  /* $0 refers to the declarator that precedes fndef2
		     in fndef (we can't just save it in an action, as that
		     causes s/r and r/r conflicts) */
		  if (!start_function(pstate.declspecs, (yyvsp[(0) - (2)].u.declarator), (yyvsp[(2) - (2)].u.attribute), 0))
		    YYERROR1; 
		;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 937 "c-parse.y"
    { store_parm_decls(declaration_reverse((yyvsp[(4) - (4)].u.decl))); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 939 "c-parse.y"
    { (yyval.u.decl) = finish_function((yyvsp[(6) - (6)].u.stmt));
		  pop_declspec_stack(); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 949 "c-parse.y"
    { (yyval.u.id_label) = new_id_label(pr, (yyvsp[(1) - (1)].idtoken).location, (yyvsp[(1) - (1)].idtoken).id); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 953 "c-parse.y"
    { (yyval.u.word) = new_word(pr, (yyvsp[(1) - (1)].idtoken).location, (yyvsp[(1) - (1)].idtoken).id); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 957 "c-parse.y"
    { (yyval.u.itoken) = (yyvsp[(1) - (1)].u.itoken); (yyval.u.itoken).i = kind_address_of; ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 959 "c-parse.y"
    { (yyval.u.itoken) = (yyvsp[(1) - (1)].u.itoken); (yyval.u.itoken).i = kind_unary_minus; ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 961 "c-parse.y"
    { (yyval.u.itoken) = (yyvsp[(1) - (1)].u.itoken); (yyval.u.itoken).i = kind_unary_plus; ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 963 "c-parse.y"
    { (yyval.u.itoken) = (yyvsp[(1) - (1)].u.itoken); (yyval.u.itoken).i = kind_preincrement; ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 965 "c-parse.y"
    { (yyval.u.itoken) = (yyvsp[(1) - (1)].u.itoken); (yyval.u.itoken).i = kind_predecrement; ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 967 "c-parse.y"
    { (yyval.u.itoken) = (yyvsp[(1) - (1)].u.itoken); (yyval.u.itoken).i = kind_bitnot; ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 969 "c-parse.y"
    { (yyval.u.itoken) = (yyvsp[(1) - (1)].u.itoken); (yyval.u.itoken).i = kind_not; ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 971 "c-parse.y"
    { (yyval.u.itoken) = (yyvsp[(1) - (1)].u.itoken); (yyval.u.itoken).i = kind_realpart; ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 973 "c-parse.y"
    { (yyval.u.itoken) = (yyvsp[(1) - (1)].u.itoken); (yyval.u.itoken).i = kind_imagpart; ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 977 "c-parse.y"
    { if ((yyvsp[(1) - (1)].u.expr)->next)
		    (yyval.u.expr) = make_comma((yyvsp[(1) - (1)].u.expr)->location, (yyvsp[(1) - (1)].u.expr));
		  else
		    (yyval.u.expr) = (yyvsp[(1) - (1)].u.expr); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 985 "c-parse.y"
    { (yyval.u.expr) = NULL; ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 991 "c-parse.y"
    { (yyval.u.expr) = expression_reverse((yyvsp[(1) - (1)].u.expr)); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 996 "c-parse.y"
    { (yyval.u.expr) = (yyvsp[(1) - (1)].u.expr); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 998 "c-parse.y"
    { (yyval.u.expr) = expression_chain((yyvsp[(3) - (3)].u.expr), (yyvsp[(1) - (3)].u.expr)); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1002 "c-parse.y"
    { (yyval.u.itoken).i = command_call; ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1003 "c-parse.y"
    { (yyval.u.itoken).i = event_signal; ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1004 "c-parse.y"
    { (yyval.u.itoken).i = post_task; ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1010 "c-parse.y"
    {
		  function_call fc = CAST(function_call, (yyvsp[(2) - (2)].u.expr));
		  type calltype = fc->arg1->type;
		  bool noerror = fc->type != error_type;
		  
		  (yyval.u.expr) = (yyvsp[(2) - (2)].u.expr);
		  fc->call_kind = (yyvsp[(1) - (2)].u.itoken).i;
		  switch ((yyvsp[(1) - (2)].u.itoken).i)
		    {
		    case command_call:
		      if (noerror && !type_command(calltype))
			error("only commands can be called");
		      break;
		    case event_signal:
		      if (noerror && !type_event(calltype))
			error("only events can be signaled");
		      break;
		    case post_task:
		      fc->type = unsigned_char_type;
		      if (noerror)
		        {
			  if (!type_task(calltype))
			    error("only tasks can be posted");
			  else if (flag_use_scheduler)
			    /* If requested, replace post/task by references to
			       an interface */
			    handle_post(fc);
			}
		      break;
		    }
		;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1042 "c-parse.y"
    { (yyval.u.expr) = make_dereference((yyvsp[(1) - (2)].u.itoken).location, (yyvsp[(2) - (2)].u.expr)); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1045 "c-parse.y"
    { (yyval.u.expr) = make_extension_expr((yyvsp[(1) - (2)].u.itoken).location, (yyvsp[(2) - (2)].u.expr));
		  pedantic = (yyvsp[(1) - (2)].u.itoken).i; ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1048 "c-parse.y"
    { (yyval.u.expr) = make_unary((yyvsp[(1) - (2)].u.itoken).location, (yyvsp[(1) - (2)].u.itoken).i, (yyvsp[(2) - (2)].u.expr));
#if 0
		  overflow_warning((yyval.u.expr)); 
#endif
		;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1055 "c-parse.y"
    {
		  (yyval.u.expr) = CAST(expression, make_label_address((yyvsp[(1) - (2)].u.itoken).location, (yyvsp[(2) - (2)].u.id_label)));
		  use_label((yyvsp[(2) - (2)].u.id_label));
		;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1060 "c-parse.y"
    { 
#if 0
		  if (TREE_CODE ((yyvsp[(2) - (2)].u.expr)) == COMPONENT_REF
		      && DECL_C_BIT_FIELD (TREE_OPERAND ((yyvsp[(2) - (2)].u.expr), 1)))
		    error("`sizeof' applied to a bit-field");
		  (yyval.u.expr) = c_sizeof (TREE_TYPE ((yyvsp[(2) - (2)].u.expr))); 
#endif
		  (yyval.u.expr) = make_sizeof_expr((yyvsp[(1) - (2)].u.itoken).location, (yyvsp[(2) - (2)].u.expr));
		  pstate.unevaluated_expression--; ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1070 "c-parse.y"
    { (yyval.u.expr) = make_sizeof_type((yyvsp[(1) - (4)].u.itoken).location, (yyvsp[(3) - (4)].u.type));
		  pstate.unevaluated_expression--; ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1073 "c-parse.y"
    { (yyval.u.expr) = make_alignof_expr((yyvsp[(1) - (2)].u.itoken).location, (yyvsp[(2) - (2)].u.expr));
		  pstate.unevaluated_expression--; ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1076 "c-parse.y"
    { (yyval.u.expr) = make_alignof_type((yyvsp[(1) - (4)].u.itoken).location, (yyvsp[(3) - (4)].u.type)); 
		  pstate.unevaluated_expression--; ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1081 "c-parse.y"
    { pstate.unevaluated_expression++; (yyval.u.itoken) = (yyvsp[(1) - (1)].u.itoken); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1085 "c-parse.y"
    { pstate.unevaluated_expression++; (yyval.u.itoken) = (yyvsp[(1) - (1)].u.itoken); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1091 "c-parse.y"
    { (yyval.u.expr) = make_cast((yyvsp[(1) - (4)].u.itoken).location, (yyvsp[(2) - (4)].u.type), (yyvsp[(4) - (4)].u.expr)); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1093 "c-parse.y"
    { 
		  start_init(NULL, NULL);
		  really_start_incremental_init((yyvsp[(2) - (4)].u.type)->type); 
		;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1098 "c-parse.y"
    { 
		  expression constructor = make_init_list((yyvsp[(4) - (7)].u.itoken).location, (yyvsp[(6) - (7)].u.expr));

		  finish_init();

		  if (pedantic)
		    pedwarn("ANSI C forbids constructor expressions");

		  (yyval.u.expr) = make_cast_list((yyvsp[(1) - (7)].u.itoken).location, (yyvsp[(2) - (7)].u.type), constructor);
		;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1113 "c-parse.y"
    { (yyval.u.expr) = make_binary((yyvsp[(2) - (3)].u.itoken).location, kind_plus, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1115 "c-parse.y"
    { (yyval.u.expr) = make_binary((yyvsp[(2) - (3)].u.itoken).location, kind_minus, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1117 "c-parse.y"
    { (yyval.u.expr) = make_binary((yyvsp[(2) - (3)].u.itoken).location, kind_times, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1119 "c-parse.y"
    { (yyval.u.expr) = make_binary((yyvsp[(2) - (3)].u.itoken).location, kind_divide, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1121 "c-parse.y"
    { (yyval.u.expr) = make_binary((yyvsp[(2) - (3)].u.itoken).location, kind_modulo, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1123 "c-parse.y"
    { (yyval.u.expr) = make_binary((yyvsp[(2) - (3)].u.itoken).location, kind_lshift, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1125 "c-parse.y"
    { (yyval.u.expr) = make_binary((yyvsp[(2) - (3)].u.itoken).location, kind_rshift, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1127 "c-parse.y"
    { (yyval.u.expr) = make_binary((yyvsp[(2) - (3)].u.itoken).location, (yyvsp[(2) - (3)].u.itoken).i, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1129 "c-parse.y"
    { (yyval.u.expr) = make_binary((yyvsp[(2) - (3)].u.itoken).location, kind_lt, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1131 "c-parse.y"
    { (yyval.u.expr) = make_binary((yyvsp[(2) - (3)].u.itoken).location, kind_gt, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1133 "c-parse.y"
    { (yyval.u.expr) = make_binary((yyvsp[(2) - (3)].u.itoken).location, (yyvsp[(2) - (3)].u.itoken).i, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1135 "c-parse.y"
    { (yyval.u.expr) = make_binary((yyvsp[(2) - (3)].u.itoken).location, kind_bitand, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1137 "c-parse.y"
    { (yyval.u.expr) = make_binary((yyvsp[(2) - (3)].u.itoken).location, kind_bitor, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1139 "c-parse.y"
    { (yyval.u.expr) = make_binary((yyvsp[(2) - (3)].u.itoken).location, kind_bitxor, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1141 "c-parse.y"
    { (yyval.u.expr) = make_binary((yyvsp[(2) - (3)].u.itoken).location, kind_andand, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1143 "c-parse.y"
    { (yyval.u.expr) = make_binary((yyvsp[(2) - (3)].u.itoken).location, kind_oror, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1145 "c-parse.y"
    { (yyval.u.expr) = make_conditional((yyvsp[(2) - (5)].u.itoken).location, (yyvsp[(1) - (5)].u.expr), (yyvsp[(3) - (5)].u.expr), (yyvsp[(5) - (5)].u.expr)); ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1147 "c-parse.y"
    { if (pedantic)
		    pedwarn("ANSI C forbids omitting the middle term of a ?: expression"); 
		;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1151 "c-parse.y"
    { (yyval.u.expr) = make_conditional((yyvsp[(2) - (5)].u.itoken).location, (yyvsp[(1) - (5)].u.expr), NULL, (yyvsp[(5) - (5)].u.expr)); ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1153 "c-parse.y"
    { (yyval.u.expr) = make_assign((yyvsp[(2) - (3)].u.itoken).location, kind_assign, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1155 "c-parse.y"
    { (yyval.u.expr) = make_assign((yyvsp[(2) - (3)].u.itoken).location, (yyvsp[(2) - (3)].u.itoken).i, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1160 "c-parse.y"
    { 
		  if (yychar == YYEMPTY)
		    yychar = YYLEX;
		  (yyval.u.expr) = make_identifier((yyvsp[(1) - (1)].idtoken).location, (yyvsp[(1) - (1)].idtoken).id, yychar == '('); 
		;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1165 "c-parse.y"
    { (yyval.u.expr) = CAST(expression, (yyvsp[(1) - (1)].u.constant)); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1166 "c-parse.y"
    { (yyval.u.expr) = (yyvsp[(1) - (1)].u.expr); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1168 "c-parse.y"
    { (yyval.u.expr) = (yyvsp[(2) - (3)].u.expr); (yyval.u.expr)->parens = TRUE; ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1170 "c-parse.y"
    { (yyval.u.expr) = make_error_expr(); ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1172 "c-parse.y"
    { if (current.function_decl == 0)
		    {
		      error("braced-group within expression allowed only inside a function");
		      YYERROR;
		    }
		    push_label_level();
		;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1180 "c-parse.y"
    { 
		  pop_label_level();
		  if (pedantic)
		    pedwarn("ANSI C forbids braced-groups within expressions");
		  (yyval.u.expr) = make_compound_expr((yyvsp[(1) - (4)].u.itoken).location, (yyvsp[(3) - (4)].u.stmt));
		;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1187 "c-parse.y"
    {
		  /* Magic functions may rewrite this to something else */
		  if (is_function_call((yyvsp[(1) - (1)].u.expr)))
		    {
		      function_call fc = CAST(function_call, (yyvsp[(1) - (1)].u.expr));
		      type calltype = fc->arg1->type;

		      if (type_command(calltype))
			error("commands must be called with call");
		      else if (type_event(calltype))
			error("events must be signaled with signal");
		      else if (type_task(calltype))
			error("tasks must be posted with post");
		    }

		  (yyval.u.expr) = (yyvsp[(1) - (1)].u.expr);
		;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1205 "c-parse.y"
    { (yyval.u.expr) = make_va_arg((yyvsp[(1) - (6)].u.itoken).location, (yyvsp[(3) - (6)].u.expr), (yyvsp[(5) - (6)].u.type)); ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1207 "c-parse.y"
    { (yyval.u.expr) = make_offsetof((yyvsp[(1) - (6)].u.itoken).location, (yyvsp[(3) - (6)].u.type), (yyvsp[(5) - (6)].u.fields)); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1209 "c-parse.y"
    { (yyval.u.expr) = make_array_ref((yyvsp[(2) - (4)].u.itoken).location, (yyvsp[(1) - (4)].u.expr), (yyvsp[(3) - (4)].u.expr)); ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1211 "c-parse.y"
    { (yyval.u.expr) = make_field_ref((yyvsp[(2) - (3)].u.itoken).location, (yyvsp[(1) - (3)].u.expr), (yyvsp[(3) - (3)].idtoken).id); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1213 "c-parse.y"
    { (yyval.u.expr) = make_field_ref((yyvsp[(2) - (3)].u.itoken).location, make_dereference((yyvsp[(2) - (3)].u.itoken).location, (yyvsp[(1) - (3)].u.expr)),
				      (yyvsp[(3) - (3)].idtoken).id); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1216 "c-parse.y"
    { (yyval.u.expr) = make_postincrement((yyvsp[(2) - (2)].u.itoken).location, (yyvsp[(1) - (2)].u.expr)); ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1218 "c-parse.y"
    { (yyval.u.expr) = make_postdecrement((yyvsp[(2) - (2)].u.itoken).location, (yyvsp[(1) - (2)].u.expr)); ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1222 "c-parse.y"
    { (yyval.u.fields) = dd_new_list(pr); dd_add_last(pr, (yyval.u.fields), (yyvsp[(1) - (1)].idtoken).id.data); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1223 "c-parse.y"
    { (yyval.u.fields) = (yyvsp[(1) - (3)].u.fields); dd_add_last(pr, (yyval.u.fields), (yyvsp[(3) - (3)].idtoken).id.data); ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1228 "c-parse.y"
    { (yyval.u.expr) = make_function_call((yyvsp[(2) - (4)].u.itoken).location, (yyvsp[(1) - (4)].u.expr), (yyvsp[(3) - (4)].u.expr)); ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1231 "c-parse.y"
    { (yyval.u.expr) = CAST(expression, (yyvsp[(1) - (1)].u.string)); ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1232 "c-parse.y"
    { (yyval.u.expr) = make_identifier((yyvsp[(1) - (1)].idtoken).location, (yyvsp[(1) - (1)].idtoken).id, FALSE); ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1236 "c-parse.y"
    { (yyval.u.decl) = NULL; ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1240 "c-parse.y"
    { if (pedantic)
		    pedwarn("ANSI C does not permit use of `varargs.h'"); 
		  (yyval.u.decl) = declaration_chain(CAST(declaration, new_ellipsis_decl(pr, (yyvsp[(2) - (2)].u.itoken).location)), (yyvsp[(1) - (2)].u.decl));
		;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1251 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(2) - (2)].u.decl), (yyvsp[(1) - (2)].u.decl)); ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1260 "c-parse.y"
    { (yyval.u.decl) = make_data_decl((yyvsp[(1) - (4)].u.telement), (yyvsp[(3) - (4)].u.decl)); ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1262 "c-parse.y"
    { (yyval.u.decl) = make_data_decl((yyvsp[(1) - (4)].u.telement), (yyvsp[(3) - (4)].u.decl)); ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 1264 "c-parse.y"
    { shadow_tag_warned((yyvsp[(1) - (3)].u.telement), 1);
		  (yyval.u.decl) = make_data_decl((yyvsp[(1) - (3)].u.telement), NULL);
		  pedwarn("empty declaration"); ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1268 "c-parse.y"
    { pedwarn("empty declaration"); 
		  (yyval.u.decl) = NULL; ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1278 "c-parse.y"
    { (yyval.u.decl) = make_error_decl(); ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1279 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(2) - (2)].u.decl), (yyvsp[(1) - (2)].u.decl)); ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1280 "c-parse.y"
    { (yyval.u.decl) = make_error_decl(); ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1288 "c-parse.y"
    { 
		  push_declspec_stack();
		  pending_xref_error();
		  pstate.declspecs = (yyvsp[(0) - (0)].u.telement);
		  pstate.attributes = NULL;
		;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1300 "c-parse.y"
    { pstate.attributes = (yyvsp[(1) - (1)].u.attribute); ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1305 "c-parse.y"
    { (yyval.u.decl) = make_data_decl((yyvsp[(1) - (4)].u.telement), (yyvsp[(3) - (4)].u.decl)); ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1307 "c-parse.y"
    { (yyval.u.decl) = make_data_decl((yyvsp[(1) - (4)].u.telement), (yyvsp[(3) - (4)].u.decl)); ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1309 "c-parse.y"
    { (yyval.u.decl) = (yyvsp[(3) - (3)].u.decl);
		  pop_declspec_stack(); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1312 "c-parse.y"
    { (yyval.u.decl) = (yyvsp[(3) - (3)].u.decl);
		  pop_declspec_stack(); ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1315 "c-parse.y"
    { shadow_tag((yyvsp[(1) - (3)].u.telement));
		  (yyval.u.decl) = make_data_decl((yyvsp[(1) - (3)].u.telement), NULL); ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1318 "c-parse.y"
    { (yyval.u.decl) = make_extension_decl((yyvsp[(1) - (2)].u.itoken).i, (yyvsp[(1) - (2)].u.itoken).location, (yyvsp[(2) - (2)].u.decl)); ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1375 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1377 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1382 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1387 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1389 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1400 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1402 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1404 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1406 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1408 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1410 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1416 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1418 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1420 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1422 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1424 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1429 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1431 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1433 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1435 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1437 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1439 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1444 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1446 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1448 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1450 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1452 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1458 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1460 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1462 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1464 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1466 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1468 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1473 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1478 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1480 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1482 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1484 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1486 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1488 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1493 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1498 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1500 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1502 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1504 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1506 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1508 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1510 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1512 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1514 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1516 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1521 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1523 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1525 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1527 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1529 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1534 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1536 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1538 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1540 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1542 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1544 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1546 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1548 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1550 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1552 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1557 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1559 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1561 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1563 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1565 "c-parse.y"
    { (yyval.u.telement) = type_element_chain((yyvsp[(1) - (2)].u.telement), (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1632 "c-parse.y"
    { (yyval.u.telement) = NULL; ;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1677 "c-parse.y"
    { /* For a typedef name, record the meaning, not the name.
		     In case of `foo foo, bar;'.  */
		  (yyval.u.telement) = CAST(type_element, new_typename(pr, (yyvsp[(1) - (1)].idtoken).location, (yyvsp[(1) - (1)].idtoken).decl)); ;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1681 "c-parse.y"
    {
		  /* reference to a typedef from a component. */
		  (yyval.u.telement) = CAST(type_element, new_component_typeref(pr, (yyvsp[(1) - (3)].idtoken).location, (yyvsp[(3) - (3)].idtoken).decl, (yyvsp[(1) - (3)].idtoken).id)); 
		;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1686 "c-parse.y"
    { (yyval.u.telement) = CAST(type_element, new_typeof_expr(pr, (yyvsp[(1) - (4)].u.itoken).location, (yyvsp[(3) - (4)].u.expr))); ;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1688 "c-parse.y"
    { (yyval.u.telement) = CAST(type_element, new_typeof_type(pr, (yyvsp[(1) - (4)].u.itoken).location, (yyvsp[(3) - (4)].u.type))); ;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1693 "c-parse.y"
    { (yyval.u.decl) = declaration_reverse((yyvsp[(1) - (1)].u.decl)); ;}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1697 "c-parse.y"
    { (yyval.u.decl) = declaration_reverse((yyvsp[(1) - (1)].u.decl)); ;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1703 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(4) - (4)].u.decl), (yyvsp[(1) - (4)].u.decl)); ;}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1707 "c-parse.y"
    { (yyval.u.decl) = (yyvsp[(1) - (1)].u.decl); ;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1709 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(4) - (4)].u.decl), (yyvsp[(1) - (4)].u.decl)); ;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1714 "c-parse.y"
    { (yyval.u.asm_stmt) = NULL; ;}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1716 "c-parse.y"
    { (yyval.u.asm_stmt) = new_asm_stmt(pr, (yyvsp[(1) - (4)].u.itoken).location, CAST(expression, (yyvsp[(3) - (4)].u.string)),
				    NULL, NULL, NULL, NULL); ;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1722 "c-parse.y"
    { (yyval.u.decl) = start_decl((yyvsp[(1) - (4)].u.declarator), (yyvsp[(2) - (4)].u.asm_stmt), pstate.declspecs, 1,
                                          prefix_attr((yyvsp[(3) - (4)].u.attribute)));
		  start_init((yyval.u.decl), NULL); ;}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1727 "c-parse.y"
    { finish_init();
		  (yyval.u.decl) = finish_decl((yyvsp[(5) - (6)].u.decl), (yyvsp[(6) - (6)].u.expr)); ;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1730 "c-parse.y"
    { declaration d = start_decl((yyvsp[(1) - (3)].u.declarator), (yyvsp[(2) - (3)].u.asm_stmt), pstate.declspecs, 0,
					     prefix_attr((yyvsp[(3) - (3)].u.attribute)));
		  (yyval.u.decl) = finish_decl(d, NULL); ;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1737 "c-parse.y"
    { (yyval.u.decl) = start_decl((yyvsp[(1) - (4)].u.declarator), (yyvsp[(2) - (4)].u.asm_stmt), pstate.declspecs, 1,
					 prefix_attr((yyvsp[(3) - (4)].u.attribute)));
		  start_init((yyval.u.decl), NULL); ;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1742 "c-parse.y"
    { finish_init();
		  (yyval.u.decl) = finish_decl((yyvsp[(5) - (6)].u.decl), (yyvsp[(6) - (6)].u.expr)); ;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1745 "c-parse.y"
    { declaration d = start_decl((yyvsp[(1) - (3)].u.declarator), (yyvsp[(2) - (3)].u.asm_stmt), pstate.declspecs, 0,
					     prefix_attr((yyvsp[(3) - (3)].u.attribute)));
		  (yyval.u.decl) = finish_decl(d, NULL); ;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1752 "c-parse.y"
    { (yyval.u.attribute) = NULL; ;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1754 "c-parse.y"
    { (yyval.u.attribute) = attribute_reverse((yyvsp[(1) - (1)].u.attribute)); ;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1758 "c-parse.y"
    { (yyval.u.telement) = CAST(type_element, (yyvsp[(1) - (1)].u.attribute)); ;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1762 "c-parse.y"
    { (yyval.u.attribute) = NULL; ;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1764 "c-parse.y"
    { (yyval.u.attribute) = attribute_chain((yyvsp[(2) - (2)].u.attribute), (yyvsp[(1) - (2)].u.attribute)); ;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1769 "c-parse.y"
    { (yyval.u.attribute) = (yyvsp[(1) - (1)].u.attribute); ;}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1771 "c-parse.y"
    { (yyval.u.attribute) = attribute_chain((yyvsp[(2) - (2)].u.attribute), (yyvsp[(1) - (2)].u.attribute)); ;}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1776 "c-parse.y"
    { (yyval.u.attribute) = (yyvsp[(4) - (6)].u.attribute); ;}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1777 "c-parse.y"
    { (yyval.u.attribute) = CAST(attribute, (yyvsp[(1) - (1)].u.gcc_attribute)); ;}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1783 "c-parse.y"
    { word w = new_word(pr, (yyvsp[(1) - (1)].idtoken).location, (yyvsp[(1) - (1)].idtoken).id);
		  (yyval.u.gcc_attribute) = new_target_attribute(pr, (yyvsp[(1) - (1)].idtoken).location, w, NULL); ;}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1786 "c-parse.y"
    { word w = new_word(pr, (yyvsp[(1) - (2)].idtoken).location, (yyvsp[(1) - (2)].idtoken).id);
		  (yyval.u.gcc_attribute) = new_target_attribute(pr, (yyvsp[(1) - (2)].idtoken).location, w, (yyvsp[(2) - (2)].u.expr)); ;}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1789 "c-parse.y"
    { word w = new_word(pr, (yyvsp[(2) - (2)].u.expr)->location, str2cstring(pr, "iar_at"));
		  (yyval.u.gcc_attribute) = new_target_attribute(pr, (yyvsp[(2) - (2)].u.expr)->location, w, (yyvsp[(2) - (2)].u.expr)); ;}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1794 "c-parse.y"
    { (yyval.u.expr) = CAST(expression, (yyvsp[(1) - (1)].u.constant)); ;}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1795 "c-parse.y"
    { (yyval.u.expr) = (yyvsp[(1) - (1)].u.expr); ;}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1796 "c-parse.y"
    { (yyval.u.expr) = (yyvsp[(2) - (3)].u.expr); ;}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1801 "c-parse.y"
    { (yyval.u.attribute) = CAST(attribute, (yyvsp[(1) - (1)].u.gcc_attribute)); ;}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1803 "c-parse.y"
    { (yyval.u.attribute) = attribute_chain((yyvsp[(1) - (3)].u.attribute), CAST(attribute, (yyvsp[(3) - (3)].u.gcc_attribute))); ;}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1808 "c-parse.y"
    { (yyval.u.gcc_attribute) = NULL; ;}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1810 "c-parse.y"
    { (yyval.u.gcc_attribute) = new_gcc_attribute(pr, (yyvsp[(1) - (1)].u.word)->location, (yyvsp[(1) - (1)].u.word), NULL); ;}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1812 "c-parse.y"
    { (yyval.u.gcc_attribute) = new_gcc_attribute
		    (pr, (yyvsp[(1) - (4)].u.word)->location, (yyvsp[(1) - (4)].u.word), make_attr_args((yyvsp[(3) - (4)].idtoken).location, (yyvsp[(3) - (4)].idtoken).id, NULL)); ;}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1815 "c-parse.y"
    { (yyval.u.gcc_attribute) = new_gcc_attribute
		    (pr, (yyvsp[(2) - (6)].u.itoken).location, (yyvsp[(1) - (6)].u.word), make_attr_args((yyvsp[(3) - (6)].idtoken).location, (yyvsp[(3) - (6)].idtoken).id, (yyvsp[(5) - (6)].u.expr)));
		;}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1819 "c-parse.y"
    { (yyval.u.gcc_attribute) = new_gcc_attribute(pr, (yyvsp[(2) - (4)].u.itoken).location, (yyvsp[(1) - (4)].u.word), (yyvsp[(3) - (4)].u.expr));
		;}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1825 "c-parse.y"
    { (yyval.u.attribute) = finish_attribute_use((yyvsp[(2) - (5)].u.nesc_attribute), (yyvsp[(4) - (5)].u.expr)); ;}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1827 "c-parse.y"
    { (yyval.u.attribute) = finish_attribute_use((yyvsp[(2) - (4)].u.nesc_attribute), make_error_expr()); ;}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1832 "c-parse.y"
    { (yyval.u.nesc_attribute) = start_attribute_use((yyvsp[(1) - (1)].u.word)); ;}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1841 "c-parse.y"
    { (yyval.u.word) = make_cword((yyvsp[(1) - (1)].u.telement)->location, rid_name(CAST(rid, (yyvsp[(1) - (1)].u.telement)))); ;}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1843 "c-parse.y"
    { (yyval.u.word) = make_cword((yyvsp[(1) - (1)].u.telement)->location, rid_name(CAST(rid, (yyvsp[(1) - (1)].u.telement)))); ;}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1845 "c-parse.y"
    { (yyval.u.word) = make_cword((yyvsp[(1) - (1)].u.telement)->location, qualifier_name(CAST(qualifier, (yyvsp[(1) - (1)].u.telement))->id)); ;}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1847 "c-parse.y"
    { (yyval.u.word) = make_cword((yyvsp[(1) - (1)].u.itoken).location, "signal"); ;}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1853 "c-parse.y"
    { (yyval.u.expr) = (yyvsp[(1) - (1)].u.expr); simple_init((yyval.u.expr)); ;}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1855 "c-parse.y"
    { really_start_incremental_init(NULL); ;}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1857 "c-parse.y"
    { (yyval.u.expr) = make_init_list((yyvsp[(1) - (4)].u.itoken).location, (yyvsp[(3) - (4)].u.expr)); ;}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1859 "c-parse.y"
    { (yyval.u.expr) = make_error_expr(); ;}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1865 "c-parse.y"
    { if (pedantic)
		    pedwarn("ANSI C forbids empty initializer braces"); 
		  (yyval.u.expr) = NULL; ;}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1868 "c-parse.y"
    { (yyval.u.expr) = expression_reverse((yyvsp[(1) - (2)].u.expr)); ;}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1873 "c-parse.y"
    { (yyval.u.expr) = expression_chain((yyvsp[(3) - (3)].u.expr), (yyvsp[(1) - (3)].u.expr)); ;}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1880 "c-parse.y"
    { if (pedantic)
		    pedwarn("ANSI C forbids specifying subobject to initialize"); 
		  (yyval.u.expr) = make_init_specific((yyvsp[(1) - (3)].u.designator), (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1884 "c-parse.y"
    { if (pedantic)
		    pedwarn("obsolete use of designated initializer without `='");
		  (yyval.u.expr) = make_init_specific((yyvsp[(1) - (2)].u.designator), (yyvsp[(2) - (2)].u.expr)); ;}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1888 "c-parse.y"
    { (yyval.u.designator) = set_init_label((yyvsp[(1) - (2)].idtoken).location, (yyvsp[(1) - (2)].idtoken).id);
		  if (pedantic)
		    pedwarn("obsolete use of designated initializer with `:'"); ;}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1892 "c-parse.y"
    { (yyval.u.expr) = make_init_specific((yyvsp[(3) - (4)].u.designator), (yyvsp[(4) - (4)].u.expr)); ;}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1898 "c-parse.y"
    { push_init_level (0); ;}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1900 "c-parse.y"
    { (yyval.u.expr) = make_init_list((yyvsp[(1) - (4)].u.itoken).location, (yyvsp[(3) - (4)].u.expr)); 
		  process_init_element(NULL); ;}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1903 "c-parse.y"
    { process_init_element((yyvsp[(1) - (1)].u.expr)); (yyval.u.expr) = (yyvsp[(1) - (1)].u.expr); ;}
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1904 "c-parse.y"
    { (yyval.u.expr) = make_error_expr(); ;}
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1909 "c-parse.y"
    { (yyval.u.designator) = designator_chain((yyvsp[(1) - (2)].u.designator), (yyvsp[(2) - (2)].u.designator)); ;}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1914 "c-parse.y"
    { (yyval.u.designator) = set_init_label((yyvsp[(2) - (2)].idtoken).location, (yyvsp[(2) - (2)].idtoken).id); ;}
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1919 "c-parse.y"
    { (yyval.u.designator) = set_init_index((yyvsp[(1) - (5)].u.itoken).location, (yyvsp[(2) - (5)].u.expr), (yyvsp[(4) - (5)].u.expr));
		  if (pedantic)
		    pedwarn ("ISO C forbids specifying range of elements to initialize"); ;}
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1923 "c-parse.y"
    { (yyval.u.designator) = set_init_index((yyvsp[(1) - (3)].u.itoken).location, (yyvsp[(2) - (3)].u.expr), NULL); ;}
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1928 "c-parse.y"
    { 
		  /* maybeasm is only here to avoid a s/r conflict */
		  refuse_asm((yyvsp[(2) - (3)].u.asm_stmt));

		  if (!start_function(pstate.declspecs, (yyvsp[(1) - (3)].u.declarator), (yyvsp[(3) - (3)].u.attribute), 1))
		    {
		      YYERROR1;
		    }
		  ;}
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1938 "c-parse.y"
    { store_parm_decls(declaration_reverse((yyvsp[(3) - (5)].u.attribute))); ;}
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1946 "c-parse.y"
    { (yyval.u.decl) = finish_function((yyvsp[(7) - (7)].u.stmt)); ;}
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1951 "c-parse.y"
    { 
		  /* maybeasm is only here to avoid a s/r conflict */
		  refuse_asm((yyvsp[(2) - (3)].u.asm_stmt));

		  if (!start_function(pstate.declspecs, (yyvsp[(1) - (3)].u.declarator), (yyvsp[(3) - (3)].u.attribute), 1))
		    {
		      YYERROR1;
		    }
		;}
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1961 "c-parse.y"
    { store_parm_decls(declaration_reverse((yyvsp[(3) - (5)].u.attribute))); ;}
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1969 "c-parse.y"
    { (yyval.u.decl) = finish_function((yyvsp[(7) - (7)].u.stmt)); ;}
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1984 "c-parse.y"
    { (yyval.u.declarator) = finish_array_or_fn_declarator((yyvsp[(1) - (2)].u.declarator), (yyvsp[(2) - (2)].u.nested)); ;}
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1986 "c-parse.y"
    { (yyval.u.declarator) = make_pointer_declarator((yyvsp[(1) - (3)].u.itoken).location, (yyvsp[(3) - (3)].u.declarator), (yyvsp[(2) - (3)].u.telement)); ;}
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1988 "c-parse.y"
    { (yyval.u.declarator) = make_qualified_declarator((yyvsp[(1) - (4)].u.itoken).location, (yyvsp[(3) - (4)].u.declarator), CAST(type_element, (yyvsp[(2) - (4)].u.attribute))); ;}
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1989 "c-parse.y"
    { (yyval.u.declarator) = make_identifier_declarator((yyvsp[(1) - (1)].idtoken).location, (yyvsp[(1) - (1)].idtoken).id); ;}
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1991 "c-parse.y"
    {
		  (yyval.u.declarator) = make_interface_ref_declarator((yyvsp[(1) - (3)].idtoken).location, (yyvsp[(1) - (3)].idtoken).id, (yyvsp[(3) - (3)].idtoken).id);
		;}
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 2002 "c-parse.y"
    { (yyval.u.declarator) = finish_array_or_fn_declarator((yyvsp[(1) - (2)].u.declarator), (yyvsp[(2) - (2)].u.nested)); ;}
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 2004 "c-parse.y"
    { (yyval.u.declarator) = make_pointer_declarator((yyvsp[(1) - (3)].u.itoken).location, (yyvsp[(3) - (3)].u.declarator), (yyvsp[(2) - (3)].u.telement)); ;}
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 2006 "c-parse.y"
    { (yyval.u.declarator) = make_identifier_declarator((yyvsp[(1) - (1)].idtoken).location, (yyvsp[(1) - (1)].idtoken).id); ;}
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 2015 "c-parse.y"
    { (yyval.u.declarator) = finish_array_or_fn_declarator((yyvsp[(1) - (2)].u.declarator), (yyvsp[(2) - (2)].u.nested)); ;}
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 2017 "c-parse.y"
    { (yyval.u.declarator) = make_pointer_declarator((yyvsp[(1) - (3)].u.itoken).location, (yyvsp[(3) - (3)].u.declarator), (yyvsp[(2) - (3)].u.telement)); ;}
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 2019 "c-parse.y"
    { (yyval.u.declarator) = make_qualified_declarator((yyvsp[(1) - (4)].u.itoken).location, (yyvsp[(3) - (4)].u.declarator), CAST(type_element, (yyvsp[(2) - (4)].u.attribute))); ;}
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 2021 "c-parse.y"
    { (yyval.u.declarator) = make_identifier_declarator((yyvsp[(1) - (1)].idtoken).location, (yyvsp[(1) - (1)].idtoken).id); ;}
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 2023 "c-parse.y"
    {
		  (yyval.u.declarator) = make_interface_ref_declarator((yyvsp[(1) - (3)].idtoken).location, (yyvsp[(1) - (3)].idtoken).id, (yyvsp[(3) - (3)].idtoken).id);
		;}
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 2029 "c-parse.y"
    { (yyval.u.word) = new_word(pr, (yyvsp[(1) - (1)].idtoken).location, (yyvsp[(1) - (1)].idtoken).id); ;}
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 2034 "c-parse.y"
    { (yyval.u.telement) = xref_tag((yyvsp[(1) - (3)].u.itoken).location, (yyvsp[(1) - (3)].u.itoken).i, (yyvsp[(2) - (3)].u.word)); 
		  if ((yyvsp[(3) - (3)].u.attribute)) warning("attributes ignored"); ;}
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 2037 "c-parse.y"
    { (yyval.u.telement) = xref_tag((yyvsp[(1) - (3)].u.itoken).location, kind_enum_ref, (yyvsp[(2) - (3)].u.word));
		  if ((yyvsp[(3) - (3)].u.attribute)) warning("attributes ignored"); ;}
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 2043 "c-parse.y"
    { (yyval.u.telement) = start_struct((yyvsp[(1) - (4)].u.itoken).location, (yyvsp[(1) - (4)].u.itoken).i, (yyvsp[(2) - (4)].u.word));
		  /* Start scope of tag before parsing components.  */
		;}
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 2047 "c-parse.y"
    { (yyval.u.telement) = finish_struct((yyvsp[(5) - (8)].u.telement), (yyvsp[(6) - (8)].u.decl), attribute_chain((yyvsp[(3) - (8)].u.attribute), (yyvsp[(8) - (8)].u.attribute))); ;}
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 2049 "c-parse.y"
    { (yyval.u.telement) = start_struct((yyvsp[(1) - (5)].u.itoken).location, kind_attribute_ref, (yyvsp[(3) - (5)].u.word));
		  /* Start scope of tag before parsing components.  */
		;}
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 2053 "c-parse.y"
    { (yyval.u.telement) = finish_struct((yyvsp[(6) - (9)].u.telement), (yyvsp[(7) - (9)].u.decl), attribute_chain((yyvsp[(4) - (9)].u.attribute), (yyvsp[(9) - (9)].u.attribute))); ;}
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 2055 "c-parse.y"
    { (yyval.u.telement) = finish_struct(start_struct((yyvsp[(1) - (5)].u.itoken).location, (yyvsp[(1) - (5)].u.itoken).i,
						  NULL), (yyvsp[(3) - (5)].u.decl), (yyvsp[(5) - (5)].u.attribute));
		;}
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 2059 "c-parse.y"
    { (yyval.u.telement) = start_enum((yyvsp[(1) - (4)].u.itoken).location, (yyvsp[(2) - (4)].u.word)); ;}
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 2061 "c-parse.y"
    { (yyval.u.telement) = finish_enum((yyvsp[(5) - (9)].u.telement), declaration_reverse((yyvsp[(6) - (9)].u.decl)), attribute_chain((yyvsp[(3) - (9)].u.attribute), (yyvsp[(9) - (9)].u.attribute))); ;}
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 2063 "c-parse.y"
    { (yyval.u.telement) = start_enum((yyvsp[(1) - (2)].u.itoken).location, NULL); ;}
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 2065 "c-parse.y"
    { (yyval.u.telement) = finish_enum((yyvsp[(3) - (7)].u.telement), declaration_reverse((yyvsp[(4) - (7)].u.decl)), (yyvsp[(7) - (7)].u.attribute)); ;}
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 2069 "c-parse.y"
    { (yyval.u.itoken) = (yyvsp[(1) - (1)].u.itoken); (yyval.u.itoken).i = kind_struct_ref; ;}
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 2070 "c-parse.y"
    { (yyval.u.itoken) = (yyvsp[(1) - (1)].u.itoken); (yyval.u.itoken).i = kind_union_ref; ;}
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 2071 "c-parse.y"
    { (yyval.u.itoken) = (yyvsp[(1) - (1)].u.itoken); (yyval.u.itoken).i = kind_nx_struct_ref; ;}
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 2072 "c-parse.y"
    { (yyval.u.itoken) = (yyvsp[(1) - (1)].u.itoken); (yyval.u.itoken).i = kind_nx_union_ref; ;}
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 2083 "c-parse.y"
    { if (pedantic) pedwarn("comma at end of enumerator list"); ;}
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 2088 "c-parse.y"
    { (yyval.u.decl) = declaration_reverse((yyvsp[(1) - (1)].u.decl)); ;}
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 2090 "c-parse.y"
    { (yyval.u.decl) = declaration_reverse(declaration_chain((yyvsp[(2) - (2)].u.decl), (yyvsp[(1) - (2)].u.decl)));
		  pedwarn("no semicolon at end of struct or union"); ;}
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 2096 "c-parse.y"
    { (yyval.u.decl) = NULL; ;}
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 2098 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(2) - (3)].u.decl), (yyvsp[(1) - (3)].u.decl)); ;}
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 2100 "c-parse.y"
    { if (pedantic)
		    pedwarn("extra semicolon in struct or union specified"); 
		   (yyval.u.decl) = (yyvsp[(1) - (2)].u.decl); ;}
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 2116 "c-parse.y"
    { (yyval.u.decl) = make_data_decl((yyvsp[(1) - (3)].u.telement), declaration_reverse((yyvsp[(3) - (3)].u.decl))); ;}
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 2118 "c-parse.y"
    { if (pedantic)
		    pedwarn("ISO C doesn't support unnamed structs/unions");

		  (yyval.u.decl) = make_data_decl((yyvsp[(1) - (2)].u.telement), NULL); ;}
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 2123 "c-parse.y"
    { (yyval.u.decl) = make_data_decl((yyvsp[(1) - (3)].u.telement), declaration_reverse((yyvsp[(3) - (3)].u.decl))); ;}
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 2125 "c-parse.y"
    { if (pedantic)
		    pedwarn("ANSI C forbids member declarations with no members");
		  shadow_tag((yyvsp[(1) - (2)].u.telement));
		  (yyval.u.decl) = make_data_decl((yyvsp[(1) - (2)].u.telement), NULL); ;}
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 2130 "c-parse.y"
    { (yyval.u.decl) = make_error_decl(); ;}
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 2132 "c-parse.y"
    { (yyval.u.decl) = make_extension_decl((yyvsp[(1) - (2)].u.itoken).i, (yyvsp[(1) - (2)].u.itoken).location, (yyvsp[(2) - (2)].u.decl)); ;}
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 2138 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(4) - (4)].u.decl), (yyvsp[(1) - (4)].u.decl)); ;}
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 2146 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(4) - (4)].u.decl), (yyvsp[(1) - (4)].u.decl)); ;}
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 2151 "c-parse.y"
    { (yyval.u.decl) = make_field((yyvsp[(1) - (2)].u.declarator), NULL, pstate.declspecs,
				  prefix_attr((yyvsp[(2) - (2)].u.attribute))); ;}
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 2154 "c-parse.y"
    { (yyval.u.decl) = make_field((yyvsp[(1) - (4)].u.declarator), (yyvsp[(3) - (4)].u.expr), pstate.declspecs,
				  prefix_attr((yyvsp[(4) - (4)].u.attribute))); ;}
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 2157 "c-parse.y"
    { (yyval.u.decl) = make_field(NULL, (yyvsp[(2) - (3)].u.expr), pstate.declspecs,
				  prefix_attr((yyvsp[(3) - (3)].u.attribute))); ;}
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 2163 "c-parse.y"
    { (yyval.u.decl) = make_field((yyvsp[(1) - (2)].u.declarator), NULL, pstate.declspecs,
				  prefix_attr((yyvsp[(2) - (2)].u.attribute))); ;}
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 2166 "c-parse.y"
    { (yyval.u.decl) = make_field((yyvsp[(1) - (4)].u.declarator), (yyvsp[(3) - (4)].u.expr), pstate.declspecs,
				  prefix_attr((yyvsp[(4) - (4)].u.attribute))); ;}
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 2169 "c-parse.y"
    { (yyval.u.decl) = make_field(NULL, (yyvsp[(2) - (3)].u.expr), pstate.declspecs,
				  prefix_attr((yyvsp[(3) - (3)].u.attribute))); ;}
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 2176 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(3) - (3)].u.decl), (yyvsp[(1) - (3)].u.decl)); ;}
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 2178 "c-parse.y"
    { (yyval.u.decl) = NULL; ;}
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 2184 "c-parse.y"
    { (yyval.u.decl) = make_enumerator((yyvsp[(1) - (1)].idtoken).location, (yyvsp[(1) - (1)].idtoken).id, NULL); ;}
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 2186 "c-parse.y"
    { (yyval.u.decl) = make_enumerator((yyvsp[(1) - (3)].idtoken).location, (yyvsp[(1) - (3)].idtoken).id, (yyvsp[(3) - (3)].u.expr)); ;}
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 2191 "c-parse.y"
    { pending_xref_error(); ;}
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 2193 "c-parse.y"
    { (yyval.u.type) = make_type((yyvsp[(1) - (3)].u.telement), (yyvsp[(3) - (3)].u.declarator)); ;}
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 2198 "c-parse.y"
    { (yyval.u.declarator) = NULL; ;}
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 2210 "c-parse.y"
    { (yyval.u.declarator) = make_pointer_declarator((yyvsp[(1) - (3)].u.itoken).location, (yyvsp[(3) - (3)].u.declarator), (yyvsp[(2) - (3)].u.telement)); ;}
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 2215 "c-parse.y"
    { (yyval.u.declarator) = make_pointer_declarator((yyvsp[(1) - (2)].u.itoken).location, NULL, (yyvsp[(2) - (2)].u.telement)); ;}
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 2217 "c-parse.y"
    { (yyval.u.declarator) = make_pointer_declarator((yyvsp[(1) - (3)].u.itoken).location, (yyvsp[(3) - (3)].u.declarator), (yyvsp[(2) - (3)].u.telement)); ;}
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 2222 "c-parse.y"
    { (yyval.u.declarator) = make_qualified_declarator((yyvsp[(1) - (4)].u.itoken).location, (yyvsp[(3) - (4)].u.declarator), CAST(type_element, (yyvsp[(2) - (4)].u.attribute))); ;}
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 2224 "c-parse.y"
    { (yyval.u.declarator) = finish_array_or_fn_declarator((yyvsp[(1) - (2)].u.declarator), (yyvsp[(2) - (2)].u.nested)); ;}
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 2226 "c-parse.y"
    { (yyval.u.declarator) = finish_array_or_fn_declarator(NULL, (yyvsp[(1) - (1)].u.nested)); ;}
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 2241 "c-parse.y"
    { (yyval.u.nested) = CAST(nested_declarator,
		    new_function_declarator(pr, (yyvsp[(2) - (4)].u.itoken).location, NULL, (yyvsp[(3) - (4)].u.decl), (yyvsp[(1) - (4)].u.decl), (yyvsp[(4) - (4)].u.telement), NULL)); ;}
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 2244 "c-parse.y"
    { (yyval.u.nested) = CAST(nested_declarator,
		    new_function_declarator(pr, (yyvsp[(1) - (3)].u.itoken).location, NULL, (yyvsp[(2) - (3)].u.decl), NULL, (yyvsp[(3) - (3)].u.telement), NULL)); ;}
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 2250 "c-parse.y"
    { (yyval.u.nested) = CAST(nested_declarator,
		    new_function_declarator(pr, (yyvsp[(1) - (3)].u.itoken).location, NULL, (yyvsp[(2) - (3)].u.decl), NULL, (yyvsp[(3) - (3)].u.telement), NULL)); ;}
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 2256 "c-parse.y"
    { (yyval.u.nested) = CAST(nested_declarator, new_array_declarator(pr, (yyvsp[(1) - (3)].u.itoken).location, NULL, (yyvsp[(2) - (3)].u.expr))); ;}
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 2258 "c-parse.y"
    { (yyval.u.nested) = CAST(nested_declarator, new_array_declarator(pr, (yyvsp[(1) - (2)].u.itoken).location, NULL, NULL)); ;}
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 2267 "c-parse.y"
    {
		  if (pedantic && (yyvsp[(1) - (1)].u.istmt).i)
		    pedwarn("ANSI C forbids label at end of compound statement");
		  /* Add an empty statement to last label if stand-alone */
		  if ((yyvsp[(1) - (1)].u.istmt).i)
		    {
		      statement last_label = last_statement((yyvsp[(1) - (1)].u.istmt).stmt);

		      chain_with_labels(last_label, CAST(statement, new_empty_stmt(pr, last_label->location)));
		    }
		  (yyval.u.stmt) = (yyvsp[(1) - (1)].u.istmt).stmt;
		;}
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 2284 "c-parse.y"
    { (yyval.u.istmt).i = (yyvsp[(2) - (2)].u.istmt).i; (yyval.u.istmt).stmt = chain_with_labels((yyvsp[(1) - (2)].u.istmt).stmt, (yyvsp[(2) - (2)].u.istmt).stmt); ;}
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 2286 "c-parse.y"
    { (yyval.u.istmt).i = 0; (yyval.u.istmt).stmt = make_error_stmt(); ;}
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 2290 "c-parse.y"
    { (yyval.u.stmt) = NULL; ;}
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 2299 "c-parse.y"
    { pushlevel(FALSE); ;}
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 2305 "c-parse.y"
    { (yyval.u.id_label) = NULL; ;}
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 2307 "c-parse.y"
    { if (pedantic)
		    pedwarn("ANSI C forbids label declarations"); 
		  (yyval.u.id_label) = id_label_reverse((yyvsp[(1) - (1)].u.id_label)); ;}
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 2314 "c-parse.y"
    { (yyval.u.id_label) = id_label_chain((yyvsp[(2) - (2)].u.id_label), (yyvsp[(1) - (2)].u.id_label)); ;}
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 2319 "c-parse.y"
    { (yyval.u.id_label) = (yyvsp[(2) - (3)].u.id_label); ;}
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 2326 "c-parse.y"
    { (yyval.u.stmt) = (yyvsp[(2) - (2)].u.stmt); ;}
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 2330 "c-parse.y"
    { (yyval.u.itoken) = (yyvsp[(1) - (1)].u.itoken); compstmt_count++; ;}
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 2335 "c-parse.y"
    { (yyval.u.stmt) = CAST(statement, new_compound_stmt(pr, (yyvsp[(1) - (3)].u.itoken).location, NULL, NULL, NULL, poplevel())); ;}
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 2337 "c-parse.y"
    { (yyval.u.stmt) = CAST(statement, new_compound_stmt(pr, (yyvsp[(1) - (6)].u.itoken).location, (yyvsp[(3) - (6)].u.id_label),
		    declaration_reverse((yyvsp[(4) - (6)].u.decl)), (yyvsp[(5) - (6)].u.stmt), poplevel())); ;}
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 2340 "c-parse.y"
    { poplevel();
		  (yyval.u.stmt) = make_error_stmt(); ;}
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 2343 "c-parse.y"
    { (yyval.u.stmt) = CAST(statement, new_compound_stmt(pr, (yyvsp[(1) - (5)].u.itoken).location, (yyvsp[(3) - (5)].u.id_label), NULL, (yyvsp[(4) - (5)].u.stmt), poplevel())); ;}
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 2349 "c-parse.y"
    { (yyval.u.istmt).stmt = CAST(statement, new_if_stmt(pr, (yyvsp[(1) - (2)].u.iexpr).expr->location, (yyvsp[(1) - (2)].u.iexpr).expr, (yyvsp[(2) - (2)].u.stmt), NULL));
		  (yyval.u.istmt).i = (yyvsp[(1) - (2)].u.iexpr).i; ;}
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 2351 "c-parse.y"
    { (yyval.u.istmt).i = (yyvsp[(1) - (2)].u.iexpr).i; (yyval.u.istmt).stmt = make_error_stmt(); ;}
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 2356 "c-parse.y"
    { (yyval.u.iexpr).i = stmt_count;
		  (yyval.u.iexpr).expr = (yyvsp[(3) - (4)].u.expr);
		  check_condition("if", (yyvsp[(3) - (4)].u.expr)); ;}
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 2366 "c-parse.y"
    { stmt_count++;
		  compstmt_count++; 
		  (yyval.u.cstmt) = CAST(conditional_stmt,
				   new_dowhile_stmt(pr, (yyvsp[(1) - (1)].u.itoken).location, NULL, NULL));
		 push_loop(CAST(statement, (yyval.u.cstmt))); ;}
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 2372 "c-parse.y"
    { (yyval.u.cstmt) = (yyvsp[(2) - (4)].u.cstmt); 
		  (yyval.u.cstmt)->stmt = (yyvsp[(3) - (4)].u.stmt); ;}
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 2378 "c-parse.y"
    { (yyval.u.stmt) = (yyvsp[(1) - (1)].u.stmt); ;}
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 2380 "c-parse.y"
    { (yyval.u.stmt) = CAST(statement, new_labeled_stmt(pr, (yyvsp[(1) - (2)].u.label)->location, (yyvsp[(1) - (2)].u.label), (yyvsp[(2) - (2)].u.stmt))); ;}
    break;

  case 546:

/* Line 1455 of yacc.c  */
#line 2385 "c-parse.y"
    { (yyval.u.istmt).i = 0; (yyval.u.istmt).stmt = (yyvsp[(1) - (1)].u.stmt); ;}
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 2387 "c-parse.y"
    { (yyval.u.istmt).i = 1; (yyval.u.istmt).stmt = CAST(statement, new_labeled_stmt(pr, (yyvsp[(1) - (1)].u.label)->location, (yyvsp[(1) - (1)].u.label), NULL)); ;}
    break;

  case 548:

/* Line 1455 of yacc.c  */
#line 2391 "c-parse.y"
    { 
		   atomic_stmt last_atomic = current.in_atomic;

		   current.in_atomic = new_atomic_stmt(pr, (yyvsp[(1) - (1)].u.itoken).location, NULL);
		   current.in_atomic->containing_atomic = last_atomic;
		 ;}
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 2398 "c-parse.y"
    {
		  atomic_stmt this_atomic = current.in_atomic;

		  this_atomic->stmt = (yyvsp[(3) - (3)].u.stmt);
	  	  current.in_atomic = this_atomic->containing_atomic;
		  if (current.in_atomic) /* Ignore nested atomics */
		    (yyval.u.stmt) = (yyvsp[(3) - (3)].u.stmt);
		  else
		    (yyval.u.stmt) = CAST(statement, this_atomic);
		;}
    break;

  case 551:

/* Line 1455 of yacc.c  */
#line 2412 "c-parse.y"
    { (yyval.u.stmt) = make_error_stmt(); ;}
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 2418 "c-parse.y"
    { stmt_count++; (yyval.u.stmt) = (yyvsp[(1) - (1)].u.stmt); ;}
    break;

  case 553:

/* Line 1455 of yacc.c  */
#line 2420 "c-parse.y"
    { stmt_count++;
		  (yyval.u.stmt) = CAST(statement, new_expression_stmt(pr, (yyvsp[(1) - (2)].u.expr)->location, (yyvsp[(1) - (2)].u.expr))); ;}
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 2423 "c-parse.y"
    { (yyvsp[(1) - (2)].u.istmt).i = stmt_count; ;}
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 2425 "c-parse.y"
    { if (extra_warnings && stmt_count == (yyvsp[(1) - (4)].u.istmt).i)
		    warning("empty body in an else-statement");
		  (yyval.u.stmt) = (yyvsp[(1) - (4)].u.istmt).stmt;
		  if (is_if_stmt((yyval.u.stmt))) /* could be an error_stmt */
		    CAST(if_stmt, (yyval.u.stmt))->stmt2 = (yyvsp[(4) - (4)].u.stmt);
		;}
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 2432 "c-parse.y"
    { /* This warning is here instead of in simple_if, because we
		     do not want a warning if an empty if is followed by an
		     else statement.  Increment stmt_count so we don't
		     give a second error if this is a nested `if'.  */
		  if (extra_warnings && stmt_count++ == (yyvsp[(1) - (1)].u.istmt).i)
		    warning_with_location ((yyvsp[(1) - (1)].u.istmt).stmt->location,
					   "empty body in an if-statement");
		  (yyval.u.stmt) = (yyvsp[(1) - (1)].u.istmt).stmt; ;}
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 2441 "c-parse.y"
    { (yyval.u.stmt) = make_error_stmt(); ;}
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 2443 "c-parse.y"
    { stmt_count++; ;}
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 2445 "c-parse.y"
    { check_condition("while", (yyvsp[(4) - (5)].u.expr)); 
		  (yyval.u.cstmt) = CAST(conditional_stmt,
			           new_while_stmt(pr, (yyvsp[(1) - (5)].u.itoken).location, (yyvsp[(4) - (5)].u.expr), NULL));
		  /* The condition is not "in the loop" for break or continue */
		  push_loop(CAST(statement, (yyval.u.cstmt))); ;}
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 2451 "c-parse.y"
    { (yyval.u.stmt) = CAST(statement, (yyvsp[(6) - (7)].u.cstmt));
		  (yyvsp[(6) - (7)].u.cstmt)->stmt = (yyvsp[(7) - (7)].u.stmt); 
		  pop_loop(); ;}
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 2455 "c-parse.y"
    { (yyval.u.stmt) = CAST(statement, (yyvsp[(1) - (5)].u.cstmt));
		  (yyvsp[(1) - (5)].u.cstmt)->condition = (yyvsp[(3) - (5)].u.expr);
		  check_condition("do-while", (yyvsp[(3) - (5)].u.expr)); 
		  /* Note that pop_loop should be before the expr to be consistent
		     with while, but GCC is inconsistent. See loop1.c */
		  pop_loop(); ;}
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 2462 "c-parse.y"
    { (yyval.u.stmt) = make_error_stmt(); 
		  pop_loop(); ;}
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 2464 "c-parse.y"
    { stmt_count++; ;}
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 2465 "c-parse.y"
    { if ((yyvsp[(6) - (7)].u.expr)) check_condition("for", (yyvsp[(6) - (7)].u.expr)); ;}
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 2467 "c-parse.y"
    { (yyval.u.for_stmt) = new_for_stmt(pr, (yyvsp[(1) - (10)].u.itoken).location, (yyvsp[(3) - (10)].u.expr), (yyvsp[(6) - (10)].u.expr), (yyvsp[(9) - (10)].u.expr), NULL);
		  push_loop(CAST(statement, (yyval.u.for_stmt))); ;}
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 2470 "c-parse.y"
    { (yyval.u.stmt) = CAST(statement, (yyvsp[(11) - (12)].u.for_stmt));
		  (yyvsp[(11) - (12)].u.for_stmt)->stmt = (yyvsp[(12) - (12)].u.stmt); 
		  pop_loop(); ;}
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 2474 "c-parse.y"
    { stmt_count++; check_switch((yyvsp[(3) - (4)].u.expr)); 
		  (yyval.u.cstmt) = CAST(conditional_stmt,
			           new_switch_stmt(pr, (yyvsp[(1) - (4)].u.itoken).location, (yyvsp[(3) - (4)].u.expr), NULL)); 
		  push_loop(CAST(statement, (yyval.u.cstmt))); ;}
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 2479 "c-parse.y"
    { (yyval.u.stmt) = CAST(statement, (yyvsp[(5) - (6)].u.cstmt)); 
		  (yyvsp[(5) - (6)].u.cstmt)->stmt = (yyvsp[(6) - (6)].u.stmt);
		  pop_loop(); ;}
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 2483 "c-parse.y"
    { stmt_count++;
		  (yyval.u.stmt) = CAST(statement, new_break_stmt(pr, (yyvsp[(1) - (2)].u.itoken).location));
		  check_break((yyval.u.stmt));
		;}
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 2488 "c-parse.y"
    { stmt_count++;
		  (yyval.u.stmt) = CAST(statement, new_continue_stmt(pr, (yyvsp[(1) - (2)].u.itoken).location));
		  check_continue((yyval.u.stmt));
		;}
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 2493 "c-parse.y"
    { stmt_count++;
		  (yyval.u.stmt) = make_void_return((yyvsp[(1) - (2)].u.itoken).location); ;}
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 2496 "c-parse.y"
    { stmt_count++;
		  (yyval.u.stmt) = make_return((yyvsp[(1) - (3)].u.itoken).location, (yyvsp[(2) - (3)].u.expr)); ;}
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 2499 "c-parse.y"
    { stmt_count++;
		  (yyval.u.stmt) = CAST(statement, new_asm_stmt(pr, (yyvsp[(1) - (6)].u.itoken).location, (yyvsp[(4) - (6)].u.expr), NULL,
					       NULL, NULL, (yyvsp[(2) - (6)].u.telement))); ;}
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 2504 "c-parse.y"
    { stmt_count++;
		  (yyval.u.stmt) = CAST(statement, new_asm_stmt(pr, (yyvsp[(1) - (8)].u.itoken).location, (yyvsp[(4) - (8)].u.expr), (yyvsp[(6) - (8)].u.asm_operand), NULL,
					       NULL, (yyvsp[(2) - (8)].u.telement))); ;}
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 2509 "c-parse.y"
    { stmt_count++;
		  (yyval.u.stmt) = CAST(statement, new_asm_stmt(pr, (yyvsp[(1) - (10)].u.itoken).location, (yyvsp[(4) - (10)].u.expr), (yyvsp[(6) - (10)].u.asm_operand), (yyvsp[(8) - (10)].u.asm_operand), NULL, (yyvsp[(2) - (10)].u.telement))); ;}
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 2514 "c-parse.y"
    { stmt_count++;
		  (yyval.u.stmt) = CAST(statement, new_asm_stmt(pr, (yyvsp[(1) - (12)].u.itoken).location, (yyvsp[(4) - (12)].u.expr), (yyvsp[(6) - (12)].u.asm_operand), (yyvsp[(8) - (12)].u.asm_operand), (yyvsp[(10) - (12)].u.string), (yyvsp[(2) - (12)].u.telement))); ;}
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 2517 "c-parse.y"
    { stmt_count++;
		  (yyval.u.stmt) = CAST(statement, new_goto_stmt(pr, (yyvsp[(1) - (3)].u.itoken).location, (yyvsp[(2) - (3)].u.id_label)));
		  use_label((yyvsp[(2) - (3)].u.id_label));
		;}
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 2522 "c-parse.y"
    { if (pedantic)
		    pedwarn("ANSI C forbids `goto *expr;'");
		  fail_in_atomic("goto *");
		  stmt_count++;
		  (yyval.u.stmt) = CAST(statement, new_computed_goto_stmt(pr, (yyvsp[(1) - (4)].u.itoken).location, (yyvsp[(3) - (4)].u.expr))); 
		  check_computed_goto((yyvsp[(3) - (4)].u.expr)); ;}
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 2529 "c-parse.y"
    { (yyval.u.stmt) = CAST(statement, new_empty_stmt(pr, (yyvsp[(1) - (1)].u.itoken).location)); ;}
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 2537 "c-parse.y"
    { (yyval.u.label) = CAST(label, new_case_label(pr, (yyvsp[(1) - (3)].u.itoken).location, (yyvsp[(2) - (3)].u.expr), NULL)); 
		  check_case((yyval.u.label)); ;}
    break;

  case 582:

/* Line 1455 of yacc.c  */
#line 2540 "c-parse.y"
    { (yyval.u.label) = CAST(label, new_case_label(pr, (yyvsp[(1) - (5)].u.itoken).location, (yyvsp[(2) - (5)].u.expr), (yyvsp[(4) - (5)].u.expr))); 
		  check_case((yyval.u.label)); ;}
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 2543 "c-parse.y"
    { (yyval.u.label) = CAST(label, new_default_label(pr, (yyvsp[(1) - (2)].u.itoken).location)); 
		  check_default((yyval.u.label)); ;}
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 2546 "c-parse.y"
    { (yyval.u.label) = CAST(label, (yyvsp[(1) - (2)].u.id_label)); 
		  define_label((yyvsp[(1) - (2)].u.id_label)); ;}
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 2554 "c-parse.y"
    { (yyval.u.telement) = NULL; ;}
    break;

  case 587:

/* Line 1455 of yacc.c  */
#line 2560 "c-parse.y"
    { (yyval.u.expr) = NULL; ;}
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 2568 "c-parse.y"
    { (yyval.u.asm_operand) = NULL; ;}
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 2575 "c-parse.y"
    { (yyval.u.asm_operand) = asm_operand_chain((yyvsp[(1) - (3)].u.asm_operand), (yyvsp[(3) - (3)].u.asm_operand)); ;}
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 2580 "c-parse.y"
    { (yyval.u.asm_operand) = new_asm_operand(pr, (yyvsp[(1) - (4)].u.string)->location, NULL, (yyvsp[(1) - (4)].u.string), (yyvsp[(3) - (4)].u.expr));  ;}
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 2582 "c-parse.y"
    { (yyval.u.asm_operand) = new_asm_operand(pr, (yyvsp[(1) - (7)].u.itoken).location, (yyvsp[(2) - (7)].u.word), (yyvsp[(4) - (7)].u.string), (yyvsp[(6) - (7)].u.expr));  ;}
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 2587 "c-parse.y"
    { (yyval.u.string) = (yyvsp[(1) - (1)].u.string); ;}
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 2589 "c-parse.y"
    { (yyval.u.string) = string_chain((yyvsp[(1) - (3)].u.string), (yyvsp[(3) - (3)].u.string)); ;}
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 2595 "c-parse.y"
    { pushlevel(TRUE); ;}
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 2597 "c-parse.y"
    { (yyval.u.decl) = (yyvsp[(2) - (2)].u.decl);
		  /* poplevel() is done when building the declarator */
		;}
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 2603 "c-parse.y"
    { (yyval.u.decl) = (yyvsp[(1) - (2)].u.decl); ;}
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 2605 "c-parse.y"
    { if (pedantic)
		    pedwarn("ANSI C forbids forward parameter declarations");
		  allow_parameter_redeclaration((yyvsp[(1) - (2)].u.decl), TRUE);
		;}
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 2610 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(1) - (4)].u.decl), (yyvsp[(4) - (4)].u.decl)); ;}
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 2612 "c-parse.y"
    { (yyval.u.decl) = make_error_decl(); ;}
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 2618 "c-parse.y"
    { (yyval.u.decl) = NULL; ;}
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 2620 "c-parse.y"
    { (yyval.u.decl) = make_error_decl();
		  /* Gcc used to allow this as an extension.  However, it does
		     not work for all targets, and thus has been disabled.
		     Also, since func (...) and func () are indistinguishable,
		     it caused problems with the code in expand_builtin which
		     tries to verify that BUILT_IN_NEXT_ARG is being used
		     correctly.  */
		  error("ANSI C requires a named argument before `...'");
		;}
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 2630 "c-parse.y"
    { (yyval.u.decl) = (yyvsp[(1) - (1)].u.decl); ;}
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 2632 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(1) - (3)].u.decl), CAST(declaration, new_ellipsis_decl(pr, (yyvsp[(3) - (3)].u.itoken).location))); ;}
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 2638 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(1) - (3)].u.decl), (yyvsp[(3) - (3)].u.decl)); ;}
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 2645 "c-parse.y"
    { (yyval.u.decl) = declare_parameter((yyvsp[(3) - (4)].u.declarator), (yyvsp[(1) - (4)].u.telement), (yyvsp[(4) - (4)].u.attribute)); ;}
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 2647 "c-parse.y"
    { (yyval.u.decl) = declare_parameter((yyvsp[(3) - (4)].u.declarator), (yyvsp[(1) - (4)].u.telement), (yyvsp[(4) - (4)].u.attribute)); ;}
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 2649 "c-parse.y"
    { (yyval.u.decl) = declare_parameter((yyvsp[(3) - (3)].u.declarator), (yyvsp[(1) - (3)].u.telement), NULL); ;}
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 2651 "c-parse.y"
    { (yyval.u.decl) = declare_parameter((yyvsp[(3) - (4)].u.declarator), (yyvsp[(1) - (4)].u.telement), (yyvsp[(4) - (4)].u.attribute)); ;}
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 2653 "c-parse.y"
    { (yyval.u.decl) = declare_parameter((yyvsp[(3) - (4)].u.declarator), (yyvsp[(1) - (4)].u.telement), (yyvsp[(4) - (4)].u.attribute)); ;}
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 2655 "c-parse.y"
    { (yyval.u.decl) = declare_parameter((yyvsp[(3) - (3)].u.declarator), (yyvsp[(1) - (3)].u.telement), NULL); ;}
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 2657 "c-parse.y"
    { (yyval.u.decl) = declare_parameter((yyvsp[(3) - (4)].u.declarator), (yyvsp[(1) - (4)].u.telement), (yyvsp[(4) - (4)].u.attribute)); ;}
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 2660 "c-parse.y"
    { pending_xref_error(); ;}
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 2666 "c-parse.y"
    { pushlevel(TRUE); ;}
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 2668 "c-parse.y"
    { (yyval.u.decl) = (yyvsp[(2) - (2)].u.decl);
		  /* poplevel is done when building the declarator */ ;}
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 2674 "c-parse.y"
    { (yyval.u.decl) = (yyvsp[(1) - (2)].u.decl); ;}
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 2680 "c-parse.y"
    { (yyval.u.decl) = (yyvsp[(1) - (1)].u.decl); ;}
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 2682 "c-parse.y"
    { (yyval.u.decl) = declaration_chain((yyvsp[(1) - (3)].u.decl), (yyvsp[(3) - (3)].u.decl)); ;}
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 2686 "c-parse.y"
    { (yyval.u.decl) = declare_old_parameter((yyvsp[(1) - (1)].idtoken).location, (yyvsp[(1) - (1)].idtoken).id); ;}
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 2691 "c-parse.y"
    { (yyval.u.id_label) = (yyvsp[(1) - (1)].u.id_label); declare_label((yyvsp[(1) - (1)].u.id_label)); ;}
    break;

  case 625:

/* Line 1455 of yacc.c  */
#line 2693 "c-parse.y"
    { (yyval.u.id_label) = id_label_chain((yyvsp[(3) - (3)].u.id_label), (yyvsp[(1) - (3)].u.id_label));
		  declare_label((yyvsp[(3) - (3)].u.id_label)); ;}
    break;

  case 626:

/* Line 1455 of yacc.c  */
#line 2699 "c-parse.y"
    { (yyval.u.telement) = NULL; ;}
    break;

  case 627:

/* Line 1455 of yacc.c  */
#line 2700 "c-parse.y"
    { (yyval.u.telement) = (yyvsp[(1) - (1)].u.telement); ;}
    break;

  case 628:

/* Line 1455 of yacc.c  */
#line 2705 "c-parse.y"
    { (yyval.u.itoken).location = (yyvsp[(1) - (1)].u.itoken).location;
		  (yyval.u.itoken).i = pedantic;
		  pedantic = 0; ;}
    break;

  case 629:

/* Line 1455 of yacc.c  */
#line 2712 "c-parse.y"
    { (yyval.u.telement) = CAST(type_element, new_rid(pr, (yyvsp[(1) - (1)].u.itoken).location, (yyvsp[(1) - (1)].u.itoken).i)); ;}
    break;

  case 630:

/* Line 1455 of yacc.c  */
#line 2714 "c-parse.y"
    { (yyval.u.telement) = CAST(type_element, new_rid(pr, (yyvsp[(1) - (1)].u.itoken).location, RID_DEFAULT)); ;}
    break;

  case 631:

/* Line 1455 of yacc.c  */
#line 2719 "c-parse.y"
    { (yyval.u.telement) = CAST(type_element, new_qualifier(pr, (yyvsp[(1) - (1)].u.itoken).location, (yyvsp[(1) - (1)].u.itoken).i)); ;}
    break;

  case 632:

/* Line 1455 of yacc.c  */
#line 2724 "c-parse.y"
    { (yyval.u.telement) = CAST(type_element, new_qualifier(pr, (yyvsp[(1) - (1)].u.itoken).location, (yyvsp[(1) - (1)].u.itoken).i)); ;}
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 2729 "c-parse.y"
    { (yyval.u.telement) = CAST(type_element, new_rid(pr, (yyvsp[(1) - (1)].u.itoken).location, (yyvsp[(1) - (1)].u.itoken).i)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 7376 "c-parse.tab.c"
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
#line 2733 "c-parse.y"


