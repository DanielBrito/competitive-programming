// https://www.urionlinejudge.com.br/judge/en/problems/view/1014

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	int distance;
	float fuel;
	
	cout << setprecision(3) << fixed;
	
	cin >> distance >> fuel;
	
	cout << distance/fuel << " km/l" << endl;
	
	return 0;	
}
