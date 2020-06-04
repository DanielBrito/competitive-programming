/* https://www.codewars.com/kata/l1-set-alarm/c */

#include<stdio.h>
#include<stdbool.h>

bool set_alarm(bool employed, bool vacation) {

   return employed==vacation ? false : employed ? true : false;
}

int main(){
	
	bool employed = true;
	bool vacation = false;
	
	printf(set_alarm(employed, vacation) ? "true\n" : "false\n");
	
	return 0;
}
