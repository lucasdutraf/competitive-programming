#include <bits/stdc++.h>
using namespace std;
using ii = pair<int, int>;
using vi = vector<ii>;
int main () {
  int s, n; cin >> s >> n; vi dragons;
  for (size_t i = 0; i < n; i++) {
    int a, b; cin >> a >> b;
    dragons.push_back(ii(a, b));
  }
  sort(dragons.rbegin(), dragons.rend());
  while (!dragons.empty()) {
    if (dragons.back().first < s) {
      s += dragons.back().second;
      dragons.pop_back();
    }
    else {
      break;
    }
  }
  cout << (dragons.empty() ? "YES" : "NO") << endl;

  return 0;
}
