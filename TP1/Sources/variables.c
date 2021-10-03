/* Bibliothèques */

#include <stdio.h>

/*----------------------------------------------------------------------------*/ 

int main () {
	printf("\n------ Exercice 1.4 : variables ------\n\n");
	char my_char_var = 120;
	unsigned char my_uchar_var = 253; 
	short my_short_var = -2021;
	unsigned short my_ushort_var = 65234;
	int my_int_var = -23205 ;
	unsigned int my_uint_var = 3647;
	long int my_lint_var = 2356847L;
	unsigned long int my_ulint_var = 5365478932UL;
	long long int my_llint_var = 12356987LL ;
	unsigned long long int my_ullint_var = 12356987ULL ;
	float my_float_var = 3.147  ;
	double my_double_var = 3.14E-12 ;
	long double my_ldouble_var = 3.14E-22 ;
	printf("la variable %c est de type char et de taille %ld octet(s)\n",my_char_var,sizeof(my_char_var));
	printf("la variable %c est de type unsigned char et de taille %ld octet(s)\n",my_uchar_var,sizeof(my_uchar_var));
	printf("la variable %hd est de type sort et de taille %ld octet(s)\n",my_short_var,sizeof(my_short_var));
	printf("la variable %hu est de type unsigned short et de taille %ld octet(s)\n",my_ushort_var,sizeof(my_ushort_var));
	printf("la variable %d est de type int et de taille %ld octet(s)\n",my_int_var,sizeof(my_int_var));
	printf("la variable %u est de type unsigned int et de taille %ld octet(s)\n",my_uint_var,sizeof(my_uint_var));
	printf("la variable %ld est de type long int et de taille %ld octet(s)\n",my_lint_var,sizeof(my_lint_var));
	printf("la variable %lu est de type unsigned long int et de taille %ld octet(s)\n",my_ulint_var,sizeof(my_ulint_var));
	printf("la variable %lld est de type long long int et de taille %ld octet(s)\n",my_llint_var,sizeof(my_llint_var));
	printf("la variable %llu est de type unsigned long long et de taille %ld octet(s)\n",my_ullint_var,sizeof(my_ullint_var));
	printf("la variable %f est de type float et de taille %ld octet(s)\n",my_float_var,sizeof(my_float_var));
	printf("la variable %g est de type double et de taille %ld octet(s)\n",my_double_var,sizeof(my_double_var));
	printf("la variable %Lg est de type long double et de taille %ld octet(s)\n",my_ldouble_var,sizeof(my_ldouble_var));
	return 0;
}

	
