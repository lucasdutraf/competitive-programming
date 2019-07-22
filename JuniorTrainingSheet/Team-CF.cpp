#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main () {

  int n; cin >> n; ll total = 0, c = 0;

  for (size_t i = 0; i < n; i++) {
    c = 0;
    for (size_t i = 0; i < 3; i++) {
      int a; cin >> a;
      if (a == 1) {
        c++;
      }
    }
    if (c >= 2) {
      total++;
    }
  }
  cout << total << endl;
  return 0;
}
