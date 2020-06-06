#include <iostream>
#include <cstring>

using namespace std;

int main(){

  long int n, m, x, last=0, sum=0;
  
  cin >> n >> m;
  
  for(int i=0; i<n; i++){
    
    cin >> x;
    
    if(min(x, m-x)>=last){
      
      sum += min(x, m-x);
      
      last = min(x, m-x);
    }
    else
    if(max(x, m-x)>=last){
      
      sum += max(x, m-x);
      
      last = max(x, m-x);
    }
    else{
      
      cout << "-1\n";
      return 0;
    }
  }

  cout << sum << "\n";
  
  return 0;
}