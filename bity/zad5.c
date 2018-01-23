#include <stdio.h>
int potegowanie(int a){
	
	return 1<<a;
}

int main(){
	int a; //wykladnik
	scanf("%d", &a);

	printf("%d", potegowanie(a));
	
	return 0;

}
