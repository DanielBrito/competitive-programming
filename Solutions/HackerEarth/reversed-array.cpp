// https://www.hackerearth.com/practice/data-structures/arrays/1-d/tutorial/

#include <iostream>

using namespace std;

int main(){

	int N;

	cin >> N;

	int array[N];

	for(int i=0; i<N; i++){

		cin >> array[i];
	}

	for(int i=N-1; i>=0; i--){

		cout << array[i] << "\n";
	}

	return 0;
}
