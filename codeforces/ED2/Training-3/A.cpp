#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main () {

  int n; vi con; int days = 1, res = 0, pos = 0;
  cin >> n;
  while (n--) {
    int aux; cin >> aux;
    con.push_back(aux);
  }
  sort(con.begin(), con.end());
  while (pos < con.size()) {
    if (con[pos] < days) {
      pos++;
    }
    else if (con[pos] >= days) {
      res++; pos++; days++;
    }
  }
  cout << res << endl;
  return 0;
}
