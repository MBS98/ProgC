#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <netinet/in.h>

#include "repertoire.h"

/* 
 * Fonction de parcourt le répertoire saisi par l'utilisateur et affiche les noms des fichiers (eet répertoires, si aucun) dans ce répertoire
 */

void lire_dossier(char* nom_dossier){

	DIR* dirp = opendir(nom_dossier);

	// Gérer les erreurs du chemin
	if (dirp == NULL) {
		//perror("opendir");
		printf("mauvaix chemin d'accès\n");
		exit(1);
	}
	else {
		printf("Dossier ouvert avec succès\n");
	}

	struct dirent * ent ;
	while(1) {
		ent = readdir(dirp);
		if (ent == NULL) {
			break;
		}
	printf("%s\n", ent->d_name);
	}
	
	// Gérer les erreurs de fermeture
	if (closedir(dirp) == -1) {
		printf("Souci avec la fermeture\n");
		exit(-1);
	}
	else {
		printf("le dossier a été fermé avec succès\n");
	}	

}


int main(int argc, char** argv){
	if(argc < 2) {
		printf("Usage: readdir path (pas assez d'arguments)\n");
		return(EXIT_FAILURE);
	}
	char* nom = argv[1];
	printf("Ouverture du %s en cours\n",nom);
	lire_dossier(nom);
	

return 0 ;
}
