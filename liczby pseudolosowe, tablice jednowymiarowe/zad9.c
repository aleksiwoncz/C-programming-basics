 #include <stdio.h>
 int fun(int tab[], int n){
 	
 	int i;
 	int max = tab[0];
 	for(i=0; i<n; i++){
 		if(tab[i]>max) 
		 max = tab[i];
	 }
	int zmienna = tab[0];
	for(i=0; i<n; i++){
 		if(tab[i]>zmienna && zmienna!=max) 
		 zmienna = tab[i];	
	}
	
	return zmienna;
	 	 
 }
  int main(){
  	int tab[] = {-6, 10, 2, 4, 218};
  	int n = 4;
  	printf("Drugi co do wartosci to %d", fun(tab, n));
  	
  	return 0;
  }
