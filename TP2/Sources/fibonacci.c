/* Bibliothèques */

#include <stdio.h>

/*---------------------------------------------------------*/

// Déclaration d'une constante 
#define n 11

int main() {
	printf("\n------ Exercice 2.3 : Fibonacci ------\n\n");
	int U0 = 1;
	int U1 = 1;
	int tab[n] = {U0,U1};
	for (int i = 2 ; i <= n ; i++) {
	
		tab[i] = tab[i-1] + tab[i-2];
	}

	for ( int j = 0 ; j < sizeof(tab)/sizeof(int); j++){
	
	printf("U%d = %d  ",j,tab[j]);

	}


	return 0 ;
}
