// https://www.urionlinejudge.com.br/judge/en/problems/view/1065

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  int n = 5, value, count=0;
  
  while(n--){
    
    cin >> value;
    
    if(value%2==0) ++count;
  }
  
  cout << count << " valores pares";
  
  cout << "\n";
  
  return 0;
}