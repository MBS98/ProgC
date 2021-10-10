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
  printf("\n------ Exercice 2.1 : a puissance b ------\n\n");
	
	/* Inialisation des variables */
	int a = 2;
	int b = 3;
	int temporaire = a; // variable temporaire qui va stocker la valeur de a
	
	int res = puissance(&a,&b); // appel de la fonction puissance 
	printf("%d puissance %d = %d\n",temporaire,b,res);
	return 0 ;
}

/*---------------------------------------------------------*/
/* Méthode N°2 : Boucles */

int main (int a, int b) {
	printf("\n------ Exercice 2.1 : a puissance b ------\n\n");
	
	/* Inialisation des variables */
	a = 3;
	b = 8;
	int c = a; // variable temporaire qui va stocker la valeur de a
	
	for (int i = 1 ; i < b ; i++) {
	a = a * c;
	}
	
	printf("%d puissance %d = %d\n", c, b, a);

return 0;
}
