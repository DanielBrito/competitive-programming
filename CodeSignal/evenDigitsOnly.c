/* https://app.codesignal.com/challenge/nckaDwhQf2gb4HFhS */

#include<stdio.h>
#include<stdbool.h>

int evenDigitsOnly(int n);

int main(){
	
	int n = 64286;
	
	printf("%s\n", evenDigitsOnly(n)==true ? "True" : "False");
	
	return 0;
}

int evenDigitsOnly(int n){
	
	int x;
	
	while(n>0){
		
		x = n%10;
		
		if(x%2==1) return false;
		
		n /= 10;
	}
	
	return true;
}
