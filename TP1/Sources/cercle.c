/* Bibliothèques */

#include <stdio.h>
#include <math.h>

/* -----------------------------------------------------------------------------------*/

int main() {
	printf("\n------ Exercice 1.2 : Affichage de l'aire et du périmètre d'un cercle ------\n\n");
	
	/* Initialisation des variables */
	float rayon = 5 ; 
	perim = 2*M_PI*rayon;
	aire = M_pi*powf(rayon,2); // Calcul de l'aire en utilisant powf
	
	/* Affichage */
	printf("l'aire d'un cercle de rayon %.2f est : %.4f\n",rayon,aire); 
	printf("le périmètre d'un cercle de rayon %.2f est : %.4f\n\n",rayon,perim);
	return 0;
}

