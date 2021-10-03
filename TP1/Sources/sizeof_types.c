/* Bibliothèques */

#include <stdio.h> 

/*-------------------------------------------------------------------------------------*/

int main () {
	printf("\n------ Exercice 1.3 : sizeof_types ------\n\n");
	printf("la taille d'un unsigned char est : %ld\n",sizeof(unsigned char));
	printf("la taille d'un signed char est : %ld\n",sizeof(signed char));
	printf("la taille d'un short est : %ld\n",sizeof(unsigned short));
	printf("la taille d'un signed short est : %ld\n",sizeof(signed short));
	printf("la taille d'un int est : %ld\n",sizeof( unsigned int));
	printf("la taille d'un signed int est : %ld\n",sizeof(signed int));
	printf("la taille d'un long int est : %ld\n",sizeof(unsigned long int));
	printf("la taille d'un signed long int est : %ld\n",sizeof(signed long int));
	printf("la taille d'un long long int est : %ld\n",sizeof(unsigned long long int));
	printf("la taille d'un signed long long int est : %ld\n",sizeof(signed long long int));
	printf("la taille d'un float est : %ld\n",sizeof(float));
	printf("la taille d'un double est : %ld\n",sizeof(double));
	printf("la taille d'un long double est : %ld\n",sizeof(long double));
	return 0;

}
