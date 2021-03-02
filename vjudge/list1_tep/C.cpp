#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;
using vi = vector<int>;

int main () {
  ios_base::sync_with_stdio(false);
  vi ans{1, 2, 3};
  vi in, out;
  int a, b; cin >> a >> b;
  in.push_back(a);
  in.push_back(b);
  sort(in.begin(), in.end());
  set_difference(ans.begin(), ans.end(), in.begin(), in.end(), back_inserter(out));
  for (auto elem : out) {
    cout << elem << endl;
  }

  return 0;
}
