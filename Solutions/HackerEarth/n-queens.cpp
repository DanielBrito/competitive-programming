// https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/tutorial/

// Step-by-step (for n=4): https://www.youtube.com/watch?v=lTPIX2Ywo3U

#include <bits/stdc++.h>

using namespace std;

bool isValid(int** board, int n, int row, int col){
  
  // Check whether there is queen in the left or not:
  for(int i=0; i<col; i++){

    if(board[row][i]==1) return false;
  }
  
  for(int i=row, j=col; i>=0 && j>=0; i--, j--){
    
    // Check whether there is queen in the left upper diagonal or not:
    if(board[i][j]==1) return false;
  }
   
  for(int i=row, j=col; j>=0 && i<n; i++, j--){
   
    // Check whether there is queen in the left lower diagonal or not:
    if(board[i][j]==1) return false;
  }
       
  return true;
}

bool solveNQueen(int** board, int n, int col){
  
  // When N queens are placed successfully:
  if(col>=n) return true;
    
  // For each row, check placing of queen is possible or not:
  for(int i=0; i<n; i++){

    if(isValid(board, n, i, col)){
      
      // If it's a valid place, set the queen:
      board[i][col] = 1;
       
      if(solveNQueen(board, n, col+1)){
       
        return true;
      }
      
      // When no place is vacant remove that queen (backtracking):
      board[i][col] = 0;
    }
  }

  return false;
}

int main(){
  
  int n;
  
  cin >> n;
  
  // Allocating memory:
  int** board = new int*[n];
  
  for (int i=0; i<n; ++i){
    
    board[i] = new int[n];
  }
  
  // Initializing board:
  for(int i=0; i<n; i++){
    
    for(int j=0; j<n; j++){
      
      board[i][j] = 0;
    }
  }
  
  // Solving the problem:
  if(solveNQueen(board, n, 0)){
    
    cout << "YES\n";
    
    for(int i=0; i<n; i++){
      
      for(int j=0; j<n; j++){
        
        cout << board[i][j] << " ";
      }
      
      cout << "\n";
    }
  }
  else{
    
    cout << "NO\n";
  }
  
  return 0;
}