#include <stdio.h>

int main(){
	
	int a= 0;
	printf("Wprowadz liczbe:");
	scanf("%d", &a);

	int i=1;
	for(i; i<=a; i++)
	{
		if(a%i==0){
			printf("%d\n",i);
		}
	}
	
	
	return 0;
	
}
