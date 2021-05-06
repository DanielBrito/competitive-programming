// https://www.urionlinejudge.com.br/judge/en/problems/view/2982

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  long long n, v, result=0;
  char c;
  
  cin >> n;
  
  while(n--){
    
    cin >> c >> v;
    
    if(c=='G'){
      
      result -= v;
    }
    else{
      
      result += v;
    }
  }
  
  if(result>=0){
    
    cout << "A greve vai parar.";
  }
  else{
    
    cout << "NAO VAI TER CORTE, VAI TER LUTA!";
  }
  
  cout << "\n";
  
  return 0;
}