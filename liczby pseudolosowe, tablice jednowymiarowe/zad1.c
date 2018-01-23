#include <stdio.h>
#include <stdbool.h>

bool funkcja(float a, float b, float c){
	
	bool czydasieutworzyctrojkat;
	
	if(a+b>c && a+c>b && b+c>a) 
	czydasieutworzyctrojkat = true;
	
	else czydasieutworzyctrojkat = false;
	
	printf(czydasieutworzyctrojkat? "Z podanych bokow da sie utworzyc trojkat" : "Z podanych bokow nie da sie utworzyc trojkata");
}



