#include <stdio.h>

// https://www.urionlinejudge.com.br/judge/en/problems/view/1009
 
int main() {
 
    char name[30];
    double salary;
    double salesTotal;
    
    scanf("%s", name);
    scanf("%lf", &salary);
    scanf("%lf", &salesTotal);
    
    salary += salesTotal*0.15;
    
    printf("TOTAL = R$ %.2f\n", salary);
 
    return 0;
}