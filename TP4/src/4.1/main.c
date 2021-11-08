
#include <stdio.h>
#include <string.h>

#include "operator.h"

int main (int argc, char **argv) {

	int num1;
	int num2;
	char op;
	printf("Insérez l'opérateur que vous voulez tester ");
	scanf("%c", &op);

	if ( strcmp(&op,"~") == 0) { // On compare les deux chaînes, si c'est un ~, on demande à l'utilisateur un seul entier
		printf("Insérez la valeur de l'entier ");
		scanf("%d", &num1);
	}
	else {
		printf("Insérez la valeur des deux entiers ");
		scanf("%d %d", &num1, &num2);
	}

	switch (op){
	case '+' : printf(" %d + %d =  %d\n",num1,num2,add(num1,num2));
	break;
	case '-' : printf(" %d - %d =  %d\n",num1,num2,sub(num1,num2));
	break;
	case '*' : printf(" %d * %d =  %d\n",num1,num2,multp(num1,num2));
	break;
	case '/' : printf(" %d / %d =  %d\n",num1,num2,quot(num1,num2));
	break;
	case '%' : printf(" %d modulo %d =  %d\n",num1,num2,modulo(num1,num2));
	break;
	case '&' : printf(" %d & %d =  %d\n",num1,num2,et(num1,num2));
	break;
	case '|' : printf(" %d | %d =  %d\n",num1,num2,ou(num1,num2));
	break;
	case '~' : printf(" ~ %d =  %d\n",num1,non(num1));
	break;
	}


return 0 ;
}
