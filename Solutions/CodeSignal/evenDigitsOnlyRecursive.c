/* https://app.codesignal.com/challenge/nckaDwhQf2gb4HFhS */

#include<stdio.h>
#include<stdbool.h>

bool evenDigitsOnly(int n);

int main(){
	
	int n = 642386;
	
	printf("%s\n", evenDigitsOnly(n)==true ? "True" : "False");
	
	return 0;
}

bool evenDigitsOnly(int n) {
	
	if(n%10%2==1) return 0;
	
	if(n<=9 && n%2==0) return 1;
	
	evenDigitsOnly(n/10);
}
