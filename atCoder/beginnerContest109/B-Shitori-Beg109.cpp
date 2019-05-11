#include <bits/stdc++.h>
using namespace std;
using ds = deque<string>;
using msi = map<string, int>;

int main () {

  int times, ok = 0, res = 0;
  string aux, base;
  msi ans;
  cin >> times;
  times--;
  int all = times;
  cin >> base;
  ans[base]++;
  while (times--) {
    cin >> aux;
    ans[aux]++;
    if (aux[0] == base[base.size() - 1]) {
      ok++;
    }
    base = aux;
  }
  for (auto elem : ans) {
    if (elem.second > 1) {
      res++;
    }
  }
  if (res == 0 && ok == all) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}
