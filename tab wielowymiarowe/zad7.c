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

void zwalniam(double **tablica, int n){
	
	int i = 0;
	for(i=0; i<n; i++){
		free(tablica[i]);
	}
	free(tablica);
}

void iloczyn(double **tablica1,double **tablica2, double **tablica3, int n, int m){
	
	int i,j, k; 
	for(i=0; i<n; i++) //wiersze
	{
		for(j=0;j<m; j++) //kolumny
		{
			tablica3[i][j]=0;
			for(k=0;k<m;k++){
				tablica3[i][j]+= tablica1[i][k]*tablica2[k][j];
			}
		}
	
	}
}


int main(){
	
	int n = 2; int m = 5, i, j;
	
	double **tab1 = fun(n,m);
	double **tab2 = fun(n,m);
	double **tab3 = fun(n,m);
		
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &tab1[i][j]);
		}
			
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &tab2[i][j]);
		}
			
	}
	iloczyn(tab1, tab2, tab3, n, m);
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &tab3[i][j]);
		}
			
	}
	zwalniam(tab1,n);
	zwalniam(tab2,n);
	
	 return 0;	
}

