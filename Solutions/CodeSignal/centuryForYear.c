#include <stdio.h>
#include <stdlib.h>

/* https://codefights.com/arcade/intro/level-1/egbueTZRRL5Mm4TXN */

int centuryForYear(int year){
	
	if(year%100==0){
		
		return year/100;
	}
	else{
		
		return (year/100) + 1;
	}
}

int main(){

	int year;

	printf("Enter the year: ");
	scanf("%d", &year);

	printf("The century is %d\n", centuryForYear(year));

	return 0;
}