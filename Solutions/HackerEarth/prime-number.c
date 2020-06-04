/* https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/prime-number-8/ */

#include<stdio.h>

int main(){
    
    int i, j, N, countDivide=0;
    
    scanf("%d", &N);
    
    for(i=2; i<=N; i++){
        
        countDivide=0;
        
        for(j=1; j<=i; j++){
            
            if(i%j==0){
            
                ++countDivide;
            }
        }
        
        if(countDivide<=2){
            
            printf("%d ", i);
        }
    }
    
    return 0;
}