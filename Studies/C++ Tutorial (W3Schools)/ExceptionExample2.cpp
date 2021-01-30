#include <iostream>

using namespace std;

int main(){

	try{

		int age = 20;

		if (age > 18){

			cout << "Access granted - you are old enough.\n";
		}
		else{

			throw 505;
		}
	}
	catch (...) { // Handles any type of exception

		cout << "Access denied - You must be at least 18 years old.\n";
	}

	return 0;
}