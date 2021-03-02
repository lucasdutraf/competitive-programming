/**
 *    author: dutra
 *    created: 26.02.2021 16:13:02
**/
#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using bsi = bitset<32>;
using vb = vector<bsi>;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m, k;
  int fedor;
  vb friends;
  cin >> n >> m >> k;
  while (m--) {
    int i; cin >> i;
    bsi bs(i);
    friends.push_back(bs);
  }

  cin >> fedor;
  bsi fedbs(fedor);

  int totalFriends = 0;
  for (auto elem : friends) {
    int diffBits = 0;
    for (size_t i = 0; i < 32; i++) {
      if (elem[i] != fedbs[i]) {
        diffBits++;
      }
    }
    if (diffBits <= k) {
      totalFriends++;
    }
  }
  cout << totalFriends << endl;

  return 0;
}
