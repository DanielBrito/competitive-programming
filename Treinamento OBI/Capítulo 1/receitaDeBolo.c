/* https://www.t-obi.com/problem/show/2/5 */

#include<stdio.h>

int main(){
	
	int t, o, l;
	
	scanf("%d %d %d", &t, &o, &l);
	
	t /= 2;
	o /= 3;
	l /= 5;
	
	if(t<=o && t<=l){
		
		printf("%d", t);
	}
	else
	if(o<=t && o<=l){
		
		printf("%d", o);
	}
	else{
		
		printf("%d", l);
	}
	
	return 0;
}
