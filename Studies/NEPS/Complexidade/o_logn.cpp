/*
  O(log(n))

  Esse algoritmo custa uma quantidade de operações proporcional ao logaritmo do número, assim se elevamos n ao quadrado, 
  duplicamos o tempo necessário para o algoritmo gerar resposta, o algoritmo mais conhecido nessa complexidade é a busca 
  binária, e o mais simples é tirar a parte inteira do logaritmo de um número.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  // busca nos dígitos binários do número
  // não é uma busca binária
  // imprime a parte inteira da raiz de n
  int n, sq = 0, test;
  
  cin >> n;
  
  for(int pot = 31; pot >= 0; --pot){
    
    test = sq + (1 << test);
    
    if(test*test <= n)  sq = test;
  }
  
  cout << sq << "\n";
  
  return 0;
}