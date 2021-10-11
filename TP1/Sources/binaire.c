/* Fichier: binaire.c
* utilise for pour l'affichage d'une variable int en format binaire
* auteur: Silia TAIDER - Mariem Ben Salah - Omar Gasri
*/

/* Bibliothèques */

#include <stdio.h>
#include <math.h>
#include<float.h>

/*--------------------------------------------------------------------------------------*/

int main () {
	int N = 4096 ;

	printf("\n------ Exercice 1.9 : Affichage de l'expression binaire d'un nombre N -----\n\n");

	printf("N = %i \n",N);

	printf("L'expression binaire de N est : ");
  
  // Determination de la longueur de l'expression binaire et par suite la longueur du tableau
  int a = 2;
  int compteur = 2;
  while (a < N){
        a = a*2;
        compteur++;
  }
  
  // Création du tableau 
	int binaire[compteur];
  
  // La conversion 
	int n = 0;
	for (int i = 1; i <= N ; i =i*2) {
		
		if ((i & N) == 0) {
			binaire[n]=0;
		}
		else {
			binaire[n]=1;
		}
		n=n+1;
	}
	
//L'affichage du nombre binaire
  	int i = 0;
	for (i = n-1 ; i >= 0 ; i--) {
		printf("%i",binaire[i]);
	}
	printf("\n\n");

	return 0 ;
}
