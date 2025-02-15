
#include "../Headers/main.h" 

int main(int argc,char** argv){
  	T_GRAPHE G;
  	int n,l=0;
	FILE* f1;
	if( ( f1=fopen("test_mot3.txt","r") ) == NULL ) return 1;
	
	int taille_mots = Taille_Mots(f1);
	int nombre_mots = Taille_Fichier(f1);
	
// On creer la table	
	G.table=Creer_Graphe(f1,taille_mots,nombre_mots);
	if(G.table==NULL)return 0;
	G.taille=Taille_Fichier(f1);
	
	while(1){
//On se a place à un certain point dans la table de hashage et on affiche l'ensemble de la liste associée
	    	printf("Quelle position dans la table ? \n");
	    	scanf("%d",&n); 
// On affiche chaque mot de la table pour prouver le fonctionneemnt de toutes ces focntions	    	
		Visualiser_Liste(*((G.table)+n));
		getchar();
	}
	if((fclose(f1))==0)  return 1;
	for (l=0;l<nombre_mots;l++) free(G.table[l]);
	free(G.table);
	return 0;
}
