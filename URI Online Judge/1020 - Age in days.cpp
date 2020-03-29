/* https://www.urionlinejudge.com.br/judge/en/problems/view/1020 */

#include<iostream>

using namespace std;

int main(){
	
	int N, days=0, months=0, years=0;
	
	cin >> N;
	
	years = N/365;
	N = N%365;
	months = N/30;
	days = N%30;
	
	cout << years << " ano(s)\n" << months << " mes(es)\n" << days << " dia(s)\n";
	
	return 0;
}
