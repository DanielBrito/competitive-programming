/* http://www.codcad.com/problem/3 */

#include<iostream>

using namespace std;

int main(){
	
	double A, B;
	
	cin >> A;
	cin >> B;
	
	cout.precision(2);
  	cout.setf(ios::fixed);
  	
  	cout << A/B;
  	
  	return 0;
}
