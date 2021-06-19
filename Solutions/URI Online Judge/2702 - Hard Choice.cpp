// https://www.urionlinejudge.com.br/judge/en/problems/view/2702

#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int Ca, Ba, Pa, Cr, Br, Pr;
  int result = 0;
  
  cin >> Ca >> Ba >> Pa;
  cin >> Cr >> Br >> Pr;
  
  if(Ca < Cr) result += Cr-Ca;
  if(Ba < Br) result += Br-Ba;
  if(Pa < Pr) result += Pr-Pa;
  
  cout << result << "\n";
  
  return 0;
}