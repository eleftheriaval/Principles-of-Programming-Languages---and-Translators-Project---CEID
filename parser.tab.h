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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    T_EOF = 0,                     /* T_EOF  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_INT = 258,                   /* T_INT  */
    T_CHAR = 259,                  /* T_CHAR  */
    T_DOUBLE = 260,                /* T_DOUBLE  */
    T_BOOLEAN = 261,               /* T_BOOLEAN  */
    T_STRING = 262,                /* T_STRING  */
    T_CLASS = 263,                 /* T_CLASS  */
    T_NEW = 264,                   /* T_NEW  */
    T_RETURN = 265,                /* T_RETURN  */
    T_VOID = 266,                  /* T_VOID  */
    T_IF = 267,                    /* T_IF  */
    T_ELSE = 268,                  /* T_ELSE  */
    T_WHILE = 269,                 /* T_WHILE  */
    T_DO = 270,                    /* T_DO  */
    T_FOR = 271,                   /* T_FOR  */
    T_SWITCH = 272,                /* T_SWITCH  */
    T_CASE = 273,                  /* T_CASE  */
    T_DEFAULT = 274,               /* T_DEFAULT  */
    T_BREAK = 275,                 /* T_BREAK  */
    T_TRUE = 276,                  /* T_TRUE  */
    T_FALSE = 277,                 /* T_FALSE  */
    T_PUBLIC = 278,                /* T_PUBLIC  */
    T_PRIVATE = 279,               /* T_PRIVATE  */
    T_OUT = 280,                   /* T_OUT  */
    T_PRINT = 281,                 /* T_PRINT  */
    T_INTEGER_VAL = 282,           /* T_INTEGER_VAL  */
    T_DOUBLE_VAL = 283,            /* T_DOUBLE_VAL  */
    T_CHAR_VAL = 284,              /* T_CHAR_VAL  */
    T_CNAME = 285,                 /* T_CNAME  */
    T_ID = 286,                    /* T_ID  */
    T_STRING_VAL = 287,            /* T_STRING_VAL  */
    T_NEWLINE = 288,               /* "NEW LINE"  */
    T_ASSIGN = 289,                /* T_ASSIGN  */
    T_PLUS = 290,                  /* T_PLUS  */
    T_MINUS = 291,                 /* T_MINUS  */
    T_MULTIPLY = 292,              /* T_MULTIPLY  */
    T_DIVIDE = 293,                /* T_DIVIDE  */
    T_MODULO = 294,                /* T_MODULO  */
    T_GREATER = 295,               /* T_GREATER  */
    T_LESS = 296,                  /* T_LESS  */
    T_EQUALS = 297,                /* T_EQUALS  */
    T_NEQUALS = 298,               /* T_NEQUALS  */
    T_AND = 299,                   /* T_AND  */
    T_OR = 300,                    /* T_OR  */
    T_LPAR = 301,                  /* T_LPAR  */
    T_RPAR = 302,                  /* T_RPAR  */
    T_LBRACES = 303,               /* T_LBRACES  */
    T_RBRACES = 304,               /* T_RBRACES  */
    T_LBR = 305,                   /* T_LBR  */
    T_RBR = 306,                   /* T_RBR  */
    T_DOT = 307,                   /* T_DOT  */
    T_COLON = 308,                 /* T_COLON  */
    T_SEMICOLON = 309,             /* T_SEMICOLON  */
    T_COMMA = 310,                 /* T_COMMA  */
    T_QUOTES = 311,                /* T_QUOTES  */
    T_COMMENT = 312                /* T_COMMENT  */
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


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
