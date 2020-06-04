// https://www.urionlinejudge.com.br/judge/en/problems/view/2936

#include <iostream>
 
using namespace std;
 
int main() {
    
    int n, total=0;
    
    cin >> n;
    total = n*300;
    
    cin >> n;
    total += n*1500;
    
    cin >> n;
    total += n*600;
    
    cin >> n;
    total += n*1000;
    
    cin >> n;
    total += n*150;
    
    cout << total+225 << "\n";
 
    return 0;
}