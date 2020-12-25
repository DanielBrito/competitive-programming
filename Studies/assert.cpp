#include <bits/stdc++.h>

using namespace std;

void test(){
  
  vector<int> array = {3, 2, 5, 4, 1}; 

  int x = 10, y = 15;
  
  string name = "daniel";
  
  sort(array.begin(), array.end());
  reverse(name.begin(), name.end());

  // pass -> sort(array) == {1, 2, 3, 4, 5}
  assert((array==vector<int>{1, 2, 3, 4, 5}));
  
  // pass -> reverse(name) == "leinad"
  assert(name=="leinad");
  
  // fail -> 10+3 != 15
  assert(x+3==y && "wrong result");
}

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  test();
  
  return 0;
}