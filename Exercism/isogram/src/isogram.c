#include "isogram.h"
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_isogram(const char phrase[])
{
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