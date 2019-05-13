#include <bits/stdc++.h>
using namespace std;
using vec = vector<int>;

map<int, int> result;
int a, b, c;

int main () {

  ios::sync_with_stdio(false);

  vec q;
  int sum = 0;
  cin >> a >> b >> c;
  sum = a + b + c;

  for (size_t i = 0; i < sum; i++) {
    int aux;
    cin >> aux;
    result[aux]++;
  }

  for (auto it : result) {
    if (it.second >= 3) {
      q.push_back(it.first);
    }
  }

  for (size_t j = 0; j < q.size(); j++) {
    cout << q[j] << ((j == q.size() - 1) ? "\n" : " ");
  }
  return 0;
}
