#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main () {
  int a, n, sum = 0;
  cin >> a >> n;
  while (true) {
    if (n <= 0) {
      cin >> n;
    }
    else {
      break;
    }
  }
  for (size_t i = 0; i < n; i++) {
    sum += a;
    a++;
  }
  cout << sum << endl;

  return 0;
}
