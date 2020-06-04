// https://www.urionlinejudge.com.br/judge/en/problems/view/1011

#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    float radius;
    
    cout << setprecision(3) << fixed;
    
    cin >> radius;

	cout << "VOLUME = " << (4.0/3)*3.14159*(radius*radius*radius) << endl;

    return 0;
}
