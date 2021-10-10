#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

      srand(time(0));  //pour eviter qu on genere la meme sequence de nombres aleatoires a chaque compilation

      int n = 10;
      int tab[n];
      int tab_tri[n];
      int c;
      int recherche=rand(); //on genere aleatoirement une valeur a rechercher 
      int present =0; // on cree une variable present initialisee a 0


      for (int i=0; i<n; i++){ //on initialise les valeurs du tableau avec des valeurs aleatoires 
      tab[i]=rand();
      }

      for(int k=0; k<n-1; k++){

          for(int j=k+1; j<n; j++){

              if ( tab[k] > tab[j] ) {
                  c = tab[k];
                  tab[k] = tab[j];
                  tab[j] = c;
              }

          }
      }
      printf("Tableau trie:\n");

      for (int l=0; l<n; l++){ //affichage du tableau trie
      printf("%i\n",tab[l]);
      }

      printf("La valeur recherchee: %i\n", recherche);


      int debut =0;
      int fin =n;
      int milieu = (debut + fin)/2;

        while (debut <= fin) {
          if (tab[milieu] < recherche)
            debut = milieu + 1;
          else if (tab[milieu] == recherche) {
            printf("%d est trouve a la case %d.\n", recherche, milieu+1);
            break;
          }
          else
            fin = milieu - 1;

          milieu = (debut + fin)/2;
        }
        if (debut > fin)
          printf("L'entier %d n'est pas present dans la liste.\n", recherche);

      return 0;
}
