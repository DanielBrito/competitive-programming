// https://neps.academy/lesson/151

#include <bits/stdc++.h>

using namespace std;

int hanoi(int n){
  
  if (n==1){
    
    return 1;
  }

  return hanoi(n-1)*2+1;
}

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  int n, t=1;
  
  while(cin >> n && n!=0){
    
    cout << "Teste " << t++ << "\n";
    
    cout << hanoi(n) << "\n\n";
  }  
  
  return 0;
}