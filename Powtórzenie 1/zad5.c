
int funkcja(int p, int w){
	int i;
	int wynik = 0;
	
	for(i=0; i<=w; i++)
	{
		if(w==0) return 1;
		else wynik= p*funkcja(p, w-1);
	}
	return wynik;
}

