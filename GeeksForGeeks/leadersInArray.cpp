/* https://practice.geeksforgeeks.org/courses/must-do-interview-prep/ */

#include<iostream>

using namespace std;

int main(){
	
	int t;
	
	cin >> t;
	
	while(t--){
		
		int n;
		
		cin >> n;
		
		int* v = new int[n];
		
		for(int i=0; i<n; i++){
			
			cin >> v[i];
		}
		
		int* res = new int[n];
		int max = -1, count=0;
		
		for(int i=n-1; i>=0; i--){
			
			if(v[i]>=max){
				
				res[count++] = v[i];
				max = v[i];
			}
		}
		
		for(int i=count-1; i>=0; i--){
			
			cout << res[i] << " ";
		}
		
		cout << "\n";
	}
	
	return 0;
}
