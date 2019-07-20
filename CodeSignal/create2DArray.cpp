/* https://app.codesignal.com/challenge/tegkALuY9EqaMhHEu */

#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> create2DArray(vector<int> lengths);

int main(){
	
	vector<int> lengths = {1, 2, 0, 4};
	vector<vector<int>> result;
	
	result = create2DArray(lengths);
	
	for(int i=0; i<result.size(); i++){
		
		for(int j=0; j<result[i].size(); j++){
			
			cout << result[i][j] << " ";
		}
		
		cout << "\n";
	}
	
	return 0;
}

vector<vector<int>> create2DArray(vector<int> lengths) {
    
    vector<vector<int>> result(lengths.size());
    int v;
    
    for(int i=0; i<lengths.size(); i++){
    	
    	v = 0;
    	
    	result[i] = vector<int>(lengths[i]); 
    	
    	for(int j=0; j<lengths[i]; j++){
    		
    		result[i][j] = v++;
		}
	}
	
	return result;    
}
