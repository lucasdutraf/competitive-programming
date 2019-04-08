#include <bits/stdc++.h>
using namespace std;

int main () {

  int k, l, m, n, d, notd = 0;
  cin >> k >> l >> m >> n >> d;

  for (size_t i = 1; i <= d; i++) {
    if ((i % k != 0) && (i % l != 0) && (i % m != 0) && (i % n != 0)) {
      notd++;
    }
  }
  if (k == 1 || l == 1 || m == 1 || n == 1) {
    cout << d << endl;
  }
  else {
    cout << d - notd << endl;
  }
  return 0;
}
