%{
#include <stdio.h>
#include "bison.tab.h"
 extern YYSTYPE yylval;
%}

%option yylineno

idf [a-zA-Z][a-zA-Z0-9]*([_]?[a-zA-Z0-9])*
libs MiniL.(io|lang)
nombre [0-9]*
nombre_signe [\-]?[0-9]+
val_real [0-9]+\.[0-9]+
val_real_signe [\-]?[0-9]+\.[0-9]+
inf_egal <=
chaine \"[ a-zA-Z0-9\[\]{};,\-\*\+\/>!<=&()\t\._]*\"
chaine_formats \"[ a-zA-Z0-9\[\]{};,\-\*\+\/>!<=&()\._]*({signes}[ a-zA-Z0-9\[\]{};,\-\*\+\/>!<=&()\._]*)+\"
signes (%f|%s|%d)+
comLigne "//"[^\n]*
comLignes "/*"[^/]*"*/"
%%

"Import" {return mc_import;}
"public" {return mc_public ;}
"protected" return mc_protected ;
"class" return mc_class;
INTEGER return type_integer;
REAL return type_real;
STR return type_str;
CONST return mc_const;
main return mc_main;
:= return point_egale;
>= return sup_egal;
!= return deferent;
in return mc_in;
out return mc_out;
For return mc_for;
"+" return pl;
"-" return mn;
{comLignes}
{comLigne}
[\t ]+ {/*dsqdqs*/}
[\n] {/*sqsdqs*/}
[\[\]{};,\*\/>!<=&()\"] { return yytext[0];}
\| return ou_logique;
{inf_egal} return inf_egal;
{libs} return mc_libs ;

{nombre} { if( (atoi(yytext)> -32769) && (atoi(yytext)<32768) ) 
		{ yylval.entier = atoi(yytext); return nombre; }
	}

{nombre_signe} { if( (atoi(yytext)>-32769) && (atoi(yytext)<32768) )
	{yylval.entier = atoi(yytext); return nombre_signe; } 
}

{val_real} { yylval.real = atof(yytext); return val_real; } 
{val_real_signe} { yylval.real = atof(yytext); return val_real_signe; }

{chaine} {  yylval.chaine = strdup(yytext); return chaine; }
{chaine_formats} { yylval.chaine=strdup(yytext); return chaine_formats; }

{idf} {if (yyleng > 10) { printf ("erreur lexicale a la ligne %d : IDF '%s' est tres longue \n",yylineno,yytext) ; }
        yylval.chaine=strdup(yytext);
        return idf;
      }




. printf("error lexical a la ligne %d la chaine %s inconnu \n",yylineno,yytext);

%%
int yywrap(void)
{
return 0;
}




