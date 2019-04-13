#include <bits/stdc++.h>
using namespace std;

int main () {
  int a, b, ans = 0;
  cin >> a >> b;
  if (a > b) {
    ans += a;
    a--;
    if (a > b) {
      ans += a;
    }
    else {
      ans += b;
    }
  }
  else {
    ans += b;
    b--;
    if (b > a) {
      ans += b;
    }
    else {
      ans += a;
    }
  }

  cout << ans << endl;
  return 0;
}
