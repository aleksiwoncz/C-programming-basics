#include <stdio.h>
int potega(int a){
	
	return a & (a-1);
}

int main(){
	int a;
	scanf("%d", &a);
	
	printf(potega(a)? "nie jest potega" : "jest potega");
	
	return 0;

}
