//Napisz funkcjê, która dostaje jako parametry wskaŸnik do dynamicznej dwuwymiarowej tablicy typu double 
//oraz jej wymiary n, m i zwalnia pamiêæ u¿ywan¹ przez tê tablicê.

#include <stdio.h>
#include <stdlib.h>

void fun(double **tablica, int n){
	
	int i = 0;
	for(i=0; i<n; i++){
		free(tablica[i]);
	}
	free(tablica);
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
			
	fun(tablica,n);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%lf ", tablica[i][j]);
		}
		printf("\n");
	}
	 return 0;	
}
