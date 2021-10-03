/* Bibliothèques */

#include <stdio.h>

/*--------------------------------------------------------------------------------------------*/ 

int main() {
	printf("\n------ Exercice 1.5 : opérateurs ------\n\n");
	int a = 16;
	int b = 3;
	
	// les opérateurs arithmétiques
	printf("test des opérateurs arithmétiques sur a = %d et b = %d\n\n",a,b);
	printf(" la somme a + b = %d\n",a+b);
	printf(" la diffèrence a - b = %d\n",a-b);
	printf(" la multiplication a * b = %d\n",a*b);
	printf(" la divison a / b = %d\n",a/b);
	printf(" le modulo a %% b = %d\n",a%b);
	printf("\n");
	
	// les opérateurs logiques 
	printf("test des opérateurs logiques sur a = %d et b = %d\n\n", a,b);
	printf(" la négation de a  = %d\n",!a);
	printf(" la négation de b  = %d\n",!b);
	printf(" a && b = %d\n",a&&b);
	printf(" a || b = %d\n",a||b);
	printf("\n");
	return 0;
}

