// https://www.urionlinejudge.com.br/judge/en/problems/view/3084

#include <iostream>

using namespace std;

int main(){

  int h, m;
  
  // Reading input data until EOF:
  while (cin >> h >> m){
    
    // Notice that 1 hr = 30° and 1 min = 6°:
    printf("%.2d:%.2d\n", h/30, m/6);
  }
  
  return 0;
}
