#include <stdio.h>
 
// https://www.urionlinejudge.com.br/judge/en/problems/view/1007

int main() {
 
    int A, B, C, D, dif;
    
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    dif = (A*B)-(C*D);
    
    printf("DIFERENCA = %d\n", dif);
 
    return 0;
}