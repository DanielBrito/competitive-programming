// https://www.urionlinejudge.com.br/judge/en/problems/view/1015

#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<math.h>

using namespace std;

int main(){

	float x1, y1, x2, y2;
	
	cout << setprecision(4) << fixed;
	
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	
	cout << sqrt(pow((x2-x1), 2)+pow((y2-y1), 2)) << endl;
	
	return 0;	
}
