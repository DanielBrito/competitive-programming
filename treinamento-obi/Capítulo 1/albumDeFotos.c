#include <stdio.h>
#include <stdlib.h>

/* https://www.t-obi.com/problem/show/2/20 */

int main(){
	
	int x, y;
	int l1, h1, l2, h2;

	scanf("%d %d", &x, &y);
	scanf("%d %d", &l1, &h1);
	scanf("%d %d", &l2, &h2);

	if(((h1+h2<=y)&&(l1<=x)&&(l2<=x))||((l1+l2<=x)&&(h1<=y)&&(h2<=y))){

		printf("S");
	}
	else
	if(((h1+l2<=y)&&(l1<=x)&&(h2<=x))||((l1+h2<=x)&&(h1<=y)&&(l2<=y))){

		printf("S");
	}
	else
	if(((l1+l2<=y)&&(h1<=x)&&(h2<=x))||((h1+h2<=x)&&(l1<=y)&&(l2<=y))){

		printf("S");
	}
	else
	if(((l1+h2<=y)&&(h1<=x)&&(l2<=x))||((h1+l2<=x)&&(l1<=y)&&(h2<=y))){

		printf("S");
	}
	else{

		printf("N");
	}	

    printf("\n");

	return 0;
}