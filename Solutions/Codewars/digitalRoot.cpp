/* https://www.codewars.com/kata/541c8630095125aba6000c00/train/cpp */

#include<iostream>

using namespace std;

int digitalRoot(int n){

  while (n >= 10) {
  	
    int sum = 0;
    
    while (n > 0) {
      
      sum += n%10;
      n = n/10;
    }
    
    n = sum;
  }
    
  return n;
}

int main(){
	
	int n = 12345;
	
	cout << digitalRoot(n) << "\n";
	
	return 0;
}
