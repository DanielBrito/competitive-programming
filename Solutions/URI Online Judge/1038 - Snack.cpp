// https://www.urionlinejudge.com.br/judge/en/problems/view/1038

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  int x, y;
  
  cin >> x >> y;
  
  cout << fixed << setprecision(2);
  
  if(x==1) cout << "Total: R$ " << y * 4.0 << "\n";
  if(x==2) cout << "Total: R$ " << y * 4.5 << "\n";
  if(x==3) cout << "Total: R$ " << y * 5.0 << "\n";
  if(x==4) cout << "Total: R$ " << y * 2.0 << "\n";
  if(x==5) cout << "Total: R$ " << y * 1.5 << "\n";
  
  return 0;
}
