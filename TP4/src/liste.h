struct liste_couleurs {
	unsigned char r;
	unsigned char b;
	unsigned char v;
	unsigned char alpha;
	struct liste_couleurs *suivant;
};

struct couleur{
	unsigned char r;
	unsigned char b;
	unsigned char v;
	unsigned char alpha;
};

void insertion (struct couleur *, struct liste_couleurs *);                
void parcours (struct liste_couleurs *);