#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* https://codefights.com/arcade/intro/level-1/s5PbmwxfECC52PWyQ */

bool checkPalindrome(char* inputString){
	
	int i, j;
	
	for(i=0, j=strlen(inputString)-1; i<strlen(inputString), j>=0; i++, j--){
		
		if(inputString[i]!=inputString[j]){
			
			return false;
		}		
	}
	
	return true;
}

int main(){

	char string[20];

	printf("Enter a string: ");
	scanf("%s", string);

	if(checkPalindrome(string)==true){

		printf("Palindrome!\n");
	}
	else{

		printf("Not palindrome!\n");
	}

	return 0;
}