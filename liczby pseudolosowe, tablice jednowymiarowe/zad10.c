//Napisz funkcj�, kt�ra dostaje jako parametry tablic� tab liczb ca�kowitych oraz jej rozmiar i nadaje warto�� 0 wszystkim 
//kom�rkom tablicy tab o powtarzaj�cych si� warto�ciach (czyli "zeruje" wszystkie wyst�pienia danej warto�ci poza pierwszym).
#include <stdio.h>

int fun(int tab[], int n){
	
	int i;
	int zmienna = tab[0];
	for(i=0;i<n;i++){
		if(zmienna==tab[i]) tab[i] = 0;
		zmienna++;
	}
	return tab[i];
}
int main(){
	int tab[]={6,7,3,6,2,7,8,9};
	int n = 7, i;
	fun(tab, n);
	for(i=0;i<=n;i++){
		printf("%d", tab[i]);
	}
	return 0;
}
