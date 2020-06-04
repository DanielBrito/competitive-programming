#include <stdio.h>
#include <stdlib.h>

/* https://www.t-obi.com/problem/show/1/9 */

int main(){
	
	int metrosPercorridos;
	int tamanhoDaPista;

	scanf("%d", &metrosPercorridos);
	scanf("%d", &tamanhoDaPista);

	printf("%d\n", metrosPercorridos%tamanhoDaPista);

	return 0;
}