#include <stdio.h>
int dzielenie(int liczba, int wykladnik){
	
	return liczba>>wykladnik;
}

int main(){
	int a;
	scanf("%d", &a);
	int b; 
	scanf("%d", &b);
	
	printf("%d", dzielenie(a,b));
	
	return 0;

}
