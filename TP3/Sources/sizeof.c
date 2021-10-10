#include <stdio.h>

int main(){


    printf("%li\n",sizeof (int));  //affiche 4 octets car c est la taille d une variable de type int 
    printf("%li\n",sizeof (int *)); //affiche 8 octets car c est un pointeur ver sune variable et c est donc une adresse 
    printf("%li\n",sizeof (int **)); //affiche 8 octets car c est un pointeur vers un pointeurs vers une variable, c est donc quand meme une adresse et c est sur 8 octets 
    printf("%ld\n",sizeof (char *));
    printf("%ld\n",sizeof (char **));
    printf("%ld\n",sizeof (char ***));
    printf("%ld\n",sizeof (float ));
    printf("%ld\n",sizeof (float *));
    printf("%ld\n",sizeof (float **));
    printf("%ld\n",sizeof (float ***));
    
    return 0;

}
