/*Napisz funkcjê, która dostaje jako parametry tablicê liczb ca³kowitych, jej rozmiar oraz liczbê a. 
Program powinien do tablicy zapisaæ liczbê a w systemie dwójkowym*/
#include <stdio.h>

void fun(int tab[], int n, int a)
{
	int i = 0;
	for(i; i<n; i++)
	{
		tab[i] = a % 2;
		a = a / 2;
	}
	while(i>0)
	{
		i--;
		printf(" %d",tab[i]);
	}
}

int main(){
	
	int tab[5];
	fun(tab, 5, 9);
	
	return 0;
}
