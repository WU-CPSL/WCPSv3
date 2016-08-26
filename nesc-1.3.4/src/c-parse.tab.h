
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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




