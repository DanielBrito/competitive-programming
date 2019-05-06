#include <stdio.h>

/* https://www.urionlinejudge.com.br/judge/en/problems/view/1017 */

int main(){

	int timeSpent;
	int speed;

	scanf("%d", &timeSpent);
	scanf("%d", &speed);

	float amount;

	amount = (float)(timeSpent*speed)/12;

	printf("%.3f\n", amount);

	return 0;
}
