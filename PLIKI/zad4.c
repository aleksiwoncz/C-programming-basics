#include <stdio.h>
#include <stdlib.h>

struct dane{
	char imie[35];
	char nazwisko[50];
	int wiek;
	float wskint;
};
int main(int argc, char **argv){
	
	FILE *f;
	f = fopen(argv[1], "r");
	if(!f)
	{
		perror("Problem z plikiem");
		exit(1);
	}
 	struct dane *tablica = malloc(1*sizeof(struct dane));
 	int i = 0;
 	while(fscanf(f, "%s %s %d %f", tablica[i].imie, tablica[i].nazwisko, &tablica[i].wiek,&tablica[i].wskint) != EOF){
 		tablica = realloc(tablica, (i+2) * sizeof(*tablica));
 		i++;
	 }
	 int rozmiar = i;
	 for(i=rozmiar - 1; i>=0; i--)
	 	printf("%s %s %d %f", tablica[i].imie, tablica[i].nazwisko, tablica[i].wiek, tablica[i].wskint);
	
	return 0;
}
	
