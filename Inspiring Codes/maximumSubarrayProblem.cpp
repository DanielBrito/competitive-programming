/* https://en.wikipedia.org/wiki/Maximum_subarray_problem */

/* https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/ */

#include<iostream> 
#include<climits> 

using namespace std; 

void maxSubArraySum(int a[], int size);
void maxSubArraySumPosition(int a[], int size);

int main(){ 

	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
	int n = sizeof(a)/sizeof(a[0]); 
	
	maxSubArraySum(a, n);
	maxSubArraySumPosition(a, n);
	
	return 0; 
} 

void maxSubArraySum(int a[], int size) { 

	int max_so_far = 0, max_ending_here = 0; 
	
   for (int i = 0; i < size; i++) { 
   
       	max_ending_here = max_ending_here + a[i]; 
       
       	if (max_ending_here < 0){
       	
       		max_ending_here = 0;
	   	}
       /* Do not compare for all elements. Compare only when max_ending_here > 0 */
       else 
	   if (max_so_far < max_ending_here){
	   	
	   		max_so_far = max_ending_here; 
	   }   
   }
	
	cout << "Maximum contiguous sum is " << max_so_far << "\n\n";
} 

void maxSubArraySumPosition(int a[], int size) { 

	int max_so_far = INT_MIN, max_ending_here = 0, 
	start =0, end = 0, s=0; 

	for (int i=0; i< size; i++ ) { 
	
		max_ending_here += a[i]; 

		if (max_so_far < max_ending_here) { 
		
			max_so_far = max_ending_here; 
			start = s; 
			end = i; 
		} 

		if (max_ending_here < 0) { 
		
			max_ending_here = 0; 
			s = i + 1; 
		} 
	} 
	
	cout << "Maximum contiguous sum is " << max_so_far << endl; 
	cout << "Starting index "<< start  << endl;
	cout << "Ending index "<< end << endl;
}
