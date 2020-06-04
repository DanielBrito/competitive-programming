/* https://www.hackerearth.com/pt-br/practice-onboarding/add-two-arrays-1 */

#include <stdio.h>

int main(void) {
    int N, i;
    scanf("%d", &N);
    // Declare the two arrays
    int numArrayA[N], numArrayB[N], sumArray[N];
    
    for(i=0;i<N;i++) sumArray[i]=0;
    
    // Get the numArrayA
    for (i=0; i<N; i++) {
        scanf("%d", &numArrayA[i]);
    }
    
    // Get the numArrayB
    for (i=0; i<N; i++) {
        scanf("%d", &numArrayB[i]);
    }
    
    // Write your logic here:
    for(i=0; i<N; i++){
        
        sumArray[i] = numArrayA[i]+numArrayB[i];
    }
    
    
    // Print the sumArray
    for (i=0; i<N; i++) {
        printf("%d ", sumArray[i]);
    }
    printf("\n");
    return 0;
}