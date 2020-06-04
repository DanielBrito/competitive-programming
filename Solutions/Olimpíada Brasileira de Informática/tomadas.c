#include <stdio.h>
#include <stdlib.h>

/* https://www.t-obi.com/problem/show/1/165 */

int main(){
	
	int t1, t2, t3, t4;

	scanf("%d %d %d %d", &t1, &t2, &t3, &t4);

	printf("%d\n", (t1-1)+(t2-1)+(t3-1)+t4);

	return 0;
}