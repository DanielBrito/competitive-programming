/* https://app.codesignal.com/challenge/zBehEvucW49je7bxr */

#include<stdio.h>

int lastRide(int n);

int main(){
	
	int n = 240;
	
	printf("%d\n", lateRide(n));
	
	return 0;
}

int lateRide(int n){
	
	int r=0;
	
	n = (n/60)*100+n%60;
	
	while(n>0){
		
		r += n%10;
		n /= 10;
	}
	
	return r;
}
