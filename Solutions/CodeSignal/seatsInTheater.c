/* https://app.codesignal.com/arcade/code-arcade/intro-gates/bszFiQAog96G9CXKg */

#include<stdio.h>

int seatsInTheater(int nCols, int nRows, int col, int row);

int main(){
	
	int nCols=16, nRows=11, col=5, row=3;
	
	printf("%d\n", seatsInTheater(nCols, nRows, col, row));
}

int seatsInTheater(int nCols, int nRows, int col, int row) {
    
    return (nRows-row)*(nCols-col+1);
}
