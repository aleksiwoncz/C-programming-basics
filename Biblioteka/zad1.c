#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char *napis = (char*) malloc(sizeof(char*));
	fgets(napis, 24, stdin);
	
	double n = atof(napis);
	
	printf("Liczba to %lf", n);
	
	return 0;
}
