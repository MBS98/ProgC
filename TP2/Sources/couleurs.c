/* Fichier: couleurs.c
* Le programme affiche les octets composant une couleur (Une couleur en format RGBA contient 4 valeurs : rouge (R), vert (G), bleu (B) et alpha (A). Chaque valeur est un octet)
* auteur: Silia TAIDER - Mariem Ben Salah - Omar Gasri
*/
/* Bibliothèques */

#include <stdio.h>
#include <stdlib.h>

/*--------------------------------------------------------------------------------------*/

int main() {
	printf("\n------ Exercice 2.7 : Affichage des couleurs ------\n\n");
	/* structure couleurs */
	struct couleur{
		unsigned char r;
		unsigned char b;
		unsigned char v;
		unsigned char alpha;
	};

	struct couleur couleurs[10];
	
	int i;	
	for (i=0;i<10;i++){ // On genere des nombres aleatoires entre 0 et 100 et on les affichera en hexadecimal
		couleurs[i].r = rand() % 100;
		couleurs[i].b = rand() % 100;
		couleurs[i].v = rand() % 100;
		couleurs[i].alpha = rand() % 100;
	}
	
	for (i=0;i<10;i++){
		printf("couleurs[%i] = rouge:0x%2.2x, bleu:0x%2.2x , vert:0x%2.2x, alpha:0x%2.2x \n",i,couleurs[i].r,couleurs[i].b,couleurs[i].v,couleurs[i].alpha);
	}
	
	printf("\n");
	return 0;
}

