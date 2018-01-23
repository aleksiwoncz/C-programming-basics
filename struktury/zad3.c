#include <stdio.h>
#include <stdbool.h>
typedef struct point{	
	int x;
	int y;
	int z;
}p;

typedef struct vectpr{	
	p point;
	bool turn;
	float angle;
	float value;
}v;

void chtu(v *a){
	a->turn = !a->turn;
}

int main(){
	p a = {1,2,3};
	v b;
	
	b.point = a;
	b.turn = 1;
	b.angle = 30;
	b.value = 10;
	
	chtu(&b);
	
	printf("%d\n", b.turn);
	
	return 0;
}
