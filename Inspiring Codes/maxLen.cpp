/* By Vipsin @ https://ide.geeksforgeeks.org/Vfz3Gr8Hzq */

/*

Given an array of 0's and 1's your task is to complete the 
function maxLen which returns size of the largest sub array 
with equal number of 0's and 1's. The function maxLen takes 
2 arguments. The first argument is the array A[] and second 
argument is the size 'N' of the array A[].

*/

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

// This approach is based on the idea of Kadane’s algorithm

int maxLen(int arr[], int n){
	
	unordered_map<int,int> m;
    int sum = 0, ans = INT_MIN;
    
    for(int i=0; i<n; i++){
    	
    	if(arr[i]==0) arr[i] = -1;  
	}
             
    for(int i=0; i<n; i++){
    	
        sum += arr[i];
        
        if(sum==0) ans = max(ans,i+1);
             
        if(m.find(sum) != m.end()){
        	
            ans = max(ans, i-m[sum]);
        }
        else{
        	
        	m[sum] = i;
		}   
    }
    
    if(ans==INT_MIN) return 0;
        
    return ans;
}
