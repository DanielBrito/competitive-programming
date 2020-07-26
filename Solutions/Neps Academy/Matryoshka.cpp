// https://neps.academy/lesson/153

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  vector<int> bonecas, bonecasOrd, trocas;
  int n, x, qtdTrocas=0;
  
  cin >> n;
  
  bonecas.reserve(n);
  bonecasOrd.reserve(n);
  trocas.reserve(n);
  
  for(int i=0; i<n; i++){
    
    cin >> x;
    
    bonecas.push_back(x);
    bonecasOrd.push_back(x);
  }
  
  sort(bonecasOrd.begin(), bonecasOrd.end());
  
  for(int i=0; i<n; i++){
    
    if(bonecas[i]!=bonecasOrd[i]){
      
      trocas.push_back(bonecasOrd[i]);
      ++qtdTrocas;
    }
  }
  
  cout << qtdTrocas << "\n";
  
  for(int i=0; i<trocas.size(); i++){
    
    if(trocas[i]!=0){
      
      cout << trocas[i] << " ";
    }
  }
  
  cout << "\n";
  
  return 0;
}