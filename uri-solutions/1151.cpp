#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll fib(int n) {
  if (n == 1) {
    return 0;
  }
  else if (n == 2) {
    return 1;
  }
  else if (n == 3) {
    return 1;
  }

  return fib(n - 1) + fib(n - 2);
}


int main () {
  int qt;
  cin >> qt;
  for (size_t i = 1; i < qt + 1; i++) {
    cout << fib(i) << (i == qt ? "\n" : " ");
  }

  return 0;
}
