// http://www.devskill.com/CodingProblems/ViewProblem/26

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    int t;
	string str;

    cin >> t;

    while(t--){

        getline(cin, str); 
  
        while (str.length()==0){
            getline(cin, str);
        } 

        reverse(str.begin(), str.end());

	    cout << str << endl;
    }

	return 0;
}
