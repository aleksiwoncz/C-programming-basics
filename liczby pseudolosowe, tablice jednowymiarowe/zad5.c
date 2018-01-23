#include <stdio.h>

void funkcja(float tab1[], float tab2[], int rozmiar){	
 
 int i;
 for(i=0; i<rozmiar; i++)
 tab1[i] = tab2[i];
}

int main(){
	float tab1[7];
	float tab2[7] = {3, 4, 98, 3, 2, 6, 7};
	funkcja(tab1, tab2, 7);
	
	int i = 0;
	for( ; i<7; i++){
		printf("%f", tab1[i]);
	}
	
	return 0;
}
