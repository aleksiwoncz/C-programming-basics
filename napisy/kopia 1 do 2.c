#include <stdio.h>
#include <string.h>

int main(){
	
	char tab1[100] = "Ala ma kota ";
	char tab2[] = "bo sierotka ma rysia!";
	
	int i = 0; int j;
	for(i=0; tab1[i] !='\0'; i++);
	for(j=0; tab2[j] != '\0'; j++){
		tab1[i + j] = tab2[j];		
	}

	tab1[i+j] = '\0';

	fputs(tab1, stdout);
	
	return 0;
}

