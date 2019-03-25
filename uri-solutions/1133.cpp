#include <bits/stdc++.h>
using namespace std;

int main () {

  int a, b, sum = 0;
  cin >> a >> b;
  if (a > b) {
    swap(a, b);
  }
  for (size_t i = a + 1; i < b; i++) {
    if ((i % 5 == 2) || (i % 5 == 3)) {
      cout << i << endl;
    }
  }
  return 0;
}
