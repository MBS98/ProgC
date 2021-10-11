/* Bibliothèques */

#include <stdio.h>
#include <math.h>
#include <string.h>

/*---------------------------------------------------------*/

int main () {
      printf("\n------ Exercice 2.5 : Etudiant 2 ------\n\n");

      struct etudiant {
          char nom[20];
          char prenom[20];
          char adresse[10];                                                                                                                      0];
          int note1;
          int note2;

      };

      struct etudiant exercice6[5];

      strcpy(exercice6[0].nom,"Taider");
      strcpy(exercice6[0].prenom,"Silia");
      strcpy(exercice6[0].adresse,"Adresse 1");
      exercice6[0].note1 = 19;
      exercice6[0].note2 = 17.5;

      strcpy(exercice6[1].nom,"Ben Salah");
      strcpy(exercice6[1].prenom,"Mariem");
      strcpy(exercice6[1].adresse,"Adresse 2");
      exercice6[1].note1 = 1;
      exercice6[1].note2 = 8;

      strcpy(exercice6[2].nom,"Gasri");
      strcpy(exercice6[2].prenom,"Omar");
      strcpy(exercice6[2].adresse,"Adresse 3");
      exercice6[2].note1 = 9;
      exercice6[2].note2 = 13;

      strcpy(exercice6[3].nom,"Samuel");
      strcpy(exercice6[3].prenom,"John");
      strcpy(exercice6[3].adresse,"Adresse 4");
      exercice6[3].note1 = 20;
      exercice6[3].note2 = 20;

      strcpy(exercice6[4].nom,"Tchenar");
      strcpy(exercice6[4].prenom,"Sami");
      strcpy(exercice6[4].adresse,"Adresse 5");
      exercice6[4].note1 = 12;
      exercice6[4].note2 = 11.6;

      for (int i=0; i<5; i++){

          printf("Etudiant %d: Nom: %s Prenom: %s Adresse: %s Note en maths: %d Note en informatique: %d\n", i, exercice6[i].nom, exercice6[i].prenom, exercice6[i].adresse, exercice6[i].note1, exercice6[i].note2);
      };

      printf("\n");

return 0;

}
