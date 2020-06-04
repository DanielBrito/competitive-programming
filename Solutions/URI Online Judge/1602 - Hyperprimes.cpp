// https://www.urionlinejudge.com.br/judge/en/problems/view/1602

#include <iostream>
#include <cmath>
#include <cstring>

#define MAX 2000001

bool isPrime[MAX];
int dividers[MAX];
int countHyperPrimes[MAX];

using namespace std;

void hyperPrimes(){
  
  int i;
  
  countHyperPrimes[1] = 0;
  
  for(i=2; i<=MAX; i++){
    
    countHyperPrimes[i] = countHyperPrimes[i-1];
    
    if(isPrime[dividers[i]]){
      
      countHyperPrimes[i]++;
    }
  }
}

void sieve(){
  
  int i, j;
  
  memset(isPrime, true, sizeof(isPrime));
  memset(dividers, 0, sizeof(dividers));
  
  for(i=2; i<MAX; i++){
    
    if(isPrime[i]){
      
      dividers[i] = 2;
      
      for(j=i+i; j<MAX; j+=i){
        
        isPrime[j] = false;
        
        int countDividers = 0;
        int d = j;
        
        while(d%i==0){
          
          d = d/i;
          countDividers++;
        }
        
        countDividers++;
        
        if(dividers[j]==0){
          
          dividers[j] = countDividers;
        }
        else{
          
          dividers[j] = dividers[j] * countDividers;
        }
      }
    }
  }
}

int main(){

  int n;
  
  sieve();
  hyperPrimes();
  
  while(cin >> n){
    
    cout << countHyperPrimes[n] << "\n";
  }
  
  return 0;
}
