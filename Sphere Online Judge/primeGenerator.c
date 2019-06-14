/* https://br.spoj.com/problems/PRIME1/ */

#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n);

int main(){
	
	int t, countTest, countPrimes=0, i;
	int m, n;
	int result[1000], r=0;
	
	printf("Test cases: ");
	scanf("%d", &t);
	
	while(countTest<t){
		
		printf("Limit (m..n): ");
		scanf("%d %d", &m, &n);
		
		for(i=m; i<=n; i++){
			
			if(isPrime(i)==true){
				
				++countPrimes;
			}
		}
		
		for(i=m; i<=n; i++){
			
			if(isPrime(i)==true){
				
				result[r++] = i;
			}
		}
		
		++countPrimes;
		
		result[r++] = 0;
		
		countTest++;
	}
	
	
	for(i=0; i<countPrimes; i++){
		
		if(result[i]==0){
			
			printf("\n");
		}
		else{
			
			printf("%d\n", result[i]);
		}
	}
	
	return 0;
}

bool isPrime(int n) {
    
    int i, j, countDiv=0;
    
    if(n==1) return false;
    
    for(i=1; i<=n; i++){
        
        if(n%i==0){
            
            ++countDiv;
        }
        
        if(countDiv>2){
            
            return false;
        }
    }
    
    return true;
}
