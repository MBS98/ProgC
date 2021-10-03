/* Bibliothèques */

#include <stdio.h>

/*----------------------------------------------------------------------------*/ 

int main () {
	char my_char_var = 'a';
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

	char *my_char_addr =&my_char_var;
	unsigned char *my_uchar_addr = &my_uchar_var; 
	short *my_short_addr = &my_short_var;
	unsigned short *my_ushort_addr = &my_ushort_var;
	int *my_int_addr = &my_int_var ;
	unsigned int *my_uint_addr = &my_uint_var;
	long int *my_lint_addr = &my_lint_var;
	unsigned long int *my_ulint_addr = &my_ulint_var;
	long long int *my_llint_addr = &my_llint_var ;
	unsigned long long int *my_ullint_addr = &my_ullint_var ;
	float *my_float_addr = &my_float_var  ;
	double *my_double_addr = &my_double_var ;
	long double *my_ldouble_addr = &my_ldouble_var ;


	printf("la variable %c est de type char, d'adresse %x et de taille %ld octet(s)\n",my_char_var, *my_char_addr, sizeof(my_char_var));
	printf("la variable %c est de type unsigned char, d'adresse %x et de taille %ld octet(s)\n",my_uchar_var, *my_uchar_addr,sizeof(my_uchar_var));
	printf("la variable %hd est de type short, d'adresse %x et de taille %ld octet(s)\n",my_short_var, *my_short_addr,sizeof(my_short_var));
	printf("la variable %hu est de type unsigned short, d'adresse %x  et de taille %ld octet(s)\n",my_ushort_var, *my_ushort_addr,sizeof(my_ushort_var));
	printf("la variable %d est de type int, d'adresse %x et de taille %ld octet(s)\n",my_int_var, *my_int_addr, sizeof(my_int_var));
	printf("la variable %u est de type unsigned int, d'adresse %x et de taille %ld octet(s)\n",my_uint_var, *my_uint_addr, sizeof(my_uint_var));
	printf("la variable %ld est de type long int, d'adresse %lx et de taille %ld octet(s)\n",my_lint_var, *my_lint_addr, sizeof(my_lint_var));
	printf("la variable %lu est de type unsigned long int, d'adresse %lx et de taille %ld octet(s)\n",my_ulint_var, *my_ulint_addr, sizeof(my_ulint_var));
	printf("la variable %lld est de type long long int, d'adresse %llx et de taille %ld octet(s)\n",my_llint_var, *my_llint_addr, sizeof(my_llint_var));
	printf("la variable %llu est de type unsigned long long int, d'adresse %llx et de taille %ld octet(s)\n",my_ullint_var, *my_ullint_addr, sizeof(my_ullint_var));
	printf("la variable %f est de type float, d'adresse %f et de taille %ld octet(s)\n",my_float_var, *my_float_addr, sizeof(my_float_var));
	printf("la variable %g est de type double, d'adresse %f et de taille %ld octet(s)\n",my_double_var, *my_double_addr, sizeof(my_double_var));
	printf("la variable %Lg est de type long double, d'adresse %Lf et de taille %ld octet(s)\n",my_ldouble_var, *my_ldouble_addr, sizeof(my_ldouble_var));
	return 0;
}
