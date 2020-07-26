// https://neps.academy/lesson/146

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  string s, vowels="aeiou", filteredStr = "";
  int len, i, j;
  
  cin >> s;
  
  for(i=0; i<s.size(); i++){
    
    if(vowels.find(s[i]) != std::string::npos){
      
      filteredStr += s[i];
    }
  }
  
  for(i=0, j=len-1; i<filteredStr.size()/2; i++, j--){
    
    if(filteredStr[i]!=filteredStr[j]){
      
      cout << "N\n";
      return 0;
    }
  }
  
  cout << "S\n";
  
  return 0;
}