#include <stdio.h>

// https://www.urionlinejudge.com.br/judge/en/problems/view/1002
 
int main() {
 
    double R, A;
    
    scanf("%lf", &R);
    
    A = 3.14159 * (R*R);
    
    printf("A=%.4lf\n", A);
 
    return 0;
}