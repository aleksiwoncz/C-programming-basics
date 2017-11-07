#include <stdio.h>

int funkcja(int n){
	
	if(n==0)
		return 1;
	else if(n%2==0) return n * n - 5;
	else return n*n;	
		
}

	int main()
	{
		printf("%d", funkcja(6));
		return 0;
	}
