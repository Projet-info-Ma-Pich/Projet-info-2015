CFLAGS=-g -I./Headers
LDFLAGS= -lm

main: main.o fonctions.o liste.o graphe.o
	gcc -o $@ $^  $(LDFLAGS)
Test_Table_Hashage: Test_Table_Hashage.o fonctions.o liste.o graphe.o
	gcc -o $@ $^  $(LDFLAGS)
Test_Liste_Successeur: Test_Liste_Successeur.o fonctions.o liste.o graphe.o
	gcc -o $@ $^  $(LDFLAGS)
Test_Dijkstra: Test_Dijkstra.o fonctions.o liste.o graphe.o
	gcc -o $@ $^  $(LDFLAGS)
	
%.o: Sources/%.c
	gcc -c $<  $(CFLAGS)
