// http://www.cplusplus.com/reference/iomanip/setprecision/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  double pi = 3.14159;

  cout << fixed << setprecision(2) << pi << endl;

  return 0;
}