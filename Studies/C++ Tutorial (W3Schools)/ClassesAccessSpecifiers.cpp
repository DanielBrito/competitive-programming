#include <iostream>

using namespace std;

/*

Note: By default, all members of a class are private if you don't specify an access specifier:

class MyClass{

    int x; // Private attribute
    int y; // Private attribute
};

*/


class MyClass{

	public: // Public access specifier
	    int x; // Public attribute

	private: // Private access specifier
	    int y; // Private attribute
};

int main(){

	MyClass myObj;

	myObj.x = 25; // Allowed (public)
	myObj.y = 50; // Not allowed (private) = Error

	return 0;
}