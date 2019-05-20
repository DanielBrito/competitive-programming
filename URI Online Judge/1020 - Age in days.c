/* https://www.urionlinejudge.com.br/judge/en/problems/view/1020 */

#include<stdio.h>

int main(){
	
	int N, days=0, months=0, years=0;
	
	scanf("%d", &N);
	
	years = N/365;
	N = N%365;
	months = N/30;
	days = N%30;
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
	
	return 0;
}
