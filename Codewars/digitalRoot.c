/* https://www.codewars.com/kata/sum-of-digits-slash-digital-root/c */

#include<stdio.h>

int digitalRoot(int n);

int main(){
	
	int n=132189;
	
	printf("%d\n", digitalRoot(n));
	
	return 0;
}

int digitalRoot(int n){
	
	int result=0;
	
	while(n>9){
		
		if(n>9){
			
			result = n%10 + n/10;
			n = result;
		}
		else{
			
			result = n;
		}
	}
	
	return result;
}

