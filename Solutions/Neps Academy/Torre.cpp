// https://neps.academy/lesson/140

#include <bits/stdc++.h>

using namespace std;

#define N 1001

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  int m[N][N], sum[N][N], sumRows[N], sumCols[N];
  
  int n, i, j, maxWeight=0;
  
  cin >> n;
  
  // Reading values:
  for(i=0; i<n; i++){
    
    for(j=0; j<n; j++){
      
      cin >> m[i][j];
    }
  }
  
  // Calculating the sum of the values of each row:
  for(i=0; i<n; i++){
    
    for(j=0; j<n; j++){
      
      sumRows[i] += m[i][j];
    }
  }
  
  // Calculating the sum of the values of each column:
  for(i=0; i<n; i++){
    
    for(j=0; j<n; j++){
      
      sumCols[i] += m[j][i];
    }
  }
  
  // Note that the intersection was counted twice, so we must suctract it from the result: 
  for(i=0; i<n; i++){
    
    for(j=0; j<n; j++){
      
      sum[i][j] = sumRows[i] + sumCols[j] - 2*m[i][j];
    }
  }
  
  for(i=0; i<n; i++){
    
    for(j=0; j<n; j++){
      
      maxWeight = max(maxWeight, sum[i][j]);
    }
  }
  
  cout << maxWeight << "\n";
  
  return 0;
}