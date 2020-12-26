#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]){

	ifstream infile("numbers.txt");

	if (!infile.is_open()) return 1;

	string line;
	int number, sum=0;

	while(getline(infile, line)) {

	  stringstream iss(line);

	  if(!(iss >> number)) break;

	  // Logic:
	  sum += a;
	}

	cout << sum << "\n";

	return 0;
}