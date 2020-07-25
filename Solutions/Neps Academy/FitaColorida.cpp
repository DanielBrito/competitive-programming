// https://neps.academy/lesson/138

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  int n, i, j, k=0, minDist;
  
  cin >> n;
  
  int* v = (int*)malloc(sizeof(int)*n);
  int* z = (int*)malloc(sizeof(int)*n);
  
  for(i=0; i<n; i++){
    
    cin >> v[i];
    
    if(v[i]==0) z[k++] = i;
  }
  
  for(i=0; i<n; i++){
    
    minDist = INT_MAX;
    
    for(j=0; j<k; j++){
        
      minDist = min(abs(i-z[j]), minDist);
    }
    
    if(minDist>=9){
      
      (i<n-1) ? cout << 9 << " " : cout << 9 << "\n";
    }
    else{
      
      (i<n-1) ? cout << minDist << " " : cout << minDist << "\n";
    }

  }
  
  return 0;
}