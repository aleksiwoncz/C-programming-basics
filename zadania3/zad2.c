#include <stdio.h>

int main(){
	 
	int a;
	scanf("%d", &a);
 	dzielniki(a);
 	
 	return 0;
 	
 	
}
	void dzielniki(int a){
	
	int i = 1;
	for(i; i<=a; i++){
	
		if(a%i==0){
			printf(" %d \n",i);
		} 
	}
	}
 	
	
