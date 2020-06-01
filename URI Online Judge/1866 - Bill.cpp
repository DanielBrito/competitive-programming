// https://www.urionlinejudge.com.br/judge/en/problems/view/1866

#include <iostream>

using namespace std;

int main(){
  
  int C, N;
  
  cin >> C;
  
  while(C--){
    
    cin >> N;
    
    N%2==0 ? cout << 0 << endl : cout << 1 << endl;
    
  }
  
  return 0;
}