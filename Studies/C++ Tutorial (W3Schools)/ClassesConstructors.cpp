#include <iostream>

using namespace std;

class MyClass{ // The class

	public: // Access specifier
		MyClass(){ // Constructor

			cout << "Hello World!\n";
		}
};

int main(){

    MyClass myObj; // Create an object of MyClass (this will call the constructor)

    return 0;
}