#include <bits/stdc++.h>
using namespace std;
using pqi = priority_queue<int>;

int main () {
  int n;
  vector<int> ans;
  int aux;
  priority_queue<int> p;
  while (cin >> n, n) {
    if (n == 0) break;
    for (size_t i = 0; i < n; i++) {
      cin >> aux;
      p.push(-aux);
    }
    while (!p.empty()) {
      int a; int b;
      a = abs(p.top());
      p.pop();
      b = abs(p.top());
      p.pop();
      ans.push_back(a + b);
      if (p.size() > 0) {
        p.push(-(a + b));
      }
    }
    cout << accumulate(ans.begin(), ans.end(), 0) << endl;
    ans.clear();
  }

  return 0;
}
