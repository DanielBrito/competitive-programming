/* https://www.geeksforgeeks.org/count-the-number-of-vowels-occurred-in-the-substrings-of-given-string/ */

#include<iostream>
#include<string>
#include<vector>

using namespace std;
 
long int substring(string s ){
	
    int len=s.length();
    vector<long int> arr;
    
    for(int i=0; i<=len; i++){
    	
        if(i==0){
        	
        	arr.push_back(len);
		}            
        else{
        	
        	arr.push_back((len-i)+arr[i-1]-i);
		}
            
    }
    
    long int sum = 0; 
    
    for (int i = 0; i < len; i++) {
    	
    	if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
    		
    		sum += arr[i];
		} 
    } 
    
    return sum;
}
 
int main(){
	
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++) {
    	
        string s;
        cin>>s;
        
        long int ans=substring(s);
        
        cout<<ans<<endl;
    }
    
    return 0;
}
