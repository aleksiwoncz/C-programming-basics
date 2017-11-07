
int funkcja(float c, float pwp, float pk){
	// c - cena, pwp - procentowa wartosc podwyzki, pk - prog krytyczny
	
	pwp = pwp * 0.01;
	int i = 0; 
	do{	c= c + c * pwp;
		i++;		
	} while(c<pk); 
	return i;
}

