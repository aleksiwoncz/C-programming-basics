#include <stdio.h>

int main(){
	
	int ip[4];
	int maska[4];
	
	scanf("%d.%d.%d.%d %d.%d.%d.%d", &ip[0], &ip[1], &ip[2], &ip[3], &maska[0], &maska[1], &maska[2], &maska[3]);
	
	int i,j;
	int subnet[4];
	for(i=0;i<4;i++){
		subnet[i] = ip[i]&maska[i];
	}
	int broadcast[4];
	broadcast[0]=broadcast[1]=broadcast[2]=broadcast[3] = 0;
	for(i=0;i<4;i++){
		for(j=0;j<8;j++){
			if(~maska[i]&(1<<j) || subnet[i]&(1<<j))
				broadcast[i]|=(1<<j);
		}
	}
	printf("%d.%d.%d.%d", broadcast[0], broadcast[1], broadcast[2], broadcast[3]);
	
	return 0;
}
