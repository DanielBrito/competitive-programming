// https://www.urionlinejudge.com.br/judge/en/problems/view/1042

#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
 
using namespace std;
 
int main() {
 
    vector<int> n;
    int x, y, z;
    
    cin >> x >> y >> z;
    
    n.push_back(x);
    n.push_back(y);
    n.push_back(z);
      
    sort(n.begin(), n.end());
    
    for(auto i : n){
      
      cout << i << "\n";
    }
    
    cout << "\n";
  
    cout << x << "\n" << y << "\n" << z << "\n";
 
    return 0;
}