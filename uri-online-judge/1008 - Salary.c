#include <stdio.h>

// https://www.urionlinejudge.com.br/judge/en/problems/view/1008
 
int main() {
 
    int employeeNumber;
    int workedHours;
    float salaryPerHour;
    
    scanf("%d", &employeeNumber);
    scanf("%d", &workedHours);
    scanf("%f", &salaryPerHour);
    
    printf("NUMBER = %d\n", employeeNumber);
    printf("SALARY = U$ %.2f\n", workedHours*salaryPerHour);
 
    return 0;
}