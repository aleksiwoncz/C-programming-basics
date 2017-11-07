#include <stdio.h>

	int liczba (int n){
	int a;
	int wynik = 0;
	for(a = 1; a<n; a++){
		
			 wynik= a * a;
}
	return wynik;
}
	
	int main(){
		
		printf("%d\n", liczba(5));
		 return 0;
	}
