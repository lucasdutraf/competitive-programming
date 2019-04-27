#include <bits/stdc++.h>
using namespace std;
using pi = pair<int, int>;
using di = deque<pi>;

int main () {
  int n, m, aux, pos = 0;
  di res;
  cin >> n >> m;
  for (size_t i = 1; i <= n; i++) {
    cin >> aux;
    res.push_back(make_pair(aux, i));
  }
  int a = 0;
  while (true) {
    if (res.size() == 1) {
      pos = res.front().second;
      break;
    }
    if (m >= res.front().first) {
      res.pop_front();
    }
    else {
      a = (res.front().first - m);
      res.push_back(make_pair(a, res.front().second));
      res.pop_front();
    }
  }
  cout << pos << endl;
  return 0;
}
