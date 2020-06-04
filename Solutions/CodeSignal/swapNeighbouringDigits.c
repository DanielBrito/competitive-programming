/* https://app.codesignal.com/challenge/vJMeEAya7gEckYfQW */

#include<stdio.h>
#include<math.h>

int swapNeighbouringDigits(int n);

int main(){
	
	int n = 1234;
	
	printf("%d\n", swapNeighbouringDigits(n));
}

int swapNeighbouringDigits(int n){
	
	int i=1, j=0, p, q, result=0;
	
	while(n>9){
		
		p = n%10; 
		n /= 10;
		
		q = n%10;
		n /= 10;
		
		result += p*pow(10, i) + q*pow(10, j);
		
		i+=2;
		j+=2;
	}
	
	return result;
}
