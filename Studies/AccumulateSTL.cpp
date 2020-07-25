// https://www.geeksforgeeks.org/accumulate-and-partial_sum-in-c-stl-numeric-header/

#include <iostream>
#include <numeric>

#define MAX 5

using namespace std;

int myFunction(int x, int y){
  cout << x << " " << y << "\n";
  return (x+y)*2;
}

int main(){
  
  int v[MAX] = {2, 4, 8, 16, 32};
  int acc=0;
  
  cout << "Default accummulate:\n";
  cout << accumulate(v, v+MAX, acc) << "\n"; // 62
  
  acc = 1;
  
  cout << "Defined function:\n";
  cout << accumulate(v, v+MAX, acc, myFunction) << "\n"; // 352
  
  // Defined function step by step:
  // 1 2
  // 6 4
  // 20 8
  // 56 16
  // 144 32
  
  return 0;  
}