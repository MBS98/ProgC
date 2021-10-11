/* Fichier: opérateurs2.c
* utilise switch et le code du premier exercice pour realiser une operation sur 2 variables selon l'operateur rentré en variable
* auteur: Silia TAIDER - Mariem Ben Salah - Omar Gasri
*/

/* Bibliothèques */

#include <stdio.h>

/*--------------------------------------------------------------------------*/

int main () {
	printf("\n------ Exercice 1.8 : Utilisation de Switch ------\n\n");
	
	/* Initialisation des variables */
	int num1 = 7;
	int num2 = 23;
	char op = '&';
	
	/* Switch */
	switch (op){
	case '+' : printf(" num1 + num 2 =  %d\n", num1+num2);
	break;
	case '-' : printf(" num1 - num 2 =  %d\n", num1-num2);
	break;
	case '*' : printf(" num1 * num 2 =  %d\n", num1*num2);
	break;
	case '/' : printf(" num1 / num 2 =  %d\n", num1/num2);
	break;
	case '%' : printf(" num1 %% num 2 =  %d\n", num1%num2);
	break;
	case '&' : printf(" num1 & num 2 =  %d\n", num1&num2);
	break;
	case '|' : printf(" num1 | num 2 =  %d\n", num1|num2);
	break;
	case '~' : printf(" ~ num 1 =  %d\n", ~num1);
	break;
	}
	printf("\n");
	return 0;
}
