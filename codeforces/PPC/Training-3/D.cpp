#include <bits/stdc++.h>
using namespace std;

int main () {

  int cases, x = 0;
  cin >> cases;
  string test;
  while (cases--) {
    cin >> test;
    if ((test == "++X") || (test == "X++")) {
      x++;
    }
    else {
      x--;
    }
  }
  cout << x << endl;

  return 0;
}
