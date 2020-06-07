// https://www.urionlinejudge.com.br/judge/en/problems/view/1176

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

unsigned long long roundNumber(double num){
    
  return (num>=0) ? (unsigned long long)(num+0.5) : (unsigned long long)(num-0.5);
}

int main(){

  unsigned long long t, n;
  double fn;
  vector<unsigned long long> v;
  
  cin >> t;
  
  while(t--){
    
    cin >> n;
    
    v.push_back(n);
  }
  
  for(int i=0; i<v.size(); i++){
    
    // The main idea here is to use Binet's formula to calculate Fib(x) in O(1):
    fn = (pow(((1+sqrt(5))/2), v[i]) - pow(((1-sqrt(5))/2), v[i])) / sqrt(5);
    
    cout << "Fib(" << v[i] << ") = " << roundNumber(fn) << "\n";
  }
  
  return 0;
}
