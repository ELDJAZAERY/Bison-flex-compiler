
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

/* Line 1676 of yacc.c  */
#line 19 "bison.y"

 char* chaine; /* identifiant et chaine de caractere et le nom de bib*/
 int entier;  /* INTEGER */
 float real;  /* REAL */ 




/* Line 1676 of yacc.c  */
#line 93 "bison.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


