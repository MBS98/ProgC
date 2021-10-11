#include <stdio.h>
int main() {
	printf("\n------ Exercice 3.7 : couleur_compteur ------\n\n");
	int i;	

	/* structure couleurs */
	struct couleur{
		unsigned char r;
		unsigned char b;
		unsigned char v;
		unsigned char alpha;
	};

	/* creer notre tableaux de couleurs */

	struct couleur couleurs[100]={0};

	/* remplir avec des valeurs pour tester */
	couleurs[0].r = 0x11;
	couleurs[0].b = 0x11;
	couleurs[0].v = 0x11;
	couleurs[0].alpha = 0x11;

	couleurs[1].r = 0x11;
	couleurs[1].b = 0x11;
	couleurs[1].v = 0x11;
	couleurs[1].alpha = 0x11;

	couleurs[2].r = 0x22;
	couleurs[2].b = 0x22;
	couleurs[2].v = 0x22;
	couleurs[2].alpha = 0x22;
	
	couleurs[5].r = 0x55;
	couleurs[5].b = 0x55;
	couleurs[5].v = 0x55;
	couleurs[5].alpha = 0x55;

	couleurs[8].r = 0x11;
	couleurs[8].b = 0x11;
	couleurs[8].v = 0x11;
	couleurs[8].alpha = 0x11;

	/* compteur : 
		On cree un nouveau tableau contenant les couleurs qui existent dans le premier tableau (sans repetition)	
	*/

	/* initialiser NouvTab de façcon que NouvTab[0]=[00,00,00,00]
et ( si la couleur[0] n'est pas (00,00,00,00) ) => NouvTab[1]=couleur[0] 
et initialiser sa longeur LongNouvTab
et initialiser les compteurs de chaque couleur dans NouvTab*/

	struct couleur NouvTab[100]={0};
	int compteur[100] = {0} ;
	
	if (couleurs[0].r) {
		NouvTab[1].r = couleurs[0].r;
		NouvTab[1].b = couleurs[0].b;
		NouvTab[1].v = couleurs[0].v;
		NouvTab[1].alpha = couleurs[0].alpha;
		compteur[1]=1;
	}
	int LongNouvTab=2;


/* on parcours chaque couleur dans le tableau initiale couleurs[100]

-> si on trouve que la couleur n'existe pas dans NouvTab (cherche=0) 
		=> on l'ecrit dans NouvTab et on incremente son compteur
				et on incremente la longeur de NouvTab
-> si on trouve cette couleur dans NouvTab (cherche=1)
		=> on ne fait qu'incrementer son compteur
*/
	for (i=1;i<100;i++){

		int j=0;
		int cherche = 0;
		while ((j<LongNouvTab) && (cherche==0)){
			if ( NouvTab[j].r==couleurs[i].r && NouvTab[j].b==couleurs[i].b && NouvTab[j].v==couleurs[i].v && NouvTab[j].alpha==couleurs[i].alpha){
				cherche=1;
				compteur[j]++;
			}
			j++;
		}

		if (cherche==0){
			NouvTab[LongNouvTab].r = couleurs[i].r;
			NouvTab[LongNouvTab].b = couleurs[i].b;
			NouvTab[LongNouvTab].v = couleurs[i].v;
			NouvTab[LongNouvTab].alpha = couleurs[i].alpha;
			compteur[LongNouvTab]++;
			LongNouvTab++;
		}
			
	}

/* On affiche le nouveau tableau */

	printf("Dans le tableaux couleurs[100] il y a les couleurs suivantes :\n\n");
	
	for (i=0;i<LongNouvTab;i++){
		printf("rouge:0x%2.2x, bleu:0x%2.2x , vert:0x%2.2x, alpha:0x%2.2x, rep = %i \n", NouvTab[i].r, NouvTab[i].b, NouvTab[i].v, NouvTab[i].alpha, compteur[i]);
	}
	
	printf("\n");
	return 0;
}

