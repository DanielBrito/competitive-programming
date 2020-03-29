// https://www.urionlinejudge.com.br/judge/en/problems/view/1009

#include<iostream>
#include<iomanip>

using namespace std;
 
int main() {
 
    char name[30];
    double salary, salesTotal;
    
    cout << setprecision(2) << fixed;
    
    cin >> name >> salary >> salesTotal;
    
    salary += salesTotal*0.15;
    
    cout << "TOTAL = R$ " << salary << endl;
    
    return 0;
}
