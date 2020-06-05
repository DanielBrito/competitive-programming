// https://neps.academy/problem/5

#include <iostream>

using namespace std;

int main(){

  int h, p, f, d;
  char route[16];
  
  cin >> h >> p >> f >> d;
  
  route[h] = 'H';
  route[p] = 'P';
  route[f] = 'F';
  
  if(d==-1){
    
    for(int i=f; ; i--){
      
      if(i==-1) i=15;
      
      if(route[i]=='P'){
        
        cout << "N\n";
        break;
      }
      
      if(route[i]=='H'){
        
        cout << "S\n";
        break;
      }
    }
  }
    
  if(d==1){
    
    for(int i=f; ; i++){
      
      if(i==16) i=0;
      
      if(route[i]=='P'){
        
        cout << "N\n";
        break;
      }
      
      if(route[i]=='H'){
        
        cout << "S\n";
        break;
      }
    }
  }
  
  return 0;
}
