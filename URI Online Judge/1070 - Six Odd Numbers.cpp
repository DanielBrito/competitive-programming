// https://www.urionlinejudge.com.br/judge/en/problems/view/1070

#include <iostream>

using namespace std;

int main(){
  
  int x, count=0;
  
  cin >> x;
  
  for (int i=x; count<6; i++){
    
    if(i%2==1){
    	
      cout << i << endl;
      count++;
    }
  }
  
  return 0;
}