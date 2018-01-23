#include <stdio.h>

int max(int tab[], int rozmiar){
	
	int max = tab[0];
	int i;
	for(i = 0; i<rozmiar; i++){
		if(tab[i] > max)
		max = tab[i];
	}
	return max;
}

int main(){
	
	int tab[5] = {1, 2, 3, 34, 5};
	printf("Max = %d", max(tab, 5));
	
	return 0;
}
