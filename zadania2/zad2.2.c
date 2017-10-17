#include <stdio.h>
#include <math.h>
int main (){
	
	float a, b, c;
	printf("Podaj a:\n");
		scanf("%f", &a);
	printf("Podaj b:\n");
		scanf("%f", &b);
	printf("Podaj c:\n");
		scanf("%f", &c);
		float delta = b * b - 4 * a * c;
		
		printf("Delta wynosi: %f\n", delta);
		
		if(delta==0){
			float x = (-1.0 * b) / (2 * a);
			printf("Pierwiastkiem rozwiazania jest %f", x);
		}
		else if(delta>0){
			float pierwiastek = sqrt(delta);
			float x1 = (-1.0 * b - pierwiastek)/(2*a);
			float x2 = (-1.0 * b + pierwiastek)/(2*a);
			printf("Rozwiazaniem sa liczby: %f i %f", x1, x2);
		} 
		else if(delta<0) {
		printf("Rownanie nie ma miejsc zerowych");}
		
		else { printf ("To nie jest rownanie kwadratowe");
		}
		
		return 0;
				
}
