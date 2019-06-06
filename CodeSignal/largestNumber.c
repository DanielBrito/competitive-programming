/* https://app.codesignal.com/arcade/code-arcade/intro-gates/SZB5XypsMokGusDhX */

#include<stdio.h>

int largestNumber(int n);

int main(){
	
	int n;
	
	scanf("%d", &n);
	
	printf("%d\n", largestNumber(n));
	
	return 0;
}

int largestNumber(int n) {
    
    int i, result=0;
	
	for(i=0; i<n; i++){
		
		result = (result*10)+9;
	}
	
	return result;
}
