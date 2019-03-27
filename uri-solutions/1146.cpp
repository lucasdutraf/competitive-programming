#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main () {
  int a;
  while (cin >> a, a != 0) {
    for (size_t i = 1; i < a + 1; i++) {
      cout << i << ((i == a) ? "\n" : " ");
    }
  }
  return 0;
}
