#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using ll = long long;
int main () {

  int n, h; cin >> n >> h; vi f; ll tw = 0;
  while (n--) {
    int a; cin >> a;
    f.push_back(a);
  }
  for (size_t i = 0; i < f.size(); i++) {
    if (f[i] > h) {
      tw += 2;
    }
    else {
      tw++;
    }
  }
  cout << tw << endl;

  return 0;
}
