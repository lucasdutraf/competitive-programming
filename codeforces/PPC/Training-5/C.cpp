#include <bits/stdc++.h>
using namespace std;

int main () {
  string in, out; cin >> in >> out;
  reverse(in.begin(), in.end());
  cout << (in == out ? "YES" : "NO") << endl;
  return 0;
}
