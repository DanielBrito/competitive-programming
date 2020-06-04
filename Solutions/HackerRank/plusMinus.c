/* https://www.hackerrank.com/challenges/plus-minus/problem */

#include<stdio.h>
#include<stdlib.h>

void plusMinus(int* array, int length);

int main(){
	
	int array[] = {-4, 3, -9, 0, 4, 1};
	int length = sizeof(array)/sizeof(int);
	
	plusMinus(array, length);
	
	return 0;
}

void plusMinus(int* arr, int arr_count){
	
	int pos=0, neg=0, zer=0, i;
	
	for(i=0; i<arr_count; i++){
		
		if(arr[i]>0) ++pos;
		if(arr[i]==0) ++zer;
		if(arr[i]<0) ++neg;
	}
	
	printf("%.6f\n", (float)pos/arr_count);
	printf("%.6f\n", (float)neg/arr_count);
	printf("%.6f\n", (float)zer/arr_count);
}
