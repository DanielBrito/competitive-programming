/* https://codefights.com/arcade/intro/level-3/D6qmdBL2NYz49XHwM */

#include <bits/stdc++.h>

using namespace std;

vector<int> sortByHeight(vector<int> a) {
  
  vector<int> sorted;
  
  for(int i=0; i<a.size(); i++){
    
    if(a[i]!=-1){
      
      sorted.push_back(a[i]);
    }
  }
  
  sort(sorted.begin(), sorted.end());
  
  for(int i=0; i<a.size(); i++){
    
    if(a[i]!=-1){
      
      a[i] = sorted[0];
      sorted.erase(sorted.begin());
    }
  }
  
  return a;
}

void test(){
  
  vector<int> a = {-1, 150, 190, 170, -1, -1, 160, 180}; 
  vector<int> output_a = {-1, 150, 160, 170, -1, -1, 180, 190};
  
  vector<int> b = {-1, -1, -1, -1, -1}; 
  vector<int> output_b = {-1, -1, -1, -1, -1};
  
  vector<int> c = {-1};
  vector<int> output_c = {-1};
  
  vector<int> d = {4, 2, 9, 11, 2, 16};
  vector<int> output_d = {2, 2, 4, 9, 11, 16};
  
  vector<int> e = {2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1}; 
  vector<int> output_e = {1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2};
  
  vector<int> f = {23, 54, -1, 43, 1, -1, -1, 77, -1, -1, -1, 3};
  vector<int> output_f = {1, 3, -1, 23, 43, -1, -1, 54, -1, -1, -1, 77};
  
  assert(sortByHeight(a)==output_a);
  assert(sortByHeight(b)==output_b);
  assert(sortByHeight(c)==output_c);
  assert(sortByHeight(d)==output_d);
  assert(sortByHeight(e)==output_e);
  assert(sortByHeight(f)==output_f);
}

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  test();
  
  cout << "\n";
  
  return 0;
}