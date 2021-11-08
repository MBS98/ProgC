#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>  
#include <sys/socket.h>
#include <netinet/in.h>

#include <dirent.h> 
// Pour l'utilisation des dossiers 

#ifndef WIN32
    #include <sys/types.h>
#endif

#include "repertoire.h"

void lire_dossier(char *nom_dossier){

DIR* rep = opendir(nom_dossier); /* Ouverture d'un dossier */

if (rep == NULL){ /* Si le dossier n'a pas pu être ouvert */
	printf("mauvais chemin\n");
	exit(1); /* (mauvais chemin par exemple) */
	}
else {
	printf("Le dossier a ete ouvert avec succes\n");
};
struct dirent * ent;
	while(1) {
		ent = readdir(rep);
		if (ent == NULL) {
			break;
 	 	}
		printf("%s\n", ent->d_name);
 }

if (closedir(rep) == -1) { /* S'il y a eu un souci avec la fermeture */
	printf("souci avec la fermeture\n");
        exit(-1);
	}
else {
	printf("Le dossier a ete ferme avec succes\n");
};

printf("\n");
}

void lire_dossier_recursif(char *nom_dossier){

	char chemin[4096];
	int compt = 0;
	struct dirent * ent; /* opendir() renvoie un pointeur de type DIR */
	struct dirent * ent2;
	struct dirent * ent3;

	DIR* rep = opendir(nom_dossier); /* Ouverture d'un dossier */

	if (rep == NULL){ 
		printf("mauvais chemin\n");
		exit(1); /* (mauvais chemin par exemple) */
		}

	/*if (rep)
	    {
		while (ent->d_type == DT_DIR)
		{
			compt++;
		}
		closedir(rep);
	    }
	printf("\n");*/

	DIR* rep2 = opendir(nom_dossier);
	/*if (compt != 0)
	    {
		while ((ent2 = readdir(rep2)) != NULL)
		{
		    	printf("%s  ", ent->d_name);
		}
		closedir(rep2);
	    }
	printf("\n");*/

	while ((ent2 = readdir(rep2)) != NULL)
		{
		    	printf("%s  ", ent2->d_name);
		}
		closedir(rep2);

	DIR* rep3 = opendir(nom_dossier);

	while ((ent3 = readdir(rep3)) !=NULL){
	    
		if (ent3->d_type == DT_DIR){
		
			if (strcmp(ent3->d_name, ".")!=0 && strcmp(ent3->d_name, "..")!=0){

		   	    printf("\n\n'%s':\n", ent3->d_name);
			    strcpy(chemin, nom_dossier);
			    strcat(chemin,"/");
			    strcat(chemin, ent3->d_name);
			    lire_dossier_recursif(chemin);
	      		}
		}

		else {
			printf("->%s  ", ent3->d_name);
		}
		        
	}
	if (closedir(rep2) == -1) { /* S'il y a eu un souci avec la fermeture */
		printf("souci avec la fermeture\n");
		exit(-1);
		}

	printf("\n");
	
}



