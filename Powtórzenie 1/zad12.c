#include <stdio.h>
#include <math.h>

float funkcja(float x, float y){
	
	if(x<0) x= -1.0 * x;
	if(y<0) y= -1.0 * y;
	
	float wynik = (x * y)/2;
	return wynik; 
}
int main(){
	
	printf("Wynik to: %f", funkcja(3, -4));
	return 0; 
}	

