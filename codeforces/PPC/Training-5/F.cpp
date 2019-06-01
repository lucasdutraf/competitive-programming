#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main () {
  int n, m, total = 0; vi tvs; cin >> n >> m;
  while (n--) {int aux; cin >> aux; tvs.push_back(aux);}
  sort(tvs.begin(), tvs.end());
  for (size_t i = 0; i < m; i++) {
    if (tvs[i] < 0) {
      total += abs(tvs[i]);
    }
  }
  cout << total << endl;
  return 0;
}
