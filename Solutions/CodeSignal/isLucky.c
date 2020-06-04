#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* https://codefights.com/arcade/intro/level-3/3AdBC97QNuhF6RwsQ */

bool isLucky(int n);

int main(){
	
	int num;
	
	while(1){
		
		printf("Enter a number: ");
		scanf("%d", &num);
		
		isLucky(num)==true ? printf("Lucky!\n") : printf("Unlucky!\n");
	}
	
	return 0;
}

bool isLucky(int n){
	
	int r, count=0, i, num=n, sum1=0, sum2=0;
	int* v;
	
	while(num!=0){
		
		r = n%10;
		num /= 10;
		count++;
	}
	
	v = (int*)malloc(sizeof(int)*count);
	
	i=count-1;
		
	while(n!=0){
	
		r = n%10;
		n /= 10;
		
		v[i] = r;
		
		i--;
	}
	
	for(i=0; i<count/2; i++){
		
		sum1 += v[i];
	}
	
	for(i; i<count; i++){
		
		sum2 += v[i];
	}
	
	free(v);
	
    if(sum1==sum2){
    	
    	return true;
	}
	else{
		
		return false;
	}
}
