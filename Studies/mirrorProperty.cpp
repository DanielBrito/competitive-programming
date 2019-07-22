#include<iostream>
#include<cmath>

/* 	
	Checking number for this "mirror" (not palindrome) property:

  	1^2    = 1
  	11^2   = 121
  	111^2  = 12321
  	1111^2 = 1234321
*/

using namespace std;

bool mirrorProperty(int n);

int main(){
	
	int n = 12321;

	cout << (mirrorProperty(n) ? "true\n" : "false\n");
	
	return 0;
}

bool mirrorProperty(int n){
	
	int r = 1;
	
	while(pow(r,2)<=n){
		
		if(pow(r,2)==n) return true;
		
		r = r*10+1;
	}
	
	return false;
}
