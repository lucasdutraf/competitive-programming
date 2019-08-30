#include <bits/stdc++.h>
using namespace std;
int main () {

  int n, t; cin >> n >> t;
  string a; cin >> a;
  for (size_t i = 0; i < t; i++) {
    for (size_t j = 0; j < n; j++) {
      if (j + 1 > n - 1) {
        break;
      }
      if (a[j] == 'B' && a[j + 1] == 'G') {
        swap(a[j], a[j + 1]);
        j++;
      }
    }
  }
  cout << a << endl;
  return 0;
}
