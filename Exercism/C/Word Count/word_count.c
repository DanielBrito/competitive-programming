#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int wordCount(char* str);

struct word{
	
	char text[50];
	int count;	
};

typedef struct word Word;

Word words[100];

int main(){
	
	// Don't know how to handle this case (yet):
	
	char inputString[500] = "Joe can't tell between 'large' and large.";
	
	wordCount(inputString);
	
	return 0;
}

int wordCount(char* str){
	
	int w=0, i=0, found, l=strlen(str);
	char* token;
	
	// Converting characters to lowercase:
	
	while(l--) {
		
		str[i] = isalpha(str[i]) || isdigit(str[i]) ? tolower(str[i++]) : ' ';
	}
   	
   	// Initializing words array:
   	
   	for(i=0; i<100; i++){
   		
   		strcpy(words[i].text, " ");	
   		words[i].count=0;
	}
	
	// Counting the occurence of each word
	
	token = strtok(str, " ,.");
   	
   	while(token!=NULL) {
   		
   		found=0;
   	
      	for(i=0; i<w; i++){
      		
      		if(strcmp(words[i].text, token)==0){
      			
      			words[i].count++;
      			found = 1;
      			
      			break;
			}			
		}
		
		if(found==0){
			
			strcpy(words[w].text, token);
			words[i].count++;
			++w;
		}
		
		token = strtok('\0', " ,.");
   	}
   	
   	// Printing the result:
	
	for(i=0; i<w; i++){
   		
   		printf("%s: %d\n", words[i].text, words[i].count);
	}
	
	return 0;
}
