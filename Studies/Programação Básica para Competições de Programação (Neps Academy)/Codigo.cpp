// https://neps.academy/lesson/139

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  int v[100000], n, count=0;
  
  cin >> n;
  
  for(int i=0; i<n; i++){
    
    cin >> v[i];
    
    if(i>=2 && v[i]==0 && v[i-1]==0 && v[i-2]==1) ++count;
  }
  
  cout << count << "\n";

  return 0;
}