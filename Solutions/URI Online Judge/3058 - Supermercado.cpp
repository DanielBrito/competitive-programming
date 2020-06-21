#include <iostream>
#include <limits>

using namespace std;

int main(){

  int n;
  double p, g, x, min=numeric_limits<float>::max();
  
  cin >> n;
  
  while(n--){
    
    cin >> p >> g;
    
    x = (1000/g)*p;
    
    if(x<min) min = x;
  }
  
  printf("%.2f\n", min);
  
  return 0;
}
