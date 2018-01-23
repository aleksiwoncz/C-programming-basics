#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char *napis = (char*) malloc(sizeof(char*));
	fgets(napis, 24, stdin);
	
	long long int n = atol(napis);
	
	printf("Liczba to %lld", n);
	
	return 0;
}
