#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tab[] = {24,100,4,1,2340,9};

int compare(const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main ()
{
  int i;
  qsort (tab, 6, sizeof(int), compare);
  
  for (i=0; i<6; i++)
     printf ("%d ",tab[i]);
     
  return 0;
}



