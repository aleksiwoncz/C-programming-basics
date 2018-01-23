#include <stdio.h>
#include <string.h>

int main(){
	
	char tab1[] = "Ala ma kota ";
	char tab2[] = "bo sierotka ma rysia!";
	
	char tab3[100];
	
	int i, j;
	for(i=0; tab1[i] != '\0'; i++){
		tab3[i] = tab1[i];		
	}
	for(j=0; tab2[j] != '\0'; j++){
		tab3[i + j] = tab2[j];		
	}
	tab3[i+j] = '\0';

	fputs(tab3, stdout);
	
	return 0;
}
