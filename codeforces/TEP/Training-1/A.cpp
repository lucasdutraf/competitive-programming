#include <bits/stdc++.h>
using namespace std;
int main () {

  int n; cin >> n;
  if (n == 2) {
    cout << "NO" << endl;
  }
  else {
    cout << (n % 2 == 0 ? "YES" : "NO") << endl;
  }
  return 0;
}