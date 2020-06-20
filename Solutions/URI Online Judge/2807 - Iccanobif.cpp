// https://www.urionlinejudge.com.br/judge/en/problems/view/2807

#include <iostream>

using namespace std;

int main(){

  // Allocating memory to store all the 40 possible numbers:
  long long int fib[40];
  int n;
  
  cin >> n;
  
  // The idea here is to start the array with Fibonacci's sequence itself:
  fib[0] = fib[1] = 1;
  
  for(int i=2; i<n; i++){
    
    fib[i] = fib[i-1]+fib[i-2];
  }
  
  // Then, we just traverse the array from backwards until we print out all the 'n' digits of the Iccanobif sequence:
  for(int i=n-1; n!=0; i--){
    
    i>0 ? cout << fib[i] << " " : cout << fib[i];
    --n;
  }
  
  cout << "\n";
  
  return 0;
}
