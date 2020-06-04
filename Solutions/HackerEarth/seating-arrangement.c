/* https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/ */

#include<stdio.h>

int main(){
	
	int T, N;
	int row, column, i;
	
	scanf("%d", &T);
	
	while(T--){
		
		column = 0;
	
		scanf("%d", &N);
		
		row = N%6==0 ? N/6 : N/6+1;
					
		if(row%2==0){
			
			for(i=row*6; i>=6*(row-1)+1; i--){
				
				if(i==N){
					
					++column;
					
					break;
				}
				
				++column;
			}
		}
		else{
			
			for(i=(row-1)*6+1; i<=6*row; i++){
				
				if(i==N){
					
					++column;
					
					break;
				}
				
				++column;
			} 
		}
			
		switch(column){
			
			case 1: printf("%d WS\n", row%2==1 ? N+11 : N-11); break;
			case 2: printf("%d MS\n", row%2==1 ? N+9 : N-9); break;
			case 3: printf("%d AS\n", row%2==1 ? N+7 : N-7); break;
			case 4: printf("%d AS\n", row%2==1 ? N+5 : N-5); break;
			case 5: printf("%d MS\n", row%2==1 ? N+3 : N-3); break;
			case 6: printf("%d WS\n", row%2==1 ? N+1 : N-1);
		}
	}
	
	return 0;
}
