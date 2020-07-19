// https://www.urionlinejudge.com.br/judge/en/problems/view/2844

#include <iostream>
#include <string>

using namespace std;

int main() {

  // Inbuild codes for optimization:
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  
  long long int am, rm, em, av, rv, ev, timeM, timeV;
  string s;

  cin >> am >> rm >> em;
  cin >> av >> rv >> ev;

  // Ignoring the 'ENTER':
  char ch = getchar();
  cin.ignore();

  // Reading sentence with spaces:
  getline(cin, s);

  // Notice that 'they have a certain delay to receive and send data from the server' (am & av).
  // They also spend 'em' and 'ev' miliseconds for each character of the sentence.
  timeM = am * 2 + rm + em * s.size();
  timeV = av * 2 + rv + ev * s.size();

  // Checking who types fastest:
  if (timeM < timeV) {

    cout << "Matheus\n";
  } 
  else
  if (timeV < timeM) {

    cout << "Vinicius\n";
  } 
  else {

    cout << "Empate\n";
  }

  return 0;
}