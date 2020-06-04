// https://www.urionlinejudge.com.br/judge/en/problems/view/1933

#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b;
    
    cin >> a >> b;
    
    if(a==b){
        
        cout << a << "\n";
    }
    
    if(a>b){
        
        cout << a << "\n";
    }
    
    if(b>a){
        
        cout << b << "\n";
    }
 
    return 0;
}