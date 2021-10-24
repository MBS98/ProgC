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

void lire_dossier_recursif(char* nom_dossier){
	char chemin [4096];
	DIR* dirp = opendir(nom_dossier);
	DIR* rep = opendir(nom_dossier); 
	DIR* rep3 = opendir(nom_dossier);
	struct dirent* ent ;
	int comp;

	// Gérer les erreurs du chemin
	if (dirp == NULL) {
		//perror("opendir");
		printf("mauvaix chemin d'accès\n");
		exit(1);
	}

 	// Affichage de tous les répertoires existant dans tout le nom_dossier(Vue globale)
	while(1) {
		ent = readdir(rep);
		if (ent == NULL) {
			break;
		}
		if (ent->d_type == DT_DIR){
			compt ++;
		}
	}
	closedir(rep);


	while(1) {
		ent = readdir(dirp);
		if (ent == NULL) {
			break;
		}
		if (ent->d_type == DT_DIR){
			if ((strcmp(ent->d_name,".") != 0) && (strcmp(ent->d_name,"..") != 0)){
				if (compt > 1 ){
					while(1) {
					ent = readdir(rep3);
					if (ent == NULL) {
						break;
					}
					printf("%s\n", ent->d_name);
					}
					closedir(rep3);

				else {
					printf("'./%s:'\n",ent->d_name);
					strcpy(chemin,nom_dossier);
					strcat(chemin,"/");
					strcat(chemin,ent->d_name);
					lire_dossier_recursif(chemin);
				}
		}
			
		else {
			printf("**%s\n", ent->d_name);
		}
	
	}
	
	
	// Gérer les erreurs de fermeture
	if (closedir(dirp) == -1) {
		printf("Souci avec la fermeture\n");
		exit(-1);
	}

	printf("\n");	

}


int main(int argc, char** argv){
	if(argc < 2) {
		printf("Usage: readdir path (pas assez d'arguments)\n");
		return(EXIT_FAILURE);
	}
	char* nom = argv[1];
	printf("Ouverture du %s en cours\n",nom);
	lire_dossier_recursif(nom);
	

return 0 ;
}

//https://man7.org/linux/man-pages/man3/readdir.3.html
//https://broux.developpez.com/articles/c/sockets/
//https://fr.wikipedia.org/wiki/Client-serveur

