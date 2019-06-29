/* https://app.codesignal.com/challenge/uesXn47wfQ2j4rqnp */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* fastUnlock(char* code, char* lockState);

int main(){
	
	char code[] = "9876543210";
	char lockState[] = "0123456789";
	
	printf("%s\n", fastUnlock(code, lockState));
	
	return 0;
}

char* fastUnlock(char* code, char* lockState){
	
	int i;
	
	for(i=0; i<strlen(code); i++){
		
		if(abs(code[i]-lockState[i])<6) {
		
			lockState[i] = abs(code[i]-lockState[i])+48;
		}
		else{
			
			lockState[i] = code[i]>lockState[i] ? (lockState[i]+10)-(code[i]-48) : (code[i]+10)-(lockState[i]-48);
		}
	}

	return lockState;
}
