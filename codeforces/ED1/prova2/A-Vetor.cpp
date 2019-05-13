#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main () {

  ll n, c, k, times = 0;
  cin >> n >> c >> k;
  while (c < n) {
    c *= k;
    times++;
  }
  cout << times << endl;

  return 0;
}
