#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using msi = map<string, int>;

int main () {

  int n; cin >> n;
  ll total = 0;
  msi ans;
  ans["Icosahedron"] = 20; ans["Tetrahedron"] = 4; ans["Octahedron"] = 8;
  ans["Dodecahedron"] = 12; ans["Cube"] =  6;
  while (n--) {
    string s; cin >> s;
    total += ans[s];
  }
  cout << total << endl;
  return 0;
}
