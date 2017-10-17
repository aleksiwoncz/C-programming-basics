#include <stdio.h>

int main()
{
	int a1, a2, b1, b2, n;
	
	printf(" Podaj granice osi rozna od zera: \n");
	scanf("%d", &n);
	
	if(n<=0){
		printf("Zle! Podaj inna wartosc! \n");
		scanf("%d",&n);
	}
	
	printf("Wartosc poczatkowa zbioru A: \n");
	scanf("%d", &a1);
	
		if(n>a1 && a1>0){
		printf(" %d\n", a1);
		} else {
			printf("Zle! Podaj inna wartosc!\n");
			scanf("%d",&a1);
		}
	
	printf("Wartosc koncowa zbioru A: \n");
	scanf("%d", &a2);
	
	if(n>a2 && a2>0 && a2>=a1){
		printf(" %d\n", a1);
		} else {
			printf("Zle! Podaj inna wartosc! \n");
			scanf("%d",&a2);
		}
	
	printf("Wartosc poczatkowa zbioru B: \n");
	scanf("%d", &b1);
	
	if(n>b1 && b1>0){
		printf(" %d\n", b1);
		} else {
			printf("Zle! Podaj inna wartosc!");
			scanf("%d",&b1);
		}
		printf("Wartosc koncowa zbioru B: \n");
	scanf("%d", &b2);
		
	if(n>b2 && b2>0 && b2>=b1){
		printf(" %d\n", b2);
		} else {
			printf("Zle! Podaj inna wartosc!\n");
			scanf("%d",&b2);
		}
		
		
	/// iloczyn zbiorów
		int a, b;
		
	printf("\nCzesc wspolna zbiorow A i B:\n");
	
	for(a=a1; a<=a2; a++)
	{
	 for(b=b1; b<=b2; b++)
    	if (a==b)
		{
		 printf("%d\n", a) || printf("%d\n", b);
    	}
    }

	
	
	
	return 0;	
}
