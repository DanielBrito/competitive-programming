// https://neps.academy/lesson/136

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

  int n, i;
  double x;
  
  cin >> n;
  
  for(i=0; i<n; i++){
    
    cin >> x;
    
    cout << fixed << setprecision(4) << sqrt(x) << "\n";
  }
  
  return 0;
}
