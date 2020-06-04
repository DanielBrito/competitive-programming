/* https://app.codesignal.com/challenge/zA4ckXkvYQQ8Zitys */

#include<stdio.h>

int increasingNumber(int x, int n);

int main(){
	
	printf("%d\n", increasingNumber(4, 5));
	
	return 0;	
}

int increasingNumber(int x, int n) {
    
	int i, y, z;
    
    for(i=1; i<=n; i++){
        
        y = 0;
        
        do{
    		z = x+y;
    		y++;
    		
		}while(z%i!=0);
        
        x = z;        
    }
	
	return z;
}
