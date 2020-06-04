/* https://www.hackerearth.com/pt-br/practice-onboarding/sum-of-n-1 */

#include <stdio.h>
 
int main(void) {
    
	int N, i;
	int sum = 0;
	
	scanf("%d", &N);
 
	int numArray[N]; // Define an array of four integers
    
	// Get inputs for the array elements
	for (i=0;i<N; i++) {
    	scanf("%d", &numArray[i]);
    	
    	sum += numArray[i];
	}
   
	printf("%d\n",sum);  // Print the sum
    
	return 0;
}