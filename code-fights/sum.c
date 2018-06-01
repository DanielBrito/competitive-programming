#include <stdio.h>
#include <stdlib.h>

/* https://codefights.com/arcade/intro/level-1/jwr339Kq6e3LQTsfa */

int add(int param1, int param2) {
    
    return param1 + param2;
}

int main(){

    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\n%d + %d = %d\n", num1, num2, add(num1, num2));

    return 0;
}
