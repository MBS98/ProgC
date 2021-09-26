#include <stdio.h>
#include <math.h>
int main() {
	float rayon = 5.5 ;
	//aire = M_pi*powf(rayon,2);
	//perim = 2*M_PI*rayon;
	printf("l'aire du cercle de rayon %.2f est : %.4f\n",rayon,M_PI*rayon*rayon);
	printf("le périmètre du cercle de raon %.2f est : %.4f\n",rayon,2*M_PI*rayon);
	return 0;
}

