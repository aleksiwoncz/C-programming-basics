#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c;
	printf("Podaj 3 liczby wymierne:\n");
	scanf("%f %f %f", &a, &b, &c);
	float pros;
	if(c>a && c>b){
		if(c*c==a*a + b*b) printf("Podane dlugosci utworza trojkat prostokatny!");
		else printf("BLAD! To nie jest trojkat prostokatny!");}
			if(a>c && a>b){
			if(a*a==c*c + b*b) printf("Podane dlugosci utworza trojkat prostokatny!");
			else printf("BLAD! To nie jest trojkat prostokatny!");}
				if(b>a && b>c){
				if(b*b==a*a + c*c) printf("Podane dlugosci utworza trojkat prostokatny!");
				else printf("BLAD! To nie jest trojkat prostokatny!");}
					
		return 0; 
	}
