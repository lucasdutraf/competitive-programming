#include <bits/stdc++.h>
using namespace std;
using pqi = priority_queue<int, vector<int>, greater<int>>;

int main () {

  int n, m, pairs = 0; cin >> n; pqi boys, girls;
  while (n--) {
    int a; cin >> a;
    boys.push(a);
  }
  cin >> m;
  while (m--) {
    int a; cin >> a;
    girls.push(a);
  }

  while (!boys.empty() && !girls.empty()) {
    if (abs(girls.top() - boys.top()) <= 1) {
      girls.pop();
      boys.pop();
      pairs++;
    }
    else {
      if (girls.top() > boys.top()) {
        boys.pop();
      }
      else {
        girls.pop();
      }
    }
  }
  cout << pairs << endl;
  return 0;
}
