// https://www.urionlinejudge.com.br/judge/en/problems/view/2712

#include <iostream>
#include <string>

using namespace std;

int main(){
  
  int n;
  string s;
  bool failure;

  cin >> n;
  
  while(n--){
    
    failure = false;
    
    cin >> s;
    
    // The fourth character must be '-' and 's' must have 8 characters:
    if(s[3]!='-' || s.size()!=8){
      
      cout << "FAILURE\n";
      failure = true;
    }
    
    // The three first elements must be [A-Z]:
    for(int i=0; i<=2 && !failure; i++){
      
      // Checking for uppercase letters:
      if(!isalpha(s[i]) || !isupper(s[i])){
        
        cout << "FAILURE\n";
        failure = true;
      }
    }
    
    // The last four elements must be integers [0-9]
    for(int i=4; i<s.size() && !failure; i++){
      
      // Checking for digits:
      if(!isdigit(s[i])){
        
        cout << "FAILURE\n";
        failure = true;
      }
    }
    
    // Just print the weekday if 'failure' is false:
    if(!failure){
      
      // The last element define the day of the vehicle restriction:
      switch(s[s.size()-1]){
      
        case '1': 
        case '2': cout << "MONDAY\n"; break;
        case '3': 
        case '4': cout << "TUESDAY\n"; break;
        case '5': 
        case '6': cout << "WEDNESDAY\n"; break;
        case '7': 
        case '8': cout << "THURSDAY\n"; break;
        case '9': 
        case '0': cout << "FRIDAY\n"; break;
      }
    }
  }
  
  return 0;
}
