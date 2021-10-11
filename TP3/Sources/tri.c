/* Fichier: tri.c
* crée un tableau de 100 entiers et les trie par ordre croissant.
* auteur: Silia TAIDER - Mariem Ben Salah - Omar Gasri
*/

/* Bibliothèques */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*---------------------------------------------------------*/

int main(){

      int n = 100;
      int tab[n];
      int tab_tri[n];
      int c;

      srand(time(0));  //pour eviter qu'on genere la meme sequence de nombres aleatoires a chaque compilation

      for (int i=0; i<n; i++){ //on initialise les valeurs du tableau avec des valeurs aleatoires 
      tab[i]=rand();
      }

      printf("\nTableau non trie:\n");

      for (int j=0; j<n; j++){ //affichage du tableau non trié 
      printf("%i\n",tab[j]);
      }

      for(int i=0; i<n-1; i++){

          for(int j=i+1; j<n; j++){

              if ( tab[i] > tab[j] ) {
                  c = tab[i];
                  tab[i] = tab[j];
                  tab[j] = c;
              }

          }
      }
      printf("\nTableau trie:\n");

      for (int j=0; j<n; j++){ //affichage du tableau trié
      printf("%i\n",tab[j]);
      }
      
      /* Methode N°2 
      int tab [10];
	int *p = NULL;

      // Création du tableau
	srand(time(NULL));
	for (p = tab ; p < tab + 10; p++) {
		
		*p = rand() % 101; 
	}
	

	printf("\n");

      // Affichage du tableau
	for ( int j = 0 ; j < 10 ; j ++ ) {
		printf("%d ", tab[j]);
	}
	printf("\n");

      // Tri du tableau
	for (int i = 0 ; i < 10 ; i ++) {
		for ( int l = 0 ; l < i ; l ++) {
				if ( tab [i] < tab [l]){
				inverse(&tab[i],&tab[l]);
				}
		}

	}
      // Affichage du tableau trié
	for ( int k = 0 ; k < 10 ; k ++ ) {
		printf("%d ", tab[k]);
	}
	printf("\n");
      
      */
      
      return 0;

}
