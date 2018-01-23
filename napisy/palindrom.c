#include <stdio.h>
#include <string.h>

int main(){	
	char napis[] = "kajak";
	int dlugosc = strlen(napis);
	char tab[dlugosc];
	
	int i;
	for(i=0; napis[i] !='\0' ;i++){
		tab[i] = napis[dlugosc - i];
	}
	
	 int zmienna; 
	for(i=0; i<=dlugosc; i++){
	if(napis[i]==tab[i]) zmienna= 1;
	else zmienna = 0;
}

	if(zmienna==1) printf("To palindrom");
	else printf("Nie jest palindromem");
	
	return 0;
}
