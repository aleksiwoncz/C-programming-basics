#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char *napis = (char*) malloc(sizeof(char*));
	fgets(napis, 24, stdin);
	
	double n = strtof(napis, NULL);
	
	printf("Liczba to %f", n);
	
	return 0;
}
