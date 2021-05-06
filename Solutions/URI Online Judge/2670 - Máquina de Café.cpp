// https://www.urionlinejudge.com.br/judge/en/problems/view/2670

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int a1, a2, a3;
  
  cin >> a1;
  cin >> a2;
  cin >> a3;
  
  int resA1 = a2*2 + a3*2*2;
  
  int resA2 = a1*2 + a3*2;
  
  int resA3 = a1*2*2 + a2*2;
  
  if(resA1<=resA2 && resA1<=resA3){
    
    cout << resA1 << "\n";
  }
  else
  if(resA2<=resA1 && resA2<=resA3){
    
    cout << resA2 << "\n";
  }
  else
  if(resA3<=resA1 && resA3<=resA2){
    
    cout << resA3 << "\n";
  }
  
  return 0;
}