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
