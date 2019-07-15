#include <bits/stdc++.h>
using namespace std;
using pqi = priority_queue<int, vector<int>, greater<int>>;

int main () {

  int n; cin >> n; pqi ans;
  while (n--) {
    char a; cin >> a;
    if (a == '+') {
      int date; cin >> date;
      ans.push(date);
    }
    if (a == '?') {
      if (ans.empty()) {
        cout << "-1" << endl;
      }
      else {
        cout << ans.top() << endl;
        ans.pop();
      }
    }
  }

  return 0;
}
