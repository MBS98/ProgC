#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

#include "operator.h"

int main (int argc, char *argv[]) {
	int num1 = atoi(argv[3]);
	int num2 = atoi(argv[4]);
	char *op = argv[2];

	switch (*op){
	case '+' : printf(" %d + %d =  %d\n",num1,num2,add(num1,num2));
	break;
	case '-' : printf(" %d - %d =  %d\n",num1,num2,sub(num1,num2));
	break;
	case '*' : printf(" %d * %d =  %d\n",num1,num2,multp(num1,num2));
	break;
	case '/' : printf(" %d / %d =  %d\n",num1,num2,quot(num1,num2));
	break;
	case '%' : printf(" %d modulo %d = %d\n",num1,num2,modulo(num1,num2));
	break;
	case '&' : printf(" %d & %d =  %d\n",num1,num2,et(num1,num2));
	break;
	case '|' : printf(" %d | %d =  %d\n",num1,num2,ou(num1,num2));
	break;
	case '~' : printf(" ~ %d = %d et ~ %d = %d\n",num1,non(num1),num2,non(num2));
	break;
	}
return 0 ;
}
