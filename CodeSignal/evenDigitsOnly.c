/* https://app.codesignal.com/challenge/nckaDwhQf2gb4HFhS */

#include<stdio.h>
#include<stdbool.h>

bool evenDigitsOnly(int n);

int main(){
	
	int n = 64286;
	
	printf("%s\n", evenDigitsOnly(n)==true ? "True" : "False");
	
	return 0;
}

bool evenDigitsOnly(int n) {
    
    while(n>0){
        
        if(n%10%2==1) return 0;
        
        n /= 10;
    }
    
    return 1;
}
