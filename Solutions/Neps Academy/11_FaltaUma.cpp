// https://neps.academy/problem/11

// First of all, let's analyze some patterns in the problem, taking as an example this case:

//  3          -> N value

//  3  2  1    -> Possbile permutation
//  2  1  3    -> Possbile permutation
//  1  3  2    -> Possbile permutation
//  3  1  2    -> Possbile permutation
//  1  2  3    -> Possbile permutation

// 10  9 11    -> Adding up the columns of the given numbers (subtotal)

//  2  3  1    -> Missing permutation (Notice that is the difference between 'total'-'subtotal'.

// 12 12 12    -> Sum of all the values (total)

// So, we just need to figure out some formula to calculate the 'total' and then subtract the 'subtotal' from it.
// In the end, this operation will give us the missing permutation. 

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main(){
  
  int n, i, j, x, fat=1;
  
  cin >> n;
  
  // Calculating the factorial of 'n'.
  // It'll give us the total number of permutations.
  for(i=1; i<=n; i++) fat *= i;
  
  // This vector will be used to store the sum of the values of each column:
  vector<int> subtotal(n, 0);

  // Notice that we use 'fat-1' because there is a missing permutation.
  for(i=0; i<fat-1; i++){
    
    for (j=0; j<n; j++){
      
      cin >> x;
      
      // Notice that we don't need to store the hole matrix, just the sum of the values of each 'column': 
      subtotal[j] += x;
    }
  }
  
  // This vector will be used to store the numbers of the missing permutation, as explained before:
  vector<int> res;
  
  // Here, we use the concept of Arithmetic Progression.
  // This will help us to calulate the 'total' sum of a column with all the possible permutations:
  int apSum = ((1+n)*n)/2;
  
  // This loop is used to traverse 'subtotal' and subtract its value from 'total', to calculate their difference:
  for(i=0; i<n; i++){
    
    // I struggled to figure out how to find the sum of the values of a column as if it has all the permutations (total).
    // Finally, I ended up with this formula: apSum*(fat/n). So, we just calculate the difference.
    res.push_back(apSum*(fat/n)-subtotal[i]);
  }

  // Printint out the result, that is the missing permutation:
  for(int i=0; i<res.size(); i++){
    
    // Notice that we can't print out a space after the last number of the permutation.
    // Otherwise, it should give us a 'Presentation error'.
    (i<n-1) ? cout << res[i] << " " : cout << res[i];
  }
  
  cout << "\n";
  
  return 0;
}
