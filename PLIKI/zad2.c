#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	
	FILE *f;
	f = fopen(argv[1], "w");
	if(!f)
	{
		perror("Problem z plikiem");
		exit(1);
	}
	int i, j;
	for(i=1; i<10; i++){
		for(j=1;j<10;j++){
			fprintf(f, "%d ", i*j);
		}
	fprintf(f, "\n");
	}
	fclose(f);
	
	return 0;
}
	
