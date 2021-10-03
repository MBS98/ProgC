/* Bibliothèques */

#include <stdio.h>

/*-----------------------------------------------------------------------------------*/

int main () {
	printf("\n------ Exercice 1.6 : boucles ------\n\n");
	int compteur = 5 ;
	
	/*---------------------------------------------*/
	
	printf("* Méthode N°1 : Boucle For *\n\n");
	for (int i = 0; i < compteur; i++){
		for( int j =0; j <= i; j++){
			if ( j >=1 & j < i & i<compteur-1 ) {
				printf("# ");
			}
			else {
				printf("* ");
			}
		
		}	
	printf("\n");
	}
	
	/*---------------------------------------------*/
	
	printf("\n");
	printf("* Méthode N°2 : Boucle For *\n\n");
		
	for (int i = 0 ; i < compteur ; i++) {
		if (i < compteur - 1) {
			for (int j = 0 ; j <= i ; j++) {
				if (j!=i & j!=0) {
					printf("# ");
				} else {
					printf("* ");
				}
			}
		} else {
			for (int j = 0 ; j <= i ; j++) {
				printf("* ");
			}
		}
		printf("\n");
	}
	
	/*---------------------------------------------*/
	
	printf("\n");
	printf("* Méthode N°3 : Boucle While *\n");
	int i = 0;
	printf("\n");

	while (i < compteur) {

		int j = 0;
		if (i < compteur - 1) {
			j=0;
			while (j <= i) {
				if (j!=i & j!=0) {
					printf("# ");
				} else {
					printf("* ");
				}
				j++;
			}

		} else {
			j=0;
			while (j <= i) {
				printf("* ");
				j++;
			}

		}
		printf("\n");
		i++;

	}
	printf("\n");
	return 0;
}
