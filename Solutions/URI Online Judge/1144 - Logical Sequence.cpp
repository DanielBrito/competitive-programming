// https://www.urionlinejudge.com.br/judge/en/problems/view/1144

#include <iostream>

using namespace std;

int main(){

  int n, count=0;
  
  cin >> n;

  for(int i=1; i<=n; i++){
    
    while(count<2){
      
      if(count==0){
        
        cout << i << " " << i*i << " " << i*i*i << "\n";
        count++;
      }
      else{
        
        cout << i << " " << i*i+1 << " " << i*i*i+1 << "\n";
        count++;
      }
    }
    
    count = 0;
  }
  
  return 0;
}
