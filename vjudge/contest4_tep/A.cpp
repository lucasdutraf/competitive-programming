#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string n;
  while (cin >> n && n != "0") {
    ll total = 0;
    int sup = 1;
    for (int i = n.size() - 1; i >= 0; i--) {
      total += ((n[i] - '0') * (pow(2, sup) - 1));
      sup++;
    }
    cout << total << endl;
  }
  return 0;
}
