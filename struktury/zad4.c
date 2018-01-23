#include <stdio.h>
#include <stdbool.h>
#include <math.h>
typedef struct LiczbaZespolona{	
	double rz;
	double u;
	
}Z;

float modul(Z *a){
	float wynik = sqrt((a->rz)*(a->rz) + (a->u)*(a->u));
	return wynik;
}
Z suma(Z *a, Z *b){
	Z wynik = {(a->rz + b->rz), (a->u + b->u)};
	return wynik;
}

Z iloczyn(Z *a, Z *b){
	Z wynik = {(a->rz * b->rz) - (a->u * b->u), (a->rz * b->u) + (a->u * b->rz)};
	return wynik;
}

int main(){
	Z a = {2,3};
	Z b = {1,2};
	
	printf("%f\n", modul(&a));
	Z wynik = suma(&a, &b);
	printf("%f\n%f\n", wynik.rz, wynik.u);
	Z wynik2 = iloczyn(&a, &b);
	printf("%f\n%f\n", wynik2.rz, wynik2.u);
	
	return 0;
}
