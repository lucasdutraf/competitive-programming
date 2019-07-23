#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vs = vector<string>;

int main () {

  int n; cin >> n; vs c; int gr = 0;
  while (n--) {
    string a; cin >> a;
    c.push_back(a);
  }
  for (size_t i = 0; i < c.size(); i++) {
    if (i != c.size() - 1 && c[i][1] == c[i + 1][0]) {
      gr++;
    }
  }
  cout << gr + 1 << endl;

  return 0;
}
