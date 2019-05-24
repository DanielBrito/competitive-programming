/* https://www.hackerearth.com/pt-br/practice-onboarding/sum-of-two-1 */

#include <stdio.h>
 
int main(){
	
	int num1, num2;   // Define two integer variables
    
	
	scanf("%d %d", &num1, &num2);  // Get input for the two variables
    
	int sum = 0;
	// Write the logic to add these numbers here:
    sum = num1+num2;
    
	
	printf("%d\n", sum);   // Print the sum
	return 0;
}