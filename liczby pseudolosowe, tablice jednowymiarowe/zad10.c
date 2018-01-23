//Napisz funkcjê, która dostaje jako parametry tablicê tab liczb ca³kowitych oraz jej rozmiar i nadaje wartoœæ 0 wszystkim 
//komórkom tablicy tab o powtarzaj¹cych siê wartoœciach (czyli "zeruje" wszystkie wyst¹pienia danej wartoœci poza pierwszym).
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
