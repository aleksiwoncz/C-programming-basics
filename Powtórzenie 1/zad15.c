#include <stdio.h>

int main(){
	int x1, x2, y1, y2;
	
	printf("Podaj wspolrzedne punktu A:\n");
	scanf("%d\n %d\n", &x1, &y1);
	
	printf("Podaj wspolrzedne punktu B bedacy przeciwleglym rogiem prostokata:\n");
	scanf("%d\n %d\n", &x2, &y2);
	
	if(x1<0) x1= (-1.0)*x1;
	if(x2<0) x2= (-1.0)*x2;
	if(y1<0) y1= (-1.0)*y1;
	if(y2<0) y2= (-1.0)*y2;

	

	int wynik = (x1+x2)*(y1+y2);
	printf("Pole wynosi %d", wynik);
	return 0;
	
}
