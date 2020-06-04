/* https://www.hackerrank.com/challenges/mini-max-sum/problem */

#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>

using namespace std;

int compare (const void* a, const void* b){
	
  	return (*(int*)a-*(int*)b);
}

void miniMaxSum(vector<int> arr);

int main(){
	
	vector<int> arr;
	
	srand(time(NULL));
	
    for(int i=0; i<10; ++i){
     	
     	arr.push_back(rand()%50+1);
	}
             
	miniMaxSum(arr);
	
	return 0;
}

void miniMaxSum(vector<int> arr) {

	long int min=0, max=0;
	
	// Reference: http://www.cplusplus.com/reference/cstdlib/qsort/
	
	qsort (&arr[0], arr.size(), sizeof(int), compare);
	
	for(int i=0, j=arr.size()-1; i<4 && j>arr.size()-5; i++, j--){
		
		min += arr[i]; 
		max += arr[j];
	}
	
	cout << min << " " << max << "\n";
}
