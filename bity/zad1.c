#include <stdio.h>
int parzysta(int a){
	
	return a & 1;
}

int main(){
	int a;
	int b;
	scanf("%d", &a);
	scanf("%d", &b);
	
	if(parzysta(a) == 1)
		printf("jest nieparzysta\n");
	else printf("jest parzysta\n");
			
	if(parzysta(b) == 1)
		printf("jest nieparzysta");
	else printf("jest parzysta");

	
	return 0;

}
