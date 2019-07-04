#include <stdio.h>
#include <stdlib.h>

/* https://www.t-obi.com/problem/show/1/54 */

int main(){
	
	int comprimentoEstrada;
	int distanciaPedagios;
	int custoKm;
	int valorPedagio;

	scanf("%d %d", &comprimentoEstrada, &distanciaPedagios);
	scanf("%d %d", &custoKm, &valorPedagio);

	printf("%d\n", (comprimentoEstrada*custoKm)+((comprimentoEstrada/distanciaPedagios)*valorPedagio));

	return 0;
}