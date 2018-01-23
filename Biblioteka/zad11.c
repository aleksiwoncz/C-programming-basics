#include <stdio.h>
#include <string.h>

int main ()
{
	char tab1[]="Ala ma kota";
	char tab2[]="Ala ma psa";
	
	int n = strcmp (tab1,tab2);
	if(n==0)
		printf ("Napisy sa jednakowe");
	else 
		printf ("Napisy nie sa jednakowe");

  return 0;
}
