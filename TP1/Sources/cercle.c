/* Bibliothèques*/

#include <stdio.h>
#include <math.h>

/* -----------------------------------------------------------------------------------*/
int main() {
	printf("\n------ Exercice 1.2 : Cercle ------\n\n");
	float rayon = 5 ;
	//aire = M_pi*powf(rayon,2);
	//perim = 2*M_PI*rayon;
	printf("l'aire d'un cercle de rayon %.2f est : %.4f\n",rayon,M_PI*rayon*rayon); 
	printf("le périmètre d'un cercle de rayon %.2f est : %.4f\n\n",rayon,2*M_PI*rayon);
	return 0;
}

