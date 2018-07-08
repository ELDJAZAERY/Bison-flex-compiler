#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Table-Symp.h"


typedef struct quadruple {
char operateur[5];
char op1[200];
char op2[200];
char temp[20];
int nb_quad;
struct quadruple *svt;
} quadruple;

quadruple *quadc = NULL;


int importMiniL_io=0;
int importMiniL_lang=0;
int nb_total_quad=1;
int p_BZ=0;
int pos_BR=0;


int import_bib(char *bib,int nb_ligne){

 if( strcmp(bib,"MiniL.io") == 0 ) {
    if(importMiniL_io==0){ importMiniL_io=1; }else{printf("\nErreur semantique A la ligne %d double importation de la bib MiniL.io !!! \n",nb_ligne);}
 }

if( strcmp(bib, "MiniL.lang") == 0 ) {
    if(importMiniL_io==0){ importMiniL_lang=1; }else{printf("\nErreur semantique A la ligne %d double importation de la bib MiniL.lang !!! \n",nb_ligne);}
 }

}



/*
int quad(quadruple** quadc,char operateur[],char op1[],char op2[],char temp[]){
 quadruple* t;

 if( strcmp(operateur,"BZ") == 0 ) { p_BZ = nb_total_quad;  }



 if(*quadc==NULL){
   (*quadc)=(quadruple*)malloc(sizeof(quadruple));
  (*quadc)->svt=NULL;
  }else {
   for(t=*quadc;t->svt!=NULL;t=t->svt){}
   t=(quadruple*)malloc(sizeof(quadruple));
   t->svt=*quadc;
   *quadc=t;
   }

 strcpy((*quadc)->operateur,operateur);
strcpy((*quadc)->op1,op1);
 strcpy((*quadc)->op2,op2);
 strcpy((*quadc)->temp,temp);
 (*quadc)->nb_quad=nb_total_quad;

nb_total_quad++;
 return 1;
}
*/


int quad(quadruple** quadc,char operateur[],char op1[],char op2[],char temp[]){
 quadruple* tete;
 quadruple* t;

 if( strcmp(operateur,"BZ") == 0 ) { p_BZ = nb_total_quad;  }


 if(*quadc==NULL){
   (*quadc)=(quadruple*)malloc(sizeof(quadruple));
  (*quadc)->svt=NULL;
  strcpy((*quadc)->operateur,operateur);
  strcpy((*quadc)->op1,op1); if( strcmp(operateur,"BR") == 0 ) {  sprintf((*quadc)->op1,"%d",pos_BR); }
  strcpy((*quadc)->op2,op2);
  strcpy((*quadc)->temp,temp);
  (*quadc)->nb_quad=nb_total_quad;
  }else {
   tete=*quadc;
   while( (*quadc)->svt!=NULL ) {  *quadc=(*quadc)->svt; }
    t=(quadruple*)malloc(sizeof(quadruple));
    t->svt=NULL;
    (*quadc)->svt=t;
   strcpy(t->operateur,operateur);
   strcpy(t->op1,op1); if( strcmp(operateur,"BR") == 0 ) { sprintf(t->op1,"%d",pos_BR); }
   strcpy(t->op2,op2);
   strcpy(t->temp,temp);
   t->nb_quad=nb_total_quad;

  *quadc=tete;
   }

 nb_total_quad++;
 return 1;
}



/*
int quad(quadruple** quadc,char *operateur,char *op1,char *op2,char *temp){
 quadruple *t,*t1;

 if( strcmp(operateur,"BZ") == 0 ) { p_BZ == nb_total_quad; }

 if(*quadc==NULL){
   (*quadc)=(quadruple*)malloc(sizeof(quadruple));
  (*quadc)->svt=NULL;

  strcpy((*quadc)->operateur,operateur);
 strcpy((*quadc)->op1,op1);
 strcpy((*quadc)->op2,op2);
 strcpy((*quadc)->temp,temp);
 (*quadc)->nb_quad=nb_total_quad;

  }else {
   for(t=*quadc;t->svt!=NULL;t=t->svt){}
   t1=(quadruple*)malloc(sizeof(quadruple));
   t->svt=t1;
   *quadc=t;

 strcpy(t1->operateur,operateur);
 strcpy(t1->op1,op1);
 strcpy(t1->op2,op2);
 strcpy(t1->temp,temp);
 t1->nb_quad=nb_total_quad;
 t1->svt=NULL;
  }
  nb_total_quad++;
 return 1;
}
*/


int sauv_pos_BR(){
 pos_BR=nb_total_quad;
 return 1;
}



int Maj_Bz(quadruple** t){
quadruple *p;
char pos[20];
sprintf(pos,"%d",nb_total_quad);

for(p=*t; p!= NULL; p=p->svt){
if( p->nb_quad==p_BZ ){
    strcpy(p->op1,pos);
}
}
return 1;
}


int cal_comp(char *operat,char *operand1, char *operand2){


int op1,op2;
op1=atoi(operand1);
op2=atoi(operand2);

if(strcmp(operat,"<")==0) { return(op1 < op2); }
if(strcmp(operat,">")==0) { return(op1 > op2); }
if(strcmp(operat,">=")==0) { return(op1 >= op2); }
if(strcmp(operat,"<=")==0) { return(op1 <= op2); }
if(strcmp(operat,"!=")==0) { return(op1 != op2); }
if(strcmp(operat,"=")==0) { return(op1 == op2); }

return -10 ;
}


int cal_op_int(char *operat,char *operand1, char *operand2){


int op1,op2;
op1=atoi(operand1);
op2=atoi(operand2);

if(strcmp(operat,"+")==0) { return(op1 + op2); }
if(strcmp(operat,"-")==0) { return(op1 - op2); }
if(strcmp(operat,"*")==0) { return(op1 * op2); }
if(strcmp(operat,"/")==0) { return(op1 / op2); }

return -10 ;
}



void AfficherQUAD(quadruple** t) {
quadruple *p;

if(importMiniL_io == 1) { printf("\n ----- MiniL.io est importe  ----- \n"); }
if(importMiniL_lang == 1) { printf("\n --- MiniL.lang est importe ---- \n"); }

printf("\n----- Table des Quadruplet -------\n");
for(p=*t; p!= NULL; p=p->svt){
  printf(" - %d   < %s , %s , %s , %s >  \n",p->nb_quad,p->operateur,p->op1,p->op2,p->temp);}
}



