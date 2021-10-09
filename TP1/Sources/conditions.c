/* Bibliothèques */

#include <stdio.h>

/*----------------------------------------------------------------------*/

int main () {
	printf("\n------ Exercice 1.7 : Affichage des numéros <= 1000 qui satisfaient certaines conditions ------\n\n");
	
	/*-------------------------------------------------------------*/
	// Boucle For pour l'affichage des nombres <= 1000 qui sont divisibles par 2 ou 15
	printf("les nombres <= 1000 qui sont divisibles par 2 ou 15 sont : \n");
	for (int i = 0; i <= 1000; i++) {
		if (i % 2 == 0 & i % 15 == 0) {
			printf(" %d ",i ) ;
		}	
	}
	
	/*-------------------------------------------------------------*/
	// Boucle While .. pour l'affichage des nombres <= 1000 qui sont divisibles par 103 ou 107
	int j = 0 ;
	printf("\n\nles nombres <= 1000 qui sont divisibles par 103 ou 107 sont : \n");	
	while ( j <=1000 ) {
		if (j % 103 == 0 || j % 107 == 0){
			printf("%d ",j);
		}
	j ++;
	}
	
	/*-------------------------------------------------------------*/
	// Boucle Do .... While pour l'affichage des nombres <= 1000 qui sont divisibles par 7 ou 5 mais pas 3
	int k = 0;
	printf("\n\nles nombres <= 1000 qui sont divisibles par 7 ou 5 mais pas 3 sont : \n");
	do {
		if ((k % 5 == 0) | (k % 7 == 0) & (k % 3 != 0)){
			printf("%d ",k);		
		}
	k++;
	} while(k <= 1000);

	return 0;

}
