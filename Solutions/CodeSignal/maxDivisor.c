/* https://app.codesignal.com/challenge/hDqJT8AqKJAQS4vEw */

#include<stdio.h>

int main(){
	
	int left, right, divisor;
	
	scanf("%d %d %d", &left, &right, &divisor);
	
	printf("%d\n", maxDivisor(left, right, divisor));
	
	return 0;
}

int maxDivisor(int left, int right, int divisor){
	
	int max=-1, i;
	
	for(i=left; i<=right; i++){
		
		if(i%divisor==0 && i>max){
			
			max = i;
		}
	}
	
	return max;
}
