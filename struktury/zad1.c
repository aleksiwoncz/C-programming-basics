#include<stdio.h>

struct trojkat{
	int a;
	int b;
	int c;
};

int obwod(struct trojkat parametry){
	
	return parametry.a + parametry.b + parametry.c;
}

int main(){
	struct trojkat parametry = {1,2,3};
	printf("%d", obwod(parametry));
	
	return 0;
}
