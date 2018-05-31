#include <stdio.h>
#include <stdlib.h>

/* https://www.t-obi.com/problem/show/1/59 */

int main(){
	
	int ano, prox, i=0;
	
	scanf("%d", &ano);
	
	while(1){
		
		prox = 1986+76*(i+1);
		
		if(ano<prox){
			
			printf("%d", prox);
			
			return 0;
		}
		else{
			
			i++;
		}
	}
}
