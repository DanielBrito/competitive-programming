/* https://www.t-obi.com/problem/show/5/18 */

#include<stdio.h>
#include<stdlib.h>

int main(){

	int* v;
	int qtd, soma;
	int i, j;

	scanf("%d", &qtd);

	v = (int*)malloc(sizeof(int)*qtd);

	for(i=0; i<qtd; i++){

		scanf("%d", &v[i]);
	}

	scanf("%d", &soma);

	for(i=0, j=i+1; i<qtd-1, j<qtd; i++, j++){

		if(v[i]+v[j]==soma){

			printf("%d %d", v[i], v[j]);
		}
	}

	return 0;
}
