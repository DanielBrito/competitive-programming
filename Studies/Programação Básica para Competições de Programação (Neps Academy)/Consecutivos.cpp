// https://neps.academy/lesson/135

#include <iostream>

using namespace std;

int main(){
  
  long long int n, v, i, atual, cont=0, max=0;

  cin >> n;
  
  for(i=0; i<n; i++){
    
    cin >> v;
    
    if(atual==v){
      
      ++cont;
    }
    else{
      
      atual = v;
      cont = 1;
    }
    
    if(cont>max){
      
      max = cont;
    }
  }
  
  cout << max << "\n";
  
  return 0;
}
