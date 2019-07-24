/* https://app.codesignal.com/challenge/myNEg9Cd45k8wmyBJ */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

string longestStringI(vector<string> inputArray);

string longestStringII(vector<string> inputArray);
bool compareLength(string a, string b)

int main(){
	
	vector<string> inputArray = {"xyzte", "x", "xyzabcs", "daniel", "ab"};
	
	cout << longestStringI(inputArray) << endl;
	
	cout << longestStringII(inputArray) << endl;
	
	return 0;
}

// In this approach, it's necessary to traverse the whole vector to find the longest string.
// Time complexity O(n) | Space complexity O(1)

string longestStringI(vector<string> inputArray){
	
	int index, max=0;
	
	for(int i=0; i<inputArray.size(); i++){
		
		// If the size of the current string is bigger than max we update the values of max and index:
		
		if(inputArray[i].size()>max){
			
			max = inputArray[i].size();
			index = i;
		}
	}
	
	// Return the longest string in the vector which is stored at the position of index:
	
	return inputArray[index];
}

// This custom function is used in the second method to compare the size of two strings
// The result is used to sort the vector (increasing order):

bool compareLength(string a, string b){
	
    return (a.size()<b.size()); 
}

// Once we sorted the array (by the size of the strings) we just need to return the last one.
// Time complexity: N*log2(N) | Space complexity: O(1)

string longestStringII(vector<string> inputArray){

	sort (inputArray.begin(), inputArray.end(), compareLength);
	
	return inputArray.back();
}
