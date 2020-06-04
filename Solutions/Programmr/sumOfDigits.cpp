/* http://www.programmr.com/challenges/sum-digits-1 */

#include <iostream>
#include <string>
#include <math.h>
#include <ctype.h>
  
using namespace std;

int main(){
	
    // The input could be an integer, but it's ok:
    char stmt[25];

    cout << "Enter the birthdate(ddmmyy):";
    cin >> stmt; 
    
    int sum=0;
    
    for(int i=0; stmt[i]!='\0'; i++){
    	
        // Converting each character to its decimal representation (e.g. '1' -> 1):
    	sum = sum*10 + (int)stmt[i]-48;
	}

    cout << "Your lucky number is: ";

    // This easy problem just require to calculate the digital root of a number:
    cout << (sum-1)%9+1; 

    return 0;
} 
