#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//pour les constante
//Table des symbôles


typedef struct TS {
char nom[10];
char codeEn[10];
int varOUconst;
int type;
int taille;
char valeur[200];
struct TS *svt;
} TS;


TS *tab = NULL;
TS *R;
TS *T;



// Rechercher un IDF dans la TS
int Rechercher(TS** t, char* var){ // retourne 1 si l'idf existe et 0 sinon
TS *p;
for(p= *t; p!=NULL;p=p->svt){
    if(!strcmp(p->nom,var)){
    R=p;  return 1;
    }
}
return 0;
}



/*
void setValeur(TS** t,char* nomVariable,char *val) {
TS *p;


R=*t;
for(p= *t; p->svt!=NULL;p=p->svt){
    if(strcmp(p->nom,nomVariable)==0){
    /*strcpy((p->valeur),val);*/

	/*char* a=strcpy(a,val);
	strcpy(p->valeur,val);
    }
}
*t=R;
}



void getValeur(TS** t,char* nomVariable,char* val) {
char v[10];
TS *p;
   for(p= *t; p->svt!=NULL;p=p->svt){
        if(!strcmp(p->nom,val)){
        strcpy( val,(p)->valeur);

    }
}
}
*/


// Insertion d'un IDF dans la table des symbôles
int inserer(TS** t, char* nomVariable, char* codeEnt,int type, int ConstVar,int taille,int Nligne)/*retourne -1 si l'IDF existe déja et 0 si l'insertion est bien faite*/
{
TS *p;
// Verifier si l'idf existe deja, si c'est le cas renvoyer -1
if(Rechercher(t, nomVariable)) {printf("Erreur semantique A la ligne %d Double declaration de %s \n",Nligne,nomVariable);return -1;}
//Sinon l'inserer à la fin de la liste
if(*t ==NULL) {
*t=(TS*)malloc(sizeof(TS));
(*t)->svt = NULL;
} else {
  for(p=*t;p->svt != NULL; p=p->svt){} // mettre la pointeur a la fin
    p=(TS*)malloc(sizeof(TS));
    p->svt= *t;
    *t=p;
    }

 strcpy((*t)->nom, nomVariable);
 strcpy((*t)->codeEn,codeEnt);
 (*t)->type=type;
 (*t)->varOUconst = ConstVar;
 (*t)->taille= taille;
return 0;
}




// Afficher la table des symbôle
void Afficher(TS** t) {

TS *p;

printf("\n\n----------------------------- Table des symboles  -----------------------------------\n");
  printf("---  Nom Entite   |    Code Entite    |    type    |   Constant   |   taille      ---\n");

for(p=*t; p!= NULL; p=p->svt){

    printf("---  %-15s ",p->nom);
    printf("  %-15s ",p->codeEn);

    switch(p->type) {
    case 1 : printf("    INTEGER     ");break;
    case 2 : printf("    REAL        ");break;
    case 3 : printf("    STRING      ");break;
    case -1: printf("    -----       ");
    }

    if(p->varOUconst)
        printf("True      ");
    else
        printf("False     ");

  printf("      %-10d ---\n",p->taille);
}

printf("-------------------------------------------------------------------------------------\n\n");


}


/*
void Afficher(TS** t) {

TS *p;

printf("\n\n----------------------------- Table des symboles  -----------------------------------\n");
  printf("---  Nom Entite   |    Code Entite    |    type    |   Constant   |   Valeur  |   taille      ---\n");

for(p=*t; p!= NULL; p=p->svt){

    printf("---  %-15s ",p->nom);
    printf("  %-15s ",p->codeEn);

    switch(p->type) {
    case 1 : printf("    INTEGER     ");break;
    case 2 : printf("    REAL        ");break;
    case 3 : printf("    STRING      ");break;
    case -1: printf("    -----       ");
    }

    if(p->varOUconst)
        printf("True      ");
    else
        printf("False     ");

	printf("      %-15s      ", p->valeur);
  	printf("      %-10d ---\n",p->taille);

}

printf("-------------------------------------------------------------------------------------\n\n");


}
*/
