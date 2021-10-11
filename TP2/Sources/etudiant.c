/* Bibliothèques */

#include <stdio.h>

/*---------------------------------------------------------*/

int main () {
  printf("\n------ Exercice 2.5 : Etudiant ------\n\n");
  printf("Nom, Prénom, Adresse, Note C, Note SE\n\n");
	int notes_C[5]= {10,5,18,12,7};
	int notes_SE[5]={2,11,19,4,16};
	char nom[5][36]={"Ben Salah","Taider","Gasri","Fedhila","chennoufi"};
	char prenom[5][25]={"Mariem","Silia","Omar","Emna","Syrine"};
	char adresse[5][42]={"villeurbanne","grange blanche","doua","tunisie","paris"};
	for (int k = 0; k < 5; k++){
		printf("%s,%s,%s,%d,%d",nom[k],prenom[k],adresse[k],notes_C[k],notes_SE[k]);
		printf("\n");

	}
   printf("\n");
return 0 ;
}
