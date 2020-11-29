/*
  O(​n^2)

  Conhecidos como algotitmos quadráticos, o programa demora tempo proporcional ao quadrado do n. 
  Dessa forma se duplicamos o n, o tempo fica quatro vezes maior. Qualquer código que tenha que ler/preencher 
  uma matriz quadrado de dimensão n custo pelo menos isso.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  //ler as entradas de uma matriz
  int n, G[1000][1000];

  cin >> n;
  
  for(int i = 0; i < n; ++i){ //Temos O(n*custo do for interno)
  
    for(int j = 0; j < n; ++j){ //Termos O(n*operação do for)
    
      cin >> G[i][j]; //O(1)
    }
  }
  
  //Assim a complexidade é O(n*O(n*(O(1)))) = O(n^2)
  
  return 0;
}