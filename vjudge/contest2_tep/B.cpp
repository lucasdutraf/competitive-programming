#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;

int main () {
  ios_base::sync_with_stdio(false);

  int a, b;
  while (cin >> a >> b) {
    int c = ~a & b;
    int d = ~b & a;
    cout << (c | d) << endl;
  }

  return 0;
}
