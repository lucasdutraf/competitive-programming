#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main () {
   ll a, b;
    while (cin >> a >> b) {
    if (a > b) {
      cout << a - b << endl;
    }
    else {
      cout << b - a << endl;
    }
  }

  return 0;
}
