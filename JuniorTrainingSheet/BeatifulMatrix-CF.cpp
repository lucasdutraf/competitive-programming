#include <bits/stdc++.h>
using namespace std;
using vivi = vector<vector<int>>;
using vi = vector<int>;

int main () {
  int changes = 0;
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      int a; cin >> a;
      if (a == 1) {
        changes = abs(i - 3) + abs(j - 3);
      }
    }
  }
  cout << changes << endl;
  return 0;
}
