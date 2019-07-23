/* https://app.codesignal.com/challenge/myNEg9Cd45k8wmyBJ */

#include<iostream>
#include<vector>

using namespace std;

string longestString(vector<string> inputArray);

int main(){
	
	vector<string> inputArray = {"xyzte", "x", "xyz"};
	
	cout << longestString(inputArray) << endl;
	
	return 0;
}

string longestString(vector<string> inputArray){
	
	int index, max=0;
	
	for(int i=0; i<inputArray.size(); i++){
		
		if(inputArray[i].size()>max){
			
			max = inputArray[i].size();
			index = i;
		}
	}
	
	return inputArray[index];
}
