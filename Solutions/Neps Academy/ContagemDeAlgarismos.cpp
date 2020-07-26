// https://neps.academy/lesson/147

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  int v[10] = {0};
  int n, x, rem;
  
  cin >> n;
  
  while(n--){
    
    cin >> x;
    
    while(x>9){
      
      rem = x%10;
      x /= 10;
      
      ++v[rem];
    }
    
    ++v[x];
  }
  
  for(int i=0; i<10; i++){
    
    cout << i << " - " << v[i] << "\n";
  }
  
  return 0;
}