// https://neps.academy/problem/14

#include <iostream>

using namespace std;

int main(){

  int a, b, c, h, l;
  
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> h;
  cin >> l;
  
  if(a<=h && (b<=l || c<=l)){
    
    cout << "S\n";
  }
  else
  if(b<=h && (a<=l || c<=l)){
    
    cout << "S\n";
  }
  else
  if(c<=h && (a<=l || b<=l)){
    
    cout << "S\n";
  }  
  else{
    
    cout << "N\n";
  }
  
  return 0;
}
