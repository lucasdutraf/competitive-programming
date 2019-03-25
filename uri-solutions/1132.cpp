#include <bits/stdc++.h>
using namespace std;

int main () {

  int a, b, sum = 0;
  cin >> a >> b;
  if (a > b) {
    swap(a, b);
  }
  for (size_t i = a; i < b + 1; i++) {
    if (i % 13 != 0) {
      sum += i;
    }
  }
  cout << sum << endl;
  return 0;
}
