/* https://www.urionlinejudge.com.br/judge/en/problems/view/1253 */

#include<iostream>

using namespace std;

int main(){
	
	int N, i;
	
	cin >> N;
	
	while(N--){
		
		string str;
		int shift;
		
		cin >> str;
		cin >> shift;
		
		for(i=0; i<str.size(); i++){
			
			if(str[i]-shift<65){
				
				str[i] -= shift-26;
			}
			else{
				
				str[i] -= shift;
			}
		}
		
		cout << str << endl;
	}
	
	return 0;	
}
