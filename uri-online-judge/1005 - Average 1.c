#include <stdio.h>
 
// https://www.urionlinejudge.com.br/judge/en/problems/view/1005

int main() {
 
    float A, B, MEDIA;
    
    scanf("%f %f", &A, &B);
    
    MEDIA = ((A*3.5)+(B*7.5))/11;
    
    printf("MEDIA = %.5f\n", MEDIA);
 
    return 0;
}