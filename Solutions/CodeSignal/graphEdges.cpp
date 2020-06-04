/* https://app.codesignal.com/challenge/xKmAsAs8eCRX7Sh9b */

#include<iostream>
#include<vector>

using namespace std;

int graphEdges(vector<vector<bool>> matrix);

int main(){
	
	vector<vector<bool>> matrix = {{false,true,true}, {true,false,true}, {true,true,false}};
	
	cout << graphEdges(matrix) << "\n";
	
	return 0;
}

int graphEdges(vector<vector<bool>> matrix) {
	
	int edges=0;
	
	for(int i=0; i<matrix.size(); i++){
		
		for(int j=0; j<matrix[i].size(); j++){
			
			if(matrix[i][j]&&matrix[j][i]) ++edges;
		}
	}
	
	return edges/2;
}

