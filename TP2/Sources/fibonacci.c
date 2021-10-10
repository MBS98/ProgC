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
	U[1]=u1; */
	
	for (int i = 2 ; i <= n ; i++) {
	
		tab[i] = tab[i-1] + tab[i-2];
	}

	for ( int j = 0 ; j < sizeof(tab)/sizeof(int); j++){
	
	printf("U%d = %d  ",j,tab[j]);

	}


	return 0 ;
}
