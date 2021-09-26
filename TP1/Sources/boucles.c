#include <stdio.h>
int main () {
	for (int i = 0; i < 5; i++){
		for( int j =0; j <= i; j++){
			if ( j >=1 & j < i & i<4 ) {
				printf("# ");
			}
			else {
				printf("* ");
			}
		
		}	
	printf("\n");
	}
	return 0;
}
