/* https://www.urionlinejudge.com.br/judge/en/problems/view/1019 */

#include<stdio.h>

int main(){
	
	int N, hour=0, minutes=0, seconds=0;
	
	scanf("%d", &N);

	minutes = N/60;
	seconds = N%60;

	if(minutes>60){

		hour = minutes/60;
		minutes = minutes%60;
	}

	printf("%d:%d:%d\n", hour, minutes, seconds);

	return 0;
}
