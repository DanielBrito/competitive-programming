// https://www.geeksforgeeks.org/binary-search-algorithms-the-c-standard-template-library-stl/

#include <algorithm>
#include <iostream>

#define MAX 10

using namespace std;

void print(int v[]){
  
  for(int i=0; i<MAX; i++){
    
    cout << v[i] << " ";
  }
  
  cout << "\n\n";
}

int main(){
  
  int v[MAX] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
  int n = 2;
  
  cout << "Array:\n";
  print(v);
  
  sort(v, v+MAX);
  
  cout << "Sorted:\n";
  print(v);
  
  if(binary_search(v, v+MAX, n)){
    
    cout << "Element found!\n";
  }
  else{
    
    cout << "Element not found!\n";
  }
  
  return 0;  
}