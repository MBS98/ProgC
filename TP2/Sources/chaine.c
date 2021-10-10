/* Bibliothèques */

#include <stdio.h>

/*---------------------------------------------------------*/

int main () {
  printf("\n------ Exercice 2.4 : Chaine ------\n\n");
	
	char chaine1[] = {"Hello"};
	char chaine2[] = {"World!"};

	int n1 = (sizeof(chaine1)/sizeof(char))-1;
	int n2 = (sizeof(chaine2)/sizeof(char))-1;
	int n3 = n1; //on met la taille de la chaine qu'on souhaite copier
	int n4 = n1+n2;

	char chaine3[n3]; //copie de chaine 1
	char chaine4[n4]; //concatenation de la chaine 1 et 2

	printf("La taille de la chaine 1: %d\n", n1);
	printf("La taille de la chaine 2: %d\n", n2);

	/* copie */

	printf("Chaine3 copie de chaine1:");
	for (int i = 0; i <= n3; i++) {

	chaine3[i] = chaine1[i];
	printf("%c", chaine3[i]);

	}

	printf("\n");

	/* concatenation */

	for (int j=0; j<=n1; j++){

	chaine4[j]=chaine1[j]; //copie le contenu de chaine1 dans la premiere partie de la chaine
	chaine4[j+n1+1]=chaine2[j]; // copie le contenu de chaine2 en meme temps dans la 2eme partie

	}

	printf("chaine4 concatenation de chaine 1 et chaine 2: ");
	for (int k = 0; k <= n4; k++) {

	printf("%c", chaine4[k]);

	}
	printf("\n");
	
return 0 ;

}
