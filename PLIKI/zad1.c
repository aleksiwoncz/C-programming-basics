// Zadanie 1: Napisz program, kt�ry wypisze liczb� znak�w w pliku, kt�rego nazwa jest podana jako parametr wywo�ania programu.

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){
	
	if(argc<2){
		printf("BLAD");
		exit(2);
	}
	FILE *f;
	f = fopen("plik.docx", "r");
	if(!f)
	{
		perror("Problem z plikiem");
		exit(1);
	}
	
	int suma = 0;
	char c;
	while((c= fgetc(f)) != EOF){
		printf("%c", c);
		suma++;
	}
	
	printf("\nSuma znak�w: %d", suma);
	
	return 0;
}
