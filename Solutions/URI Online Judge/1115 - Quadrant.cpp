// https://www.urionlinejudge.com.br/judge/en/problems/view/1115

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  int x, y;
  
  while(cin >> x && x!=0 && cin >> y && y!=0){
    
    if(x>0 && y>0) cout << "primeiro";
    if(x<0 && y>0) cout << "segundo";
    if(x<0 && y<0) cout << "terceiro";
    if(x>0 && y<0) cout << "quarto";
    
    cout << "\n";
  }
  
  return 0;
}