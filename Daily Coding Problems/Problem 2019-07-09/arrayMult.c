#include<stdio.h>
#include<stdlib.h>

int* arrayMult(int* array, int size);

int main(){
	
	int length, i;
	
	printf("Enter array size: ");
	scanf("%d", &length);
	
	int* array = (int*)malloc(sizeof(int)*length);
	
	printf("Enter array elements: ");
	for(i=0; i<length; i++){
		
		scanf("%d", &array[i]);
	}
	
	int* result;
	
	result = arrayMult(array, length);
	
	printf("Result: ");
	
	for(i=0; i<length; i++){
		
		printf("%d ", result[i]);
	}
	
	return 0;
}

int* arrayMult(int* array, int size){
	
	int* result = (int*)malloc(sizeof(int)*size);
	int i, j, r=0, m;
	
	for(i=0; i<size; i++){
		
		m=1;
		
		for(j=0; j<size; j++){
			
			if(i!=j){
				
				m *= array[j];
			}
		}
		
		result[r++] = m;
	}
	
	return result;	
}
