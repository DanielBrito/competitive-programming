// https://app.codesignal.com/arcade/code-arcade/intro-gates/wAGdN6FMPkx7WBq66

#include<iostream>

using namespace std;

int addTwoDigits(int n) {

    return (n%10) + (n/10);
}

int main(){

	int n=29;

	cout << addTwoDigits(n) << endl;

	return 0;
}
