#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pli = pair<ll, int>;
using vp = vector<pli>;
using mli = map<ll, int>;

int main () {
  int n;
  ll aux;
  vp res;
  mli ab;
  cin >> n;
  for (size_t i = 1; i <= n; i++) {
    cin >> aux;
    res.push_back(make_pair(aux, i));
    ab[aux]++;
  }
  sort(res.begin(), res.end());
  if (ab[res[0].first] == 1) {
    cout << res[0].second << endl;
  }
  else {
    cout << "Still Rozdil" << endl;
  }

  return 0;
}
