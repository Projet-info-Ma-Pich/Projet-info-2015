

#include "../Headers/main.h" 


int main(){

FILE* f1;
if( ( f1=fopen("test_mot3.txt","r") ) == NULL ) return 1;

int taille_mots = Taille_Mots(f1);
int nombre_mots = Taille_Fichier(f1);

int taille_c=0,taille_s=0;
taille_c=nombre_mots;

T_GRAPHE G;
char** p=NULL;

// cration du graphe
	G.table=Creer_Graphe(f1,taille_mots,nombre_mots);
	if(G.table==NULL)return 0;
// maj de sa taille
	G.taille=Taille_Fichier(f1);
// maj des listes de succ
	Recherche_Successeur(G,f1,taille_mots,nombre_mots);
//Choix des mots de dep et d'arrive
	
	
// on initialise notre liste de mots C contenant tous les mots de f1
	char** 	C=Remplissage_Tableau(f1,taille_c,taille_mots);
// on initialise notre liste de mots S vide
	char**  S=NULL;   // on initialise notre liste de mots S vide
	
//   ZONE DE TESTS POUR FONCTION LIEES AU TABLEAU DE MOTS qui servivons au dijkstra

	C = Ajout_Mot_Tableau(C,taille_mots,"sel",&taille_c);  // on ajoute sel
	C = Ajout_Mot_Tableau(C,taille_mots,"mil",&taille_c);  // on ajoute mil
	p = Recherche_Mot_Tableau(C,"sel",taille_c);		// on cherche sel
	if (p) taille_c=Suppression_Dans_Tableau(C,"sel",taille_c); // on le suppr si  il est trouvé
	Suppression_Dans_Tableau(C,"mil",taille_c); // on suppr mil	
}

// fonctionnement valider. les fonction Dijkstra et Afiche chemin seront directement tester dans le .c principale main.c




