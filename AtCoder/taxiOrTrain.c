/* https://atcoder.jp/contests/abc133/tasks/abc133_a */

#include<stdio.h>

int main(){

    int N, A, B;

    scanf("%d %d %d", &N, &A, &B);

    N*A>B ? printf("%d\n", B) : printf("%d\n", N*A);

    return 0;
}
