/**
 *    author: dutra
 *    created: 26.02.2021 16:13:02
**/
#include <bits/stdc++.h>

using namespace std;

const string digits {"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

string bin_rep(int n, int b) {
  string rep;
  do {
    rep.push_back(digits[n % b]);
    n /= b;
  } while (n);

  reverse(rep.begin(), rep.end());

  return rep;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  while (cin >> n && n != 0) {
    auto bin_n = bin_rep(n, 2);
    auto x = __builtin_popcount(n);
    cout << "The parity of " << bin_n << " is " << x << " (mod 2)." << endl;
  }

  return 0;
}
