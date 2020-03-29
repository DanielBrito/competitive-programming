// https://www.urionlinejudge.com.br/judge/en/problems/view/1012

#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    double a, b, c;
    
    cout << setprecision(3) << fixed;
    
    cin >> a >> b >> c;
    
    cout << "TRIANGULO: " << (a*c)/2 << endl;
    cout << "CIRCULO: " << 3.14159*(c*c) << endl;
    cout << "TRAPEZIO: " << ((a+b)*c)/2 << endl;
    cout << "QUADRADO: " << b*b << endl;
    cout << "RETANGULO: " << a*b << endl;

    return 0;
}
