/* https://app.codesignal.com/arcade/code-arcade/intro-gates/vExYvcGnFsEYSt8nQ */

#include<stdio.h>

int circleOfNumbers(int n, int firstNumber);

int main(){
	
	int n=10, firstNumber=2;
	
	printf("%d\n", circleOfNumbers(n, firstNumber));
	
	return 0;
}

int circleOfNumbers(int n, int firstNumber) {
    
    return firstNumber>=(n/2) ? firstNumber-(n/2) : firstNumber+(n/2);
}
