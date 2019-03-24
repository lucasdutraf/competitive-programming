#include <bits/stdc++.h>
using namespace std;

int main () {
  int n, m;
  while (cin >> n >> m) {
    if (n > 0 && m > 0) {
      cout << "primeiro" << endl;
    }
    else if (n < 0 && m > 0) {
      cout << "segundo" << endl;
    }
    else if (n < 0 && m < 0) {
      cout << "terceiro" << endl;
    }
    else if (n == 0 || m == 0) {
      break;
    }
    else {
      cout << "quarto" << endl;
    }
  }

  return 0;
}
