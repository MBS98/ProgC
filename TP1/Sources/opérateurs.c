#include <stdio.h>
int main() {
	int a = 16;
	int b = 3;
	// les opérateurs arithmétiques
	printf(" la somme a + b = %d\n",a+b);
	printf(" la diffèrence a - b = %d\n",a-b);
	printf(" la multiplication a * b = %d\n",a*b);
	printf(" la divison a / b = %d\n",a/b);
	printf(" le modulo = %d\n",a%b);
	// les opérateurs logiques 
	printf(" la négation de a  = %d\n",!a);
	printf(" la négation de b  = %d\n",!b);
	printf(" a && b = %d\n",a&&b);
	printf(" a || b = %d\n",a||b);
	return 0;
}

