#include <bits/stdc++.h>
using namespace std;
using mci = map<char, int>;
using ll = long long;


int main () {

  int max = 100001;
  int a, b; cin >> a >> b;
  string c; cin >> c;
  mci res;
  for (auto elem : c) {
    res[elem]++;
  }

  for (auto elem : res) {
    if (elem.second < max) {
      max = elem.second;
    }
  }
  if (res.size() < b) {
    cout << "0" << endl;
  }
  else {
    cout << max * b << endl;
  }
  return 0;
}
