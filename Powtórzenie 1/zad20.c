
unsigned int funkcja(unsigned int x, unsigned int y){
	 
	 if(y==x) return x;
	 if(x>y) return 2*funkcja(x/y, y);
	 else return 2*funkcja(x,y/x);
} 

