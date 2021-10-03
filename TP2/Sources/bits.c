/* Bibliothèques */

#include <stdio.h>

/*---------------------------------------------------------*/

int main() {
  printf("\n------ Exercice 2.2 : Bits -----\n\n");
	int d = 87381;
	int b = 0b00010000000000000001;

	if ( d & b == b){
	
		printf("%d\n",1);
		
	}

	else { 

		printf("%d\n",0);

	}


	return 0 ;
}
