#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main () {

  vi sol, pos;
  int n, t; cin >> n >> t;

  for (size_t i = 0; i < n - 1; i++) {
    int a; cin >> a;
    sol.push_back(a);
  }

  int idx = 0;
  while (true) {
    pos.push_back(idx);
    if (idx == t - 1) {
      cout << "YES" << endl;
      break;
    }
    if (idx == n - 1) {
      break;
    }
    idx += sol[idx];
  }

  auto it = find(pos.begin(), pos.end(), t - 1);
  if (it == pos.end()) {
    cout << "NO" << endl;
  }

  return 0;
}
