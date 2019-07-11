#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

bool is_isogram(const char phrase[]);

int main(){

    char string[50] = "angola";

    if(is_isogram(string)==true){

        printf("Isogram\n");
    }
    else{

        printf("Not an isogram\n");
    }

    return 0;
}

bool is_isogram(const char phrase[]){
	
    unsigned int i;
    char tracked[26] = {0};
    char letter;
    
	for(i=0; i<strlen(phrase); i++){
		
		if(isalpha(phrase[i])){
			
			char letter = tolower(phrase[i]);
			
			if(letter==tracked[letter-97]){
	
	           	return false;
	        }
	        else{
	        	
	        	tracked[letter-97] = letter;
			}
		}		
	}

    return true;
}
