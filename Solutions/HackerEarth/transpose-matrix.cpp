// https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/tutorial/

#include <iostream>

using namespace std;

int main(){

  int N, M;

  cin >> N >> M;

  int matrix[N][M];

  for(int i=0; i<N; i++){

    for(int j=0; j<M; j++){

      cin >> matrix[i][j];
    }
  }

  for(int i=0; i<N; i++){

    for(int j=0; j<M; j++){

      cout << matrix[j][i] << " ";
    }

    cout << "\n";
  }

  return 0;
}