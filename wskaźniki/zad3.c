#include <stdio.h>

int funkcja(int *wsk, int *wsk2){
	
	if(wsk>wsk2) return wsk;
	else return wsk2;
	
}

int main(){
	
	int wsk = 10;
	printf("adres wsk to %d\n", &wsk);
	int wsk2 = 34;
	printf("adres wsk2 to %d\n", &wsk2);

	
	printf("\nMax to %d\n", funkcja(&wsk, &wsk2));
	
	return 0;
	
}
