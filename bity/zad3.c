#include <stdio.h>
int ustawiony(int a, int b){
	
	return a & (1<<(b-1));
}

int main(){
	int a;
	scanf("%d", &a);
	int b; //numer bitu
	scanf("%d", &b);
	
	printf(!ustawiony(a,b)? " nie jest ustawiony" : "jest ustawiony");
	
	return 0;

}
