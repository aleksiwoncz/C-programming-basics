#include <stdio.h>
#include <math.h>
int main(){
	int x; int y;
	scanf("%d", &x);
	scanf("%d", &y);
 	double l = sqrt(x*x + y*y);
 	printf("%lf", 10*x/l);
 	return 0;
}
