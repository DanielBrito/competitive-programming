// https://www.urionlinejudge.com.br/judge/en/problems/view/2006

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  int t, a, b, c, d, e, result=0;
  
  cin >> t;
  cin >> a >> b >> c >> d >> e;
  
  if(t==a) ++result;
  if(t==b) ++result;
  if(t==c) ++result;
  if(t==d) ++result;
  if(t==e) ++result;
  
  cout << result;
  
  cout << "\n";
  
  return 0;
}