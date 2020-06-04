// https://www.urionlinejudge.com.br/judge/en/problems/view/1008

#include<bits/stdc++.h>

using namespace std;
 
int main() {
 
    int employeeNumber, workedHours;
    float salaryPerHour;
    
    cout << setprecision(2) << fixed;
    
    cin >> employeeNumber >> workedHours >> salaryPerHour;
    
    cout << "NUMBER = " << employeeNumber << endl;
    cout << "SALARY = U$ " << workedHours*salaryPerHour << endl;
 
    return 0;
}
