#include<stdio.h>
#include<stdlib.h>

/* https://practice.geeksforgeeks.org/problems/sum-terms-nth-row/0 */

int main(){
	
	int t, i, j, n;
	long int soma=0;
	
	scanf("%d", &t);
	
	int* v = (int*)malloc(sizeof(int)*t);
	
	for(i=0; i<t; i++){
		
		int k=1;
		
		scanf("%d", &n);
		
		for(j=n*(n-1)+1; k<=n*2; k++){
			
			soma += j++;
		}
		
		v[i] = soma;
		
		soma = 0;
	}
	
	for(i=0; i<t; i++){
		
		printf("%d\n", v[i]);
	}
	
	return 0;
}
