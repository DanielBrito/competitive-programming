// https://www.urionlinejudge.com.br/judge/en/problems/view/3053

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

  int n, x;
  char position;
  vector<int> v;
  
  cin >> n;
  
  cin >> position;
  
  while(n--){
    
    cin >> x;
    
    v.push_back(x);
  }
  
  for(int i=0; i<v.size(); i++){

  	// Just checking each possibility:
    
    if(position=='A' && v[i]==1){
      
      position = 'B';
    }
    else
    if(position=='B' && v[i]==1){
      
      position = 'A';
    }
    else
    if(position=='B' && v[i]==2){
      
      position = 'C';
    }
    else
    if(position=='C' && v[i]==2){
      
      position = 'B';
    }
    else
    if(position=='C' && v[i]==3){
      
      position = 'A';
    }
    else
    if(position=='A' && v[i]==3){
      
      position = 'C';
    }    
  }
  
  cout << position << "\n";
  
  return 0;
}
