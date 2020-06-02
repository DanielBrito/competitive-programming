#include <iostream>

using namespace std;

int main(){

  int x = 64; // 64 = 1000000

  x >>= 3; // Shifting bits to the right by 3 places

  cout << x << endl; // 8 (0001000)

  return 0;
}