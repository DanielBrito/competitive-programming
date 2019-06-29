/* https://app.codesignal.com/challenge/ptFrnXhzvADkCz5Ls */

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool alphabetSubstring(char* s);

int main(){
	
	char string[20] = "efghi";
	
	printf("%s\n", alphabetSubstring(string) ? "true" : "false");
	
	return 0;
}

bool alphabetSubstring(char* s){
	
    int i, j=0, c=s[0];
	
	for(i=c; i<=s[strlen(s)-1]; i++){
		
		if(s[j++]!=c++) return false;
	}
	
	return true;
}
