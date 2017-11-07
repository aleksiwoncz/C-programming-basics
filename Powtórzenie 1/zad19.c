
int f(int n){
	
	if(n<6) return n;
	else if(n>=6){
		int i;
		int sum = 0;
		for (i=1; i <=3; i++){
			sum += f(n - 2 * i);
		}
		return sum;
	}
}
