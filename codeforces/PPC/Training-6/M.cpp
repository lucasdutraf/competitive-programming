#include <bits/stdc++.h>
using namespace std;
using si = set<char>;
using mci = map<char, int>;

int main () {

  string s, s2;
  mci a, b;
  getline(cin, s);
  getline(cin, s2);
  for (auto elem : s) {
    if (elem != ' ') {
      a[elem]++;
    }
  }
  for (auto elem : s2) {
    if (elem != ' ') {
      b[elem]++;
    }
  }
  int res = 0;
  for (auto elem : b) {
    if (elem.second <= a[elem.first]) {
      res++;
    }
  }
  cout << (res >= b.size() ? "YES" : "NO") << endl;
  return 0;
}
