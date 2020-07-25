// https://neps.academy/lesson/142

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  int n, i, count;
  
  cin >> n;
  
  int* v = (int*)malloc(sizeof(int)*n);
  
  for(i=0; i<n; i++){
    
    cin >> v[i];
  }
  
  for(i=0; i<n; i++){
    
    count=0;
    
    if(i==0){
      
      if(v[i]==1) ++count;
      if(v[i+1]==1) ++count;
    }
    
    if(i>=1 && i<=n-2){
      
      if(v[i]==1) ++count;      
      if(v[i-1]==1) ++count;
      if(v[i+1]==1) ++count;
    }
    
    if(i==n-1){
      
      if(v[i]==1) ++count;
      if(v[i-1]==1) ++count;
    }
    
    cout << count << "\n";
  }
  
  return 0;
}