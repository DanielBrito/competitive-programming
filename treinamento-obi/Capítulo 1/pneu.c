#include <stdio.h>
#include <stdlib.h>

/* https://www.t-obi.com/problem/show/1/46 */

int main(){
	
	int pressaoDesejada;
	int pressaoAtual;

	scanf("%d %d", &pressaoDesejada, &pressaoAtual);

	printf("%d\n", pressaoDesejada-pressaoAtual);

	return 0;
}