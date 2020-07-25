// https://neps.academy/lesson/133

#include <iostream>

using namespace std;

int main(){
  
  long n, i;
  int x;
  bool a, b;
  
  a = b = false;
  
  cin >> n;
  
  for(i=0; i<n; i++){
    
    cin >> x;
    
    if(x==1){
      
      a = !a;
    }
    else{
      
      a = !a;
      b = !b;
    }
  }

  cout << a << "\n";
  cout << b << "\n";
  
  return 0;
}
