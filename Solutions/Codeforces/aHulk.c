/* https://codeforces.com/problemset/problem/705/A */

#include<stdio.h>

int main(){
	
	int n, i;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		
		if(i<n){
			
			i%2==1 ? printf("I hate that ") : printf("I love that ");
		} 
		else{
			
			i%2==1 ? printf("I hate it ") : printf("I love it ");
		}
	}
	
	return 0;
}
