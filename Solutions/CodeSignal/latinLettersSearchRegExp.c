/* https://app.codesignal.com/challenge/hCr3bmQu9HewWjx4A */

#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>

bool latinLettersSearchRegExp(char* s) {
    
    int i;
    
    for(i=0; i<strlen(s); i++) if(isalpha(s[i])) return true;
    
    return false;
}

int main(){
	
	char str[] = "123456789O";
	
	printf("%s\n", latinLettersSearchRegExp(str) ? "true" : "false");
	
	return 0;
}
