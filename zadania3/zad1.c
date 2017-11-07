#include <stdio.h>

float pole (float a, float h)
{
	return (a*h) / 2.0;
}

int main(){
	
	float wynik = pole(2.5, 8);
	printf("Pole trojkata wynosi %f", wynik);
	return 0;
}
