/* https://www.hackerearth.com/pt-br/practice-onboarding/sum-of-four-2 */

#include <stdio.h>
 
int main(void) {
	
	int numArray[4];   // Define an array of four integers
    int i;
    int sum = 0;
    
	// Get inputs for the array elements
	for (i=0; i<4; i++) {
    	scanf("%d", &numArray[i]);
    	
    	sum+= numArray[i];
	}

	printf("%d\n",sum);   // Print the sum
    
	return 0;
}