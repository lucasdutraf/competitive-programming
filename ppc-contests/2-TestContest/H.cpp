#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int main () {

  int conts, aux, ans = 0;
  cin >> conts;
  vi ls, ord;
  while (conts--) {
    cin >> aux;
    ls.push_back(aux);
  }

  ord.push_back(ls[0]);
  for (size_t i = 1; i < ls.size(); i++) {
    if ((ls[i] == ord[ord.size() - 1]) || (ls[i] == ord[0])) {
      ord.push_back(ls[i]);
      sort(ord.begin(), ord.end());
    }
    else {
      ord.push_back(ls[i]);
      sort(ord.begin(), ord.end());
      if ((ls[i] == ord[ord.size() - 1]) || (ls[i] == ord[0])) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
