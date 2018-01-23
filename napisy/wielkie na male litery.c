#include <stdio.h>
#include <string.h>

int main(){
	char tab[] = "ALa ma KotA";
	
	int i = 0;
	for(i = 0; i<30; i++){
		if(tab[i]>='A' && tab[i]<='Z')
		tab[i] = tab[i] + 32;
	}	
	
	fputs(tab, stdout);
	
	return 0;
	
}
