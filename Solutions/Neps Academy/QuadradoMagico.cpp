// https://neps.academy/lesson/141

#include <bits/stdc++.h>

#define N 11

using namespace std;

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  int m[N][N];
  int n, i, j;
 
  // Stores the sum of each row (N), column (N), and diagonal (2) + extra space:
  int res[N+N+10]={0}, pos=0;
  
  cin >> n;
  
  // Receiving the values:
  for(i=0; i<n; i++){
    
    for(j=0; j<n; j++){
      
      cin >> m[i][j];
    }
  }
  
  // Adding up each row values:
  for(i=0; i<n; i++){
    
    for(j=0; j<n; j++){
      
      res[pos] += m[i][j];
    }
    
    pos++;
  }
  
  // Adding up each column values:
  for(i=0; i<n; i++){
    
    for(j=0; j<n; j++){
      
      res[pos] += m[j][i];
    }
    
    pos++;
  }
  
  // Adding up main diagonal values:
  for(i=0, j=0; i<n; i++, j++){
    
    res[pos] += m[i][j];
  }
  
  pos++;
  
  // Adding up secondary diagonal values:
  for(i=0, j=n-1; i<n; i++, j--){
    
    res[pos] += m[i][j];
  }
  
  pos++;
  
  for(i=1; i<pos; i++){
    
    // If one of the values is different from the first, it's not a magic square:
    if(res[0]!=res[i]){
      
      cout << -1 << "\n";
      return 0;
    }
  }
  
  // Otherwise, it's has a magic constant:
  cout << res[0] << "\n";  
  
  return 0;
}