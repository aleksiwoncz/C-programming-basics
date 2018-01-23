//Zadanie 6: Napisz funkcjê, która dostaje jako parametry wskaŸnik do dynamicznej dwuwymiarowej tablicy typu 
//double oraz jej wymiary n, m i zwraca indeks wiersza o najwiêkszej sumie elementów w nim zapisanych.

#include <stdio.h>
#include <stdlib.h>

void zwalniam(double **tablica, int n){
	
	int i = 0;
	for(i=0; i<n; i++){
		free(tablica[i]);
	}
	free(tablica);
}

double indeks_w(double **tablica, int n, int m){
	
	int i,j, indeks; double suma = 0, max = 0;
	for(i=0; i<n; i++){
		for(j=0;j<n; j++){
			suma+= tablica[i][j];
		}
		if(i==0){
		max = suma;
		indeks = i;
	}
		else{
			if(suma>max){
				max = suma;
				indeks = i;
			}
		}
	}
	return indeks;
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
			tablica[i][j] = j - i;
			
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%lf ", tablica[i][j]);
		}
		printf("\n");
	}
	double sumka= suma(tablica, n, m);
	printf("Suma to %lf", sumka);
	
	int zmienna = indeks_w(tablica, n, m);
	printf("\nIndeks to %d", zmienna);
	
	zwalniam(tablica,n);
	
	 return 0;	
}

