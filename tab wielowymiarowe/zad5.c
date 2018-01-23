//Napisz funkcjê, która dostaje jako parametry wskaŸnik do dynamicznej dwuwymiarowej tablicy 
//typu double oraz jej wymiary n, m i zwraca sumê wszystkich elementów tablicy
#include <stdio.h>
#include <stdlib.h>

void zwalniam(double **tablica, int n){
	
	int i = 0;
	for(i=0; i<n; i++){
		free(tablica[i]);
	}
	free(tablica);
}

double suma(double **tablica, int n, int m){
	
	int i = 0; int j = 0;
	double suma = 0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			suma+=tablica[i][j];
		}
	}
	return suma;
}

int main(){
	
	int n = 2; int m = 5;
	
	double **tablica;
	tablica = malloc(n*sizeof(double**));
	
	int i, j;
	for(i=0; i<n; i++)
		tablica[i] = malloc(m*sizeof (double*));
		
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			tablica[i][j] = i * j;
			
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%lf ", tablica[i][j]);
		}
		printf("\n");
	}
	double sumka= suma(tablica, n, m);
	printf("%lf", sumka);
	
	zwalniam(tablica,n);
	
	 return 0;	
}
