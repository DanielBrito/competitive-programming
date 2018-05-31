#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// https://www.urionlinejudge.com.br/judge/en/problems/view/1011

int main(){

    float radius;
    double volume;

    scanf("%f", &radius);

    volume = (4.0/3)*3.14159*(radius*radius*radius);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}