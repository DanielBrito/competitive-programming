// https://math.stackexchange.com/questions/231742/proof-how-many-digits-does-a-number-have-lfloor-log-10-n-rfloor-1

#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int n = 11111;

  cout << "Digits = " << floor(log10(n) + 1) << "\n";

  return 0;
}