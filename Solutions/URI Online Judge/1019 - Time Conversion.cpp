/* https://www.urionlinejudge.com.br/judge/en/problems/view/1019 */

#include<iostream>

using namespace std;

int main(){
	
	int N, hour=0, minutes=0, seconds=0;
	
	cin >> N;
	
	minutes = N/60;
	seconds = N%60;

	if(minutes>60){

		hour = minutes/60;
		minutes = minutes%60;
	}
	
	cout << hour << ":" << minutes << ":" << seconds << endl;

	return 0;
}
