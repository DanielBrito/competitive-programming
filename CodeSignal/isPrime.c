/* https://app.codesignal.com/challenge/rCfCTkrbE4PDE9J2w */

#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n);

int main(){
	
	int n = 47;
	
	isPrime(n)==true ? printf("%d is prime\n", n) : printf("%s is not prime\n", n);
	
	return 0;
}

bool isPrime(int n) {
    
    int i, j, countDiv=0;
    
    for(i=1; i<=n; i++){
        
        if(n%i==0){
            
            ++countDiv;
        }
        
        if(countDiv>2){
            
            return false;
        }
    }
    
    return true;
}
