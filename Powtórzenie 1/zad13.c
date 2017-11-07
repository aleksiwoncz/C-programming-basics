#include <stdio.h>

int main(){
	
	int n, suma, przek; 
	
		do{	printf("Podaj liczbe naturalna:");
			scanf("%d\n", &n);
			suma+=n;
		}
			while(suma<100);
	
	przek = suma - 100;
	printf("Podane liczby przekroczyly wartosc 100 o %d", przek);

	return 0; 
}	

