#include<stdio.h>

int main(){
	
	int l, c;

	scanf("%d %d", &l , &c);

	if((l%2==1 && c%2==1) || (l%2==0 && c%2==0)){

		printf("B\n");
	}
	else{

		printf("P\n");
	}
	
	return 0;
}
