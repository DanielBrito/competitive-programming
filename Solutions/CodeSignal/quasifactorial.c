/* https://app.codesignal.com/challenge/53DMcWRBbZMdsF6vm */

#include<stdio.h>

int quasifactorial(int n);

int main(){
	
	int n = 4;
	
	printf("%d\n", quasifactorial(n));
	
	return 0;
}

int quasifactorial(int n){
	
	return n==1 ? 1 : n * quasifactorial(n-1) - 1;
}
