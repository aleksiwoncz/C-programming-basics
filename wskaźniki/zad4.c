#include <stdio.h>
#include <stdlib.h>

float *funkcja(){
	 float *a;
	 a = malloc(sizeof(float*));
	 return a;
}

int main(){
	
	float *a = funkcja();	
	*a = 5.79 / 2.0;

	printf("Adres to %p", a);
	
	return 0;
	
}
