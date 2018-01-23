
#include <stdio.h>
#include <string.h>

int main(){
	
	char napis[] = "Ala ma kota o imieniu Pinio";
	char teznapis[30];	
	int i;
	for(i=0; i<30; i++){
		teznapis[i]= napis[i];	
	}
	
	fputs(teznapis, stdout);
	
	return 0;
	
}
