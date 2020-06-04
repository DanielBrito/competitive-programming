/* https://coderbyte.com/information/First%20Factorial */

#include <stdio.h> 
#include <string.h>

void FirstFactorial(int num[]) { 
    
  int r=1, i;
  
  for(i=1; i<=num; i++){
		
		r *= i;
	}
	
	printf("%d\n", r);
}

int main(void) { 
  
  // keep this function call here
  FirstFactorial(gets(stdin));
  return 0;
}
