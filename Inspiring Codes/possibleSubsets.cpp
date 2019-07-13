/* https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/ */

#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void possibleSubsets(int A[], int N);

int main(){
	
	int set[] = {1,2,3};
	int n = sizeof(set)/sizeof(set[0]);
	
	cout << "Possible subsets: " << pow(n,2)-1 << "\n\nempty";
	
	possibleSubsets(set, n);
	
	return 0;
}

void possibleSubsets(int A[], int N){
	
    for(int i = 0; i < (1 << N); ++i){
    	
        for(int j = 0; j < N; ++j){
        	
        	if(i & (1 << j)){
        		
        		cout << A[j] << ' ';
			}                    
		}
                
        cout << endl;
    }
}
