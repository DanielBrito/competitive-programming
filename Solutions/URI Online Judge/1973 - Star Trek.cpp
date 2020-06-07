// https://www.urionlinejudge.com.br/judge/en/problems/view/1973

#include <iostream>
#include <vector>
#include <numeric>
#include <cstring>

using namespace std;

int main(){

  unsigned long long int n, x, i=0, init=0, lastStar=0, starsAttacked=0;
  vector<unsigned long long int> sheepStars, originalSheeps;
  unsigned long long int sumInitialSheeps=0, stolenSheeps=0;
  
  cin >> n;
  
  while(n--){
    
    cin >> x;
    
    originalSheeps.push_back(x);
    sheepStars.push_back(x);
  }
  
  // Adding up all initial Stars's sheeps.
  sumInitialSheeps = accumulate(originalSheeps.begin(), originalSheeps.end(), init);
  
  int position = 0; // Setting up Star 1
  
  // Checking if 'position' is valid:
  while(position>=0 && position<sheepStars.size()){
    
    // Helps to manage the number of sheeps in a given position:
    lastStar = position;
    
    // Checking if the last amount was odd or even to set the direction:
    if((sheepStars[position]%2)==0){
      
      position--; // There was an even amount of sheep, then goes left
    }
    else{
      
      position++; // There was an odd amount of sheep, then goes right
    }
    
    // Cheking if there is at least one sheep to be stolen:
    if(sheepStars[lastStar]>=1){
      
      sheepStars[lastStar]--; // Steal one sheep
      stolenSheeps++; // Increment the amount of stolen sheeps
    }
  }
  
  // Comparing the initial number of sheeps with the last to count how many Stars were attacked: 
  for(i=0; i<originalSheeps.size(); i++){
    
    if(originalSheeps[i]!=sheepStars[i]){
      
      ++starsAttacked;
    }
  }
  
  // Printing out how many Stars were attacked and how many sheep weren't stolen:
  cout << starsAttacked << " " << sumInitialSheeps-stolenSheeps << "\n";
  
  return 0;
}