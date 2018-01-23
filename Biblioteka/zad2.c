#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char *napis = (char*) malloc(sizeof(char*));
	fgets(napis, 24, stdin);
	
	int n = atoi(napis);
	
	printf("Liczba to %d", n);
	
	return 0;
}
