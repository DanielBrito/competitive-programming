// https://neps.academy/lesson/155

#include <bits/stdc++.h>

using namespace std;

struct pais{
  
  int id, ouro, prata, bronze;
};

typedef struct pais Pais;

int compara(Pais a, Pais b){
  
  if(a.ouro!=b.ouro) return a.ouro > b.ouro;
  
  if(a.prata!=b.prata) return a.prata > b.prata;
  
  if(a.bronze!=b.bronze) return a.bronze > b.bronze;
  
  return a.id < b.id;
}

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  int n, m, i, o, p, b;
  Pais paises[101];
  
  cin >> n >> m;
  
  for(int i=0; i<n; i++){
    
    paises[i].ouro = 0;
    paises[i].prata = 0;
    paises[i].bronze = 0;
    paises[i].id = i+1;
  }
  
  for(int i=0; i<m; i++){
    
    cin >> o >> p >> b;
    
    paises[o-1].ouro++;
    paises[p-1].prata++;
    paises[b-1].bronze++;
  }
  
  sort(paises, paises+n, compara);
  
  for(i=0; i<n; i++){
    
    cout << paises[i].id << " ";
  }
  
  cout << "\n";
  
  return 0;
}