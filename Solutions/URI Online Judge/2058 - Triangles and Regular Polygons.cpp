// https://www.urionlinejudge.com.br/judge/en/problems/view/2058

#include <iostream>

using namespace std;

int main(){
  
  unsigned long long int n, sumAngles=0;

  cin >> n;
  
  sumAngles = (n-2)*180;
  
  cout << sumAngles/180 << "\n";
  
  return 0;
}
