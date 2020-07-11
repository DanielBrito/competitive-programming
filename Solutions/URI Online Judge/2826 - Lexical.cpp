// https://www.urionlinejudge.com.br/judge/en/problems/view/2826

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  // Used to store the inputs:
  vector<string> str;
  string s;
  
  cin >> s;
  
  // First string:
  str.push_back(s);
  
  cin >> s;
  
  // Second string:
  str.push_back(s);
  
  // Using the inbuilt function to sort the vector:
  sort(str.begin(), str.end());
  
  // The smaller string is in position 0 and the greater in position 1:
  cout << str[0] << "\n" << str[1] << "\n";
  
  return 0;
}
