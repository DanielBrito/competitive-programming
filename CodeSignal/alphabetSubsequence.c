/* https://app.codesignal.com/challenge/Mi26C6CpxEs7yiDMo */

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool alphabetSubsequence(char* s);

int main(){
	
	char s[20] = "aeb";
	
	printf("%s\n", alphabetSubsequence(s) ? "true" : "false");
	
	return 0;
}

bool alphabetSubsequence(char* s) {
    
    int i=0;
    
    while(i<strlen(s)-1){
        
        if(s[i]>=s[i+1]) return false;
        
        ++i;
    }

    return true;
}
