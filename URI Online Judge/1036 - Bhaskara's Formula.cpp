// https://www.urionlinejudge.com.br/judge/en/problems/view/1036

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {

    double a, b, c, delta;

    cout << setprecision(5) << fixed;

    cin >> a >> b >> c;

    delta = (b*b)-(4*a*c);

    if(delta<0 || a==0){

        cout << "Impossivel calcular" << endl;
    }
    else{

        cout << "R1 = " << ((b*(-1)+sqrt(delta))/(2*a)) << endl;
        cout << "R2 = " << ((b*(-1)-sqrt(delta))/(2*a)) << endl;
    }

    return 0;
}
