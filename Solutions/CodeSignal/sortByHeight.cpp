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
  vector<int> b = {-1, -1, -1, -1, -1}; 
  vector<int> c = {-1};
  vector<int> d = {4, 2, 9, 11, 2, 16};
  vector<int> e = {2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1};  
  vector<int> f = {23, 54, -1, 43, 1, -1, -1, 77, -1, -1, -1, 3};
  
  assert((sortByHeight(a)==vector<int>{-1, 150, 160, 170, -1, -1, 180, 190}));
  assert((sortByHeight(b)==vector<int>{-1, -1, -1, -1, -1}));
  assert((sortByHeight(c)==vector<int>{-1}));
  assert((sortByHeight(d)==vector<int>{2, 2, 4, 9, 11, 16}));
  assert((sortByHeight(e)==vector<int>{1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2}));
  assert((sortByHeight(f)==vector<int>{1, 3, -1, 23, 43, -1, -1, 54, -1, -1, -1, 77}));
}

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  test();
  
  return 0;
}