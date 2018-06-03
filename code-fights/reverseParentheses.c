#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* https://codefights.com/arcade/intro/level-3/3o6QFqgYSontKsyk4 */

char* reverseParentheses(char* str);
char* reverseString(char* str, int open, int close);
int verifyParenthesis(char* str);
char* removeEmpty(char* str);

int main(){

    char string[55] = "The ((quick (brown) (fox) jumps over the lazy) dog)";

    printf("%s\n", string);

    strcpy(string, reverseParentheses(string));

    printf("%s\n", string);

    return 0;
}

char* reverseParentheses(char* str){

    int open=-1, close=-1, i;

    while(verifyParenthesis(str)){

        open=-1; close=-1;

        for(i=0; i<strlen(str); i++){

            if(str[i]=='('){

                open = i;
            }

            if(str[i]==')'){

                close = i;
            }

            if(open!=-1 && close!=-1){

                strcpy(str, reverseString(str, open, close));

                open=-1; close=-1;
            }
        }
    }

    strcpy(str, removeEmpty(str));

    return str;
}

int verifyParenthesis(char* str){

    int i;

    for(i=0; i<strlen(str); i++){

        if(str[i]=='('){
            
            return 1;
        }
    }

    return 0;    
}

char* reverseString(char* str, int open, int close){

    int i;
    char aux;

    str[open] = '_';
    str[close] = '_';

    while(close>open+1){

        aux = str[close-1];
        str[close-1] = str[open+1];
        str[open+1] = aux;

        open++; close--;
    }

    return str;
}

char* removeEmpty(char* str){

    char* c = (char*)malloc(sizeof(char)*strlen(str));
    int i, j=0;

    for(i=0; i<strlen(str); i++){

        if(str[i]!='_'){

            c[j] = str[i];
            j++;
        }
    }

    return c;
}
