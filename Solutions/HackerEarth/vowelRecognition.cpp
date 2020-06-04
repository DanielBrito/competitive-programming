/* https://www.hackerearth.com/pt-br/practice/basic-programming/complexity-analysis/time-and-space-complexity/practice-problems/algorithm/vowel-game-f1a1047c/ */

#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(){
	
	int num;
	string str;
	
	cin >> num;
	
	while(num--){
		
		cin >> str;
		
		int count=0;
	
		while(str.length()>0){
	
			for(int j=1; j<=str.length(); j++){
				
				string aux = str.substr(0, j);
				
				for(int i=0; i<aux.length(); i++){
					
					char c = tolower(aux[i]);
					
					if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') ++count;
				}
				 
			}
			
			str = str.substr(1, str.length());
		}
		
		cout << count << "\n";		
	}
	
	return 0;
}
