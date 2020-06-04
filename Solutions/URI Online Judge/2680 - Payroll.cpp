// https://www.urionlinejudge.com.br/judge/en/problems/view/2680

#include <iostream>
#include <cmath>

using namespace std;

int dividers(int n){
  
  int i;
  int sum = n+1;
  int l = sqrt(n);
  
  if(n==1){
    
    return 1;
  }
  
  for(i=2; i<=l; i++){
    
    if(n%i==0){
      
      if(n/i!=i){
        
        sum+=i;
        sum+=n/i;
      }
      else{
        
        sum+=i;
      }
    }
  }
  
  return sum;
}

int main(){

  int n, x;
  
  cin >> n;
  
  while(n--){
    
    cin >> x;
    
    cout << dividers(x) << "\n";
  }
  
  return 0;
  
  return 0;
}
