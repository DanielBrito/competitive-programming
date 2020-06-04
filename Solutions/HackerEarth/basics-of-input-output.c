/* https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/tutorial/ */

#include<stdio.h>

int main(){
    int N;
    char S[15];
    
    scanf("%d", &N);
    scanf("%s", S);
    
    printf("%d\n", N*2);
    printf("%s\n", S);
    
    return 0;
}