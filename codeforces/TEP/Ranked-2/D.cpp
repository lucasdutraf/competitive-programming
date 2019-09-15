#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using mci = map<char, int>;

int main () {

  string in; cin >> in;
  mci ans;
  if (in.size() & 1) {
    for (auto elem : in) {
      ans[elem]++;
    }
    int odd = 0, even = 0;
    for (auto elem : ans) {
      if (elem.second & 1) {
        odd++;
      }
      else {
        even++;
      }
    }
    if (odd > 3 || ((ans.size() - 1 == even) && ans.size() > 1)) {
      cout << "NO" << endl;
    }
    else {
      cout << "YES" << endl;
    }
  }
  else {
    for (auto elem : in) {
      ans[elem]++;
    }
    int odd = 0, even = 0;
    for (auto elem : ans) {
      if (elem.second & 1) {
        odd++;
      }
      else {
        even++;
      }
    }
    if (odd > 2 || (ans.size() == even) || ans.size() == 1) {
      cout << "NO" << endl;
    }
    else {
      cout << "YES" << endl;
    }
  }


  return 0;
}
