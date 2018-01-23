#include <stdio.h>
#include <string.h>

int main(){	
	char napis[] = "Ala   ma  kota    bo  sierotka ma    rysia ";
	int i, suma = 0;
	for(i=0; napis[i]; i++){
		if(napis[i]==' ' && i>0 && napis[i-1]!=' ')
		suma++;
	}
 	printf("W tym stringu jest %d wyrazow", suma); 
	return 0;
}
