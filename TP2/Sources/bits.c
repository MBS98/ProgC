/* Bibliothèques */

#include <stdio.h>

/*---------------------------------------------------------*/

int main() {
  printf("\n------ Exercice 2.2 : Bits -----\n\n");
  printf("Si les 4ème et 20ème bits de gauche sont 1 (en binaire) le programme affiche 1 sinon 0\n\n");
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
