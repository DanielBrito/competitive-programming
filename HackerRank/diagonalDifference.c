/* https://www.hackerrank.com/challenges/diagonal-difference/problem */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int diagonalDifference(int arr_rows, int arr_columns, int** arr);

int main(){
	
	int N=3, i, j;
	
	// Allocating memory for a NxN matrix:
	int** matrix = (int**)malloc(sizeof(int*)*N);
	
	for(i=0; i<N; i++){
		
		matrix[i] = (int*)malloc(sizeof(int)*N);
	}
	
	srand(time(NULL));
	
	// Generating values randomly:
	for(i=0; i<N; i++){
		
		for(j=0; j<N; j++){
			
			matrix[i][j] = rand()%10;
		}
	}
	
	// Printing matrix:
	for(i=0; i<N; i++){
		
		for(j=0; j<N; j++){
			
			printf("[%2d]", matrix[i][j]);
		}
		
		printf("\n");
	}
	
	// Printing the final result:					  
	printf("\n%d\n", diagonalDifference(N, N, matrix));
	
	return 0;
}

int diagonalDifference(int arr_rows, int arr_columns, int** arr){
	
	int i, j, sumLTR=0, sumRTL=0;

	// This is an easy problem but can increase time complexity if implemented in the wrong way

	// We know that arr is a square matrix. So let's suppose its dimension is really big
	// We don't need to traverse the whole matrix, because we can use a more efficient approach:
	
	// The indexes (row x col) of the left-to-right diagonal is always equal, so:
	for(i=0; i<arr_rows; i++) sumLTR += arr[i][i];
	
	// The indexes (row x col) of the right-to-left diagonal occur when their sum is equal to n-1
	// So we just need find these indexes, in other words: [0]+[n-1], [1]+[n-2], ... , [n-2]+[1], [n-1]+[0]
	for(i=0, j=arr_rows-1; i<arr_rows && j>=0; i++, j--) sumRTL += arr[i][j];
	
	// Finally, we return the absolute difference:
	return abs(sumLTR-sumRTL);	
}
