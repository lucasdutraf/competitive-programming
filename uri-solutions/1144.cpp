#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main () {
  int lines, times = 1;
  cin >> lines;
  for (size_t i = 1; i < lines + 1; i++) {
    ll a = pow(i, 2);
    ll b = pow(i,3);
    cout << i << " " << a << " " << b << endl;
    cout << i << " " << a + 1 << " " << b + 1 << endl;
  }

  return 0;
}
