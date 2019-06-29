#include <bits/stdc++.h>
using namespace std;
using sc = set<char>;
using vi = vector<int>;

int main () {

  int n; cin >> n; vi res; int ans = 0;
  while (n--) {
    int a; cin >> a;
    res.push_back(a);
  }
  for (size_t i = 1; i <= res.size(); i++) {
    if (res[i] < res[i - 1] && res[i] > res[i + 1] && i != res.size() - 1) {
      ans++;
    }
    else if (res[i] > res[i - 1] && res[i] < res[i + 1]) {
      ans++;
    }
    if (i == res.size() - 1) break;
  }
  cout << ans << endl;

  return 0;
}
