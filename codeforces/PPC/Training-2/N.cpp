#include <bits/stdc++.h>
using namespace std;
using mci = map<char, int>;
using vb = vector<int>;

int main () {

  string a, b, c, ab;
  vb sum;
  mci name, ans;
  cin >> a >> b >> c;
  ab = a + b;
  for (size_t i = 0; i < ab.size(); i++) {
    name[ab[i]]++;
  }
  for (size_t j = 0; j < c.size(); j++) {
    ans[c[j]]++;
  }

  for (size_t k = 0; k < ab.size(); k++) {
    if (name[ab[k]] == ans[ab[k]]) {
      sum.push_back(1);
    }
    else {
      sum.push_back(0);
    }
  }
  // for (auto elem : name) {
  //   cerr << "fr " << elem.first << " / se " << elem.second << endl;
  // }
  // cerr << "ANSSSSSSSSSSS " << endl;
  // for (auto elem : ans) {
  //   cerr << "fr " << elem.first << " / se " << elem.second << endl;
  // }
  if (ab.size() != c.size()) {
    cout << "NO" << endl;
  }
  else {
    auto it = find(sum.begin(), sum.end(), 0);
    if (it == sum.end()) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
