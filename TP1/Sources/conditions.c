#include <stdio.h>
int main () {

	printf("les nombres divisibles par 2 ou 15 sont : \n");
	for (int i = 0; i <= 1000; i++) {
		if (i % 2 == 0 & i % 15 == 0) {
			printf(" %d ",i ) ;
		}	
	}


	int j = 0 ;
	printf("les nombres divisibles par 103 ou 107 sont : \n");	
	while ( j <=1000 ) {
		if (j % 103 == 0 || j % 107 == 0){
			printf("%d ",j);
		}
	j ++;
	}
	

	int k = 0;
	printf("les nombres divisibles par 7 ou 5 mais pas 3 sont : \n");
	do {
		if ((k % 5 == 0) || (k % 7 == 0) & (k % 3 != 0)){
			printf("%d ",k);		
		}
	k++;
	} while(k <= 1000);

	return 0;

}
