// https://neps.academy/lesson/154

#include <bits/stdc++.h>

using namespace std;

#define MAX 1000000

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  int n;
  long v[MAX];
  
  cin >> n;
  
  for(int i=0; i<n; i++){
    
    cin >> v[i];
  }
  
  sort(v, v+n);
  
  for(int i=0; i<n; i++){
    
    cout << v[i] << " ";
  }
  
  cout << "\n";  
  
  return 0;
}