/* https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0 */

#include<stdio.h>
#include<stdlib.h>

int main(){

    int size, rotation, i;
    int *arr, *result;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements rotation: ");
    scanf("%d", &rotation);

    arr = (int*)malloc(sizeof(int)*size);
    result = (int*)malloc(sizeof(int)*size);

    printf("Enter the elements of the array: ");

    for(i=0; i<size; i++){

        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++){

      if((i+rotation)>=size){

        result[i] = arr[abs(size-(i+rotation))];
      }
      else{

        result[i] = arr[i+rotation];
      }
    }

    printf("\nOriginal array: ");
    for(i=0; i<size; i++){

        printf("%d  ", arr[i]);
    }

    printf("\nRotated array: ");
    for(i=0; i<size; i++){

        printf("%d  ", result[i]);
    }

    printf("\n");

    return 0;
}

/* 
// SUBMITTED CODE:

#include<stdio.h>
#include<stdlib.h>

int main(){

    int N, D, i, cont=0, testCase;
    int *arr, *result;
    
    scanf("%d", &testCase);
    
    do{
    	
    	scanf("%d %d", &N, &D);

	    arr = (int*)malloc(sizeof(int)*N);
	    result = (int*)malloc(sizeof(int)*N);
	
	    for(i=0; i<N; i++){
	
	        scanf("%d", &arr[i]);
	    }
	
	    for(i=0; i<N; i++){
	
	      if((i+D)>=N){
	
	        result[i] = arr[abs(N-(i+D))];
	      }
	      else{
	
	        result[i] = arr[i+D];
	      }
	    }
	
	    for(i=0; i<N; i++){
	
	        printf("%d ", result[i]);
	    }
	
	    printf("\n");
    	
    	++cont;
    	
	}while(cont<testCase);

    return 0;
}
*/
