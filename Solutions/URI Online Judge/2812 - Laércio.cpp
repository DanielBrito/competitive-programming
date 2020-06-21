// https://www.urionlinejudge.com.br/judge/en/problems/view/2812

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  int n, m, x, i, j, len;
  
  cin >> n;
  
  while(n--){
    
    vector<int> v;
    
    cin >> m;
    
    while(m--){
      
      cin >> x;
      
      if(x%2==1) v.push_back(x);
    }
    
    sort(v.begin(), v.end());
    
    len = v.size();
    
    if(len==0){
      
      cout << "\n";
    }
    else{
      
      if(len%2==0){
        
        for(i=0, j=len-1; i<=j; i++, j--){
          
          cout << v[j] << " " << v[i];
          
          if(i<j-1){
            
            cout << " ";
          }
        }
      }
      else{
        
        for(i=0, j=len-1; i<=j; i++, j--){
          
          if(i!=j){
            
            cout << v[j] << " " << v[i] << " ";
          }
          else{
            
            cout << v[j];
          }
        }
      }
      
      cout << "\n";
    }
  }
  
  return 0;
}
