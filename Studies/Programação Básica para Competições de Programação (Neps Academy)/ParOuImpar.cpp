// https://neps.academy/lesson/127

#include <iostream>

using namespace std;

int main(){

  int a, b;
  
  cin >> a;
  cin >> b;
  
  cout << (((a+b)&1) ? "Cino\n" : "Bino\n");
  
  return 0;
}
