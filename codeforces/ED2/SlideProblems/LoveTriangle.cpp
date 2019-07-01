#include <bits/stdc++.h>
using namespace std;

bool solve (int N, const vector<int>& rs) {
  for (int i = 1; i <= N; i++) {
    auto B = rs[i];
    auto C = rs[B];
    if (rs[C] == i) {
      return true;
    }
  }
  return false;

}
int main()
{
    int N; cin >> N;
    vector <int> vs (N + 1);
    for (size_t i = 1; i <= N; i++) {
      cin >> vs[i];
    }
    cout << (solve(N, vs) ? "YES" : "NO") << endl;
    return 0;
}
