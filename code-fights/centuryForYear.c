/* https://codefights.com/arcade/intro/level-1/egbueTZRRL5Mm4TXN */

int centuryForYear(int year){
	
	if(year%100==0){
		
		return year/100;
	}
	else{
		
		return (year/100) + 1;
	}
}