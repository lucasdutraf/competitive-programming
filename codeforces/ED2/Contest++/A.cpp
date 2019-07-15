#include <bits/stdc++.h>
using namespace std;
using si = set<int>;

int main () {

  int N; cin >> N; si ans;
  while (N--) {
    int a; cin >> a;
    ans.insert(a);
  }
  cout << ans.size() << endl;

  return 0;
}
