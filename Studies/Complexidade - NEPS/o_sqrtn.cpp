/*
  O(√​n)

  Um algoritmo que cresce como a raiz do próprio n, assim se multiplicamos n por quatro, esse programa demora 
  2 vezes a mais que antes.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  // calcula a parte inteira da raiz de n
  int n, sq;
  
  cin >> n;
  
  for(sq = 1; sq*sq <= n; ++sq);
  --sq;
  
  cout << sq << "\n";
  
  return 0;
}