/*
  O(​n*log(n))

  Os algoritmos primeiramente encontrados nessa categoria são as ordenações rápidas por comparação (quicksort, merge-sort, etc).
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  //ordenação usando a STL
  int n, v[100000];
  
  cin >> n;
  
  for(int i = 0; i < n; ++i){  
    
    cin >> v[i]; //custa O(n)
  }
  
  sort(v, v + n); //ordena o vetor, custa O(nlog(n))
  
  //n + nlog(n) = O(nlog(n))
  
  return 0;
}