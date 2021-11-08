#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <netinet/in.h>
#include <string.h>
#include "repertoire.h"

/* 
 * Fonction de parcourt le répertoire saisi par l'utilisateur et affiche les noms des fichiers (eet répertoires, si aucun) dans ce répertoire
 */

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

void lire_dossier_iteratif(char* nom_dossier){

	int count=-1;
	char* dossier[100];
	dossier[0]=nom_dossier;
	count+=1;
	char* dossier_courrant=dossier[count];
	
	/*l'idée est de créer un tableau qui represente une pile contenant tout les dossiers à oucrire:
    Notre premier dossier sera d'abort inserer dans le tableau
    Après son ouverture on le supprime du tableau
    Après, à chaque fois qu'on rencontre un dossier on l'ajoute et on augmente coun(taille du tab)
    et à chaque fois qu'on ouvre un dossier on decremente count
    et on ne sort de la boucle que si la pile est vide ( count-1 == 0 )*/
	
	while(count+1){
	    dossier_courrant = dossier[count];
	    count-=1;
	    printf("dossier[count] :%s\n count : %i \n",dossier_courrant,count);
		// ouvrir le dossier et gérer les erreurs du chemin
		DIR* dirp = opendir(dossier_courrant);
		if (dirp == NULL) {
			//perror("opendir");
			printf("mauvaix chemin d'accès\n");
			exit(1);
		}
		else {
			printf("Dossier ouvert avec succès\n");
		}
		
		char chemin[4096];
		/* lire le dossier (tous les fichiers et dossiers et fichiers dans dossiers..) 
		d'une manière recursive et gérer les erreurs de la lecture */
		
		//Les fichiers
		
		struct dirent * ent ;
		printf("\n--Dans %s il y'a les dossiers/fichiers suivants :\n",dossier_courrant);
		printf("\n		-----Fichiers-----\n");
		while(1) {
			ent = readdir(dirp);
			if (ent == NULL) {
				break;
			}
			
			if (ent->d_type == 4){
				strcpy(chemin, dossier_courrant);
				strcat(chemin,"/");
				strcat(chemin, ent->d_name);
				printf("%s\n", chemin);
			}
		}

		// fermer le dossier et gérer les erreurs de fermeture
		if (closedir(dirp) == -1) {
			printf("Souci avec la fermeture\n");
			exit(-1);
		}

        //Les dossiers
        
		// ouvrir le dossier et gérer les erreurs du chemin
		dirp = opendir(dossier_courrant);
		if (dirp == NULL) {
			//perror("opendir");
			printf("mauvaix chemin d'accès\n");
			exit(1);
		}

		printf("\n		-----Dossiers-----\n");
		while(1) {
			ent = readdir(dirp);
			if (ent == NULL) {
				break;
			}
			if (ent->d_type == 8){
                if (strcmp(ent->d_name, ".")!=0 && strcmp(ent->d_name, "..")!=0){
    				strcpy(chemin, dossier_courrant);
    				strcat(chemin,"/");
    				strcat(chemin, ent->d_name);
    				printf("%s\n", chemin);
    				count+=1;
    				dossier[count]=chemin;
                }
			}
		}
		printf("\nfin \n\n\n");

		// fermer le dossier et gérer les erreurs de fermeture
		if (closedir(dirp) == -1) {
			printf("Souci avec la fermeture\n");
			exit(-1);
		}
		else {
			printf("le dossier a été fermé avec succès\n");
		}
		count = 0;
		printf("\n\n *******  count = %i ******* \n\n",count);
	}
}


int main(int argc, char** argv){
	if(argc < 2) {
		printf("Usage: readdir path (pas assez d'arguments)\n");
		return(EXIT_FAILURE);
	}
	char* nom = argv[1];
	printf("Ouverture du %s en cours\n",nom);
	lire_dossier_iteratif(nom);
	

return 0 ;
}
