#include <iostream>
#include <string>

using namespace std;

// Base class
class Employee{

	protected: // Protected access specifier
	    int salary;
};

// Derived class
class Programmer : public Employee{

	public:
		int bonus;

		void setSalary(int s){

			salary = s;
		}

		int getSalary(){

			return salary;
		}
};

int main(){

	Programmer myObj;

	myObj.setSalary(50000);

	myObj.bonus = 15000;

	cout << "Salary: " << myObj.getSalary() << "\n";
	cout << "Bonus: " << myObj.bonus << "\n";

	return 0;
}