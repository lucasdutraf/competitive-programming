#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main () {

  int n, sum = 0;
  cin >> n;
  vi ans;
  string aux;
  cin >> aux;
  ans.push_back(sum);
  for (size_t i = 0; i < n; i++) {
    aux[i] == 'I' ? ++sum : --sum;
    ans.push_back(sum);
  }
  sort(ans.rbegin(), ans.rend());
  cout << ans[0] << endl;
  return 0;
}
