#include <iostream>

using namespace std;

int main(){

  // First example:

  string food = "Pizza";
  string &meal = food;

  cout << food << "\n"; // Outputs Pizza
  cout << meal << "\n"; // Outputs Pizza

  cout << &food << "\n"; // Outputs its memory address

  // Second example:

  string desert = "Ice Cream"; // A desert variable of type string
  string *ptr = &desert;       // A pointer variable, with the name ptr, that stores the address of desert

  // Output the value of desert (Ice Cream)
  cout << desert << "\n";

  // Output the memory address of desert
  cout << &desert << "\n";

  // Reference: Output the memory address of desert with the pointer
  cout << ptr << "\n";

  // Dereference: Output the value of desert (Ice Cream)
  cout << *ptr << "\n";

  // Third example:

  string beverage = "Juice";
  string *ptrBvg = &beverage;

  // Output the value of beverage (Juice)
  cout << beverage << "\n";

  // Output the memory address of beverage
  cout << &beverage << "\n";

  // Access the memory address of beverage and output its value (Juice)
  cout << *ptrBvg << "\n";

  // Change the value of the pointer
  *ptrBvg = "Soda";

  // Output the new value of the pointer (Soda)
  cout << *ptrBvg << "\n";

  // Output the new value of the beverage variable (Soda)
  cout << beverage << "\n";

  return 0;
}