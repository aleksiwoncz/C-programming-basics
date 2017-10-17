#include <stdio.h>

int main() {
	
	char a;
	char b;
	char c;
	char d;
	
	scanf("%c", &a);
	scanf("%c", &b);
	scanf("%c", &c);
	scanf("%c", &d);
	
	printf("%c %c %c %c\n", a, b, c, d);
	printf("%c %c %c %c\n", a, b, d, c);
	printf("%c %c %c %c\n", a, c, d, b);
	printf("%c %c %c %c\n", a, c, b, d);
	printf("%c %c %c %c\n", a, d, c, b);
	printf("%c %c %c %c\n", a, d, b, c); // itd.
	
	
	return 0;
	
	
}
