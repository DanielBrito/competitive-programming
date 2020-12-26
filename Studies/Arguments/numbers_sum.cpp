#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]){

	ifstream infile("numbers.txt");

	if (!infile.is_open()) {
	    return 1;
	}

	string line;
	int a, sum=0;


	while (getline(infile, line)) {

	    stringstream iss(line);

	    if (!(iss >> a)) {
	        break;
	    }

	    sum += a;
	}

	cout << sum << "\n";

	return 0;
}