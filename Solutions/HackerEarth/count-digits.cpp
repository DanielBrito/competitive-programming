// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/tutorial/

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  string number;
  map<char, int> count;
  
  cin >> number;
  
  for(char i='0'; i<='9'; i++){
    
    count[i]=0;
  }
  
  for(int i=0; i<number.size(); i++){
    
    count[number[i]]++;
  }
  
  for(auto &value: count){
    
    cout << value.first << " " << value.second << "\n";
  }
  
  return 0;
}