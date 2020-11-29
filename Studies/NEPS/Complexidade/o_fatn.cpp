/*
  O(​n!)

  Algoritmos que rodam em tempo proporcional ao fatorial, normalmente algoritmos dessa classe são força bruta. 
  Um exemplo é o cacheiro viajante por força bruta.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  //Checar a posição lexicogŕafica de uma ordem de um vetor, O(n * n!)
  int n, v[10], u[10], ans, stop;
  
  cin >> n;
  
  for(int i = 0; i < n; ++i){
    
     cin >> v[i]; //leitura, O(n)
  } 
  
  for(int i = 0; i < n; ++i){
    
    u[i] = v[i]; //copio o vetor para outro, O(n)
  }
  
  sort(u, u + n) //ordenação, O(nlog(n))
  
  for(ans = 0; 1; ++ans){
    
    stop = 0;
    
    for(int i = 0; i < n; ++i){ //checa se os vetores são iguais, O(n)
    
      if(u[i] != v[i])  break;
      if(i == n - 1)  stop = 1; 
    }
    
    if(stop){
      
       break;
    } 
    
    next_permutation(u, u + n); //transforma o u na próxima ordenação do vetor na ordem lexicográfica, pode se repetir n! vezes
  }
  
  cout << ans << "\n";
  
  return 0;
}