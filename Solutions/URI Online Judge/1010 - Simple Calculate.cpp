// https://www.urionlinejudge.com.br/judge/en/problems/view/1010

#include<iostream>
#include<iomanip>

using namespace std;
 
int main() {
 
    int code1, units1, code2, units2;
    float price1, price2;
    
    cout << setprecision(2) << fixed;
    
    cin >> code1 >> units1 >> price1;
    cin >> code2 >> units2 >> price2;
    
    cout << "VALOR A PAGAR: R$ " << (units1*price1)+(units2*price2) << endl; 
 
    return 0;
}
