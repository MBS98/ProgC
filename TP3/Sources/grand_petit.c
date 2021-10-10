#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

      int n=100; //initialisation des variables
      int tab[n];
      int petit=0;
      int grand=0;

      srand(time(0)); //pour eviter qu on genere la meme sequence de nombres aleatoires a chaque compilation

      for (int i=0; i<n; i++){ //initialisation du tableau avec des valeurs random
      tab[i]=rand();
      }

      for (int j=0; j<n; j++){ //affichage du tableau
      printf("%i\n",tab[j]);
      }

      petit = tab[0];

      for (int i=0; i<n; i++){ //on parcourt le tableau et on compare la valeur courante

      if (tab[i]<petit){ //si elle est inferieure a la valeur stoquee dans petit on permute
      petit = tab[i];
      }


      if (tab[i]>grand){ //si elle est superieure a la valeur stoquee dans grand on permute
      grand = tab[i];
      }

      }

      printf("\nLa valeur la plus petite: %i\n", petit);
      printf("La valeur la plus grande: %i\n", grand);
      
      return 0;
}
