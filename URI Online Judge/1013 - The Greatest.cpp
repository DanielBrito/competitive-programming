// https://www.urionlinejudge.com.br/judge/en/problems/view/1013

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int a, b, c, ab, abc;
    
    cin >> a >> b >> c;

    ab=(a+b+abs(a-b))/2;

    abc=(ab+c+abs(ab-c))/2;
    
    cout << abc << " eh o maior" << endl;

    return 0;

}
