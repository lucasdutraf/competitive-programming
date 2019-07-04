#include <bits/stdc++.h>
using namespace std;
using pqi = priority_queue<int>;
using qpi = priority_queue<int, vector<int>, greater<int>>;

int main () {

  int n, m, max = 0, min = 0; cin >> n >> m; pqi line; qpi enil;
  while (m--) {
    int a; cin >> a;
    line.push(a);
    enil.push(a);
  }
  for (size_t i = 0; i < n; i++) {
    max += line.top();
    int aux = line.top() - 1;
    line.pop();
    if (aux > 0)
      line.push(aux);
  }
  for (size_t i = 0; i < n; i++) {
    min += enil.top();
    int aux = enil.top() - 1;
    enil.pop();
    if (aux > 0)
      enil.push(aux);
  }
  cout << max << " " << min << endl;
  return 0;
}
