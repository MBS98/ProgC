/* Fichier: chercher.c
* crée un tableau de 100 entiers verifie l'existance d'un entier dans ce tableau, affiche un message si c'est le cas
* auteur: Silia TAIDER - Mariem Ben Salah - Omar Gasri
*/

/* Bibliothèques */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*---------------------------------------------------------*/

int main(){

      srand(time(0));  //pour eviter qu'on genere la meme sequence de nombres aleatoires a chaque compilation

      int n = 100;
      int tab[n];
      int recherche=rand(); //on genere aleatoirement une valeur a rechercher 
      int present =0; // on cree une variable present initialisee a 0

      for (int i=0; i<n; i++){ //on initialise les valeurs du tableau avec des valeurs aleatoires 
      tab[i]=rand();
      }

      for (int j=0; j<n; j++){ //affichage du tableau 
      printf("%i\n",tab[j]);
      }

      printf("La valeur recherchee: %i\n", recherche);

      for (int k=0; k<n; k++){  //on parcourt le tableau et si on trouve la valeur recherchee on change la valeur de present a 1

      if (tab[k]==recherche) {
      present = 1;
      }

      }

      if (present == 1) { //si present est a 1 on offiche que l entier est present 
      printf("Entier present\n");
      }

      else{
      printf("Entier non present\n");
      }
      
      /* Methode N°2 
      // Déclaration des variables
	int val = 28; // Valeur à trouver
	int tab [100];
	int *p = NULL;
	int compt = 0 ;

      // Création du tableau
	srand(time(NULL));
	for (p = tab ; p < tab + 100; p++) {
		
		*p = rand() % 101;  / Génération de nombres entre 0 et 100
	}
	printf("\n");

      // Affichage du tableau
	for ( int j = 0 ; j < 100 ; j ++ ) {
		printf("%d ", tab[j]);
	}
	printf("\n");

      // La recherche
	for ( int i = 0 ; i < 100 ; i ++) {
		if ( tab [i] == val ) {
		compt = 1;
		}
		else {
		compt = 0;
		}
	}

	if ( compt == 1){
		printf("l'entier %d est présent dans le tableau",val);
	}
	else if ( compt == 0 ){
		printf("l'entier %d n'est pas présent dans le tableau",val);
	}

	printf("\n");
      */
      
return 0;
}






