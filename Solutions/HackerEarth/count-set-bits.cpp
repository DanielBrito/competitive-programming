// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int n, t, count;
  
  cin >> t;
  
  while(t--){
    
    cin >> n;
    
    count = 0;
    
    while(n){
      
      n = n&(n-1);
      count++;
    }
    
    cout << count << "\n";
  }
  
  return 0;  
}