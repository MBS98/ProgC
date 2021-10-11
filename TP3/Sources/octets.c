/* Bibliothèques */

#include <stdio.h>

/* ---------------------------------------------------------- */

  int main() {
  int i = 0;

  // Taille d'une variable de type short
  short s = 100; //on definit la variable
  char *ptrs = (char*)&s; //on definit un pointeur
  printf("la taille de la variable de type short est = ");
  for (i = 0 ; i < sizeof(s) ; i++){ //on parcourt tous les octets de la variable
      ptrs++; //on incremente le pointeur pour passer a l'octet suivant
      printf("%hhx",ptrs);

  }
  printf("\n");

  // Taille d'une variable de type int
  printf("la taille de la variable de type int est = ");
  int d = 12365;
  char *ptrd = (char*)&d;
  for (i = 0 ; i < sizeof(d) ; i++){
      ptrd++;
      printf("%hhx",ptrd);
  }
  printf("\n");

  // Taille d'une variable de type long int
  printf("la taille de la variable de type long int est = ");
  long int ld = 15425;
  char *ptrld = (char*)&ld;
  for (i = 0 ; i < sizeof(ld) ; i++){
      ptrld++;
      printf("%hhx",ptrld);
  }
  printf("\n");

  // Taille d'une variable de type float
  printf("la taille de la variable de type float est = ");
  float f = 13.8965;
  char *ptrf = (char*)&f;
  for (i = 0 ; i < sizeof(f) ; i++){
      ptrf++;
      printf("%hhx",ptrf);
  }
  printf("\n");

  // Taille d'une variable de type double
  printf("la taille de la variable de type double est = ");
  double g = 4.569;
  char *ptrg = (char*)&g;
  for (i = 0 ; i < sizeof(g) ; i++){
      ptrg++;
      printf("%hhx",ptrg);
  }


// Taille d'une variable de type long double
  long double lg = 16985.74223;
  char *ptrlg = (char*)&lg;
  for (i = 0 ; i < sizeof(lg) ; i++){
      ptrlg++;
      printf("%hhx",ptrlg);
  }

  printf("\n");
  return 0 ;
}
