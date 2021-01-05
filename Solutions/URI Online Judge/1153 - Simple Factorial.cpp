// https://www.urionlinejudge.com.br/judge/en/problems/view/1153

#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    long result=1;
    int N;
    
    cin >> N;
    
    while(N>0){
      
      result *= N--;
    }
    
    cout << result << "\n";
 
    return 0;
}