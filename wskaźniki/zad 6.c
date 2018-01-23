//Napisz program, który wczyta od u¿ytkownika liczbê ca³kowit¹ n, dynamicznie zaalokuje tablicê n 
//liczb zmiennoprzecinkowych, wczyta je wszystkie od u¿ytkownika, wypisze ich maksimum, minimum,
// œredni¹ i sumê, a nastêpnie zwolni pamiêæ zajmowan¹ przez tê tablicê.
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
