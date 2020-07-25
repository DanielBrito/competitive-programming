// https://neps.academy/lesson/128

#include <iostream>

using namespace std;

int main(){

  int p, r;
  
  cin >> p;
  cin >> r;
  
  if(p==0) cout << "C\n";
  
  if(p==1 && r==1) cout << "A\n";
  
  if(p==1 && r==0) cout << "B\n";  
  
  return 0;
}
