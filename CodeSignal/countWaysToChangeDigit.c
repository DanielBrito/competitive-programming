/* https://app.codesignal.com/challenge/YfXvndTvZuDcMbSFY */

#include<stdio.h>

int countWaysToChangeDigit(int n);

int main(){
	
	int n = 32310;
	
	printf("%d\n", countWaysToChangeDigit(n));
	
	return 0;
}

int countWaysToChangeDigit(int n){
	
	int count=0;
	
	while(n>0){
		
		count += (9-n%10);
		n /= 10;
	}
	
	return count;
}
