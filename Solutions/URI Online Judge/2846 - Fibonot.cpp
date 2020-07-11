// https://www.urionlinejudge.com.br/judge/en/problems/view/2846

#include <iostream>

using namespace std;

// Defining the maximun value (1 <= k <= 10^5):
#define MAX 100000

int main(){

  unsigned long long int k, i, j, position=0;
  unsigned long long int fib[MAX];
  
  cin >> k;
  
  // Pre-calculating the Fibonacci numbers until MAX:
  fib[0] = 1;
  fib[1] = 1;
  
  for(i=2; i<MAX; i++){
    
    fib[i] = fib[i-1] + fib[i-2];
  }  
    
  // Traversing Fibonacci numbers array:
  for(i=0; i<MAX-1; i++){
    
    // Calculating how many numbers exist between each interval:
    for(j=fib[i]+1; j<=fib[i+1]-1; j++){
      
      ++position;
      
      // The current position is the number of the Fibonot sequence:
      if(position==k){
        
        cout << j << "\n";
        
        return 0;
      }
    }
  }
}
