#include <bits/stdc++.h>
using namespace std;

int main () {

  int cases, x, y;
  double xd, yd;
  cin >> cases;
  while (cases--) {
    cin >> x >> y;
    xd = (double) x;
    yd = (double) y;
    if (y == 0) {
      cout << "divisao impossivel" << endl;
    }
    else {
      printf("%.1lf\n", xd/yd);
    }
  }

  return 0;
}
