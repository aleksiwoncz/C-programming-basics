#include <stdio.h>
// Napisz funkcj�, kt�ra przyjmuje 4 argumenty: 2 wska�niki na liczby ca�kwoite x oraz y
//, a tak�e 2 zmienne ca�kwoite typu int a oraz b. Funkcja ma zwraca� jako warto�� sum� liczb a oraz b wtedy i tylko wtedy, 
//gdy x oraz y wskazuj� na to samo, lub iloczyn liczb a i b w przeciwnym wypadku.

int fun(int *wsk1, int *wsk2, int a, int b){
		
	int wynik;
	if(*wsk1 == *wsk2) wynik = a + b;
	else wynik = a * b;
	
	return wynik;
}

int main(){
	
	int x = 9;
	int *wsk1 = &x;
	
	int y = 7;
	int *wsk2 = &y;
	
	int wynik = fun(wsk1, wsk2, 21, 4);
	printf("%d", wynik);
	
	return 0;
	
}
