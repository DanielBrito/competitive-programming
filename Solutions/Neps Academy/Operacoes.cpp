// https://neps.academy/lesson/145

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  char c;
  double x, y;
  
  cin >> c;
  cin >> x >> y;
  
  if(c=='M'){
    
    cout << fixed << setprecision(2) << x*y << "\n";
  }
  else{
    
    cout << fixed << setprecision(2) << x/y << "\n";
  }
  
  return 0;
}