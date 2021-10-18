#include <stdio.h>

// Fonction récurssive
int factorielle ( int num ) {
	if (num == 0 ){
		return 1 ;
	}
	else {
		return ( num * factorielle (num - 1));
	}
}


int main (int argc, char **argv) {
	int num;
	printf("Tapez la valeur de l'entier que vous voulez calculer le factorielle ");
	scanf("%d", &num); // On récupère l'entier qu'on veut calculer le factorielle depuis le terminal
	int resultat = factorielle (num); // On appelle la fonction factorielle
	printf("le factorielle de %d est = %d ", num,resultat);

		
return 0 ;
}
