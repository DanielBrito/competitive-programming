/* https://www.hackerrank.com/challenges/simple-array-sum/problem */

#include<stdio.h>
#include<stdlib.h>

int simpleArraySum(int ar_count, int* ar);

int main(){
	
	int array[] = {1,2,3,4,5,6};
	int lenght = sizeof(array)/sizeof(array[0]);
	
	printf("%d\n", simpleArraySum(lenght, array));
	
	return 0;	
}

int simpleArraySum(int ar_count, int* ar) {
    
    int i, sum=0;
    
    for(i=0; i<ar_count; i++){
    	
    	sum += ar[i];
	}
	
	return sum;
}
