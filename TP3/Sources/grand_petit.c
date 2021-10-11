/* Fichier: grand_petit.c
*  un tableau de 100 entiers et calcule le numéro plus grand et le numéro plus petit
* auteur: Silia TAIDER - Mariem Ben Salah - Omar Gasri
*/

/* Bibliothèques */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*---------------------------------------------------------*/

int main(){

      // Initialisation des variables
      int n = 100; 
      int tab[n];
      int petit = 0;
      int grand = 0;

      srand(time(0)); //pour eviter qu'on genere la meme sequence de nombres aleatoires a chaque compilation

      for (int i = 0 ; i < n ; i++){ //initialisation du tableau avec des valeurs random
      tab[i] = rand();
      }

      for (int j = 0 ; j < n ; j++){ //affichage du tableau
      printf("%i\n",tab[j]);
      }

      petit = tab[0];

      for (int i = 0; i < n ; i++){ //on parcourt le tableau et on compare la valeur courante

      if (tab[i] < petit){ //si elle est inferieure a la valeur stoquee dans petit on permute
      petit = tab[i];
      }


      if (tab[i] > grand){ //si elle est superieure a la valeur stoquee dans grand on permute
      grand = tab[i];
      }

      }

      printf("\nLa valeur la plus petite: %i\n", petit);
      printf("La valeur la plus grande: %i\n", grand);
      
      /* Méthode N°2 
      srand(time(0));
	int tab [100];
	int *p = NULL;
	for (p = tab ; p < tab + 100 ; p++) {
		*p = rand() ; 
	}
	
	int max = tab[0];
	int min = tab[0];
	printf("\n");
	for ( int j = 0 ; j < 100 ; j ++ ) {
		printf("%d ", tab[j]);
	}
	printf("\n");
	for ( int i = 0 ; i < 100 ; i ++) {
		if ( tab [i] > max ) {
		max = tab[i];
		}
		else if ( tab[i] < min ) {
		min = tab[i];
		}

	}
	printf("\n");
	printf("la plus grande valeur dans ce tableau est : %d\n",max);
	printf("la plus petite valeur dans ce tableau est : %d\n",min);
	printf("\n");
      
      */
      
      
      return 0;
}
