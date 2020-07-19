// https://neps.academy/problem/17

#include <iostream>

using namespace std;

int main(){

  int n, d, a;
  
  cin >> n;
  cin >> d;
  cin >> a;
  
  if(a<d){
    
    cout << d-a << "\n";
  }
  else
  if(a>d){
    
    cout << (n-a)+d << "\n";
  }
  else{
    
    cout << 0 << "\n";
  } 
  
  return 0;
}
