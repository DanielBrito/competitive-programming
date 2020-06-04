/* https://www.codewars.com/kata/sum-of-digits-slash-digital-root/c */

#include<stdio.h>

int digitalRoot(int n);

int main(){
	
	int n=132189;
	
	printf("%d\n", digitalRoot(n));
	
	return 0;
}

int digitalRoot(int n){
	
	return n>9 ? digitalRoot(n%10+n/10) : n;
}

