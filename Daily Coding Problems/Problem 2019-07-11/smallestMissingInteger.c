#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int smallestMissingInteger(int* array, int length);
int compare (const void * a, const void * b);

int main(){
	
	int array[] = {-1,-24,-20,1,2,4,3};
	int i, length=sizeof(array)/sizeof(int);
	
	printf("%d\n", smallestMissingInteger(array, length));
	
	return 0;
}

// Reference: http://www.cplusplus.com/reference/cstdlib/qsort/

int compare(const void* a, const void* b){
	
 	return (*(int*)a-*(int*)b);
}

int smallestMissingInteger(int* array, int length){
	
	// Sorting in ascending order:
	qsort (array, length, sizeof(int), compare); 
	
	// If max value is negative the smallest and positive missing integer is 1:
	if(array[length-1]<0) return 1;
	
	int i;
	
	for(i=0; i<length-1; i++){
		
		// If the first value is greater than 1:
		if(array[0]>1) return 1;
		
		// If the current number is positive and the difference in relation to the next one is greater than 1
		// Return the value of the current position plus 1, which is the next smallest number:
		if(array[i]>0 && array[i+1]-array[i]>1) return array[i]+1;
	}
	
	// There is no place for a smallest positive number in the array
	// Return the next one after the greatest:
	return array[i]+1;
}
