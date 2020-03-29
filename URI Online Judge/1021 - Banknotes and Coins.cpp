/* https://www.urionlinejudge.com.br/judge/en/problems/view/1021 */

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	int notes, coins, i;
	int notesValues[] = {100, 50, 20, 10, 5, 2};
	int coinsValues[] = {100, 50, 25, 10, 5, 1};
	
	cout << setprecision(2) << fixed;
	
	scanf("%d.%d", &notes, &coins);
	
	cout << "NOTAS:\n";
	
	for(i=0; i<6; i++){
		
		cout << notes/notesValues[i] << " nota(s) de R$ " << notesValues[i] << ".00\n";
		notes %= notesValues[i];
	}
	
	if(notes==1){
		
		coins += 100;
	}
	
	cout << "MOEDAS:\n";
	
	for(i=0; i<6; i++){
		
		cout << coins/coinsValues[i] << " moeda(s) de R$ " << coinsValues[i]/100.0 << endl;
		coins %= coinsValues[i];
	}
	
	return 0;
}
