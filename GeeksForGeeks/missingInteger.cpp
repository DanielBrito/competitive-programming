/*  Must Do Interview Preparation */

#include<iostream>

using namespace std;

int main(){
	
	int t, n, sum, c;
	
	cin >> t;
	
	while(t--){
		
		sum=0;
		
		cin >> n;
		
		for(int i=0; i<n-1; i++){
			
			cin >> c;
			
			sum += c;
		}
		
		cout << (n*(n+1)/2)-sum << "\n";
	}
	
	return 0;
}
