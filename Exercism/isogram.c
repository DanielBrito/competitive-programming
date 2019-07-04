#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/* http://exercism.io/exercises/c/isogram/readme */

bool is_isogram(const char phrase[]);

int main(){

    char string[20] = "Back Groun-D";

    if(is_isogram(string)==true){

        printf("Isogram\n");
    }
    else{

        printf("Not a isogram\n");
    }

    return 0;
}

bool is_isogram(const char phrase[])
{
    unsigned int i, j;
    int count = 0;

    if(strlen(phrase)==1 || strlen(phrase)==0){

        return true;
    }

    for(i=0; i<strlen(phrase)-1; i++){

        count = 0;

        for(j=i+1; j<strlen(phrase); j++){

            if(tolower(phrase[i]) == tolower(phrase[j]) && phrase[i]!='-' && phrase[i]!=' ' && phrase[j]!='-' && phrase[j]!=' '){

                ++count;
            }

            if(count>0){

                return false;
            }
        }
    }

    return true;
}