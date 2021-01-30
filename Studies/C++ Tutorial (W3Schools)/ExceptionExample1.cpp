#include <iostream>

using namespace std;

int main(){

	try{

		int age = 15;

		if (age > 18){

			cout << "Access granted - you are old enough.\n";
		}
		else{

			throw(age);
		}
	}
	catch (int myNum){
		
		cout << "Access denied - You must be at least 18 years old.\n";
		cout << "Age is: " << myNum << "\n";
	}

	return 0;
}