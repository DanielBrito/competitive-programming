#include <stdio.h>

// https://www.urionlinejudge.com.br/judge/en/problems/view/1006
 
int main() {
 
    float A, B, C, media;
    
    scanf("%f%f%f", &A, &B, &C);
    
    media = ((A*2)+(B*3)+(C*5))/10;
    
    printf("MEDIA = %.1f\n", media);
 
    return 0;
}