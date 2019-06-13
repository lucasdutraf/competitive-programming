#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int main () {

  int a, b, c; cin >> a >> b >> c;
  vi ans {a, b, c}; sort(ans.begin(), ans.end());
  cout << ans[0] + ans[1] << endl;

  return 0;
}
