#include <stdio.h>
int ustaw(int a, int b){
	
	return a | (1<<(b-1));
}

int main(){
	int a;
	scanf("%d", &a);
	int b; //numer bitu
	scanf("%d", &b);
	
	printf("%d", ustaw(a,b));
	
	return 0;

}
