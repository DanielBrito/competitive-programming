// https://www.urionlinejudge.com.br/judge/en/problems/view/1097

#include <iostream>

using namespace std;

int main(){
  
  int count = 0;
  
  for(int i=1; i<=9; i+=2){
    
    for(int j=i+6; count<3; j--){
      
      cout << "I=" << i << " J=" << j << endl;
      count++;
    }
    
    count = 0;
  }
  
  return 0;
}