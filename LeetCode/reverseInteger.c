/* https://leetcode.com/problems/reverse-integer/ */

#include<stdio.h>
#include<limits.h>

long int reverse(long int x);

int main(){
	
	long int x;
	
	scanf("%ld", &x);
	
	printf("%ld\n", reverse(x));
	
	return 0;
}

// My (not accepted) solution:

long int reverse(long int x){
	
	if(x<INT_MIN || x>INT_MAX) return 0;
	
	long int rev=0, n=abs(x);
    
    while(n>0){
    	
		rev = rev*10+n%10;
		n /= 10;
	}
	
    return x<0 ? -rev : rev;
}

/* 
// Accepted solution:

int reverse(int x) {

    int rev = 0;
    
    while (x != 0) {
    
        int pop = x % 10;
        x /= 10;
        
        if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
        if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
        
        rev = rev * 10 + pop;
    }
    
    return rev;
}
*/
