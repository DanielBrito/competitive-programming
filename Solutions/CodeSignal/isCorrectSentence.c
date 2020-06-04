/* https://app.codesignal.com/challenge/xyg3gHjxeWJtqGDHz */

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isCorrectSentence(char* s) {
    
    return isupper(s[0]) && s[strlen(s)-1]=='.';
}

int main(){
	
	printf("%s\n", isCorrectSentence("This is a sentence.") ? "true" : "false");
	
	return 0;
}
