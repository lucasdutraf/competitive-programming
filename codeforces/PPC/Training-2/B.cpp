#include <bits/stdc++.h>
using namespace std;
using vc = vector<char>;

int main () {

  string a, b;
  vc ans;
  cin >> a >> b;
  for (size_t i = 0; i < a.size(); i++) {
    if (a[i] == b[i]) {
      ans.push_back('0');
    }
    else {
      ans.push_back('1');
    }
  }
  for (size_t j = 0; j < ans.size(); j++) {
    cout << ans[j];
  }
  cout << endl;

  return 0;
}
