#include <bits/stdc++.h>
using namespace std;
using vs = vector<string>;
int main () {

  int n; string in; vs ans;
  cin >> n;
  while (n--) {
    cin >> in;
    if (find(ans.begin(), ans.end(), in) != ans.end()) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
    ans.push_back(in);
  }

  return 0;
}
