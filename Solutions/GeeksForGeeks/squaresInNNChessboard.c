/* https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard/0 */

#include<stdio.h>

int numberOfSquares(int N);

int main(){
	
	int T, N;
	
	scanf("%d", &T);
	
	while(T--){
		
		scanf("%d", &N);
		
		printf("%d\n", numberOfSquares(N));
	}
	
	return 0;;
}

int numberOfSquares(int N){
	
	if(N==1){
		
		return 1;
	}
	
	return (N*N) + numberOfSquares(N-1);
}
