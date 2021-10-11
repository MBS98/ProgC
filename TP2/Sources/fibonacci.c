/* Fichier: fibonacci.c
* Le programme affiche les n termes de la suite de Fibonacci U0, U1, U2,...Un
* auteur: Silia TAIDER - Mariem Ben Salah - Omar Gasri
*/

/* Bibliothèques */

#include <stdio.h>

/*---------------------------------------------------------*/

// Déclaration d'une constante 
#define n 11

int main() {
	printf("\n------ Exercice 2.3 : La suite de Fibonacci ------\n\n");
	int U0 = 1;
	int U1 = 1;
	int tab[n] = {U0,U1};
	
	/* Autre méthode pour la déclaration de la taille du tableau et du tableau lui même :
	int n = 10;
	int u0 = 1;
	int u1 = 1;
	int U[n];
	int taille = n+1;
	U[0]=u0;
	U[1]=u1; 
	
	printf ("La taille du tableau est: %d\n", taille); */
	
	for (int i = 2 ; i <= n ; i++) {
	
		tab[i] = tab[i-1] + tab[i-2];
	}

	for ( int j = 0 ; j < sizeof(tab)/sizeof(int); j++){
	
	printf("U%d = %d  ",j,tab[j]);

	}
	
	printf("\n");

	return 0 ;
}
