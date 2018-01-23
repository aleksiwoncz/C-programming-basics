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

double szukaj(char **tablica, int n, int m, char szukane){
	
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(tablica[i][j] == szukane)
				return 1;
		}
}
}

double sprawdz(char **tablica1,char **tablica2, int n1, int m1, int n2, int m2){
	
	int i,j;
	for(i=0; i<n1; i++) 
	{
		for(j=0;j<m1; j++) 
		{
			if(!szukaj(tablica2, n2, m2, tablica1[i][j]))
				return 0;
		}
	
	}
	return 1;
}


int main(){
	
	int n = 4; int m = 4, i, j;
	
	char **tab1 = fun(n,m);
	char **tab2 = fun(n,m);
		
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%c", &tab1[i][j]);
		}
			
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%c", &tab2[i][j]);
		}
			
	}
	if(sprawdz(tab1, tab2,n,m,n,m) && sprawdz(tab2, tab1,n,m,n,m)){
		printf("Takie same");
	}
	else printf("Rozne");

	
	 return 0;	
}

