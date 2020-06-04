#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include "acronym.h"

char *abbreviate(const char *phrase){

    if(phrase==NULL) return NULL;

    // String to store the acronym result:
    char* acr = malloc(sizeof(char)*20);
    int a=0;

    int length = (int)strlen(phrase);
    int i;

    // For loop to traverse the phrase searching the acronym characters:
    for(i=0; i<length; i++){

        // Concatenates the first character of the acronym:
        if(i==0){

            acr[a++] = toupper(phrase[i]);
        }
        else
        // Verfify the precedent character:
        if(phrase[i-1]==' ' || phrase[i-1]=='-'){

            acr[a++] = toupper(phrase[i]);
        }
    }

    // Define the end of the acronym:
    acr[a] = '\0';

    if(length) return acr;

    return NULL;
}