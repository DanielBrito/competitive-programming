/* https://app.codesignal.com/challenge/gu2uWowHBCZyrJfcX */

#include<iostream>

using namespace std;

bool areSimilarNumbers(int a, int b, int divisor);

int main(){
	
	cout << (areSimilarNumbers(26, 7, 14) ? "true" : "false") << "\n";
	
	return 0;
}

bool areSimilarNumbers(int a, int b, int divisor) {
    
    return (a%divisor==0 && b%divisor==0) || (a%divisor!=0 && b%divisor!=0);
}
