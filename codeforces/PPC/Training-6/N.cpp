#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main () {
  int n; cin >> n;
  ll c = 0, d = 0;
  while (n--) {
    int a; cin >> a;
    if (a == 100) {
      c++;
    }
    else if (a == 200) {
      d++;
    }
  }
  if (c % 2 != 0) {
    cout << "NO" << endl;
  }
  else if (c == 0 and d % 2 != 0) {
    cout << "NO" << endl;
  }
  else {
    cout << "YES" << endl;
  }
  return 0;
}
