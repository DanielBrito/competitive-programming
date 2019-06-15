#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n, int i);

int main(){
	
	int n = 18;
	
	printf("%d %s", n, isPrime(n, 2)==true ? "is prime\n" : "is not prime\n");
	
	return 0;
}

bool isPrime(int n, int i){ 

    if (n<=2) return (n==2) ? true : false; 
    
    if (n%i==0) return false; 
    
    if (i*i>n) return true; 
  
    return isPrime(n, i+1); 
} 
