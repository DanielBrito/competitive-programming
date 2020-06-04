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
    
    return strstr("abcdefghijklmnopqrstuvwxyz", s);
}
