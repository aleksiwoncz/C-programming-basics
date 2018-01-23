#include <stdio.h>

int main(){
	
	float tab[5];
	
	int i=0;
	for( ; i < 5; i++){
	scanf("%f", &i);
	tab[i] = i;
}
 	int wynik = tab[0] + tab[1] + tab[2] + tab[3] + tab [4];
 	int artm = wynik / 5;
 	
 	printf("Suma tych liczb to %f, a srednia arytmetyczna to %f", wynik, artm);
 	
 	return 0;
}
