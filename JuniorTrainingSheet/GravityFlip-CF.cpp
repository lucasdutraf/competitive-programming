#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int main () {

  int a; cin >> a; vi ans;
  while (a--) {
    int b; cin >> b;
    ans.push_back(b);
  }
  sort(ans.begin(), ans.end());
  for (size_t i = 0; i < ans.size(); i++) {
    cout << ans[i] << (i == ans.size() - 1 ? "\n" : " ");
  }

  return 0;
}
