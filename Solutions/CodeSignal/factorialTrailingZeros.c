/* https://app.codesignal.com/challenge/jpaALgHRyNZCcuakt */

#include<stdio.h>

int factorialTrailingZeros(int n);

int main(){
	
	int n=20;
	
	printf("%d\n", factorialTrailingZeros(n));
	
	return 0;
}

int factorialTrailingZeros(int n){
	
    int i, c=0;
  
    for(i=5; n/i >= 1; i*=5){
        
        c += n/i;   
    }
  
    return c;
}
