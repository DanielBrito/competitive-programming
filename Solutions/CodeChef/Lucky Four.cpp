// https://www.codechef.com/problems/LUCKFOUR

#include <stdio.h>     
#include <stdlib.h>

int main() {

    long long int T;
    
    scanf("%lld", &T);

    while(T--) {
      
        long long int num, count=0;
        int ans;
        
        scanf("%lld",&num);

        while(num) {
          
            ans = num % 10;
            num = num/10;
            
            if( ans == 4) {
              
                count++;
            }
        }
        
        printf("%d\n",count);
    }
    
    return 0;
}