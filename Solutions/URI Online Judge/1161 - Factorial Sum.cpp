// https://www.urionlinejudge.com.br/judge/en/problems/view/1161

#include<iostream>
#include<vector>

using namespace std;

long long int factorial(int n){

	return n==0 ? 1 : n * factorial(n-1);
}

int main(){

    vector<int> m, n;
    int x, y;

    while(cin >> x >> y){

        m.push_back(x);
        n.push_back(y);
    }

    for (int i=0; i<m.size(); i++){

        printf("%lld\n", factorial(m[i])+factorial(n[i]));
    }

    return 0;
}
