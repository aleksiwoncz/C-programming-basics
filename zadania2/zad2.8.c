#include <stdio.h>
int main(){
	float a;
	float b;

	printf("Przez jakie cwiartki przechodzi funkcja?\n Wprowadz wspolczynniki a i b funkcji y=ax+b:\n");
	scanf("%f %f", &a, &b);
	
	if(a>0 && b>0){
		printf("I, II i III cwiartka");
	}
	if(a<0 && b<0){
			printf("II III i IV cwiartka");
	}
	if(a>0 && b<0){
			printf("I III i IV cwiartka");
	}
	if(a<0 && b>0){
			printf("I II i IV cwiartka");
			
			// a = 0
	}
	if(a==0 && b<0){
			printf("III i IV cwiartka");
	}
	if(a==0 && b>0){
			printf("I i II cwiartka");
			
			// b = 0
	}
	if(a<0 && b==0){
			printf("II i IV cwiartka");
	}
	if(a>0 && b==0){
			printf("I i III cwiartka");
	}
	
	// wspolczynniki rowne 0
	if(a==0 && b==0){
			printf("Wykres pokrywa siê z osi¹ OX");
	}
	return 0;
}
