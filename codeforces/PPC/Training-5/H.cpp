#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main () {
  int cm, gr = 0, times = 0; cin >> cm; vi mon;
  for (size_t i = 0; i < 12; i++) {
    int aux; cin >> aux;
    mon.push_back(aux);
  }
  sort(mon.begin(), mon.end()); reverse(mon.begin(), mon.end());

  for (size_t i = 0; i < mon.size(); i++) {
    if (gr >= cm) {
      break;
    }
    gr += mon[i];
    times++;
  }
  cout << (gr < cm ? -1 : times) << endl;
  return 0;
}
