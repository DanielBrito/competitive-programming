// https://neps.academy/lesson/148

#include <bits/stdc++.h>

using namespace std;

bool eh_primo(int x){
  
  // Smaller 0, 1:
  if(x<2) return false;
  
  // Even numbers:
  if(x>2 && x%2==0) return false;
  
  // Checking for odd numbers greater than 2 and smaller than sqtr(x):
  for(int i=3; i<sqrt(x); i+=2){
    
    if(x%i==0) return false; 
  }
  
  return true;
}

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  int x;
  
  cin >> x;
  
  eh_primo(x) ? cout << "S" : cout << "N";
  
  cout << "\n";
  
  return 0;
}