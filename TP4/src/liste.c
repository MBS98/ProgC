#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "liste.h"

void insertion (struct couleur *ptr_couleur, struct liste_couleurs *ma_liste) {
    //on crée l'element "nouveau" 
    struct liste_couleurs *nouveau;
    nouveau = malloc(sizeof(*nouveau));
    
    //ensuite on affecte la nouvelle couleure (qu'on venut insèrer) à "nouveau"
    nouveau->r=ptr_couleur->r;
    nouveau->b=ptr_couleur->b;
    nouveau->v=ptr_couleur->v;
    nouveau->alpha=ptr_couleur->alpha;
    
    //et on l'insère dans ma_liste en premiere position
    nouveau->suivant = ma_liste->suivant;
    ma_liste->suivant = nouveau;
}

void parcours (struct liste_couleurs *ma_liste){

	struct liste_couleurs *elem = ma_liste;
	

	while(elem != NULL) {
		printf("rouge:0x%2.2x, bleu:0x%2.2x , vert:0x%2.2x, alpha:0x%2.2x\n", elem->r, elem->b, elem->v, elem->alpha); 
		elem = elem->suivant;
		printf("\n");
	}

}


int main() {
	
	printf("\n------ Exercice 4.7 : liste de couleurs ------\n\n");

    //on alloue dynamiquement l'espace memoire(taille de la structure) pour ma_liste
	struct liste_couleurs *ma_liste = malloc(sizeof(struct liste_couleurs));
	
	//on teste le fonctionnement de l'allocation dynamique
	if (ma_liste == NULL)
    {
        exit(EXIT_FAILURE);
    }
	
	//on affecte NULL à ma_liste.suivant pour localiser la fin de la liste simplement chainée
	ma_liste->suivant = NULL;
    
    //on crée nouv_couleur (de structure "couleur") qui va contenir la nouvelle couleur à insèrer
	struct couleur *nouv_couleur = malloc(sizeof(struct couleur));	
	
	//on teste le fonctionnement de l'allocation dynamique
	if (nouv_couleur == NULL)
    {
        exit(EXIT_FAILURE);
    }
	
	//on crée 10 nouv_couleur aléatoires et on les insère

 	
 	//how to generate multiple random numbers
	// https://koor.fr/C/cstdlib/rand.wp  random numbers
    //srand( time( NULL ) );
    //x = rand() % 255;  //we chose 255 to make it hexadecimal
 	
 	srand(time(NULL));

 	int i;	
	for (i=0;i<10;i++){
		nouv_couleur->r = rand() % 255;
		nouv_couleur->b = rand() % 255;
		nouv_couleur->v = rand() % 255;
		nouv_couleur->alpha = rand() % 255;
		insertion(nouv_couleur,ma_liste);			
	}
	
	// parcours de la liste et affichage des couleurs
	parcours(ma_liste);

}