/* https://app.codesignal.com/arcade/code-arcade/intro-gates/HEsmEacHr2s9wahjr */

#include<stdio.h>

int maxMultiple(int divisor, int bound);

int main(){
	
	int divisor=3, bound=10;
	
	printf("%d\n", maxMultiple(divisor, bound));
	
	return 0;
}

int maxMultiple(int divisor, int bound) {
	
	int max=0, i=1;

	while(max<=bound){
		
		if(divisor*i<=bound){
			
			max = divisor*i;
			i++;
		}
		else{
			
			return max;
		}
	}
}
