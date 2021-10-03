/* Bibliothèques */

#include <stdio.h>

/*---------------------------------------------------------*/

int main () {
  printf("\n------ Exercice 2.4 : Chaine ------\n\n");
	char chaine1[] = "Hello!!";
	char chaine2[] = "Mariem";

	long int n1 = sizeof(chaine1)/sizeof(char)-1;
	long int n2 = sizeof(chaine2)/sizeof(char)-1;

	char concat[n1+n2];

	/*La Taille*/

	printf("la taille de la chaine1 %s est %ld\n",chaine1,n1);
	printf("la taille de la chaine2 %s est %ld\n",chaine2,n2);

	/*Copie*/
	
	/*Concaténation*/
	
	for (int i = 0; i <= n1; i++) {
		concat[i] = chaine1[i];
		concat[n1+i+1] = chaine2[i];
		
	}
	printf(" La concaténation des deux chaines donne : ");

	for (int k = 0 ; k <= n1+n2 ; k++){
	
	printf("%c",concat[k]);
	
	}
	printf("\n");
	
return 0 ;

}
