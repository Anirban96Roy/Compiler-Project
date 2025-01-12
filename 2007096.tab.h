/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_2007096_TAB_H_INCLUDED
# define YY_YY_2007096_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    MAIN = 258,                    /* MAIN  */
    START = 259,                   /* START  */
    END = 260,                     /* END  */
    NUM = 261,                     /* NUM  */
    VAR = 262,                     /* VAR  */
    IF = 263,                      /* IF  */
    SWITCH = 264,                  /* SWITCH  */
    HEADER = 265,                  /* HEADER  */
    CASE = 266,                    /* CASE  */
    DEFAULT = 267,                 /* DEFAULT  */
    BREAK = 268,                   /* BREAK  */
    FOR = 269,                     /* FOR  */
    WHILE = 270,                   /* WHILE  */
    VALUE = 271,                   /* VALUE  */
    FACTORIAL = 272,               /* FACTORIAL  */
    READ = 273,                    /* READ  */
    PRINT = 274,                   /* PRINT  */
    ODD_EVEN = 275,                /* ODD_EVEN  */
    BIGMOD = 276,                  /* BIGMOD  */
    ASSIGN = 277,                  /* ASSIGN  */
    DEFINE = 278,                  /* DEFINE  */
    EOL = 279,                     /* EOL  */
    ARRAY = 280,                   /* ARRAY  */
    CLASS = 281,                   /* CLASS  */
    INT = 282,                     /* INT  */
    FLOAT = 283,                   /* FLOAT  */
    CHAR = 284,                    /* CHAR  */
    IFX = 285,                     /* IFX  */
    ELSE = 286,                    /* ELSE  */
    SIN = 287,                     /* SIN  */
    COS = 288,                     /* COS  */
    TAN = 289,                     /* TAN  */
    COSEC = 290,                   /* COSEC  */
    COT = 291,                     /* COT  */
    SEC = 292,                     /* SEC  */
    LOG = 293,                     /* LOG  */
    LOG10 = 294,                   /* LOG10  */
    LT = 295,                      /* LT  */
    GT = 296,                      /* GT  */
    LTE = 297,                     /* LTE  */
    GTE = 298,                     /* GTE  */
    EQ = 299,                      /* EQ  */
    PLUS = 300,                    /* PLUS  */
    MINUS = 301,                   /* MINUS  */
    BitXOR = 302,                  /* BitXOR  */
    BitOR = 303,                   /* BitOR  */
    BitAND = 304,                  /* BitAND  */
    MUL = 305,                     /* MUL  */
    DIV = 306,                     /* DIV  */
    MOD = 307,                     /* MOD  */
    POW = 308,                     /* POW  */
    DEC = 309,                     /* DEC  */
    INC = 310,                     /* INC  */
    BitNOT = 311                   /* BitNOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_2007096_TAB_H_INCLUDED  */
