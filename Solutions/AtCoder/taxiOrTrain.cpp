/* https://atcoder.jp/contests/abc133/tasks/abc133_a */

#include<iostream>

using namespace std;

int main(){

    int N, A, B;

    cin >> N >> A >> B;

    N*A>B ? cout << B << endl : cout << N*A << endl;

    return 0;
}
