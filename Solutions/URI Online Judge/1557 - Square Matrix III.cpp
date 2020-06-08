// https://www.urionlinejudge.com.br/judge/en/problems/view/1557

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

unsigned long long int countDigits(unsigned long long int n){

    unsigned long long int count = 0;

    while(n>9){

        n/=10;
        count++;
    }

    return count+1;
}

int main(){

    vector<int> dim;
    bool finish = false;
    unsigned long long int v, i, j, k, max, spaces;
    int n, c;

    while (cin >> n && n!=0){
        
        dim.push_back(n);
    }

    for (v=0; v<dim.size(); v++){

        // Find max number of the matrix:
        max = pow(2,(2*(dim[v]-1)));

        spaces = countDigits(max);

        // Print matrix with tabulation:

        for (i = 1; i < pow(2, dim[v]); i *= 2){

            c = 0;

            for (j = i; j < pow(2, dim[v]) * i; j *= 2){

                for(k=0; k<spaces-countDigits(j); k++) {

                    printf(" ");
                }

                (c<(dim[v]-1)) ? cout << j << " " : cout << j;

                c++;
            }

            cout << "\n";
        }

        cout << "\n";
    }

    return 0;
}