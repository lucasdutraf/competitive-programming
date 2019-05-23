#include <bits/stdc++.h>
using namespace std;
using mss = map<string, string>;
using vs = vector<string>;
int main () {
  int n, m; mss res; vs ans;
  cin >> n >> m;
  while (m--) {
    string a, b;
    cin >> a >> b;
    res[a] = b;
  }
  while (n--) {
    string in;
    cin >> in;
    if (res[in].size() < in.size()) {
      ans.push_back(res[in]);
    }
    else {
      ans.push_back(in);
    }
  }
  for (size_t i = 0; i < ans.size(); i++) {
    cout << ans[i] << (i == ans.size() - 1 ? '\n' : ' ');
  }
}
