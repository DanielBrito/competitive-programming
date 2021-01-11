// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/

#include <iostream>
#include <climits>

using namespace std;

int main(){

  int T, N, K, value, min;
  
  cin >> T;
  
  while(T--){
    
    min=INT_MAX;
    
    cin >> N >> K;
    
    while(N--){
      
      cin >> value;
      
      if(value<min){
        
        min = value;
      }
    }
    
    // Notice that we just need to print the difference between K-min.
    // Because it will define how many iterations would be necessary every A[i]>=K.
    cout << (min>=K ? 0 : K-min) << "\n";
  }

  return 0;
}
