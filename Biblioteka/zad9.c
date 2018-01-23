#include <stdio.h>
#include <string.h>

int main ()
{
	char tab1[]="Ala ma kota";
	char tab2[40];
	strcpy (tab2,tab1);
	printf ("TAB1: %s\nTAB2: %s\n",tab1,tab2);
	
	char tab3[40] = " bo sierotka ma rysia";
	strcat(tab2, tab3);
	
	printf ("TAB2 po dolaczeniu TAB3: %s" ,tab2);

  return 0;
}
