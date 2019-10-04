#include <bits/stdc++.h>
using namespace std;
using ss = multiset<string>;
using psi = pair<string, int>;

int main () {

  int n; cin >> n;
  string in; cin >> in;
  ss dist;
  psi res;

  int j = 1;
  for (size_t i = 0; i < in.size() - 1; i++) {
    string aux = "";
    aux.push_back(in[i]);
    aux.push_back(in[j]);
    dist.insert(aux);
    j++;
  }

  int min = 0;
  for (auto elem : dist) {
    int oo = dist.count(elem);
    if (oo > min) {
      min = oo;
      res = make_pair(elem, oo);
    }
  }

  cout << res.first << endl;

  return 0;
}
