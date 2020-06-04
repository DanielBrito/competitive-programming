/* https://app.codesignal.com/challenge/n3Pp5y3rcJkacWbxd */

#include<iostream>
#include<string>

using namespace std;

string reduceString(string inputString);

int main(){
	
	string str = "acad";
	
	cout << reduceString(str) << "\n";
	
	return 0;
}

string reduceString(string inputString) {
    
    while(inputString[0]==inputString[inputString.size()-1] && inputString!=""){
    	
    	inputString = inputString.substr(1, inputString.size()-2);
	} 
    
    return inputString;
}
