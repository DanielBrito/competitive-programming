#include <iostream>
#include <string>

using namespace std;

class MyClass{ // The class

	public: // Access specifier
	    void myMethod(); // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod(){

    cout << "Hello World!\n";
}

int main(){

    MyClass myObj; // Create an object of MyClass

    myObj.myMethod(); // Call the method

    return 0;
}