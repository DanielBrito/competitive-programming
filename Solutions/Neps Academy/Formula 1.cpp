// https://neps.academy/lesson/156

#include <bits/stdc++.h>

#define MAX 103

using namespace std;

int main(){
  
  int g, p, s, i, j, k;
  
  while(cin >> g >> p && g!=0 && p!=0){
    
    int colocacaoGeral[MAX][MAX], podio[MAX], sistemaPontuacao[MAX];
    
    for(i=1; i<=g; i++){
      
      for(j=1; j<=p; j++){
        
        cin >> colocacaoGeral[i][j];
      }
    }
    
    cin >> s;
    
    while(s--){
      
      memset(sistemaPontuacao, 0, sizeof(sistemaPontuacao));
      memset(podio, 0, sizeof(podio));
      
      cin >> k;
      
      for(i=1; i<=k; i++){
        
        cin >> sistemaPontuacao[i];
      }
      
      for(i=1; i<=g; i++){
        
        for(j=1; j<=p; j++){
          
          podio[j] += sistemaPontuacao[colocacaoGeral[i][j]];
        }
      }
      
      int pontuacaoMaxima = 0;
      
      for(i=1; i<=p; i++){
        
        pontuacaoMaxima = max(pontuacaoMaxima, podio[i]);
      }
      
      for(i=1; i<=p; i++){
        
        if(podio[i]==pontuacaoMaxima){
          
          cout << i << " ";
        }
      }
      
      cout << "\n";
    }
  }
  
  return 0;
}