#include <stdio.h>

	int fib (int n){
		
		if(n==0 || n==1) return 0;
		else if(n==2) return 1;
		else return(n-2) + (n+1);
	}
	
	int main(){
		
		printf("%d", fib(5));
		 return 0;
	}
