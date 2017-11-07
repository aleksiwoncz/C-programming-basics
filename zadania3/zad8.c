#include <stdio.h>

int silnia(int n){
	
	if(n==1) 
		return 1;
	else
		return silnia(n-1)*n;	
}

	int main()
	{
		printf("%d", silnia(5));
		return 0;
	}
