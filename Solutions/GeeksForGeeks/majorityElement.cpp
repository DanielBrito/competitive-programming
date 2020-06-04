/* https://practice.geeksforgeeks.org/courses/must-do-interview-prep/ */
/* Reference: https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_majority_vote_algorithm */

#include<iostream>
#include<vector>

using namespace std;

int main(){

    int t;
    
    cin >> t;
    
    while(t--){
    
        int n;
        
        cin >> n;
        
        vector<int> v(n);
        
        for(int i=0 ; i<n; i++){
        	
            cin >> v[i];
        }
        
        int majorityElement=0;
        int count=1;
        
        for(int i=1; i<n; i++){
            
            if(v[i]==majorityElement){
            	
                count++;
            }
            else{
            	
                count--;
            }
            
            if(count==0){
            	
                majorityElement=v[i];
                count=1;
            }
        }
        
        count=0;
        
        for(int i=0; i<n; i++){
        	
            if(v[i]==majorityElement){
            	
                count++;
            }
        }
        
        count>n/2 ? cout << majorityElement << endl : cout << "-1" << endl;
    }
    
    return 0;
}
