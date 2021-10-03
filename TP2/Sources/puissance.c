/* Bibliothèques */

#include <stdio.h>

/*---------------------------------------------------------*/
/* Méthode N°1 : Pointeurs*/

int puissance (int *a , int *b){
int temporaire = *a ;
for (int i = 1 ; i < *b ; i++) {
		*a = *a * temporaire;
	}
	return *a ;
}

/* Main */
int main () {
  printf("\n------ Exercice 2.1 : Puissance ------\n\n");
  
	int a = 2;
	int b = 3;
	int temporaire = a;
	int res = puissance(&a,&b);
	printf("puissance(a = %d , b = %d) est = %d\n",temporaire,b,res);
	return 0 ;
}
