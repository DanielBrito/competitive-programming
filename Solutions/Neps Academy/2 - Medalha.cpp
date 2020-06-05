// https://neps.academy/problem/2

#include <iostream>

using namespace std;

int main(){

  int t1, t2, t3;
  
  cin >> t1;
  cin >> t2;
  cin >> t3;
  
  if(t1<t2 && t1<t3){
    
    cout << "1\n";
    
    t2<t3 ? cout << "2\n3\n" : cout << "3\n2\n";
  }
  
  if(t2<t1 && t2<t3){
    
    cout << "2\n";
    
    t1<t3 ?  cout << "1\n3\n" : cout << "3\n1\n";
  }
  
  if(t3<t1 && t3<t2){
    
    cout << "3\n";
    
    t1<t2 ? cout << "1\n2\n" : cout << "2\n1\n";
  }
  
  return 0;
}
