/* https://codeforces.com/problemset/problem/977/A */

#include<stdio.h>

int main(){
	
	int n, k;
	
	scanf("%d %d", &n, &k);
	
	while(k--){
		
		n = n%10>=1 ? n-1 : n/10;
	}
	
	printf("%d\n", n);
	
	return 0;
}
