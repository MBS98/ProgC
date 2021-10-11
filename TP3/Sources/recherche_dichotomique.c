/* Fichier: recherche_dichotomique.c
* crée un tableau de 100 entiers, le trie par ordre croissant et verifie l'existance d'un entier dans ce tableau, affiche un message si c'est le cas (en utilisant la methode de la recherche dichotomique)
* auteur: Silia TAIDER - Mariem Ben Salah - Omar Gasri
*/

/* Bibliothèques */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*---------------------------------------------------------*/

int main(){

      srand(time(0));  //pour eviter qu'on genere la meme sequence de nombres aleatoires a chaque compilation
      int n = 10;
      int tab[n];
      int tab_tri[n];
      int c;
      int recherche=rand(); //on genere aleatoirement une valeur a rechercher 
      int present =0; // on cree une variable present initialisee a 0


      for (int i=0; i<n; i++){ //on initialise les valeurs du tableau avec des valeurs aleatoires 
      tab[i]=rand();
      }

      for(int k=0; k<n-1; k++){

          for(int j=k+1; j<n; j++){

              if ( tab[k] > tab[j] ) {
                  c = tab[k];
                  tab[k] = tab[j];
                  tab[j] = c;
              }

          }
      }
      printf("Tableau trie:\n");

      for (int l=0; l<n; l++){ //affichage du tableau trie
      printf("%i\n",tab[l]);
      }

      printf("La valeur recherchee: %i\n", recherche);


      int debut =0;
      int fin =n;
      int milieu = (debut + fin)/2;

        while (debut <= fin) {
          if (tab[milieu] < recherche)
            debut = milieu + 1;
          else if (tab[milieu] == recherche) {
            printf("%d est trouve a la case %d.\n", recherche, milieu+1);
            break;
          }
          else
            fin = milieu - 1;

          milieu = (debut + fin)/2;
        }
        if (debut > fin)
          printf("L'entier %d n'est pas present dans la liste.\n", recherche);
      
      /* Methode N°2 
      // Déclaration des variables
	int longueur = 10;
	int tab [longueur];
	int *p = NULL;
	int compt = 0;
	int val = 28; // Variable à trouver
	int debut = 0;
	int fin = longueur;
	int milieu = (fin+debut)/2;

      // Création du tableau
	//srand(time(NULL));
	for (p = tab ; p < tab + longueur; p++) {
		
		*p = rand() % 101; 
	}
	printf("\n");

      // Affichage du tableau
	printf("le tableau non trié: \n");
	for ( int j = 0 ; j < longueur ; j ++ ) {
		printf("%d ", tab[j]);
	}
	printf("\n");
      // Tri du tableau
	for (int i = 0 ; i < longueur ; i ++) {
		for ( int l = 0 ; l < i ; l ++) {
			if ( tab [i] < tab [l]){
			inverse(&tab[i],&tab[l]);
			}
		}
	}

      // Affichage du tableau trié
	printf("le tableau trié : \n");
	for ( int k = 0 ; k < longueur ; k ++ ) {
		printf("%d ", tab[k]);
	}
	printf("\n");

      // Recherche dichotomique 

	while ((debut <= fin)) {
		if ( tab[milieu] > val ){
			fin = milieu - 1;
			compt = 0 ;
			
		}
		else if ( tab[milieu] < val ) {
			debut = milieu + 1;
			compt = 0;
		}
		else if ((debut == milieu) && (tab[debut]!= val)) {
			compt = 0;
			break;
		}
		else {
			compt = 1;
			break;
		}
	milieu = (fin+debut)/2;
	}
	
	if (compt == 1) {
		printf("l'entier %d est présent dans le tableau",val);
	}
	else {
		printf("l'entier %d n'est pas présent dans le tableau",val);
	}	
	printf("\n");
      
      */ 
      return 0;
}
