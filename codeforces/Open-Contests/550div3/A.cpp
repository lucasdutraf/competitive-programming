#include <bits/stdc++.h>
using namespace std;
using ss = set<char>;

int main () {

  int cases;
  string aux;
  ss hel;
  cin >> cases;
  while (cases--) {
    cin >> aux;
    int times = 0;
    for (size_t i = 0; i < aux.size(); i++) {
      hel.insert(aux[i]);
    }
    if (hel.size() == aux.size()) {
      for (size_t j = 0; j < aux.size(); j++) {
          if (j == aux.size() - 1) {
            if (aux[j] == (aux[j - 1] + 1)) {
              times++;
              break;
            }
            else {
              break;
            }
          }
          if (j == 0) {
            if (aux[j] == (aux[j + 1] + 1)) {
              times++;
              break;
            }
            else {
              continue;
            }
          }
          if (aux[j] == (aux[j - 1] + 1) || aux[j] == aux[j + 1] + 1) {
            times++;
          }
      }
      if (times != 0) {
        cout << "Yes" << endl;
      }
      else {
        cout << "No" << endl;
      }
    }
    else {
      cout << "No" << endl;
    }
    hel.clear();
  }
  return 0;
}
