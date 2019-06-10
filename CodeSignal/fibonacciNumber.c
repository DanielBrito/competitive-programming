/* https://app.codesignal.com/challenge/hTvQiQuJTk9bSvY6n */

#include<stdio.h>
#include<math.h>

int fibonacciNumber(int n);

int main(){
	
	int n = 5;
	
	printf("%d\n", fibonacciNumber(n));
	
	return 0;
}
	
int fibonacciNumber(int n) {
    
    float Fn;
    
    Fn = (pow(((1+sqrt(5))/2), n) - pow(((1-sqrt(5))/2), n)) / sqrt(5); // Binet's formula
    
    return (Fn>=0) ? (int)(Fn+0.5) : (int)(Fn-0.5);
}

