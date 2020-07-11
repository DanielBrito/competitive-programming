// https://www.urionlinejudge.com.br/judge/en/problems/view/2787

#include <iostream>

using namespace std;

int main(){

  int l, c;
  
  cin >> l;
  cin >> c;
  
  // The white squares are located on the intesection between 'even & even' or 'odd & odd' (rows & columns):
  if((l%2==0 && c%2==0) || (l%2==1 && c%2==1)){
    
    cout << "1\n";
  }
  // Otherwise, the squares will be black:
  else{
    
    cout << "0\n";
  }
  
  return 0;
}
