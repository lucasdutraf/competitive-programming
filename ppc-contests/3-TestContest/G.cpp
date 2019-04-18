#include <bits/stdc++.h>
using namespace std;
using di = deque<int>;
using mii = map <int, int>;

int main () {
  int numkids, qtdcan, aux, ans;
  di kids;
  mii hl;
  cin >> numkids >> qtdcan;
  for (size_t i = 0; i < numkids; i++) {
    cin >> aux;
    kids.push_back(aux);
    hl[i] = aux;
  }
  while (true) {
    cerr << "oi" << endl;
    if (kids.size() == 1) {
      cerr << "tchau" << endl;
      ans = kids.front();
      break;
    }
    if (kids.front() <= qtdcan) {
      kids.pop_front();
    }
    else {
      kids.push_back(kids.front());
      kids.pop_front();
    }
  }
  cout << ans << endl;

  return 0;
}
