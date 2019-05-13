#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
  bool res;
  for (size_t i = 2; i < n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main () {
  int n, m, count = 0;
  cin >> n >> m;
  if (is_prime(m) == true) {
    int aux = n + 1;
    for (size_t j = aux; j < m; j++) {
      if (is_prime(j) == true) {
        count++;
      }
    }
    if (count != 0) {
      cout << "NO" << endl;
    }
    else {
      cout << "YES" << endl;
    }
  }
  else {
    cout << "NO" << endl;
  }

  return 0;
}
