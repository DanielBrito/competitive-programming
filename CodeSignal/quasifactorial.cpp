#include <iostream>

using namespace std;

int quasifactorial(int n);

int main() {

    int n=4;
    cout << quasifactorial(n);

    return 0;
}

int quasifactorial(int n){

    return n==1 ? 1 : n * quasifactorial(n-1) - 1;
}
