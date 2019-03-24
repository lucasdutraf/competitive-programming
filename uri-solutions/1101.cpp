#include <bits/stdc++.h>
using namespace std;
using vec = vector<int>;

int main () {
  int n, m, sum = 0;
  vec num;
  while (cin >> n >> m, n > 0 && m > 0) {
    num.clear();
    sum = 0;
    if (n > m) {
      swap(n, m);
    }
    for (size_t i = n; i < m + 1; i++) {
      sum += i;
      num.push_back(i);
    }
    for (auto elem : num) {
      cout << elem << " ";
    }
    cout << "Sum=" << sum << endl;
  }

  return 0;
}
