#include <stdio.h>

int funkcja(int n){
	
	scanf("%d", &n);
	int i;
	for(i=1; i<=n; i++){
		int zero;
		scanf("%d", &zero);
		printf("%d", zero);
	} return;
}

int main(){
	int n;
	funkcja(n);
	return 0;
}
