#include <stdio.h>
#include <stdbool.h>
void wyswietl(int tab[], int index){
	int i;
	for(i=0; i<index; i++);	
}

bool czyjest(int tab[], int n, int szukane){
	int i;
	for(i=0; i<n; i++){
		if(tab[i]==szukane)
		return true;
	}
	return false;
}

int main(){
	
	int tab[10];
	int i;
	int w;
	for(i=0; i<10; i++){
		scanf("%d", &w);
		if(czyjest(tab, i, w)){
			wyswietl(tab, i);
		}
		else tab[i++]=w;
	}
	return 0;
}
