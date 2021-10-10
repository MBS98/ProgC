#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

      int n = 100;
      int tab[n];
      int tab_tri[n];
      int c;

      srand(time(0));  //pour eviter qu on genere la meme sequence de nombres aleatoires a chaque compilation

      for (int i=0; i<n; i++){ //on initialise les valeurs du tableau avec des valeurs aleatoires 
      tab[i]=rand();
      }

      printf("\nTableau non trie:\n");

      for (int j=0; j<n; j++){ //affichage du tableau non trie 
      printf("%i\n",tab[j]);
      }

      for(int i=0; i<n-1; i++){

          for(int j=i+1; j<n; j++){

              if ( tab[i] > tab[j] ) {
                  c = tab[i];
                  tab[i] = tab[j];
                  tab[j] = c;
              }

          }
      }
      printf("\nTableau trie:\n");

      for (int j=0; j<n; j++){ //affichage du tableau trie
      printf("%i\n",tab[j]);
      }
      return 0;

}
