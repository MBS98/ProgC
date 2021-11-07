#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define m 27

int string_compare(char str1[], char str2[])
{
    int ctr=0;

    while(str1[ctr]==str2[ctr])
    {
        if(str1[ctr]=='\0'||str2[ctr]=='\0')
            break;
        ctr++;
    }
    if(str1[ctr]=='\0' && str2[ctr]=='\0'){
	printf("yes\n");
        return 0;}
    else{
	printf("no\n");
        return -1;}
}

int main (){

	char *str1 = "mot6"; // le mot a chercher
	int oui = 0; // compteur 

	char *fichier = "./chercherfichier.txt"; // nom du fichier
	int dimension = 10; // nombre de lignes du fichier

	printf("Nous allons parcourir le fichier %s et on veut vérifier l existance du mot: %s\n", fichier, str1);

	FILE * fd=NULL;
	const char *stock;
        char **tab;
	int ctr = dimension;
	int ligne[dimension];
        tab= (char**)malloc(dimension*sizeof(char*));
        int i = 0;
        char chaine[1024];

            //remplissage du tableau avec le contenu du fichier 
         fd = fopen(fichier, "r" );
           i=0;
           
       if (fd == NULL)
    {
        printf("Impossible d ouvrir le fichier\n" );
        exit(42);
    }  
    while (ctr >= 0){
                          stock= fgets(chaine, 1024, fd);
                          tab[i] = (char*)malloc((strlen(stock)+1)*sizeof(char));
                          strcpy(tab[i],stock);
			  tab[i][strlen(tab[i]) - 1] = '\0'; //'fgets' enregistre le caractère '\n' comme dernier caractère lorsqu'on appuie sur la touche Entrée
			  if ( strcmp(tab[i], str1) ==0){ //methode 1: on compare le contenu de la ligne actuelle au contenu de str1 avec strcmp
				oui++; //on compte le nombre de fois qu ele mot est present
				ligne[i] = i;// on enregistre la ligne sur laquelle le mot est present
			  }
			  else 
				ligne[i] = 0;
                          
			  --ctr;
                         i++;
			  }
	fclose(fd); 

if (oui != 0) {
		printf("Le mot est present dans le fichier %d fois:\n", oui);
		for (int j = 0; j < dimension; j++){
			if (ligne[j] != 0){
				printf("1 fois dans la ligne %i\n", ligne[j]);
			}

		}
	}
else {
	printf("Le mot n'est pas present dans le fichier.\n");
}
/*dimension = 10;

for(int i = 0; i<dimension; i++){ //mathode 2: on compare le contenu du tableau avec str1 en utilisant une fonction qu on a ecrit (string_compare)

	//string_compare(str1, tab[i]); 
}*/


return 0;
}
