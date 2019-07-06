/* https://www.urionlinejudge.com.br/judge/en/problems/view/1021 */

#include<stdio.h>

int main(){
	
	int notes, coins, i;
	int notesValues[] = {100, 50, 20, 10, 5, 2};
	int coinsValues[] = {100, 50, 25, 10, 5, 1};
	
	scanf("%d.%d", &notes, &coins);
	
	printf("NOTAS:\n");
	
	for(i=0; i<6; i++){
		
		printf("%d nota(s) de R$ %d.00\n", notes/notesValues[i], notesValues[i]);
		notes %= notesValues[i];
	}
	
	if(notes==1){
		
		coins += 100;
	}
	
	printf("MOEDAS:\n");
	
	for(i=0; i<6; i++){
		
		printf("%d moeda(s) de R$ %.2f\n", coins/coinsValues[i], coinsValues[i]/100.0);
		coins %= coinsValues[i];
	}
	
	return 0;
}
