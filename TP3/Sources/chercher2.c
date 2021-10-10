// on cree un tableau de tableaux qu on appelle tab et qui contient 10 phrases
// on declare str1 une phrase qu on precisera et dont on va verifier l existance dans tab
// on declare 2 variables oui = 0 et non = 0
// on rentre dans une boucle for qui va parcourir les n lignes de tab
// pour chaque ligne, on copie le contenu de tab (de la ligne courante) dans str2
// on rentre dans une autre boucle for qui va comparer les contenu des 2 phrases (str1 et str2) case par case
// si un element de str2 no correspond pas a lelement str2 de la meme case, on "break" et on sort de la boucle
// on met oui a 0 si les elements ne se correspondent pas
// p.s. la comparaison se fait en comparant les codes ASCII
// si les elements se correspondent on met la variable oui a 1 et on continue
// si le prochain element ne correspond pas on remet oui a 0, sinon on laisse a 1
// si on arrive a la fin de la phrase et que oui est a 1 on print que la phrase est presente
// et on met la variable non a 1
// sinon on passe a la phrase d apres (la ligne suivante de tab) et on garde la variable non a 0
// si on arrive a la fin du tableau et que non est toujours a 0 on print que la phrase n est pas presente

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


#define n 10
#define m 21

int main () {

int oui = 0;
int non = 0;

// on cree et affiche un tableau de 10 lignes

char tab [n][m]= {"Une premiere phrase", "Une deuxieme phrase", "Une troisieme phrase", 
		  "Une quatrieme phrase", "Une cinquieme phrase", "Une sixieme phrase",
		  "Une septieme phrase", "Une huitieme phrase", "Une neuvieme phrase", 
		  "Une dixieme phrase"};


printf("Le contenu du tableau:\n");

for (int i = 0; i<n; i++){

printf("%s \n", tab[i]);

}

// on cree une phrase dont on veut verifier l existance dans le tableau

char str1[m] = {"Une septiemer phrase"};
char str2[m]; // on cree une chaine vide 

printf("On veut verifier l existance de cette phrase dans le tableau: ");

for (int h = 0; h < m; h++){ // on affiche str1

printf("%c", str1[h]);
}
printf("\n");

// On compare l existance de str1 dans tab

for (int i = 0; i < n; i++){

	for (int j = 0; j < m; j++){ // on copie le contenu de la ligne courante de tab dans str2

		str2[j] = tab [i][j];
	}
	
	for (int l = 0; l < m; l++){

		if (str1[l] < str2[l]){
		oui = 0;
		break;
		}

		if (str1[l] > str2[l]){
		oui = 0;
		break;
		}

		else{
		oui = 1;
		}

	}

	if (oui == 1) {
		printf("La phrase est presente dans le tableau\n");
		non = 1;
	}

}

if (non == 0) {
	printf("La phrase n'est pas presente dans le tableau\n");
}

return 0;
}
