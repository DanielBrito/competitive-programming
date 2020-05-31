// https://www.urionlinejudge.com.br/judge/en/problems/view/1161

#include<stdio.h>

long long int factorial(int n){

    if(n==0){

        return 1;
    }

    return n * factorial(n-1);
}

int main(){

    int m[99999], n[99999];
    int i=0, j=0;

    while(scanf("%d %d", &m[i++], &n[j++]) != EOF){}

    for (i=0; i<j-1; i++){

        printf("%lld\n", factorial(m[i])+factorial(n[i]));
    }

    return 0;
}
