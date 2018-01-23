//Napisz program, kt�ry wczyta od u�ytkownika liczb� ca�kowit� n, dynamicznie zaalokuje tablic� n 
//liczb zmiennoprzecinkowych, wczyta je wszystkie od u�ytkownika, wypisze ich maksimum, minimum,
// �redni� i sum�, a nast�pnie zwolni pami�� zajmowan� przez t� tablic�.
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n;
	printf("Podaj n: \n");
	scanf("%d", &n);
	
	double *tablica;
	tablica = (double*) malloc(n*sizeof(double));
	
	int i = 0;
	for(i=0; i<n; i++){
		scanf("%lf", &tablica[i]);
	}
	
	double max = tablica[0];
	for(i=0; i<n; i++){
		if(max<tablica[i]) max = tablica[i];
	}
	printf("MAX TO %lf\n", max);
	
	double min = tablica[0];
	for(i=0; i<n; i++){
		if(min>tablica[i]) min = tablica[i];
	}
	printf("MIN TO %lf\n", max);
	
	double suma = 0;
	for(i=0; i<n; i++){
		suma+= tablica[i];
	}
	printf("Suma TO %lf\n", suma);

	double srednia = suma / n;
	printf("SREDNIA TO %lf \n", srednia);
	
	free(tablica);
	tablica = NULL;
	return 0;
}
