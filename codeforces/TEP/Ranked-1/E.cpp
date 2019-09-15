#include <bits/stdc++.h>
using namespace std;
using sc = set<char>;
using mci = map<char, int>;

int main () {

  int a; cin >> a;
  bool flag = false;
  string b; cin >> b;
  sc ans;
  // mci res;
  for (auto elem : b) {
    ans.insert(elem);
    // res[elem]++;
  }
  // for (auto elem : res) {
  //   if (elem.second > 1) {
  //     flag = true;
  //   }
  // }
  if (a > 26) {
    cout << "-1" << endl;
  }
  else {
    cout << a - ans.size() << endl;
  }
  return 0;
}
