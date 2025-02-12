//
//  liste.h
//  
//
//  Created by Lucas MAHIEU le 18.04.15.
//
//

#ifndef _liste_h
#define _liste_h

typedef struct t_sommet* T_SUCC;
typedef struct lsucc* L_SUCC;

struct lsucc {
	T_SUCC val;
	struct lsucc* suiv;
}; // *L_SUCC

struct t_sommet{
	char* mot;
	L_SUCC Liste_succ;
	int cout;
	struct t_sommet* pere;	
}; // *T_SOMMET


typedef L_SUCC L_SOMMET;

typedef struct t_graphe{
	L_SOMMET* table;
	int taille;
} T_GRAPHE;

typedef L_SUCC Liste;  // pour bien comprendre que notre type 'Liste' d'avant c'est bien la meme chose que L_SUCC ou L_SOMMET
// de cette facon on pourra réutiliser quelque fonction sur les listes deja faite en TD



#endif

