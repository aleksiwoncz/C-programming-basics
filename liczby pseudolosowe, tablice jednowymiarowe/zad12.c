/*Napisz funkcj�, kt�ra dostaje jako parametry tablic� liczb ca�kowitych, jej rozmiar oraz liczb� a. 
Program powinien do tablicy zapisa� liczb� a w systemie dw�jkowym*/
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
