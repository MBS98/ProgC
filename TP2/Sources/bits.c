/* Bibliothèques */

#include <stdio.h>

/*---------------------------------------------------------*/

int main() {
  printf("\n------ Exercice 2.2 : Vérification si les 4ème et 20ème bits de gauche d'un nombre binaire sont 1, dans ce cas, le programme affiche 1 sinon il affiche 0\ -----\n\n");
	
	/* Initialisation des variables */
	int d = 87381;
	int b = 0b00010000000000000001;
	
	printf("pour d = %d, le programme affiche : ",d);
	if ( d & b == b){

		printf("%d\n",1);

	}

	else {

		printf("%d\n",0);

	}

	printf("\n");
	return 0 ;
}
