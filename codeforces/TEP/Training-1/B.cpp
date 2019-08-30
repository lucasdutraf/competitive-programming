#include <bits/stdc++.h>
using namespace std;
int main () {
  string s, aux = ""; cin >> s;
  for (auto elem : s) {
    elem = tolower(elem);
    if (elem != 'a' && elem != 'i' &&elem != 'e' &&elem != 'o' &&elem != 'u' &&elem != 'y') {
      aux.push_back('.');
      aux.push_back(elem);
    }
  }
  cout << aux << endl;
  return 0;
}
