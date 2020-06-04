/* https://www.urionlinejudge.com.br/judge/en/problems/view/1253 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	int N, i;
	
	scanf("%d", &N);
	
	while(N--){
		
		char string[50];
		int shift;
		
		scanf("%s", &string);
		scanf("%d", &shift);
		
		for(i=0; i<strlen(string); i++){
			
			if(string[i]-shift<65){
				
				string[i] -= shift-26;
			}
			else{
				
				string[i] -= shift;
			}
		}
		
		printf("%s\n", string);
	}
	
	return 0;	
}
