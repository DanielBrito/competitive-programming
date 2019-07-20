/* https://uva.onlinejudge.org/external/1/100.pdf */

#include<iostream>

using namespace std;

int main(){
	
	int i, j;
	
	while(scanf("%d %d", &i, &j)!=EOF){
		
		int iOrig=i, jOrig=j;
		
		if(i>j) swap(i, j);
		
		int maxCycles = 0;
        int cycles;
 
        while(i<=j) {
        	
            int n = i;
            cycles = 1;
 
            while (n!=1) {
            	
                n = n%2==1 ? 3*n+1 : n/2;
				
                cycles++;
            }
 
            if (cycles>maxCycles){
            	
            	maxCycles = cycles;
			}
 
            i++;
        }
 
        printf ("%d %d %d\n", iOrig, jOrig, maxCycles);
	}
	
	return 0;
}
