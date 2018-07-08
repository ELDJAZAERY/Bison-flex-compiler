%{
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

%}

%union {
 char* chaine; /* identifiant et chaine de caractere et le nom de bib*/
 int entier;  /* INTEGER */
 float real;  /* REAL */ 

}



%token pl mn
%token mc_import mc_public  mc_protected mc_class  mc_main '{'  '}' ';' type_integer  
%token mc_const type_real type_str '['  ']'  deferent ou_logique mc_while mc_for
%token point_egale  ',' mc_in  mc_out '(' ')'  '*' '"' '/' '&' '>' sup_egal '<' inf_egal '!' <chaine>chaine_formats
%token <real>val_real <chaine>chaine <entier>nombre_signe <real>val_real_signe  <entier>nombre <chaine>idf <chaine>mc_libs 
%type <real>Calcul
%type <chaine>ex
//%type <chaine>expressions
%type <chaine>nombres
%type <chaine>reales

%type <chaine>idfs
%type <real>Add 
%type <real>Fois 
%type <real>Moins 
%type <real>Divise

%type <chaine>opComp
%type <entier>cond

/*Les priorité */
%left pl mn
%left '/' '*'
%left '<' '>' '=' inf_egal sup_egal deferent
%left OU
%left ET
%left '(' ')'


%start S
%%


S:{YYACCEPT;} | par_import par_class '{' par_declaration par_main '}' { printf("\n ---------  Code correct :)  ---------- \n"); YYACCEPT; }
;


par_import: mc_import mc_libs ';' par_import  { import_bib($2,yylineno); } |
          ;



par_class: mc_public mc_class idf {inserer(&tab,$3,"idf",-1,0,0,yylineno); }| mc_protected mc_class idf {inserer(&tab,$3,"idf",-1,0,0,yylineno); } |
           mc_class idf {inserer(&tab,$2,"idf",-1,0,0,yylineno);}
         ;
         






par_declaration: dec_Integer par_declaration | dec_Real par_declaration | dec_Str par_declaration | 
               ;
               

/*partie decaration INTEGER*/
dec_Integer: type_integer  I ';' | mc_const type_integer idf point_egale nombres ';' {inserer(&tab,$3,"idf",1,1,1,yylineno);} | 
             type_integer dec_tab_int ';'
	       ;           
I: idf {inserer(&tab,$1,"idf",1,0,1,yylineno);} | idf ',' I {inserer(&tab,$1,"idf",1,0,1,yylineno);} | dec_tab_int
 ;    
dec_tab_int: idf '[' nombre ']' ',' I {inserer(&tab,$1,"idf",1,0,$3,yylineno);} | idf '[' nombre ']' {inserer(&tab,$1,"idf",1,0,$3,yylineno);} 
           ;



/*partie decaration REAL*/
dec_Real: type_real  R ';' | mc_const type_real idf point_egale nombres_reales ';' {inserer(&tab,$3,"idf",2,1,1,yylineno);} | type_real dec_tab_r ';'
        ;
R: idf {inserer(&tab,$1,"idf",2,0,1,yylineno); }  |  idf ',' R {inserer(&tab,$1,"idf",2,0,1,yylineno);} | dec_tab_r
 ;
dec_tab_r: idf '[' nombre ']' {inserer(&tab,$1,"idf",2,0,$3,yylineno); } | idf '[' nombre ']' ',' R  {inserer(&tab,$1,"idf",2,0,$3,yylineno); } 
         ;



/*partie decaration STRING*/
dec_Str: type_str  str ';' | mc_const type_str idf point_egale chaine ';' {inserer(&tab,$3,"idf",3,1,1,yylineno);} | type_str dec_tab_str ';' |
                    mc_const type_str idf point_egale chaine_formats ';' {inserer(&tab,$3,"idf",3,1,1,yylineno);}
       ;
str: idf {inserer(&tab,$1,"idf",3,0,1,yylineno); }  |  idf ',' str {inserer(&tab,$1,"idf",3,0,1,yylineno);} | dec_tab_str
   ;
dec_tab_str: idf '[' nombre ']' {inserer(&tab,$1,"idf",3,0,$3,yylineno); } | idf '[' nombre ']' ',' str  {inserer(&tab,$1,"idf",3,0,$3,yylineno); }
           ;







par_main: mc_main '{' pi '}'
        ;

pi: inst
   { if(importMiniL_lang==0) { printf("Erreur semantique  -- La bib MiniL.lang est non imprte --\n");}}
  ;
inst : par_instrections inst | par_instrections |
;
par_instrections: idf point_egale ex ';' 
                  {
                     if(Rechercher(&tab,$1)==0){ printf("Erreur semantique a la ligne %d la idf %s n'est pas declare \n",yylineno,$1); }
                     if(Rechercher(&tab,$1)==1) {
                     if(R->type ==3 ) { printf("Erreur semantique a la ligne %d compatibilite des types -- type %s != de STR\n",yylineno,$1); }
                     if(R->varOUconst){printf("On peut pas affecter un valeur a une  Constante\n");}
                     strcpy(R->valeur,$3); quad(&quadc,"=",$1,$3,"vide"); }  
                  } 
                 
               | idf point_egale chaine ';'  
                 {
                  if(Rechercher(&tab,$1)==1){
                  if(R->type !=3 ){printf("Erreur semantique a la ligne %d compatibilite des types -- %s est de type STR\n",yylineno,$1);} 
	              else if(R->varOUconst){printf("On peut pas affecter un valeur a une  Constante\n");}
                  else { quad(&quadc,"=",$1,$3,"vide");  strcpy(R->valeur,$3); }  }
                 }
                 
                 
               |idf point_egale chaine_formats ';'  
                 {
                  if(Rechercher(&tab,$1)==1){
                  if(R->type !=3 ){printf("Erreur semantique a la ligne %d compatibilite des types -- %s est de type STR\n",yylineno,$1);} 
	              else if(R->varOUconst){printf("On peut pas affecter un valeur a une  Constante\n");}
                  else { quad(&quadc,"=",$1,$3,"vide");  strcpy(R->valeur,$3); }  }
                 }
                 
                 
                 
               | idf '[' nombre ']'  point_egale ex ';'  
                  { if(Rechercher(&tab,$1)==1){
                    if($3>R->taille){ printf("Erreur semantique A la ligne %d Depacement de capacite du tableau %s \n",yylineno,$1);}
                    
                    }
                    else{ printf("Erruer semantique a la ligne %d idf %s non declare \n",yylineno,$1); }}
                  |
                  Boucle  | Lecture ';'  | Ecriture ';'  
                ;


ex: Calcul {sprintf(tmp,"%f",$1);$$=strdup(tmp);} 
  ;
 

Calcul: nombres { $$ = atoi($1); }|reales{ $$ = atof($1); }| Add { $$ = $1; }| Moins{ $$ = $1; }  | Fois{ $$ = $1; } | Divise{ $$ = $1; } 
				| '('Calcul ')' { $$ = $2; } | idf { if(Rechercher(&tab,$1)==1){ $$=atof(R->valeur); } }
;

Add : Calcul pl Calcul { $$ = $1 + $3; }
;
Moins : Calcul mn Calcul { $$ = $1 - $3; }
;
Fois : Calcul '*' Calcul { $$ = $1 * $3; }
;
Divise : Calcul '/' Calcul {  if($3==0.0){printf("div par 0 imp"); return 1; }else{$$ = $1 / $3;}  }
;







Boucle: mc_for '(' aff_for ';' condition ';' regle ')' '{' inst '}' { quad(&quadc,"BR","","vide","vide");  Maj_Bz(&quadc); }
      ;

aff_for: idf point_egale nombre {
         if(Rechercher(&tab,$1)==0){printf("Erreur semantique a la ligne %d idf %s non declare \n",yylineno,$1); }else{
         sprintf(buffer,"%d",$3);  quad(&quadc,"=",$1,buffer,"vide"); sprintf(buffer,"%d",$3); strcpy(R->valeur,buffer); }}
       ;


nombres: nombre{sprintf(buffer,"%d",$1); $$=buffer; } | nombre_signe{sprintf(buffer,"%d",$1);$$=buffer; }
       ;
reales: val_real {sprintf(buffer,"%f",$1); $$=buffer;}| val_real_signe{sprintf(buffer,"%f",$1);$$=buffer; }
      ;
nombres_reales: nombres| reales
              ;


condition: Sauv_BR cond { sprintf(buffer,"%d",$2); quad(&quadc,"BZ","",buffer,"vide"); }
         ;

Sauv_BR: { sauv_pos_BR(); }
       ;
   
cond: idf opComp nombre op_logique cond  { } |
      idf opComp nombre
   {if(Rechercher(&tab,$1)==1)
     { sprintf(buffer,"%d",$3); sprintf(buffer2,"%d",cal_comp($2,R->valeur,buffer));
     quad(&quadc,$2,$1,buffer,buffer2);  $$=cal_comp($2,R->valeur,buffer); }
   else{ printf("Erreur semantique a la ligne %d idf %s non declare\n",yylineno,$1); } } |
      '(' cond ')'
    ;
    
   
opComp: '>' { $$=">"; } | sup_egal { $$=">="; } | '<' { $$="<"; } |
        inf_egal {$$="<="; } | '=' { $$="="; } | deferent { $$="!="; }
      ;

op_logique: '&' | ou_logique 
          ;

regle: idf pl pl {
         if(Rechercher(&tab,$1)==0){printf("Erreur semantique a la ligne %d idf %s non declare \n",yylineno,$1); }else{
        sprintf(buffer2,"%d",cal_op_int("+",R->valeur,"1"));  quad(&quadc,"+",$1,"1",buffer2);  }} | 
       idf mn mn {
         if(Rechercher(&tab,$1)==0){printf("Erreur semantique a la ligne %d idf %s non declare \n",yylineno,$1); }else{
        sprintf(buffer2,"%d",cal_op_int("-",R->valeur,"1")); quad(&quadc,"-",$1,"1",buffer2);  }}
     ;
   



   
Lecture: mc_in '('  chaine_formats ',' idfs  ')'  
        { if(importMiniL_io==0){ printf("Erreur semantique a la ligne %d La fonction in est inconnu --- La bib MiniL.io est non imprte ---\n",yylineno);}}
       ;


Ecriture: mc_out '('  chaine_formats ',' idfs ')' 
         { if(importMiniL_io==0){ printf("Erreur semantique a la ligne %d La fonction out est inconnu -- La bib MiniL.io est non imprte --\n",yylineno);}}
        ;
    

idfs: idf ',' idfs  {$$=$1; }| idf {$$=$1; }
    ;     



%% // il s'arret apres la premiere errore syntaxique !!!!!
int yyerror(char* msg){
printf("%s a la ligne  %d",msg,yylineno);
return 1;
}

main() {
yyparse();
Afficher(&tab);
AfficherQUAD(&quadc);
}


