// https://neps.academy/lesson/134

#include <iostream>

using namespace std;

int main(){

  int n, a, dia=0, soma=0;
  
  cin >> n;
  
  while(n--){
    
    cin >> a;
    
    soma += a;
    
    if(soma<1e6){
      
      ++dia;
    }
  }
  
  cout << dia+1 << "\n";
  
  return 0;
}
