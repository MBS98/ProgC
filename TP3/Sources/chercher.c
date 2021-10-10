#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

      srand(time(0));  //pour eviter qu on genere la meme sequence de nombres aleatoires a chaque compilation

      int n = 100;
      int tab[n];
      int recherche=rand(); //on genere aleatoirement une valeur a rechercher 
      int present =0; // on cree une variable present initialisee a 0

      for (int i=0; i<n; i++){ //on initialise les valeurs du tableau avec des valeurs aleatoires 
      tab[i]=rand();
      }

      for (int j=0; j<n; j++){ //affichage du tableau 
      printf("%i\n",tab[j]);
      }

      printf("La valeur recherchee: %i\n", recherche);

      for (int k=0; k<n; k++){  //on parcourt le tableau et si on trouve la valeur recherchee on change la valeur de present a 1

      if (tab[k]==recherche) {
      present = 1;
      }

      }

      if (present == 1) { //si present est a 1 on offiche que l entier est present 
      printf("Entier present\n");
      }

      else{
      printf("Entier non present\n");
      }

return 0;
}






