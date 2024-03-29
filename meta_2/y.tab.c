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
#line 1 "uccompiler.y"

  #include <stdio.h>
  #include "ast.h"
  extern int yylex(void);
  void yyerror(char *);
  struct node *program;
  struct node *aux;
  int statement_list_check = 0;

#line 81 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BITWISEAND = 258,              /* BITWISEAND  */
    BITWISEOR = 259,               /* BITWISEOR  */
    BITWISEXOR = 260,              /* BITWISEXOR  */
    AND = 261,                     /* AND  */
    ASSIGN = 262,                  /* ASSIGN  */
    MUL = 263,                     /* MUL  */
    COMMA = 264,                   /* COMMA  */
    DIV = 265,                     /* DIV  */
    EQ = 266,                      /* EQ  */
    GE = 267,                      /* GE  */
    GT = 268,                      /* GT  */
    LBRACE = 269,                  /* LBRACE  */
    LE = 270,                      /* LE  */
    LPAR = 271,                    /* LPAR  */
    LT = 272,                      /* LT  */
    MINUS = 273,                   /* MINUS  */
    MOD = 274,                     /* MOD  */
    NE = 275,                      /* NE  */
    NOT = 276,                     /* NOT  */
    OR = 277,                      /* OR  */
    PLUS = 278,                    /* PLUS  */
    RBRACE = 279,                  /* RBRACE  */
    RPAR = 280,                    /* RPAR  */
    SEMI = 281,                    /* SEMI  */
    CHR = 282,                     /* CHR  */
    ELSE = 283,                    /* ELSE  */
    WHILE = 284,                   /* WHILE  */
    IF = 285,                      /* IF  */
    INT = 286,                     /* INT  */
    SHORT = 287,                   /* SHORT  */
    DOUBLE = 288,                  /* DOUBLE  */
    RETURN = 289,                  /* RETURN  */
    VOID = 290,                    /* VOID  */
    IDENTIFIER = 291,              /* IDENTIFIER  */
    DECIMAL = 292,                 /* DECIMAL  */
    NATURAL = 293,                 /* NATURAL  */
    CHRLIT = 294,                  /* CHRLIT  */
    RESERVED = 295                 /* RESERVED  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define BITWISEAND 258
#define BITWISEOR 259
#define BITWISEXOR 260
#define AND 261
#define ASSIGN 262
#define MUL 263
#define COMMA 264
#define DIV 265
#define EQ 266
#define GE 267
#define GT 268
#define LBRACE 269
#define LE 270
#define LPAR 271
#define LT 272
#define MINUS 273
#define MOD 274
#define NE 275
#define NOT 276
#define OR 277
#define PLUS 278
#define RBRACE 279
#define RPAR 280
#define SEMI 281
#define CHR 282
#define ELSE 283
#define WHILE 284
#define IF 285
#define INT 286
#define SHORT 287
#define DOUBLE 288
#define RETURN 289
#define VOID 290
#define IDENTIFIER 291
#define DECIMAL 292
#define NATURAL 293
#define CHRLIT 294
#define RESERVED 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "uccompiler.y"

     char* lexeme;
     struct node* node;

#line 219 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BITWISEAND = 3,                 /* BITWISEAND  */
  YYSYMBOL_BITWISEOR = 4,                  /* BITWISEOR  */
  YYSYMBOL_BITWISEXOR = 5,                 /* BITWISEXOR  */
  YYSYMBOL_AND = 6,                        /* AND  */
  YYSYMBOL_ASSIGN = 7,                     /* ASSIGN  */
  YYSYMBOL_MUL = 8,                        /* MUL  */
  YYSYMBOL_COMMA = 9,                      /* COMMA  */
  YYSYMBOL_DIV = 10,                       /* DIV  */
  YYSYMBOL_EQ = 11,                        /* EQ  */
  YYSYMBOL_GE = 12,                        /* GE  */
  YYSYMBOL_GT = 13,                        /* GT  */
  YYSYMBOL_LBRACE = 14,                    /* LBRACE  */
  YYSYMBOL_LE = 15,                        /* LE  */
  YYSYMBOL_LPAR = 16,                      /* LPAR  */
  YYSYMBOL_LT = 17,                        /* LT  */
  YYSYMBOL_MINUS = 18,                     /* MINUS  */
  YYSYMBOL_MOD = 19,                       /* MOD  */
  YYSYMBOL_NE = 20,                        /* NE  */
  YYSYMBOL_NOT = 21,                       /* NOT  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_PLUS = 23,                      /* PLUS  */
  YYSYMBOL_RBRACE = 24,                    /* RBRACE  */
  YYSYMBOL_RPAR = 25,                      /* RPAR  */
  YYSYMBOL_SEMI = 26,                      /* SEMI  */
  YYSYMBOL_CHR = 27,                       /* CHR  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_WHILE = 29,                     /* WHILE  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_INT = 31,                       /* INT  */
  YYSYMBOL_SHORT = 32,                     /* SHORT  */
  YYSYMBOL_DOUBLE = 33,                    /* DOUBLE  */
  YYSYMBOL_RETURN = 34,                    /* RETURN  */
  YYSYMBOL_VOID = 35,                      /* VOID  */
  YYSYMBOL_IDENTIFIER = 36,                /* IDENTIFIER  */
  YYSYMBOL_DECIMAL = 37,                   /* DECIMAL  */
  YYSYMBOL_NATURAL = 38,                   /* NATURAL  */
  YYSYMBOL_CHRLIT = 39,                    /* CHRLIT  */
  YYSYMBOL_RESERVED = 40,                  /* RESERVED  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_Program = 42,                   /* Program  */
  YYSYMBOL_FunctionsAndDeclarations = 43,  /* FunctionsAndDeclarations  */
  YYSYMBOL_FunctionDefinition = 44,        /* FunctionDefinition  */
  YYSYMBOL_FunctionBody = 45,              /* FunctionBody  */
  YYSYMBOL_DeclarationAndStatements = 46,  /* DeclarationAndStatements  */
  YYSYMBOL_FunctionDeclaration = 47,       /* FunctionDeclaration  */
  YYSYMBOL_FunctionDeclarator = 48,        /* FunctionDeclarator  */
  YYSYMBOL_ParameterList = 49,             /* ParameterList  */
  YYSYMBOL_ParameterDeclaration = 50,      /* ParameterDeclaration  */
  YYSYMBOL_Declaration = 51,               /* Declaration  */
  YYSYMBOL_AuxDeclaration = 52,            /* AuxDeclaration  */
  YYSYMBOL_TypeSpec = 53,                  /* TypeSpec  */
  YYSYMBOL_Declarator = 54,                /* Declarator  */
  YYSYMBOL_Statement_error = 55,           /* Statement_error  */
  YYSYMBOL_AuxStatement = 56,              /* AuxStatement  */
  YYSYMBOL_Statement = 57,                 /* Statement  */
  YYSYMBOL_Expr_call = 58,                 /* Expr_call  */
  YYSYMBOL_Expr_comma = 59,                /* Expr_comma  */
  YYSYMBOL_Expr = 60                       /* Expr  */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   401

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  138

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    40,    41,    42,    43,    44,    45,    48,
      50,    51,    54,    55,    56,    57,    60,    62,    64,    65,
      68,    69,    72,    80,    82,    83,    86,    87,    88,    89,
      90,    93,    94,    97,    98,   101,   102,   105,   112,   113,
     114,   115,   116,   125,   132,   138,   139,   142,   143,   146,
     149,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180
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
  "\"end of file\"", "error", "\"invalid token\"", "BITWISEAND",
  "BITWISEOR", "BITWISEXOR", "AND", "ASSIGN", "MUL", "COMMA", "DIV", "EQ",
  "GE", "GT", "LBRACE", "LE", "LPAR", "LT", "MINUS", "MOD", "NE", "NOT",
  "OR", "PLUS", "RBRACE", "RPAR", "SEMI", "CHR", "ELSE", "WHILE", "IF",
  "INT", "SHORT", "DOUBLE", "RETURN", "VOID", "IDENTIFIER", "DECIMAL",
  "NATURAL", "CHRLIT", "RESERVED", "$accept", "Program",
  "FunctionsAndDeclarations", "FunctionDefinition", "FunctionBody",
  "DeclarationAndStatements", "FunctionDeclaration", "FunctionDeclarator",
  "ParameterList", "ParameterDeclaration", "Declaration", "AuxDeclaration",
  "TypeSpec", "Declarator", "Statement_error", "AuxStatement", "Statement",
  "Expr_call", "Expr_comma", "Expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-82)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      25,   -18,   -82,   -82,   -82,   -82,   -82,     9,    77,   -82,
     -82,   -82,   -22,   -82,   -82,   -82,   -82,   -82,    54,    -7,
      -4,   -82,   234,   -15,    58,   -82,   -82,   -21,   -82,   206,
     234,   234,   234,    51,   -82,   -82,   -82,   -82,   271,     2,
     -82,    37,   124,   -82,   -82,    67,    86,   230,    97,   -82,
     -21,   -82,    -3,    14,   -82,    80,    91,   -82,   -82,   -82,
     200,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   -15,
     -82,   -82,    39,   -82,   -82,   150,   -82,   234,   234,   -82,
      45,   -82,   -82,   -82,   -82,   -82,   -82,    81,   -82,    92,
     271,   271,   364,   332,   350,   313,   271,   -82,   -82,   378,
     185,   185,   185,   185,    56,   -82,   378,   292,    56,   -82,
     -82,   -82,    88,   -82,   -82,    94,   130,   -82,   -82,   234,
     -82,   176,   176,   271,   -82,    79,   176,   -82
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    26,    27,    29,    30,    28,     0,     0,     6,
       7,     8,     0,    23,     1,     3,     4,     5,    32,     0,
       0,    25,     0,     0,     0,    16,     9,     0,    22,     0,
       0,     0,     0,    75,    78,    76,    77,    31,    50,     0,
      18,    21,     0,    11,    38,     0,     0,     0,     0,    15,
       0,    14,     0,    32,    24,     0,     0,    71,    72,    70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,    20,     0,    40,    36,     0,    34,     0,     0,    46,
       0,    10,    13,    12,    41,    52,    79,     0,    73,     0,
      48,    49,    61,    62,    63,    60,    53,    56,    57,    64,
      67,    69,    66,    68,    55,    58,    65,    59,    54,    19,
      39,    33,     0,    37,    35,     0,     0,    45,    51,     0,
      74,     0,     0,    47,    44,    43,     0,    42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   -82,   -82,   114,   -82,   -82,   129,   -82,   -82,    62,
       5,   -82,     1,   116,   -81,   -82,    38,   -82,   -19,   -30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     7,     8,     9,    26,    48,    10,    19,    39,    40,
      11,    20,    12,    21,    84,    85,    86,    99,    52,    38
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    58,    59,    37,   124,    27,    61,    24,    13,    14,
      56,    79,     2,    17,    18,    53,     3,     4,     5,    25,
       6,    22,    28,    94,    41,    50,     1,    80,    90,    49,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    50,
     134,   135,     2,    92,    61,   137,     3,     4,     5,     1,
       6,    22,    51,   120,    67,   121,    68,    60,   125,   126,
      23,   127,    42,    81,    29,    75,    30,    -2,     1,    31,
      41,    32,    43,    87,    44,     2,    93,    45,    46,     3,
       4,     5,    47,     6,    33,    34,    35,    36,     1,   133,
      61,   129,    88,    61,     2,    95,   128,   136,     3,     4,
       5,    42,     6,    29,   121,    30,    96,   130,    31,   131,
      32,    91,    15,    44,     2,    82,    45,    46,     3,     4,
       5,    47,     6,    33,    34,    35,    36,    16,    42,    61,
      29,   119,    30,    54,     0,    31,     0,    32,    83,     0,
      44,   122,     0,    45,    46,   132,     0,     0,    47,     0,
      33,    34,    35,    36,    42,     0,    29,     0,    30,     0,
       0,    31,     0,    32,   123,     0,    44,   122,     0,    45,
      46,     0,     0,     0,    47,     0,    33,    34,    35,    36,
      42,     0,    29,    67,    30,    68,     0,    31,     0,    32,
       0,    97,    44,    74,    75,    45,    46,    55,    78,     0,
      47,     0,    33,    34,    35,    36,    29,     0,    30,     0,
       0,    31,    29,    32,    30,    98,     0,    31,     0,    32,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
       0,     0,    33,    34,    35,    36,    29,     0,    30,     0,
      29,    31,    30,    32,     0,    31,    89,    32,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
      33,    34,    35,    36,    62,    63,    64,    65,    66,    67,
       0,    68,    69,    70,    71,     0,    72,     0,    73,    74,
      75,    76,     0,    77,    78,    62,    63,    64,    65,     0,
      67,     0,    68,    69,    70,    71,     0,    72,     0,    73,
      74,    75,    76,     0,     0,    78,    62,    63,    64,     0,
       0,    67,     0,    68,    69,    70,    71,     0,    72,     0,
      73,    74,    75,    76,     0,    62,    78,    64,     0,     0,
      67,     0,    68,    69,    70,    71,     0,    72,     0,    73,
      74,    75,    76,    62,     0,    78,     0,     0,    67,     0,
      68,    69,    70,    71,     0,    72,     0,    73,    74,    75,
      76,     0,    67,    78,    68,    69,    70,    71,     0,    72,
       0,    73,    74,    75,    76,     0,    67,    78,    68,     0,
      70,    71,     0,    72,     0,    73,    74,    75,     0,     0,
       0,    78
};

static const yytype_int16 yycheck[] =
{
      30,    31,    32,    22,    85,     9,     9,    14,    26,     0,
      29,     9,    27,     8,    36,    36,    31,    32,    33,    26,
      35,     7,    26,    26,    23,    24,     1,    25,    47,    24,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    48,
     131,   132,    27,    48,     9,   136,    31,    32,    33,     1,
      35,     7,    24,    24,     8,    26,    10,    16,    87,    88,
      16,    26,    14,    36,    16,    19,    18,     0,     1,    21,
      79,    23,    24,    16,    26,    27,    48,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,     1,   129,
       9,     9,    16,     9,    27,    25,    25,    28,    31,    32,
      33,    14,    35,    16,    26,    18,    25,    25,    21,    25,
      23,    24,     8,    26,    27,     1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,     8,    14,     9,
      16,    79,    18,    27,    -1,    21,    -1,    23,    24,    -1,
      26,     1,    -1,    29,    30,    25,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    14,    -1,    16,    -1,    18,    -1,
      -1,    21,    -1,    23,    24,    -1,    26,     1,    -1,    29,
      30,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      14,    -1,    16,     8,    18,    10,    -1,    21,    -1,    23,
      -1,     1,    26,    18,    19,    29,    30,     1,    23,    -1,
      34,    -1,    36,    37,    38,    39,    16,    -1,    18,    -1,
      -1,    21,    16,    23,    18,    25,    -1,    21,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      -1,    -1,    36,    37,    38,    39,    16,    -1,    18,    -1,
      16,    21,    18,    23,    -1,    21,    26,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      36,    37,    38,    39,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    -1,    15,    -1,    17,    18,
      19,    20,    -1,    22,    23,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    12,    13,    -1,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    23,     3,     4,     5,    -1,
      -1,     8,    -1,    10,    11,    12,    13,    -1,    15,    -1,
      17,    18,    19,    20,    -1,     3,    23,     5,    -1,    -1,
       8,    -1,    10,    11,    12,    13,    -1,    15,    -1,    17,
      18,    19,    20,     3,    -1,    23,    -1,    -1,     8,    -1,
      10,    11,    12,    13,    -1,    15,    -1,    17,    18,    19,
      20,    -1,     8,    23,    10,    11,    12,    13,    -1,    15,
      -1,    17,    18,    19,    20,    -1,     8,    23,    10,    -1,
      12,    13,    -1,    15,    -1,    17,    18,    19,    -1,    -1,
      -1,    23
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    27,    31,    32,    33,    35,    42,    43,    44,
      47,    51,    53,    26,     0,    44,    47,    51,    36,    48,
      52,    54,     7,    16,    14,    26,    45,     9,    26,    16,
      18,    21,    23,    36,    37,    38,    39,    59,    60,    49,
      50,    53,    14,    24,    26,    29,    30,    34,    46,    51,
      53,    57,    59,    36,    54,     1,    59,    60,    60,    60,
      16,     9,     3,     4,     5,     6,     7,     8,    10,    11,
      12,    13,    15,    17,    18,    19,    20,    22,    23,     9,
      25,    36,     1,    24,    55,    56,    57,    16,    16,    26,
      59,    24,    51,    57,    26,    25,    25,     1,    25,    58,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    50,
      24,    26,     1,    24,    55,    59,    59,    26,    25,     9,
      25,    25,    25,    60,    55,    55,    28,    55
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    43,    43,    43,    43,    44,
      45,    45,    46,    46,    46,    46,    47,    48,    49,    49,
      50,    50,    51,    51,    52,    52,    53,    53,    53,    53,
      53,    54,    54,    55,    55,    56,    56,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    58,    58,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     1,     1,     1,     3,
       3,     2,     2,     2,     1,     1,     3,     4,     1,     3,
       2,     1,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     1,     2,     1,     3,     1,     3,
       2,     2,     7,     5,     5,     3,     2,     3,     1,     3,
       1,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     3,     4,     1,     1,     1,     1,     3
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
  case 2: /* Program: FunctionsAndDeclarations  */
#line 38 "uccompiler.y"
                                  {(yyval.node) = program = newnode(Program, NULL); addchild((yyval.node), (yyvsp[0].node));}
#line 1399 "y.tab.c"
    break;

  case 3: /* FunctionsAndDeclarations: FunctionsAndDeclarations FunctionDefinition  */
#line 40 "uccompiler.y"
                                                                      {(yyval.node) = (yyvsp[-1].node); addBrother((yyval.node), (yyvsp[0].node));}
#line 1405 "y.tab.c"
    break;

  case 4: /* FunctionsAndDeclarations: FunctionsAndDeclarations FunctionDeclaration  */
#line 41 "uccompiler.y"
                                                                      {(yyval.node) = (yyvsp[-1].node); addBrother((yyval.node), (yyvsp[0].node));}
#line 1411 "y.tab.c"
    break;

  case 5: /* FunctionsAndDeclarations: FunctionsAndDeclarations Declaration  */
#line 42 "uccompiler.y"
                                                              {(yyval.node) = (yyvsp[-1].node); addBrother((yyval.node), (yyvsp[0].node));}
#line 1417 "y.tab.c"
    break;

  case 6: /* FunctionsAndDeclarations: FunctionDefinition  */
#line 43 "uccompiler.y"
                                            {(yyval.node) = (yyvsp[0].node);}
#line 1423 "y.tab.c"
    break;

  case 7: /* FunctionsAndDeclarations: FunctionDeclaration  */
#line 44 "uccompiler.y"
                                             {(yyval.node) = (yyvsp[0].node);}
#line 1429 "y.tab.c"
    break;

  case 8: /* FunctionsAndDeclarations: Declaration  */
#line 45 "uccompiler.y"
                                     {(yyval.node) = (yyvsp[0].node);}
#line 1435 "y.tab.c"
    break;

  case 9: /* FunctionDefinition: TypeSpec FunctionDeclarator FunctionBody  */
#line 48 "uccompiler.y"
                                                             {(yyval.node) = newnode(FuncDefinition, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[-1].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1441 "y.tab.c"
    break;

  case 10: /* FunctionBody: LBRACE DeclarationAndStatements RBRACE  */
#line 50 "uccompiler.y"
                                                     {(yyval.node) = newnode(FuncBody, NULL); addchild((yyval.node), (yyvsp[-1].node));}
#line 1447 "y.tab.c"
    break;

  case 11: /* FunctionBody: LBRACE RBRACE  */
#line 51 "uccompiler.y"
                           {(yyval.node) = newnode(FuncBody, NULL);}
#line 1453 "y.tab.c"
    break;

  case 12: /* DeclarationAndStatements: DeclarationAndStatements Statement  */
#line 54 "uccompiler.y"
                                                             {if((yyvsp[-1].node) == NULL) (yyval.node) = (yyvsp[0].node); else {(yyval.node) = (yyvsp[-1].node); addBrother((yyval.node), (yyvsp[0].node));}}
#line 1459 "y.tab.c"
    break;

  case 13: /* DeclarationAndStatements: DeclarationAndStatements Declaration  */
#line 55 "uccompiler.y"
                                                               {(yyval.node) = (yyvsp[-1].node); addBrother((yyval.node), (yyvsp[0].node));}
#line 1465 "y.tab.c"
    break;

  case 14: /* DeclarationAndStatements: Statement  */
#line 56 "uccompiler.y"
                                    {(yyval.node) = (yyvsp[0].node);}
#line 1471 "y.tab.c"
    break;

  case 15: /* DeclarationAndStatements: Declaration  */
#line 57 "uccompiler.y"
                                      {(yyval.node) = (yyvsp[0].node);}
#line 1477 "y.tab.c"
    break;

  case 16: /* FunctionDeclaration: TypeSpec FunctionDeclarator SEMI  */
#line 60 "uccompiler.y"
                                                      {(yyval.node) = newnode(FuncDeclaration, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[-1].node));}
#line 1483 "y.tab.c"
    break;

  case 17: /* FunctionDeclarator: IDENTIFIER LPAR ParameterList RPAR  */
#line 62 "uccompiler.y"
                                                       {(yyval.node) = newnode(Identifier, (yyvsp[-3].lexeme)); addBrother((yyval.node), (yyvsp[-1].node));}
#line 1489 "y.tab.c"
    break;

  case 18: /* ParameterList: ParameterDeclaration  */
#line 64 "uccompiler.y"
                                    {(yyval.node) = newnode(ParamList, NULL); addchild((yyval.node), (yyvsp[0].node));}
#line 1495 "y.tab.c"
    break;

  case 19: /* ParameterList: ParameterList COMMA ParameterDeclaration  */
#line 65 "uccompiler.y"
                                                        {(yyval.node) = (yyvsp[-2].node); if ((yyvsp[-2].node)->category == 4) addchild((yyval.node), (yyvsp[0].node)); else addBrother((yyval.node), (yyvsp[0].node));}
#line 1501 "y.tab.c"
    break;

  case 20: /* ParameterDeclaration: TypeSpec IDENTIFIER  */
#line 68 "uccompiler.y"
                                          {(yyval.node) = newnode(ParamDeclaration, NULL); addchild((yyval.node), (yyvsp[-1].node)); addchild((yyval.node), newnode(Identifier, (yyvsp[0].lexeme)));}
#line 1507 "y.tab.c"
    break;

  case 21: /* ParameterDeclaration: TypeSpec  */
#line 69 "uccompiler.y"
                               {(yyval.node) = newnode(ParamDeclaration, NULL); addchild((yyval.node), (yyvsp[0].node));}
#line 1513 "y.tab.c"
    break;

  case 22: /* Declaration: TypeSpec AuxDeclaration SEMI  */
#line 72 "uccompiler.y"
                                          {
                                            (yyval.node) = (yyvsp[-1].node);
                                            aux = (yyval.node);
                                            while (aux != NULL){
                                              insert_typespec(aux, (yyvsp[-2].node));
                                              aux = aux->brother;
                                            }
                                          }
#line 1526 "y.tab.c"
    break;

  case 23: /* Declaration: error SEMI  */
#line 80 "uccompiler.y"
                         {(yyval.node) = newnode(Error, NULL);}
#line 1532 "y.tab.c"
    break;

  case 24: /* AuxDeclaration: AuxDeclaration COMMA Declarator  */
#line 82 "uccompiler.y"
                                                {(yyval.node) = (yyvsp[-2].node); addBrother((yyval.node), (yyvsp[0].node));}
#line 1538 "y.tab.c"
    break;

  case 25: /* AuxDeclaration: Declarator  */
#line 83 "uccompiler.y"
                          {(yyval.node) = (yyvsp[0].node);}
#line 1544 "y.tab.c"
    break;

  case 26: /* TypeSpec: CHR  */
#line 86 "uccompiler.y"
              {(yyval.node) = newnode(Char, NULL);}
#line 1550 "y.tab.c"
    break;

  case 27: /* TypeSpec: INT  */
#line 87 "uccompiler.y"
              {(yyval.node) = newnode(Int, NULL);}
#line 1556 "y.tab.c"
    break;

  case 28: /* TypeSpec: VOID  */
#line 88 "uccompiler.y"
               {(yyval.node) = newnode(Void, NULL);}
#line 1562 "y.tab.c"
    break;

  case 29: /* TypeSpec: SHORT  */
#line 89 "uccompiler.y"
                {(yyval.node) = newnode(Short, NULL);}
#line 1568 "y.tab.c"
    break;

  case 30: /* TypeSpec: DOUBLE  */
#line 90 "uccompiler.y"
                 {(yyval.node) = newnode(Double, NULL);}
#line 1574 "y.tab.c"
    break;

  case 31: /* Declarator: IDENTIFIER ASSIGN Expr_comma  */
#line 93 "uccompiler.y"
                                         {(yyval.node) = newnode(Declaration, NULL); addchild((yyval.node), newnode(Identifier, (yyvsp[-2].lexeme))); addchild((yyval.node), (yyvsp[0].node));}
#line 1580 "y.tab.c"
    break;

  case 32: /* Declarator: IDENTIFIER  */
#line 94 "uccompiler.y"
                       {(yyval.node) = newnode(Declaration, NULL); addchild((yyval.node), newnode(Identifier, (yyvsp[0].lexeme)));}
#line 1586 "y.tab.c"
    break;

  case 33: /* Statement_error: error SEMI  */
#line 97 "uccompiler.y"
                            {(yyval.node) = newnode(Error, NULL);}
#line 1592 "y.tab.c"
    break;

  case 34: /* Statement_error: Statement  */
#line 98 "uccompiler.y"
                           {(yyval.node) = (yyvsp[0].node);}
#line 1598 "y.tab.c"
    break;

  case 35: /* AuxStatement: AuxStatement Statement_error  */
#line 101 "uccompiler.y"
                                           {if((yyvsp[-1].node) != NULL) {(yyval.node) = (yyvsp[-1].node); addBrother((yyval.node), (yyvsp[0].node)); statement_list_check = 1;} else (yyval.node) = (yyvsp[0].node);}
#line 1604 "y.tab.c"
    break;

  case 36: /* AuxStatement: Statement_error  */
#line 102 "uccompiler.y"
                             {(yyval.node) = (yyvsp[0].node); statement_list_check = 0;}
#line 1610 "y.tab.c"
    break;

  case 37: /* Statement: LBRACE AuxStatement RBRACE  */
#line 105 "uccompiler.y"
                                      {
                                        if (statement_list_check == 1){
                                        (yyval.node) = newnode(StatList, NULL);
                                        addchild((yyval.node), (yyvsp[-1].node));
                                        }                             
                                        else (yyval.node) = (yyvsp[-1].node);
                                      }
#line 1622 "y.tab.c"
    break;

  case 38: /* Statement: SEMI  */
#line 112 "uccompiler.y"
                {(yyval.node) = NULL;}
#line 1628 "y.tab.c"
    break;

  case 39: /* Statement: LBRACE error RBRACE  */
#line 113 "uccompiler.y"
                               {(yyval.node) = newnode(Error, NULL);}
#line 1634 "y.tab.c"
    break;

  case 40: /* Statement: LBRACE RBRACE  */
#line 114 "uccompiler.y"
                         {(yyval.node) = NULL;}
#line 1640 "y.tab.c"
    break;

  case 41: /* Statement: Expr_comma SEMI  */
#line 115 "uccompiler.y"
                           {(yyval.node) = (yyvsp[-1].node);}
#line 1646 "y.tab.c"
    break;

  case 42: /* Statement: IF LPAR Expr_comma RPAR Statement_error ELSE Statement_error  */
#line 116 "uccompiler.y"
                                                                        {
                                                                         (yyval.node) = newnode(If, NULL); 
                                                                         addchild((yyval.node), (yyvsp[-4].node)); 
                                                                         if((yyvsp[-2].node) != NULL) {addchild((yyval.node), (yyvsp[-2].node));} 
                                                                         else {addchild((yyval.node), newnode(Null, NULL));}
                                                                         if ((yyvsp[0].node) != NULL) {addchild((yyval.node), (yyvsp[0].node));}
                                                                         else {addchild((yyval.node), newnode(Null, NULL));}
                                                                        }
#line 1659 "y.tab.c"
    break;

  case 43: /* Statement: IF LPAR Expr_comma RPAR Statement_error  */
#line 125 "uccompiler.y"
                                                              {
                                                               (yyval.node) = newnode(If, NULL); 
                                                               addchild((yyval.node), (yyvsp[-2].node)); 
                                                               if ((yyvsp[0].node) != NULL) {addchild((yyval.node), (yyvsp[0].node));}
                                                               else {addchild((yyval.node), newnode(Null, NULL));} 
                                                               addchild((yyval.node), newnode(Null, NULL));
                                                              }
#line 1671 "y.tab.c"
    break;

  case 44: /* Statement: WHILE LPAR Expr_comma RPAR Statement_error  */
#line 132 "uccompiler.y"
                                                      {
                                                       (yyval.node) = newnode(While, NULL); 
                                                       addchild((yyval.node), (yyvsp[-2].node)); 
                                                       if((yyvsp[0].node) != NULL) {addchild((yyval.node), (yyvsp[0].node));}
                                                       else {addchild((yyval.node), newnode(Null, NULL));}
                                                      }
#line 1682 "y.tab.c"
    break;

  case 45: /* Statement: RETURN Expr_comma SEMI  */
#line 138 "uccompiler.y"
                                  {(yyval.node) = newnode(Return, NULL); addchild((yyval.node), (yyvsp[-1].node));}
#line 1688 "y.tab.c"
    break;

  case 46: /* Statement: RETURN SEMI  */
#line 139 "uccompiler.y"
                       {(yyval.node) = newnode(Return, NULL); addchild((yyval.node), newnode(Null, NULL));}
#line 1694 "y.tab.c"
    break;

  case 47: /* Expr_call: Expr_call COMMA Expr  */
#line 142 "uccompiler.y"
                                {(yyval.node) = (yyvsp[-2].node); addBrother((yyval.node), (yyvsp[0].node));}
#line 1700 "y.tab.c"
    break;

  case 48: /* Expr_call: Expr  */
#line 143 "uccompiler.y"
                {(yyval.node) = (yyvsp[0].node);}
#line 1706 "y.tab.c"
    break;

  case 49: /* Expr_comma: Expr_comma COMMA Expr  */
#line 146 "uccompiler.y"
                                  {(yyval.node) = newnode(Comma, NULL); 
                                   addchild((yyval.node), (yyvsp[-2].node)); 
                                   addchild((yyval.node), (yyvsp[0].node));}
#line 1714 "y.tab.c"
    break;

  case 50: /* Expr_comma: Expr  */
#line 149 "uccompiler.y"
                 {(yyval.node) = (yyvsp[0].node);}
#line 1720 "y.tab.c"
    break;

  case 51: /* Expr: IDENTIFIER LPAR error RPAR  */
#line 152 "uccompiler.y"
                                    {(yyval.node) = newnode(Error, NULL);}
#line 1726 "y.tab.c"
    break;

  case 52: /* Expr: LPAR error RPAR  */
#line 153 "uccompiler.y"
                         {(yyval.node) = newnode(Error, NULL);}
#line 1732 "y.tab.c"
    break;

  case 53: /* Expr: Expr ASSIGN Expr  */
#line 154 "uccompiler.y"
                          {(yyval.node) = newnode(Store, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1738 "y.tab.c"
    break;

  case 54: /* Expr: Expr PLUS Expr  */
#line 155 "uccompiler.y"
                        {(yyval.node) = newnode(Add, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1744 "y.tab.c"
    break;

  case 55: /* Expr: Expr MINUS Expr  */
#line 156 "uccompiler.y"
                         {(yyval.node) = newnode(Sub, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1750 "y.tab.c"
    break;

  case 56: /* Expr: Expr MUL Expr  */
#line 157 "uccompiler.y"
                       {(yyval.node) = newnode(Mul, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1756 "y.tab.c"
    break;

  case 57: /* Expr: Expr DIV Expr  */
#line 158 "uccompiler.y"
                       {(yyval.node) = newnode(Div, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1762 "y.tab.c"
    break;

  case 58: /* Expr: Expr MOD Expr  */
#line 159 "uccompiler.y"
                       {(yyval.node) = newnode(Mod, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1768 "y.tab.c"
    break;

  case 59: /* Expr: Expr OR Expr  */
#line 160 "uccompiler.y"
                      {(yyval.node) = newnode(Or, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1774 "y.tab.c"
    break;

  case 60: /* Expr: Expr AND Expr  */
#line 161 "uccompiler.y"
                       {(yyval.node) = newnode(And, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1780 "y.tab.c"
    break;

  case 61: /* Expr: Expr BITWISEAND Expr  */
#line 162 "uccompiler.y"
                              {(yyval.node) = newnode(BitWiseAnd, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1786 "y.tab.c"
    break;

  case 62: /* Expr: Expr BITWISEOR Expr  */
#line 163 "uccompiler.y"
                             {(yyval.node) = newnode(BitWiseOr, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1792 "y.tab.c"
    break;

  case 63: /* Expr: Expr BITWISEXOR Expr  */
#line 164 "uccompiler.y"
                              {(yyval.node) = newnode(BitWiseXor, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1798 "y.tab.c"
    break;

  case 64: /* Expr: Expr EQ Expr  */
#line 165 "uccompiler.y"
                      {(yyval.node) = newnode(Eq, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1804 "y.tab.c"
    break;

  case 65: /* Expr: Expr NE Expr  */
#line 166 "uccompiler.y"
                      {(yyval.node) = newnode(Ne, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1810 "y.tab.c"
    break;

  case 66: /* Expr: Expr LE Expr  */
#line 167 "uccompiler.y"
                      {(yyval.node) = newnode(Le, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1816 "y.tab.c"
    break;

  case 67: /* Expr: Expr GE Expr  */
#line 168 "uccompiler.y"
                      {(yyval.node) = newnode(Ge, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1822 "y.tab.c"
    break;

  case 68: /* Expr: Expr LT Expr  */
#line 169 "uccompiler.y"
                      {(yyval.node) = newnode(Lt, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1828 "y.tab.c"
    break;

  case 69: /* Expr: Expr GT Expr  */
#line 170 "uccompiler.y"
                      {(yyval.node) = newnode(Gt, NULL); addchild((yyval.node), (yyvsp[-2].node)); addchild((yyval.node), (yyvsp[0].node));}
#line 1834 "y.tab.c"
    break;

  case 70: /* Expr: PLUS Expr  */
#line 171 "uccompiler.y"
                             {(yyval.node) = newnode(Plus, NULL); addchild((yyval.node), (yyvsp[0].node));}
#line 1840 "y.tab.c"
    break;

  case 71: /* Expr: MINUS Expr  */
#line 172 "uccompiler.y"
                              {(yyval.node) = newnode(Minus, NULL); addchild((yyval.node), (yyvsp[0].node));}
#line 1846 "y.tab.c"
    break;

  case 72: /* Expr: NOT Expr  */
#line 173 "uccompiler.y"
                  {(yyval.node) = newnode(Not, NULL); addchild((yyval.node), (yyvsp[0].node));}
#line 1852 "y.tab.c"
    break;

  case 73: /* Expr: IDENTIFIER LPAR RPAR  */
#line 174 "uccompiler.y"
                              {(yyval.node) = newnode(Call, NULL); addchild((yyval.node), newnode(Identifier, (yyvsp[-2].lexeme)));}
#line 1858 "y.tab.c"
    break;

  case 74: /* Expr: IDENTIFIER LPAR Expr_call RPAR  */
#line 175 "uccompiler.y"
                                        {(yyval.node) = newnode(Call, NULL); addchild((yyval.node), newnode(Identifier, (yyvsp[-3].lexeme))); addchild((yyval.node), (yyvsp[-1].node));}
#line 1864 "y.tab.c"
    break;

  case 75: /* Expr: IDENTIFIER  */
#line 176 "uccompiler.y"
                    {(yyval.node) = newnode(Identifier, (yyvsp[0].lexeme));}
#line 1870 "y.tab.c"
    break;

  case 76: /* Expr: NATURAL  */
#line 177 "uccompiler.y"
                 {(yyval.node) = newnode(Natural, (yyvsp[0].lexeme));}
#line 1876 "y.tab.c"
    break;

  case 77: /* Expr: CHRLIT  */
#line 178 "uccompiler.y"
                {(yyval.node) = newnode(Chrlit, (yyvsp[0].lexeme));}
#line 1882 "y.tab.c"
    break;

  case 78: /* Expr: DECIMAL  */
#line 179 "uccompiler.y"
                 {(yyval.node) = newnode(Decimal, (yyvsp[0].lexeme));}
#line 1888 "y.tab.c"
    break;

  case 79: /* Expr: LPAR Expr_comma RPAR  */
#line 180 "uccompiler.y"
                              {(yyval.node) = (yyvsp[-1].node);}
#line 1894 "y.tab.c"
    break;


#line 1898 "y.tab.c"

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

