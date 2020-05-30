/* https://www.codechef.com/problems/CSUM */

#include<iostream>

using namespace std;

int main(){

	int T, N, K, i, j;
	bool f;

	cin >> T;

	while(T--){

		f=false;

		cin >> N >> K;

		int v[N];

		for(i=0; i<N; i++){

            cin >> v[i];
		}

		for(i=0; i<N-1 && f==false; i++){

			for(j=i+1; j<N; j++){

				if(v[i]+v[j]==K){

					f=true;
					break;
				}
			}
		}

		f ? cout << "Yes\n" : cout << "No\n";
	}

	return 0;
}
