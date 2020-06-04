// https://cses.fi/problemset/task/1083

#include <iostream>

using namespace std;

int main(){

  long long int n, ap=0, sum=0, x;
  
  cin >> n;
  
  ap = (n*(1+n))/2;
  
  while(--n){
    
    cin >> x;
    
    sum += x;
  }
  
  cout << ap-sum << "\n";
  
  return 0;
}
