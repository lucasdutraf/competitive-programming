#include <bits/stdc++.h>
using namespace std;

int main () {
  int a, b; cin >> a >> b;
  vector<int> v;
  while (b--) {
    int u; cin >> u;
    v.push_back(u);
  }
  sort(v.begin(), v.end());
  int aux = a - 1, c = 0, ans;
  while (true) {
    if (aux > v.size() - 1) break;
    if (v[aux] - v[c] < ans)
      ans = v[aux] - v[c];
    ++aux; ++c;
  }
  cout << ans << endl;
}
