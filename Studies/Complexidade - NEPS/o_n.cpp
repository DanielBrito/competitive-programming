/*
  O(​n)

  Conhecido como linear. Geralmente um loop que vai de 0 a algum múltiplo fixo de n.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
  
  cin >> n;

  int* x = (int*)malloc(sizeof(int)*n);
  
  for(int i = 0; i < n; ++i){
    
    cin >> x[i];
  }
  
  return 0;
}