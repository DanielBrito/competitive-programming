// https://neps.academy/problem/15

#include <iostream>

using namespace std;

int main(){

  int c, a, countTravels=0;
  
  cin >> c;
  cin >> a;
  
  while(a>=(c-1)){
    
    a -= c-1;
    countTravels++;
  }
  
  a!=0 ? cout << countTravels+1 << "\n" : cout << countTravels << "\n";
  
  return 0;
}
