#include <stdio.h>

int main (){
	
	double a;
	double b;
	double c;
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	double wynik = 3.0 / (1/a) + (1/b) + (1/c);
	
	printf ("%f", wynik);
	
	return 0;
	
}
