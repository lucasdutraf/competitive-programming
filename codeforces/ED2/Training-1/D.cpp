#include <bits/stdc++.h>
using namespace std;
using sc = stack<char>;
using stc = set<char>;

int main () {
  int size, grd, yn = 0;
  sc ans;
  stc acs;
  string full;
  cin >> size >> grd >> full;
  for (size_t i = 0; i < full.size(); i++) {
    acs.insert(full[i]);
  }
  if (acs.size() == size) {
    cout << "NO" << endl;
  }
  else {
    for (size_t i = 0; i < full.size(); i++) {
      if (!ans.empty() && full[i] == ans.top()) {
        ans.pop();
        continue;
      }
      else {
        ans.push(full[i]);
      }
      if (ans.size() > grd) {
        yn++;
        break;
      }
    }
    if (yn > 0) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
