#include <stdio.h>

int suma(int n){
	
	int i;
	int wynik = 0;
	for(i=0; i<=n; i++){
	
		if(i%2!=0)
			wynik += i;
		 
	}
	return wynik;
	}
 	
 	int main(){
 		printf("%d", suma(7));
 		return 0;
	 }
