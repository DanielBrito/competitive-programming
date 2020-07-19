#include <iostream>

using namespace std;

int main(){

  long x, i;
  
  cin >> x;
  
  for(i=1; i<=x; i++){
    
    if(x%i==0) {
      
      (x!=i) ? cout << i << " " : cout << i;
    }
  }
  
  cout << "\n";
  
  return 0;
}
