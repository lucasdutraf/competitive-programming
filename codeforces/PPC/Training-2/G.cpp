#include <bits/stdc++.h>
using namespace std;
using pi = pair<int, int>;
using vp = vector<pi>;

int main () {

  int cps, l, r, logr = 0, lzgr = 0, rogr = 0, rzgr = 0, tt = 0;
  pi cups;
  vp al;
  cin >> cps;
  while (cps--) {
    cin >> l >> r;
    al.push_back(make_pair(l, r));
  }
  for (size_t i = 0; i < al.size(); i++) {
    if (al[i].first == 1) {
      logr++;
    }
    else {
      lzgr++;
    }
    if (al[i].second == 1) {
      rogr++;
    }
    else {
      rzgr++;
    }
  }
  if (logr > lzgr) {
    tt += lzgr;
  }
  else {
    tt += logr;
  }
  if (rogr > rzgr) {
    tt += rzgr;
  }
  else {
    tt += rogr;
  }
  cout << tt << endl;
  return 0;
}
