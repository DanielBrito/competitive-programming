// https://neps.academy/lesson/150

#include <bits/stdc++.h>

using namespace std;

int fib(int n){
  
  if(n<2){
    
    return 1;
  }
  
  return fib(n-1)+fib(n-2);
}

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  int n;
  
  cin >> n;
  
  cout << fib(n) << "\n";
  
  return 0;
}