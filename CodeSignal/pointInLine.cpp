/* https://app.codesignal.com/challenge/HXyAmAuP9fG6xvX3W */

#include<iostream>
#include<vector>

using namespace std;

bool pointInLine(vector<int> point, vector<int> line);

int main(){
	
	vector<int> point = {1, -1};
	vector<int> line = {1, 1, 0};
	
	cout << (pointInLine(point, line) ? "true" : "false") << endl;
	
	return 0;
}

bool pointInLine(vector<int> point, vector<int> line) {
    
    return line[0]*point[0]+line[1]*point[1]+line[2]==0;
}

