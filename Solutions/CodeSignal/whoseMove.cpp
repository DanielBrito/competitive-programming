/* https://app.codesignal.com/challenge/R6pswKNcG8iW4H4Rf */

#include<iostream>

using namespace std;

string whoseMove(string lastPlayer, bool win);

int main(){
	
	string lastPlayer = "black";
	bool win = false;
	
	cout << whoseMove(lastPlayer, win) << "\n";
	
	return 0;	
}

string whoseMove(string lastPlayer, bool win) {
	
	return win ? lastPlayer : lastPlayer.compare("white")==0 ? "black" : "white";
}

