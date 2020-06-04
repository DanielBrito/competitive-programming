/* https://app.codesignal.com/challenge/Mi26C6CpxEs7yiDMo */

#include<iostream>

using namespace std;

bool alphabetSubsequence(string s);

int main(){

	string s = "aeb";

	alphabetSubsequence(s) ? cout << "true\n" : cout << "false\n";

	return 0;
}

bool alphabetSubsequence(string s) {

    int i=0;

    while(i<s.size()-1){

        if(s[i]>=s[i+1]) return false;

        ++i;
    }

    return true;
}
