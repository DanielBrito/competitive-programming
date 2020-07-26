// https://neps.academy/lesson/152

#include <bits/stdc++.h>

using namespace std;

string title(string s){
  
  for(int i=0; i<s.size(); i++){
    
    if(i==0) {
      
      s[i] = toupper(s[i]);
    }
    else{
      
      if(s[i-1]==' '){
        
        s[i] = toupper(s[i]);
      }
      else{
        
        s[i] = tolower(s[i]);
      }
    }    
  }
  
  return s;
}

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  string s;
  
  getline(cin, s);
  
  cout << title(s) << "\n";
  
  return 0;
}