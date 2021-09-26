#include <stdio.h>
int main () {
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
	return 0;
}
