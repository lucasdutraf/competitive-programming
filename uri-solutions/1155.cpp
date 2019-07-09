#include <bits/stdc++.h>
using namespace std;

int main () {

  double s = 1;
  for (size_t i = 2; i <= 100; i++) {
    cerr << "s: " << s << endl;
    s += (double) (1.00/i);
  }
  cout.precision(2);
  cout << fixed << s << endl;
  return 0;
}
