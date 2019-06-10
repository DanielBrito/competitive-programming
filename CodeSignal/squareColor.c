/* https://app.codesignal.com/challenge/M2gCWoc9fFk5hgSQT?solutionId=QBqAGgWwpp4NRbRKS */

#include<stdio.h>
#include<stdbool.h>

bool squareColor(int x, int y, int x1, int y1);

int main(){
	
	int x, y, x1, y1;
	
	x=0; y=2; x1=5; y1=6;
	
	printf("%s\n", squareColor(x, y, x1, y1) ? "true" : "false");
	
	return 0;
}

bool squareColor(int x, int y, int x1, int y1){
	
	if(((x%2==1 && y%2==1) && (x1%2==1 && y1%2==1))||((x%2==0 && y%2==0) && (x1%2==0 && y1%2==0))){
		
		return true;
	}
	
	if(((x%2==0 && y%2==1) && (x1%2==0 && y1%2==1))||((x%2==1 && y%2==0) && (x1%2==1 && y1%2==0))){
		
		return true;
	}
	
	return false;
}
