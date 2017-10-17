#include <stdio.h>

	int main(){
	int choice; 
	printf("Wybierz jakie dzialanie chcesz wykonac :) \n 0. Wyjscie \n 1. Dodawanie \n 2. Odejmowanie \n 3. Mno¿enie \n 4. Dzielenie \n Twoj wybor:%d", choice);
	scanf("%d", &choice);
	
	int a, b;
	int wynik;
	
	switch(choice){
		 case 0: break;
		 case 1:
		 	printf("Jakie wartosci chcesz dodac?\n");
		 	scanf("%d %d", &a, &b);
		 	wynik = a + b;
		 	printf("Wynik to %d", wynik);
		 	break; 
		case 2:
		 	printf("Jakie wartosci chcesz odjac?\n");
		 	scanf("%d %d", &a, &b);
		 	wynik = a - b;
		 	printf("Wynik to %d", wynik);
		 	break; 
		case 3:
		 	printf("Jakie wartosci chcesz pomnozyc?\n");
		 	scanf("%d %d", &a, &b);
		 	wynik = a * b;
		 	printf("Wynik to %d", wynik);
		 	break; 
		case 4:
		 	printf("Jakie wartosci chcesz podzielic?\n");
		 	scanf("%d %d", &a, &b);
		 	wynik = a / b;
		 	printf("Wynik to %d", wynik);
		 	break; 
		 	
		 	
	}
	return 0; 
	
	
}
