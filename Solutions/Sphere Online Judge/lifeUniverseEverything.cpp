/* https://www.spoj.com/problems/TEST/ */

#include<iostream>
#include<vector>

using namespace std;

int main() {
	
	vector<int> numbers;
	bool answer=false;
	
	int n;
	
	while(scanf("%d", &n)!=EOF){
		
		if(n==42) answer=true;
		
		if(!answer) numbers.push_back(n);
	}
	
	for(int i=0; i<numbers.size(); i++){
		
		cout << numbers[i] << "\n";
	}
	
	return 0;
}
