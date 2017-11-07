#include <stdio.h>

int pow(int n){
	
	if(n==0) 
		return 1;
	else
		return pow(n-1)*2;	
}

	int main()
	{
		printf("%d", pow(10));
		return 0;
	}
