// https://www.geeksforgeeks.org/std-iota-in-cpp/

#include <iostream>
#include <numeric>

#define MAX 11

using namespace std;

int main(){
  
  int numbers[MAX];
  int init = 10;
  
  // Assigns to every element in the range [first, last] successive values of val.
  // As if incremented with ++val after each element is written.
  iota(numbers, numbers+MAX, init);
  
  cout << "Elements:\n";
  
  for(auto i: numbers) cout << i << " ";
  
  cout << "\n";
  
  return 0;
}