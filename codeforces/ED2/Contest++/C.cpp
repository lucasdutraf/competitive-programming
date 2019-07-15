#include <bits/stdc++.h>
using namespace std;
using pqi = priority_queue<int, vector<int>, greater<int>>;

int main () {

  int n, d; cin >> n >> d; pqi time;
  int th = d * 8;
  int ans = 0, res = 0;
  while (n--) {
    int a; cin >> a;
    time.push(a);
  }
  while (true) {
    if (time.empty()) {
      break;
    }
    if ((ans + time.top()) <= th) {
      ans += time.top();
      time.pop();
      res++;
    }
    else {
      break;
    }
  }

  cout << res << endl;
  return 0;
}
