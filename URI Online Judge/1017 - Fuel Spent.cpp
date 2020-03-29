/* https://www.urionlinejudge.com.br/judge/en/problems/view/1017 */

#include<iostream>
#include<iomanip>

using namespace std;

int main(){

	int timeSpent, speed;
	
	cout << setprecision(3) << fixed;
	
	cin >> timeSpent >> speed;

	float amount;
	
	cout << (float)(timeSpent*speed)/12 << endl;

	return 0;
}
