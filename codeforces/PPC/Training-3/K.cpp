#include <bits/stdc++.h>
using namespace std;
using pi = pair<int, int>;
using vip = vector<pi>;

int main () {
  int n, aux;
  vip soldiers, res;
  cin >> n;
  for (size_t i = 1; i <= n; i++) {
    cin >> aux;
    soldiers.push_back(make_pair(aux, i));
  }
  int ans = abs(soldiers[0].first - soldiers[1].first);
  for (size_t i = 0; i < soldiers.size(); i++) {
    int mom;
    if (i == soldiers.size() - 1) {
      int temp = soldiers[soldiers.size() - 1].first - soldiers[0].first;
      mom = abs(temp);
    }
    else {
      int temp = soldiers[i].first - soldiers[i + 1].first;
      mom = abs(temp);
    }
    if (mom <= ans) {
      if (i == soldiers.size() - 1) {
        res.push_back(make_pair(i + 1, 1));
      }
      else {
        res.push_back(make_pair(i + 1, i + 2));
      }
      ans = mom;
    }
  }
  cout << res[res.size() - 1].first << " " << res[res.size() - 1].second << endl;
  return 0;
}
