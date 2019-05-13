#include <bits/stdc++.h>
using namespace std;
using mc = multiset<char>;

int main () {

  string a, b, auxa, auxb;
  int even = 0;
  cin >> auxa >> auxb;

  for (size_t i = 0; i < auxa.size(); i++) {
    char hl = toupper(auxa[i]);
    a.push_back(hl);
  }
  for (size_t i = 0; i < auxb.size(); i++) {
    char hl = toupper(auxb[i]);
    b.push_back(hl);
  }

  for (size_t i = 0; i < a.size(); i++) {
    if (a[i] > b[i]) {
      cout << "1" << endl;
      break;
    }
    else if (a[i] < b[i]) {
      cout << "-1" << endl;
      break;
    }
    else {
      even++;
    }
  }
  if (even == a.size()) {
    cout << "0" << endl;
  }

  return 0;
}
