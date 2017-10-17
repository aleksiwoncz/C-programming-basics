#include <stdio.h>

int main (){
	
	double a;
	double b;
	double c;
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	double wynik = a * b * c;
	
	printf("%f", wynik);
	
	return 0; 
}
