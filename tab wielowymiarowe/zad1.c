#include <stdio.h>
#include <stdlib.h>

double **fun(int n, int m){
	
	double **tablica;
	tablica = malloc(n*sizeof(double**));
	int i;
	for(i=0; i<n; i++)
		tablica[i] = malloc(m*sizeof (double*));
	
	return tablica;
}

int main(){
	
	int n = 2; int m = 5;
	double **tab = fun(n, m);
	
	int i, j;
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			tab[i][j] = i * j;
			
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%lf ", tab[i][j]);
		}
		printf("\n");
	}
	 return 0;	
}
