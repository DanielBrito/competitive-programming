// https://www.urionlinejudge.com.br/judge/en/problems/view/1221

#include <iostream>
#include <cmath>

using namespace std;

int prime(int n){

  int l = sqrt(n);
  
  if(n==2){
    
    return 1;
  }
  
  for(int i=3; i<=l; i+=2){
    
    if(n%i==0){
      
      return 0;
    }
  }
  
  return 1;
}

int main(){

  int n, x;
  
  cin >> n;
  
  while(n--){
    
    cin >> x;
    
    prime(x) ? cout << "Prime\n" : cout << "Not Prime\n";
  }
  
  return 0;
}
