#include <bits/stdc++.h>

using namespace std;

void test(){
  
  vector<int> a = {3, 2, 5, 4, 1}; 

  int x = 10;
  int y = 15;
  
  sort(a.begin(), a.end());

  // pass -> {1, 2, 3, 4, 5} == {1, 2, 3, 4, 5}
  assert((a==vector<int>{1, 2, 3, 4, 5}));
  
  // fail -> 13 != 15
  assert(x+3==y);
}

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  test();
  
  return 0;
}