#include<stdio.h>

typedef struct point{	
	int x;
	int y;
	int z;
}p;

float odleg(p a, p b){
	float wynik = sqrt((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y) + (b.z-a.z)*(b.z-a.z));
	return wynik;
}

int main(){
	p a = {1,2,3};
	p b = {2,3,4};
	printf("%f", odleg(a,b));
	
	return 0;
}
