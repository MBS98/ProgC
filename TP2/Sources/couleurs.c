#include <stdio.h>
int main() {
	printf("\n------ Exercice 2.7 : couleurs ------\n\n");
	/* structure couleurs */
	struct couleur{
		unsigned char r;
		unsigned char b;
		unsigned char v;
		unsigned char alpha;
	};

	struct couleur couleurs[10];
	
	int i;	
	for (i=0;i<10;i++){
		couleurs[i].r = 0xef;
		couleurs[i].b = 0x78;
		couleurs[i].v = 0x55;
		couleurs[i].alpha = 0x03;
	}
	
	for (i=0;i<10;i++){
		printf("couleurs[%i] = rouge:0x%2.2x, bleu:0x%2.2x , vert:0x%2.2x, alpha:0x%2.2x \n",i,couleurs[i].r,couleurs[i].b,couleurs[i].v,couleurs[i].alpha);
	}
	
	printf("\n");
	return 0;
}

