#include <stdio.h>
#include <stdlib.h>

double *funkcja(double *a){
	 free(a);
	 a = NULL;
	 return a;
}

int main(){
	
	double *a;
	a = malloc(sizeof(double*));
	*a = 60;
	double *wynik = funkcja(a);
	
	if(wynik==NULL) printf("A jest nullem");
	else printf("A nie jest nullem");
	
	return 0;
	
}
