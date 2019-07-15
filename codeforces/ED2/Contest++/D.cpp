#include <bits/stdc++.h>
using namespace std;
using si = set<int>;

int main () {

  int n; cin >> n; si ans;
  int flag, bigger = 0, lower = 0;
  for (size_t i = 0; i < n; i++) {
    int a; cin >> a;
    if (i == 0) {
      flag = a;
      ans.insert(a);
    }
    else {
      ans.insert(a);
    }
  }
  for (auto elem : ans) {
    if (elem > flag) {
      bigger++;
    }
    else if (elem == flag) {
      continue;
    }
    else {
      lower++;
    }
  }
  if (ans.size() == 0) {
    cout << "0 0" << endl;
  }
  else {
    cout << lower << " " << bigger << endl;
  }

  return 0;
}
