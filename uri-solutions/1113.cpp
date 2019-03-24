#include <bits/stdc++.h>
using namespace std;

int main () {
  int n, m;
  while (cin >> n >> m) {
    if (n > m) {
      cout << "Decrescente" << endl;
    }
    else if (n == m) {
      break;
    }
    else {
      cout << "Crescente" << endl;
    }
  }

  return 0;
}
