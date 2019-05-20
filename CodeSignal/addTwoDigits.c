#include<stdio.h>

/* https://app.codesignal.com/arcade/code-arcade/intro-gates/wAGdN6FMPkx7WBq66 */

int addTwoDigits(int n) {
    
    return (n%10) + (n/10);
}

int main(){
	
	int n=29;
	
	printf("%d", addTwoDigits(n));
	
	return 0;
}
