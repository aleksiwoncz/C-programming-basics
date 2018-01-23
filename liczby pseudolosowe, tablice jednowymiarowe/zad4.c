#include <stdio.h>
#include <stdbool.h>

bool funkcja(){	
	int tab[5];
	int suma = 0;
	
	int i=0;
	for( ; i<5; i++)
{
	scanf("%d", &tab[i]);
}
	
	for( ;i<5; i++)
{
	suma += tab[i]*tab[i];
}

	if(suma>30) return true;
	else return false;
}

