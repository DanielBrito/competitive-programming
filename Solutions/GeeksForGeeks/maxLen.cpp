/* https://practice.geeksforgeeks.org/courses/must-do-interview-prep/ */

#include<bits/stdc++.h>

using namespace std;

int maxLen(int arr[], int n);

int main() {
	
	int T;
	
	cin >> T;
	
	while(T--){
		
		int n;
		
		cin >> n;
		
		int a[n];
		
		for(int i=0; i<n; i++){
			
			cin >> a[i];
		}
		
		cout << maxLen(a, n) << endl;
	}
	
	return 0;
}

int maxLen(int arr[], int n){
	
	int max=0, zeros, ones;
	
	for(int i=0; i<n && !(max>n-i); i++){
		
		zeros=0; ones=0;
		
		if(arr[i]==0) ++zeros;
		if(arr[i]==1) ++ones;
		
		for(int j=i+1; j<n; j++){
			
			if(arr[j]==0) ++zeros;
			if(arr[j]==1) ++ones;
			
			if(zeros==ones){
				
				if(j-i+1>max){
					
					max = j-i+1;
				}
			}
		}
	}
	
	return max;
}
