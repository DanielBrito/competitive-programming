/* https://www.codechef.com/problems/CSUM */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
	
	int T, N, K, i, j;
	bool f;
	
	scanf("%d", &T);
	
	while(T--){
		
		f=false;
		
		scanf("%d %d", &N, &K);
		
		int v[N];
		
		for(i=0; i<N; i++){
			
			scanf("%d", &v[i]);
		}
		
		for(i=0; i<N-1 && f==false; i++){
			
			for(j=i+1; j<N; j++){
				
				if(v[i]+v[j]==K){
					
					f=true;
					break;
				}
			}
		}
		
		f ? printf("Yes\n") : printf("No\n");
	}
	
	return 0;
}
