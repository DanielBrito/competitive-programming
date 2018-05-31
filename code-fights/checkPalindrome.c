/* https://codefights.com/arcade/intro/level-1/s5PbmwxfECC52PWyQ */

bool checkPalindrome(char* inputString){ // #include <stdbool.h>
	
	int i, j;
	
	for(i=0, j=strlen(inputString)-1; i<strlen(inputString), j>=0; i++, j--){
		
		if(inputString[i]!=inputString[j]){
			
			return false;
		}		
	}
	
	return true;
}