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

		bool flag = false;
		int sumTotal=0, sumLeft=0;
		
		for(int i=0; i<n ;i++){
			
	      	sumTotal += v[i];
	  	}
	  	
	  	for(int i=0; i<n && flag==false; i++){
	  	
	      	sumTotal -= v[i];
	      
		    if(sumLeft==sumTotal){
		      	
		        cout << i+1 << endl;
		        flag = true;
		    }
	      
	      	sumLeft += v[i];
	  	}
	  
		if(flag==false) cout << "-1" << endl;
	}
	
	return 0;
}
