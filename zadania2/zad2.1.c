#include <stdio.h>
int  max;

int main(){

	int a, b, c;
	printf("Podaj 3 liczby calkowite: \n");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b && a>c) 
	{	max = a;
		}
		
	else if(b>a && b>c)
	{	max = b;
	}
	
	else max = c;
	
	printf("\n Najwieksza liczba to %d", max);
	
	return 0;
}
