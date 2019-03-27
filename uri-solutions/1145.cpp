#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main () {
  int x, y, counter = 0;
  cin >> x >> y;
  for (size_t i = 1; i < y + 1; i++) {
    counter++;
    cout << i << (counter == x ? "\n" : " ");
    if (counter == x) {
      counter = 0;
    }
  }

  return 0;
}
