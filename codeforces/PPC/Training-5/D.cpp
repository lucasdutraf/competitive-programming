#include <bits/stdc++.h>
using namespace std;
using mss = multiset<string>;

int main () {
  int n, high = 0; string win; mss ans; cin >> n;
  while (n--) {
    string in; cin >> in; ans.insert(in);
  }
  for (auto& elem : ans) {
    if (ans.count(elem) > high) {
      high = ans.count(elem);
      win = elem;
    }
  }
  cout << win << endl;
  return 0;
}
