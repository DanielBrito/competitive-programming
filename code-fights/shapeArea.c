#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* https://codefights.com/arcade/intro/level-2/yuGuHvcCaFCKk56rJ */

int shapeArea(int n){
	
	return pow(n, 2) + pow(n-1, 2);
}

int main(){
	
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	printf("Area of the polygon = %d\n", shapeArea(number));
	
	system("PAUSE");
	return 0;	
}
