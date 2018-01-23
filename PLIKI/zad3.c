#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	
	if(argv<3){
		printf("Za malo argumentow");
		exit(1);
	}
	FILE *f1;
	FILE *f2;
	f1 = fopen(argv[1], "r");
	f2 = fopen(argv[1], "w");

	if(!f1 && !f2)
	{
		perror("Problem z plikiem");
		exit(1);
	}
	char c1, c2;
	c2 = 'a';
	
	while((c1=fgetc(f1))!=EOF){
		printf("%c", c1);
		c2 = c1;
		fprintf(f2,"%c", c2);	
	}
	
	fclose(f1);
	fclose(f2);

	return 0;
}
	
