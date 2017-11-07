
int funkcja(int x, int y){
	 if (y==0 && x>=0 || y>=0 && x==0) return x;
	 else if(y>0 && x>0) return funkcja(x-1,y) + funkcja(x,y-1);
} 
