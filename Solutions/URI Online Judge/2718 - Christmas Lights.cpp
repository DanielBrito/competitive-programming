// https://www.urionlinejudge.com.br/judge/en/problems/view/2718

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  long long int n, x, i, j, r, max, count;
  
  cin >> n;
  
  while(n--){
    
    cin >> x;
    
    vector<long long int> binary;
    max = 0;
    count = 0;
    
    // Converting the number to its binary representation:
    while(x!=0){
      
      r = x%2;
      binary.insert(binary.begin(), r);
      x /= 2;
    }
    
    // Checking for the largest amount of consecutive 1's:
    for(j=0; j<binary.size(); j++){
      
      // Restarting the counter:
      if(binary[j]==0){
        count = 0;
      }
      
      // Incrementing the counter:
      if(binary[j]==1){
        ++count;
      }
      
      // Checking if the current 'count' is greater than 'max'
      if(count>max){
        
        // Updating max
        max = count;
      }
    }
    
    cout << max << "\n";
    
  }
  
  return 0;
}
