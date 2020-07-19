// https://neps.academy/problem/3

#include <iostream>

using namespace std;

long int gcd(long int a, long int b) { 
   
    if (b==0) return a;
    
    return gcd(b, a%b);
} 

int main(){

  long int m, n;
  
  cin >> m >> n;
  
  for(long int x=n-1; x>=1; x--){
    
    if(gcd(m, x)==1){
      
      cout << x << "\n";
      
      break;
    }
  }
  
  return 0;
}
