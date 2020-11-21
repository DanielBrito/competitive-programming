/* https://codefights.com/arcade/intro/level-3/D6qmdBL2NYz49XHwM */

#include <bits/stdc++.h>

using namespace std;

vector<int> sortByHeight(vector<int> a) {
  
  vector<int> sorted;
  
  for(int i=0; i<a.size(); i++){
    
    if(a[i]!=-1){
      
      sorted.push_back(a[i]);
    }
  }
  
  sort(sorted.begin(), sorted.end());
  
  for(int i=0; i<a.size(); i++){
    
    if(a[i]!=-1){
      
      a[i] = sorted[0];
      sorted.erase(sorted.begin());
    }
  }
  
  return a;
}

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  vector<int> a = {-1, 150, 190, 170, -1, -1, 160, 180};
  
  a = sortByHeight(a);
  
  for(int i=0; i<a.size(); i++){
    
    cout << a[i] << " ";
  }
  
  cout << "\n";
  
  return 0;
}