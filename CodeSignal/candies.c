/* https://app.codesignal.com/arcade/code-arcade/intro-gates/DdNKFA3XCX6XN7bNz */

#include<stdio.h>

int candies(int n, int m);

int main(){
	
	int n=3, m=10;
	
	printf("%d\n", candies(n, m));
	
	return 0;
}

int candies(int n, int m){
	
	return (m/n)*n;
}
