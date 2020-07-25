// https://neps.academy/lesson/132

#include <iostream>

using namespace std;

int main(){

  int n, l, c, total=0;
  
  cin >> n;
  
  while(n--){
    
    cin >> l >> c;
    
    if(l>c) total+=c;    
  }
  
  cout << total << "\n";
  
  return 0;
}
