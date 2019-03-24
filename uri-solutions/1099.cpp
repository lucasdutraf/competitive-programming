#include <bits/stdc++.h>
using namespace std;

int main () {

  int cases, a, b, sum = 0;
  cin >> cases;

  while (cases--) {
    sum = 0;
    cin >> a >> b;
    if (a > b) {
      swap(a, b);
    }
    for (size_t i = a + 1; i < b; i++) {
      if (i % 2 != 0) {
        sum += i;
      }
    }
    cout << sum << endl;
  }

  return 0;
}
