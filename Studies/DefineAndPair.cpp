#include <bits/stdc++.h>

using namespace std;

#define MAX 3
#define ID users[i].first
#define NAME users[i].second

int main(){
  
  int id;
  string name;
  
  vector<pair<int, string>> users;
  
  for(int i=0; i<MAX; i++){
    
    cin >> id >> name;
    
    users.push_back({id, name});
  }
  
  for(int i=0; i<MAX; i++){
    
    cout << ID << " " << NAME << "\n";
  }
  
  return 0;
}