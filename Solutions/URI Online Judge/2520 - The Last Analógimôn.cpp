// https://www.urionlinejudge.com.br/judge/en/problems/view/2520

#include <iostream>

using namespace std;

int main(){

  // These arrays are used to the coordinates:
  int x, m, n, pos1[2], pos2[2];
  
  // Receiving values until EOF:
  while(cin >> m >> n){
    
    for(int i=0; i<m; i++){
      
      for(int j=0; j<n; j++){
        
        cin >> x;
        
        // My position:
        if(x==1){
          
          // Storing coordinates (i, j) in the matrix:
          pos1[0] = i;
          pos1[1] = j;
        }
        
        // Analógimôn’s position:
        if(x==2){
          
          // Storing coordinates (i, j) in the matrix:
          pos2[0] = i;
          pos2[1] = j;
        }
      }
    }
    
    // Calculating the sum of the absolute difference between vertical and horizontal positions:
    cout << abs(pos1[0]-pos2[0]) + abs(pos1[1]-pos2[1]) << "\n";
    
  }
  
  return 0;
}
