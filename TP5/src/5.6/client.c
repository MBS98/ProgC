/*
 * SPDX-FileCopyrightText: 2021 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>  
#include <sys/socket.h>
#include <netinet/in.h>
#include <dirent.h>

#include "client.h"

/* 
 * Fonction d'envoi et de réception de messages
 * Il faut un argument : l'identifiant de la socket
 */

int recois_envoie_message(int socketfd){
	int tab_notes[5][5] = {0,0};
	int note = 0;
	char data[25];
	int l = 0;
	memset(data, 0, sizeof(data));
  	

	for (int i = 1 ; i <= 5 ; i++){
		for (int j = 1 ; j <= 5 ; j++) {
			char nom[1000]="./etudiant/";
			int length = snprintf(NULL,0,"%d",i);
			char *num_dossier = malloc(length + 1);
			snprintf(num_dossier, length + 1, "%d", i);
			strcat(nom,num_dossier);
			strcat(nom,"/note");
			int length_1 = snprintf(NULL,0,"%d",j);
			char *num_fichier = malloc(length_1 + 1);
			snprintf(num_fichier, length_1 + 1, "%d", j);
			strcat(nom,num_fichier);
			strcat(nom,".txt");
			FILE *fic = fopen(nom,"r");
			fscanf(fic,"%d",&note);
			tab_notes[i-1][j-1] = note;
			fclose(fic);
	}
	}

	for ( int k = 0 ; k < 5 ; k ++) {
		for ( int m = 0; m <5; m++) {
			data[l] =tab_notes[k][m];
			l ++;
	}
	}

  int write_status = write(socketfd, data, strlen(data));
  if ( write_status < 0 ) {
    perror("erreur ecriture");
    exit(EXIT_FAILURE);
  }

  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));


  // lire les données de la socket
  int read_status = read(socketfd, data, sizeof(data));
  if ( read_status < 0 ) {
    perror("erreur lecture");
    return -1;
  }

  printf("Message client recu:\n");
  	for (int p = 0 ; p < 5 ; p++ ){
	printf("l'etudiant %d a pour somme de notes %d et une moyenne %d\n",p+1,data[p],data[p]/5);
	}
	for (int p = 0 ; p < 5 ; p++ ){
	printf("la moyenne de la classe dans la matière %d est %d\n",p+1,data[p+5]/5);
	}

return 0;
}


int main() {
  int socketfd;
  int bind_status;

  struct sockaddr_in server_addr, client_addr;

  /*
   * Creation d'une socket
   */
  socketfd = socket(AF_INET, SOCK_STREAM, 0);
  if ( socketfd < 0 ) {
    perror("socket");
    exit(EXIT_FAILURE);
  }

  //détails du serveur (adresse et port)
  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  server_addr.sin_addr.s_addr = INADDR_ANY;

  //demande de connection au serveur
  int connect_status = connect(socketfd, (struct sockaddr *) &server_addr, sizeof(server_addr));
  if ( connect_status < 0 ) {
    perror("connection serveur");
    exit(EXIT_FAILURE);
  }

  // appeler la fonction pour envoyer un message au serveur

  recois_envoie_message(socketfd);

  close(socketfd);

}


