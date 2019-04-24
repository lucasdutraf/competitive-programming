#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD {1000000007};

int main () {


  ll a, b, res, ans;
  cin >> a >> b;
  ll z = (ll) a + b;
  z = z % MOD;
  cerr << "z: " << z << endl;
  res = lcm(b, a);
  cerr << res << endl;
  for (size_t i = 1; i < 11; i++) {
    ans = lcm(a + i, b + i);
    cerr << "i: "<< i << " ans: " <<  ans << endl;
  }
  return 0;
}
