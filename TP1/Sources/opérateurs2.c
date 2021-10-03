/* Bibliothèques */

#include <stdio.h>

/*--------------------------------------------------------------------------*/

int main () {
	printf("\n------ Exercice 1.8 : opérateurs2 ------\n\n");
	int num1 = 7;
	int num2 = 23;
	char op = '&';

	switch (op){
	case '+' : printf(" num1 + num 2 = : %d\n", num1+num2);
	break;
	case '-' : printf(" num1 - num 2 = : %d\n", num1-num2);
	break;
	case '*' : printf(" num1 * num 2 = : %d\n", num1*num2);
	break;
	case '/' : printf(" num1 / num 2 = : %d\n", num1/num2);
	break;
	case '%' : printf(" num1 modulo num 2 = : %d\n", num1%num2);
	break;
	case '&' : printf(" num1 & num 2 = : %d\n", num1&num2);
	break;
	case '|' : printf(" num1 | num 2 = : %d\n", num1|num2);
	break;
	case '~' : printf(" ~ num 1 = : %d\n", ~num1);
	break;
	}
	printf("\n");
	return 0;
}
