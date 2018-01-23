#include <stdio.h>

int funkcja(int *wsk, int *wsk2){
	
	if(*wsk>*wsk2) return wsk;
	else return wsk2;
	
}

int main(){
	
	int wsk = 10;
	int wsk2 = 34;
	
	printf("Max to %d", funkcja(&wsk, &wsk2));
	
	return 0;
	
}
